/*----------------------------------------------------------------------------
 * File:  Control_user_class.c
 *
 * Class:       user  (user)
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
static Escher_SetElement_s Control_user_container[ Control_user_MAX_EXTENT_SIZE ];
static Control_user Control_user_instances[ Control_user_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_Control_user_extent = {
  {0}, {0}, &Control_user_container[ 0 ],
  (Escher_iHandle_t) &Control_user_instances,
  sizeof( Control_user ), 0, Control_user_MAX_EXTENT_SIZE
  };

