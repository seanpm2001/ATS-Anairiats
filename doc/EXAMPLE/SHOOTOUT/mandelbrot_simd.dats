(*
** The Great Computer Language Shootout
** http://shootout.alioth.debian.org/
**
** contributed by Hongwei Xi (hwxi AT cs DOT bu DOT edu)
**
** compilation command:
**   atscc -O3 -fomit-frame-pointer -D_ISOC9X_SOURCE -mfpmath=sse -msse2 -o mandelbrot_simd mandelbrot_simd.dats
**
**)

(* ****** ****** *)

staload "libc/SATS/SIMD_v2df.sats"

(* ****** ****** *)

#define TIMES 50
#define LIMIT 2.0; #define LIMIT2 (LIMIT * LIMIT)

(* ****** ****** *)

#define i2d double_of_int
fn mandelbrot (h: int, w: int): void = let

val h_recip = 1.0 / (i2d h) and w_recip = 1.0 / (i2d w)

fun test (x: int, y: int):<cloref1> int = let
  val x2 = i2d (x << 1)
  val Cr0 = x2 * w_recip - 1.5
  val Cr1 = (x2 + 2.0) * w_recip - 1.5
  val y2 = i2d (y << 1)
  val Ci0 = y2 * h_recip - 1.0
  val Ci1 = Ci0
  val Crv = v2df_make (Cr0, Cr1)
  val Civ = v2df_make (Ci0, Ci1)

  fun loop (
      eo: int
    , Cr: double, Ci: double, Zr: double, Zi: double
    , times: int
    ) :<fun1> int = let
(*
    val () = begin
      print "loop: Cr = "; print Cr; print_newline ();
      print "loop: Ci = "; print Ci; print_newline ();
      print "loop: Zr = "; print Zr; print_newline ();
      print "loop: Zi = "; print Zi; print_newline ();
    end
*)
    val Tr = Zr * Zr and Ti = Zi * Zi; val Tri = Tr + Ti
(*
    val () = begin
      print "loop: eo = "; print eo; print_newline ();
      print "loop: Tr = "; print Tr; print_newline ();
      print "loop: Ti = "; print Ti; print_newline ();
      print "loop: Tri = "; print Tri; print_newline ();
    end
*)
  in
    case+ 0 of
    | _ when Tri <= LIMIT2 => begin
        if times = 0 then 1 + eo else let
          val Zr_new = Tr - Ti + Cr
          val Zi_new = 2.0 * (Zr * Zi) + Ci
        in
          loop (eo, Cr, Ci, Zr_new, Zi_new, times-1)
        end // end of [if]
      end // end of [_ when ...]
    | _ => 0
  end // end of [loop]

  fun loopv
    (Zrv: v2df, Ziv: v2df, times: int):<cloref1> int = let
    val Trv = Zrv * Zrv and Tiv = Ziv * Ziv; val Triv = Trv + Tiv
    val Tri0 = v2df_get_fst (Triv) and Tri1 = v2df_get_snd (Triv)
(*
    val () = begin
      print "loopv: Tri0 = "; print Tri0; print_newline ();
      print "loopv: Tri1 = "; print Tri1; print_newline ();
    end
*)
  in
    case+ 0 of
    | _ when Tri0 <= LIMIT2 => begin case+ 0 of
      | _ when Tri1 <= LIMIT2 => begin
          if times = 0 then 0x3 else let
            val Zrv_new = Trv - Tiv + Crv
            val Ziv_new = (tmp + tmp) + Civ where { val tmp = Zrv * Ziv }
          in
            loopv (Zrv_new, Ziv_new, times-1)
          end // end of [if]
        end // end of [_ when ...]
      | _ => begin
          if times = 0 then 0x2 else let
            val Zr0 = v2df_get_fst (Zrv) and Zi0 = v2df_get_fst (Ziv)
            val Tr0 = v2df_get_fst (Trv) and Ti0 = v2df_get_fst (Tiv)
            val Zr0_new = Tr0 - Ti0 + Cr0
            val Zi0_new = 2.0 * (Zr0 * Zi0) + Ci0
          in
            loop (1(*eo*), Cr0, Ci0, Zr0_new, Zi0_new, times-1)
          end // end of [if]
        end // end of [_]
      end // end of [_ when ...]
    | _ => begin case+ 0 of
      | _ when Tri1 <= LIMIT2 => begin
          if times = 0 then 0x1 else let
            val Zr1 = v2df_get_snd (Zrv) and Zi1 = v2df_get_snd (Ziv)
            val Tr1 = v2df_get_snd (Trv) and Ti1 = v2df_get_snd (Tiv)
            val Zr1_new = Tr1 - Ti1 + Cr1
            val Zi1_new = 2.0 * (Zr1 * Zi1) + Ci1
          in
            loop (0(*eo*), Cr1, Ci1, Zr1_new, Zi1_new, times-1)
          end // end of [if]
        end // end of [_ when ...]
      | _ => 0x0 // return value
      end // end of [_]
  end // end of [loopv]
in
  loopv (v2df_0_0, v2df_0_0, TIMES)
end // end of [test]

#define i2b byte_of_int

fun output
  (x: int, y: int, b: byte, n: natLte 8):<cloref1> void = begin
  case+ 0 of
  | _ when x < w => let
      val res = test (x, y)
(*
      val () = (print "res = "; print res; print_newline ())
*)
    in
      case+ 0 of
      | _ when n >= 2 => begin
          output (x + 2, y, (b << 2) + i2b res, n - 2)
        end // end of [_ when ...]
      | _ (*n=0*) => let
(*
          val () = begin
            print "b = "; print (int_of_byte b); print_newline ()
          end
*)
          val () = print_byte b in output (x + 2, y, i2b res, 6)
        end // end of [_]
    end // end of [_ when ...]
  | _ => let
      val () = print_byte (b << n)
    in
      if (y < h - 1) then output (0, y + 1, i2b 0, 8) else ()
    end // end of [_]
end // end of [output]

val () = printf ("P4\n%i %i\n", @(h, w))

in

if (h > 0) then output (0, 0, i2b 0, 8)

end // end of [mandelbrot]

(* ****** ****** *)

implement main (argc, argv) = let
  val () = assert_errmsg_bool1
    (argc = 2, "Exit: wrong command format!\n")
  val i = int1_of_string argv.[1]
  val () = assert_errmsg_bool1
    (i >= 2, "The input integer needs to be at least 2.\n")
in
  mandelbrot (i, i)
end // end of [main]

(* ****** ****** *)

(* end of [mandelbrot_simd.dats] *)
