/*----------------------------------------------------------------------------
 * File:  Control_drone_class.c
 *
 * Class:       drone  (drone)
 * Component:   Control
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "gnc_sys_types.h"
#include "Control_classes.h"


/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s Control_drone_container[ Control_drone_MAX_EXTENT_SIZE ];
static Control_drone Control_drone_instances[ Control_drone_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_Control_drone_extent = {
  {0}, {0}, &Control_drone_container[ 0 ],
  (Escher_iHandle_t) &Control_drone_instances,
  sizeof( Control_drone ), 0, Control_drone_MAX_EXTENT_SIZE
  };

