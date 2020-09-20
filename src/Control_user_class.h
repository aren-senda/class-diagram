/*----------------------------------------------------------------------------
 * File:  Control_user_class.h
 *
 * Class:       user  (user)
 * Component:   Control
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef CONTROL_USER_CLASS_H
#define CONTROL_USER_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   user  (user)
 */
struct Control_user {

  /* application analysis class attributes */
  /* relationship storage */
  /* Note:  No storage needed for user->system[R1] */
};

/* xtUML WARNING:  system<-R1->user never related!  */
/* Note:  system<-R1->user unrelate accessor not needed */

#define Control_user_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_Control_user_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* CONTROL_USER_CLASS_H */
