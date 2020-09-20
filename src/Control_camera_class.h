/*----------------------------------------------------------------------------
 * File:  Control_camera_class.h
 *
 * Class:       camera  (camera)
 * Component:   Control
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef CONTROL_CAMERA_CLASS_H
#define CONTROL_CAMERA_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   camera  (camera)
 */
struct Control_camera {

  /* application analysis class attributes */
  /* relationship storage */
  /* Note:  No storage needed for camera->drone[R3] */
};

/* xtUML WARNING:  drone<-R3->camera never related!  */
/* Note:  drone<-R3->camera unrelate accessor not needed */

#define Control_camera_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_Control_camera_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* CONTROL_CAMERA_CLASS_H */
