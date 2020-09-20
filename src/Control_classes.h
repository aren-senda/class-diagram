/*----------------------------------------------------------------------------
 * File:  Control_classes.h
 *
 * This file defines the object type identification numbers for all classes
 * in the component:  Control
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef CONTROL_CLASSES_H
#define CONTROL_CLASSES_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Initialization services for component:  Control
 */
extern Escher_Extent_t * const Control_class_info[];
void Control_execute_initialization( void );

#define Control_STATE_MODELS 0
/* Define constants to map to class numbers.  */
#define Control_user_CLASS_NUMBER 0
#define Control_camera_CLASS_NUMBER 1
#define Control_system_CLASS_NUMBER 2
#define Control_drone_CLASS_NUMBER 3
#define Control_MAX_CLASS_NUMBERS 4

/* Provide a map of classes to task numbers.  */
#define Control_TASK_NUMBERS 

#define Control_class_dispatchers

/* Provide definitions of the shapes of the class structures.  */

typedef struct Control_user Control_user;
typedef struct Control_camera Control_camera;
typedef struct Control_system Control_system;
typedef struct Control_drone Control_drone;

/* union of class declarations so we may derive largest class size */
#define Control_CLASS_U \
  char Control_dummy;\

/*
 * UML Domain Functions (Synchronous Services)
 */
void Control_setup( void );

#include "Control.h"
#include "Control_user_class.h"
#include "Control_camera_class.h"
#include "Control_system_class.h"
#include "Control_drone_class.h"
#ifdef	__cplusplus
}
#endif
#endif  /* CONTROL_CLASSES_H */
