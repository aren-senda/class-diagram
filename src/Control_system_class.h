/*----------------------------------------------------------------------------
 * File:  Control_system_class.h
 *
 * Class:       system  (system)
 * Component:   Control
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef CONTROL_SYSTEM_CLASS_H
#define CONTROL_SYSTEM_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   system  (system)
 */
struct Control_system {

  /* application analysis class attributes */
  c_t Observation/video_data[ESCHER_SYS_MAX_STRING_LEN];  /* - Observation/video_data */
  c_t Control_Command[ESCHER_SYS_MAX_STRING_LEN];  /* - Control_Command */
  c_t Coordinate[ESCHER_SYS_MAX_STRING_LEN];  /* - Coordinate */
  /* relationship storage */
  /* Note:  No storage needed for system->user[R1] */
  /* Note:  No storage needed for system->drone[R2] */
};



#define Control_system_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_Control_system_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* CONTROL_SYSTEM_CLASS_H */
