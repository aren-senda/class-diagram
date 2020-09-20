/*----------------------------------------------------------------------------
 * File:  Control_drone_class.h
 *
 * Class:       drone  (drone)
 * Component:   Control
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef CONTROL_DRONE_CLASS_H
#define CONTROL_DRONE_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   drone  (drone)
 */
struct Control_drone {

  /* application analysis class attributes */
  c_t Amount_of_movement[ESCHER_SYS_MAX_STRING_LEN];  /* - Amount_of_movement */
  c_t Rotation_speed[ESCHER_SYS_MAX_STRING_LEN];  /* - Rotation_speed */
  c_t Camera_control[ESCHER_SYS_MAX_STRING_LEN];  /* - Camera_control */
  /* relationship storage */
  /* Note:  No storage needed for drone->system[R2] */
  /* Note:  No storage needed for drone->camera[R3] */
};

/* xtUML WARNING:  system<-R2->drone never related!  */
/* Note:  system<-R2->drone unrelate accessor not needed */

#define Control_drone_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_Control_drone_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* CONTROL_DRONE_CLASS_H */
