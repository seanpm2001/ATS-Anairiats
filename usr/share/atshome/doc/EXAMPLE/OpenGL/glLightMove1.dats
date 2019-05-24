(*
**
** A simple OpenGL example
**
** Author: Hongwei Xi (hwxi AT cs DOT bu DOT edu)
** Time: Summer, 2008
**
*)

(* ****** ****** *)

%{^
extern ats_void_type mainats (ats_int_type argc, ats_ptr_type argv) ;
%}

(* ****** ****** *)

staload "contrib/GL/SATS/gl.sats"
staload "contrib/GL/SATS/glu.sats"
staload "contrib/GL/SATS/glut.sats"

(* ****** ****** *)

staload _(*anonymous*) = "prelude/DATS/reference.dats"

val spin = ref_make_elt<int> (0)

(* ****** ****** *)

extern fun initialize (): void = "initialize"
implement initialize () = let
  val () = glClearColor (0.0, 0.0, 0.0, 0.0)
  val () = glShadeModel (GL_SMOOTH)
  val () = glEnable (GL_LIGHTING)
  val () = glEnable (GL_LIGHT0)
  val () = glEnable (GL_DEPTH_TEST)
in
  // empty
end // end of [initialize]

extern fun display (): void = "display"
implement display () = let
  #define x_pos 0.0
  #define y_pos 0.0
  #define z_pos 1.5
  #define w_pos 1.0
  var !p_pos with pf_pos = @[float](x_pos, y_pos, z_pos, w_pos)
  val () = glClear
    (GL_COLOR_BUFFER_BIT lor GL_DEPTH_BUFFER_BIT)
  val (pf1_push | ()) = glPushMatrix ()
  val () = glTranslated (0.0, 0.0, ~5.0)
  val (pf2_push | ()) = glPushMatrix ()
  val () = glRotated (double_of !spin, 0.0, 1.0, 0.0)
  extern fun glLightfv {n:nat} {l:addr}
    (pf: !array_v (float, n, l) | light: GLenum, pname: GLenum, p: ptr l): void
  = "mac#atsctrb_glLightfv"
  val () = glLightfv (pf_pos | GL_LIGHT0, GL_POSITION, p_pos)
  val () = glTranslated (x_pos, y_pos, z_pos)
  val () = glDisable (GL_LIGHTING)
  val () = glColor3d (0.0, 1.0, 1.0)
  val () = glutWireCube ((GLdouble)0.1)
  val () = glEnable (GL_LIGHTING)
  val () = glPopMatrix (pf2_push | (*none*))

(*
  val () = glutWireCube ((GLdouble)1.0)
  val () = glutSolidCube ((GLdouble)1.0)
*)
(*
  val () = glutWireSphere ((GLdouble)1.0, (GLint)32, (GLint)60)
  val () = glutSolidSphere ((GLdouble)1.0, (GLint)32, (GLint)60)
*)
(*
  val () = glutWireTorus
    ((GLdouble)0.50, (GLdouble)1.0, (GLint)16, (GLint)30)
  val () = glutSolidTorus
    ((GLdouble)0.50, (GLdouble)1.0, (GLint)16, (GLint)30)
*)
(*
  val () = glutWireTeapot ((GLdouble)1.0)
*)
  val () = glutSolidTeapot ((GLdouble)1.0)

  val () = glPopMatrix (pf1_push | (*none*))
  val () = glFlush ()
in
  // empty
end // end of [display]

extern fun reshape (w: int, h: int): void = "reshape"
implement reshape (w, h) = let
  val () = glViewport (0, 0, w, h)
  val () = glMatrixMode (GL_PROJECTION)
  val () = glLoadIdentity ()
  val w_h = (double_of w) / (double_of h)
  val () = gluPerspective
    ((GLdouble)40.0, (GLdouble)w_h, (GLdouble)1.0, (GLdouble)20.0)
  val () = glMatrixMode (GL_MODELVIEW)
  val () = glLoadIdentity ()
in
  // empty
end // end of [reshape]

(* ****** ****** *)

macdef int = int_of_GLenum

extern fun mouse
  (button: int, state: int, x: int, y: int): void = "mouse"

implement mouse (button, state, x, y) = begin case+ 0 of
  | _ when (button = (int)GLUT_LEFT_BUTTON) => begin
      if (state = (int)GLUT_DOWN) then begin
        !spin := (!spin + 30) mod 360; glutPostRedisplay ()
      end
    end // end  of [_ when ...]
  | _ => ()
end // end of [mouse]

(* ****** ****** *)

extern fun main_work (): void = "main_work"
implement main_work () = let
  val () = initialize ()
  val () = glutDisplayFunc (display)
  val () = glutReshapeFunc (reshape)
  val () = glutMouseFunc (mouse)
in
  glutMainLoop ()
end // end of [main_work]

(* ****** ****** *)

implement main_dummy () = ()

%{$

ats_void_type mainats
  (ats_int_type argc, ats_ptr_type argv) {

  glutInit ((int*)&argc, (char**)argv) ;
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH) ;
  glutInitWindowSize (500, 500) ;
  glutInitWindowPosition (100, 100) ;
  glutCreateWindow(((char**)argv)[0]) ;
  main_work () ;
  return ; /* deadcode */
}

%}

(* ****** ****** *)

(* end of [glLightMove1.dats] *)
