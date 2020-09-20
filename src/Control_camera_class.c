/*----------------------------------------------------------------------------
 * File:  Control_camera_class.c
 *
 * Class:       camera  (camera)
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
static Escher_SetElement_s Control_camera_container[ Control_camera_MAX_EXTENT_SIZE ];
static Control_camera Control_camera_instances[ Control_camera_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_Control_camera_extent = {
  {0}, {0}, &Control_camera_container[ 0 ],
  (Escher_iHandle_t) &Control_camera_instances,
  sizeof( Control_camera ), 0, Control_camera_MAX_EXTENT_SIZE
  };

