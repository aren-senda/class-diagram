/*----------------------------------------------------------------------------
 * File:  Control_system_class.c
 *
 * Class:       system  (system)
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
static Escher_SetElement_s Control_system_container[ Control_system_MAX_EXTENT_SIZE ];
static Control_system Control_system_instances[ Control_system_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_Control_system_extent = {
  {0}, {0}, &Control_system_container[ 0 ],
  (Escher_iHandle_t) &Control_system_instances,
  sizeof( Control_system ), 0, Control_system_MAX_EXTENT_SIZE
  };

