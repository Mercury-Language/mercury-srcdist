/*
** Automatically generated from `prof_info.m'
** by the Mercury compiler,
** version rotd-2025-10-15
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module prof_info.
// :- implementation.

/*
INIT mercury__prof_info__init
ENDINIT
*/

#include "prof_info.mih"


#include "assoc_list.mih"
#include "builtin.mih"
#include "enum.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_FA_TypeInfo_Struct2 prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo prof_info__prof_info__field_types_pred_info_0_0[2];

static const MR_ConstString prof_info__prof_info__field_names_pred_info_0_0[2];

static const MR_DuFunctorDesc prof_info__prof_info__du_functor_desc_pred_info_0_0;

static const MR_DuFunctorDescPtr prof_info__prof_info__du_stag_ordered_pred_info_0_0[1];

static const MR_DuPtagLayout prof_info__prof_info__du_ptag_ordered_pred_info_0[1];

static const MR_DuFunctorDescPtr prof_info__prof_info__du_name_ordered_pred_info_0[1];

static const MR_Integer prof_info__prof_info__functor_number_map_pred_info_0[1];

static const MR_FA_TypeInfo_Struct2 prof_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0prof_info__type_ctor_info_prof_node_0;

static const MR_PseudoTypeInfo prof_info__prof_info__field_types_prof_0_0[6];

static const MR_ConstString prof_info__prof_info__field_names_prof_0_0[6];

static const MR_DuFunctorDesc prof_info__prof_info__du_functor_desc_prof_0_0;

static const MR_DuFunctorDescPtr prof_info__prof_info__du_stag_ordered_prof_0_0[1];

static const MR_DuPtagLayout prof_info__prof_info__du_ptag_ordered_prof_0[1];

static const MR_DuFunctorDescPtr prof_info__prof_info__du_name_ordered_prof_0[1];

static const MR_Integer prof_info__prof_info__functor_number_map_prof_0[1];

static const MR_FA_TypeInfo_Struct1 prof_info__list__ti_list_1prof_info__type_ctor_info_pred_info_0;

static const MR_FA_TypeInfo_Struct1 prof_info__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo prof_info__prof_info__field_types_prof_node_0_0[9];

static const MR_ConstString prof_info__prof_info__field_names_prof_node_0_0[9];

static const MR_DuFunctorDesc prof_info__prof_info__du_functor_desc_prof_node_0_0;

static const MR_PseudoTypeInfo prof_info__prof_info__field_types_prof_node_0_1[7];

static const MR_ConstString prof_info__prof_info__field_names_prof_node_0_1[7];

static const MR_DuFunctorDesc prof_info__prof_info__du_functor_desc_prof_node_0_1;

static const MR_DuFunctorDescPtr prof_info__prof_info__du_stag_ordered_prof_node_0_0[1];

static const MR_DuFunctorDescPtr prof_info__prof_info__du_stag_ordered_prof_node_0_1[1];

static const MR_DuPtagLayout prof_info__prof_info__du_ptag_ordered_prof_node_0[2];

static const MR_DuFunctorDescPtr prof_info__prof_info__du_name_ordered_prof_node_0[2];

static const MR_Integer prof_info__prof_info__functor_number_map_prof_node_0[2];

static const MR_EnumFunctorDesc prof_info__prof_info__enum_functor_desc_prof_node_type_0_0;

static const MR_EnumFunctorDesc prof_info__prof_info__enum_functor_desc_prof_node_type_0_1;

static const MR_EnumFunctorDescPtr prof_info__prof_info__enum_ordinal_ordered_prof_node_type_0[2];

static const MR_EnumFunctorDescPtr prof_info__prof_info__enum_name_ordered_prof_node_type_0[2];

static const MR_Integer prof_info__prof_info__functor_number_map_prof_node_type_0[2];

static MR_bool MR_CALL 
prof_info____Unify____addrdecl_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
prof_info____Compare____addrdecl_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
prof_info____Unify____cycle_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
prof_info____Compare____cycle_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
prof_info____Unify____pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
prof_info____Compare____pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
prof_info____Unify____prof_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
prof_info____Compare____prof_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
prof_info____Unify____prof_node_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
prof_info____Compare____prof_node_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
prof_info____Unify____prof_node_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
prof_info____Compare____prof_node_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
prof_info____Unify____prof_node_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
prof_info____Compare____prof_node_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box prof_info_scalar_common_1[2][3];

static /* final */ const MR_Box prof_info_scalar_common_2[2][2];




static /* final */ const MR_Box prof_info_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&prof_info__prof_info__type_ctor_info_prof_node_0))
  },
};

static /* final */ const MR_Box prof_info_scalar_common_2[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&prof_info__prof_info__type_ctor_info_pred_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};





static const MR_FA_TypeInfo_Struct2 prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct prof_info__prof_info__type_ctor_info_addrdecl_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (prof_info____Unify____addrdecl_0_0_10001)),
  ((MR_Box) (prof_info____Compare____addrdecl_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "addrdecl",
  { NULL },
  { (MR_PseudoTypeInfo) (&prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct prof_info__prof_info__type_ctor_info_cycle_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (prof_info____Unify____cycle_map_0_0_10001)),
  ((MR_Box) (prof_info____Compare____cycle_map_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "cycle_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo prof_info__prof_info__field_types_pred_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString prof_info__prof_info__field_names_pred_info_0_0[2] = {
  (MR_String) "pred_info_name",
  (MR_String) "pred_info_count"
};

static const MR_DuFunctorDesc prof_info__prof_info__du_functor_desc_pred_info_0_0 = {
  (MR_String) "pred_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  prof_info__prof_info__field_types_pred_info_0_0,
  prof_info__prof_info__field_names_pred_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr prof_info__prof_info__du_stag_ordered_pred_info_0_0[1] = { &prof_info__prof_info__du_functor_desc_pred_info_0_0 };

static const MR_DuPtagLayout prof_info__prof_info__du_ptag_ordered_pred_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    prof_info__prof_info__du_stag_ordered_pred_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr prof_info__prof_info__du_name_ordered_pred_info_0[1] = { &prof_info__prof_info__du_functor_desc_pred_info_0_0 };

static const MR_Integer prof_info__prof_info__functor_number_map_pred_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct prof_info__prof_info__type_ctor_info_pred_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (prof_info____Unify____pred_info_0_0_10001)),
  ((MR_Box) (prof_info____Compare____pred_info_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "pred_info",
  { prof_info__prof_info__du_name_ordered_pred_info_0 },
  { prof_info__prof_info__du_ptag_ordered_pred_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  prof_info__prof_info__functor_number_map_pred_info_0,

};

static const MR_FA_TypeInfo_Struct2 prof_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0prof_info__type_ctor_info_prof_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&prof_info__prof_info__type_ctor_info_prof_node_0)
  }
};

static const MR_PseudoTypeInfo prof_info__prof_info__field_types_prof_0_0[6] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&prof_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0prof_info__type_ctor_info_prof_node_0),
  (MR_PseudoTypeInfo) (&prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0)
};

static const MR_ConstString prof_info__prof_info__field_names_prof_0_0[6] = {
  (MR_String) "scaling_factor",
  (MR_String) "units",
  (MR_String) "total_count",
  (MR_String) "addr_decl_map",
  (MR_String) "prof_node_map",
  (MR_String) "cycle_map"
};

static const MR_DuFunctorDesc prof_info__prof_info__du_functor_desc_prof_0_0 = {
  (MR_String) "prof",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  prof_info__prof_info__field_types_prof_0_0,
  prof_info__prof_info__field_names_prof_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr prof_info__prof_info__du_stag_ordered_prof_0_0[1] = { &prof_info__prof_info__du_functor_desc_prof_0_0 };

static const MR_DuPtagLayout prof_info__prof_info__du_ptag_ordered_prof_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    prof_info__prof_info__du_stag_ordered_prof_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr prof_info__prof_info__du_name_ordered_prof_0[1] = { &prof_info__prof_info__du_functor_desc_prof_0_0 };

static const MR_Integer prof_info__prof_info__functor_number_map_prof_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct prof_info__prof_info__type_ctor_info_prof_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (prof_info____Unify____prof_0_0_10001)),
  ((MR_Box) (prof_info____Compare____prof_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "prof",
  { prof_info__prof_info__du_name_ordered_prof_0 },
  { prof_info__prof_info__du_ptag_ordered_prof_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  prof_info__prof_info__functor_number_map_prof_0,

};

static const MR_FA_TypeInfo_Struct1 prof_info__list__ti_list_1prof_info__type_ctor_info_pred_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&prof_info__prof_info__type_ctor_info_pred_info_0) }
};

static const MR_FA_TypeInfo_Struct1 prof_info__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo prof_info__prof_info__field_types_prof_node_0_0[9] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&prof_info__list__ti_list_1prof_info__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&prof_info__list__ti_list_1prof_info__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&prof_info__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString prof_info__prof_info__field_names_prof_node_0_0[9] = {
  (MR_String) "pred_name",
  (MR_String) "pred_cycle_number",
  (MR_String) "pred_self_counts",
  (MR_String) "pred_propagated_counts",
  (MR_String) "pred_parent_list",
  (MR_String) "pred_child_list",
  (MR_String) "pred_total_calls",
  (MR_String) "pred_self_calls",
  (MR_String) "prd_name_list"
};

static const MR_DuFunctorDesc prof_info__prof_info__du_functor_desc_prof_node_0_0 = {
  (MR_String) "pred_node",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  prof_info__prof_info__field_types_prof_node_0_0,
  prof_info__prof_info__field_names_prof_node_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo prof_info__prof_info__field_types_prof_node_0_1[7] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&prof_info__list__ti_list_1prof_info__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString prof_info__prof_info__field_names_prof_node_0_1[7] = {
  (MR_String) "cycle_name",
  (MR_String) "cycle_cycle_number",
  (MR_String) "cycle_self_counts",
  (MR_String) "cycle_propagated_counts",
  (MR_String) "cycle_members",
  (MR_String) "cycle_total_calls",
  (MR_String) "cycle_self_calls"
};

static const MR_DuFunctorDesc prof_info__prof_info__du_functor_desc_prof_node_0_1 = {
  (MR_String) "cycle_node",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  prof_info__prof_info__field_types_prof_node_0_1,
  prof_info__prof_info__field_names_prof_node_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr prof_info__prof_info__du_stag_ordered_prof_node_0_0[1] = { &prof_info__prof_info__du_functor_desc_prof_node_0_0 };

static const MR_DuFunctorDescPtr prof_info__prof_info__du_stag_ordered_prof_node_0_1[1] = { &prof_info__prof_info__du_functor_desc_prof_node_0_1 };

static const MR_DuPtagLayout prof_info__prof_info__du_ptag_ordered_prof_node_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    prof_info__prof_info__du_stag_ordered_prof_node_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    prof_info__prof_info__du_stag_ordered_prof_node_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr prof_info__prof_info__du_name_ordered_prof_node_0[2] = {
  &prof_info__prof_info__du_functor_desc_prof_node_0_1,
  &prof_info__prof_info__du_functor_desc_prof_node_0_0
};

static const MR_Integer prof_info__prof_info__functor_number_map_prof_node_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct prof_info__prof_info__type_ctor_info_prof_node_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (prof_info____Unify____prof_node_0_0_10001)),
  ((MR_Box) (prof_info____Compare____prof_node_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "prof_node",
  { prof_info__prof_info__du_name_ordered_prof_node_0 },
  { prof_info__prof_info__du_ptag_ordered_prof_node_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  prof_info__prof_info__functor_number_map_prof_node_0,

};

const MR_TypeCtorInfo_Struct prof_info__prof_info__type_ctor_info_prof_node_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (prof_info____Unify____prof_node_map_0_0_10001)),
  ((MR_Box) (prof_info____Compare____prof_node_map_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "prof_node_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&prof_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0prof_info__type_ctor_info_prof_node_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc prof_info__prof_info__enum_functor_desc_prof_node_type_0_0 = {
  (MR_String) "predicate",
  INT32_C(0)
};

static const MR_EnumFunctorDesc prof_info__prof_info__enum_functor_desc_prof_node_type_0_1 = {
  (MR_String) "cycle",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr prof_info__prof_info__enum_ordinal_ordered_prof_node_type_0[2] = {
  &prof_info__prof_info__enum_functor_desc_prof_node_type_0_0,
  &prof_info__prof_info__enum_functor_desc_prof_node_type_0_1
};

static const MR_EnumFunctorDescPtr prof_info__prof_info__enum_name_ordered_prof_node_type_0[2] = {
  &prof_info__prof_info__enum_functor_desc_prof_node_type_0_1,
  &prof_info__prof_info__enum_functor_desc_prof_node_type_0_0
};

static const MR_Integer prof_info__prof_info__functor_number_map_prof_node_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct prof_info__prof_info__type_ctor_info_prof_node_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (prof_info____Unify____prof_node_type_0_0_10001)),
  ((MR_Box) (prof_info____Compare____prof_node_type_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "prof_node_type",
  { prof_info__prof_info__enum_name_ordered_prof_node_type_0 },
  { prof_info__prof_info__enum_ordinal_ordered_prof_node_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  prof_info__prof_info__functor_number_map_prof_node_type_0,

};

void MR_CALL 
prof_info____Compare____prof_node_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
prof_info____Unify____prof_node_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
prof_info____Compare____prof_node_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&prof_info_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
prof_info____Unify____prof_node_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&prof_info_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
prof_info____Compare____prof_node_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_50 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_51 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_50 == CastY_51);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_String ArgX1_30 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_String ArgY1_31 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Integer ArgX2_33 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Integer ArgY2_34 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Integer ArgX3_36 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Integer ArgY3_37 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 2))));
      MR_Float ArgX4_39 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, 3)));
      MR_Float ArgY4_40 = MR_unbox_float((MR_hl_field(1, HeadVar__3_3, 3)));
      MR_Word ArgX5_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 4))));
      MR_Word ArgY5_43 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 4))));
      MR_Integer ArgX6_45 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 5))));
      MR_Integer ArgY6_46 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 5))));
      MR_Integer ArgX7_48 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 6))));
      MR_Integer ArgY7_49 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 6))));
      MR_Word SubResult1_32;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_32, ArgX1_30, ArgY1_31);
      succeeded = (SubResult1_32 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_32;
      else
      {
        MR_Word SubResult2_35;

        succeeded = (ArgX2_33 < ArgY2_34);
        if (succeeded)
        {
          SubResult2_35 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX2_33 > ArgY2_34);
          if (succeeded)
          {
            SubResult2_35 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_35;
        else
        {
          MR_Word SubResult3_38;

          succeeded = (ArgX3_36 < ArgY3_37);
          if (succeeded)
          {
            SubResult3_38 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX3_36 > ArgY3_37);
            if (succeeded)
            {
              SubResult3_38 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_38;
          else
          {
            MR_Word SubResult4_41;

            mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult4_41, ArgX4_39, ArgY4_40);
            succeeded = (SubResult4_41 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_41;
            else
            {
              MR_Word SubResult5_44;

              mercury__builtin__compare_3_p_0((MR_Word) (&prof_info_scalar_common_2[0]), &SubResult5_44, ((MR_Box) (ArgX5_42)), ((MR_Box) (ArgY5_43)));
              succeeded = (SubResult5_44 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_44;
              else
              {
                MR_Word SubResult6_47;

                succeeded = (ArgX6_45 < ArgY6_46);
                if (succeeded)
                {
                  SubResult6_47 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX6_45 > ArgY6_46);
                  if (succeeded)
                  {
                    SubResult6_47 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_47;
                else
                {
                  succeeded = (ArgX7_48 < ArgY7_49);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX7_48 > ArgY7_49);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Float ArgX4_13 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 3)));
    MR_Float ArgY4_14 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 3)));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Integer ArgX8_25 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Integer ArgY8_26 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&prof_info_scalar_common_2[0]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&prof_info_scalar_common_2[0]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                succeeded = (ArgX7_22 < ArgY7_23);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX7_22 > ArgY7_23);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  succeeded = (ArgX8_25 < ArgY8_26);
                  if (succeeded)
                  {
                    SubResult8_27 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (ArgX8_25 > ArgY8_26);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&prof_info_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
prof_info____Unify____prof_node_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_35 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_36 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_35 == CastY_36);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_37_37;
    MR_String ArgX1_21 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_22;
    MR_Integer ArgX2_23 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Integer ArgY2_24;
    MR_Integer ArgX3_25 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Integer ArgY3_26;
    MR_Float ArgX4_27 = MR_unbox_float((MR_hl_field(1, HeadVar__1_1, 3)));
    MR_Float ArgY4_28;
    MR_Word ArgX5_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 4))));
    MR_Word ArgY5_30;
    MR_Integer ArgX6_31 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 5))));
    MR_Integer ArgY6_32;
    MR_Integer ArgX7_33 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 6))));
    MR_Integer ArgY7_34;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_22 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_24 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      ArgY3_26 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 2))));
      ArgY4_28 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, 3)));
      ArgY5_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 4))));
      ArgY6_32 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 5))));
      ArgY7_34 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 6))));
      succeeded = (strcmp(ArgX1_21, ArgY1_22) == 0);
      if (succeeded)
      {
        succeeded = (ArgX2_23 == ArgY2_24);
        if (succeeded)
        {
          succeeded = (ArgX3_25 == ArgY3_26);
          if (succeeded)
          {
            succeeded = (ArgX4_27 == ArgY4_28);
            if (succeeded)
            {
              TypeInfo_37_37 = (MR_Word) (&prof_info_scalar_common_2[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX5_29)), ((MR_Box) (ArgY5_30)));
              if (succeeded)
              {
                succeeded = (ArgX6_31 == ArgY6_32);
                if (succeeded)
                  succeeded = (ArgX7_33 == ArgY7_34);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    MR_Word TypeInfo_38_38;
    MR_Word TypeInfo_39_39;
    MR_Word TypeInfo_40_40;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4;
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6;
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8;
    MR_Float ArgX4_9 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 3)));
    MR_Float ArgY4_10;
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12;
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14;
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Integer ArgY7_16;
    MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Integer ArgY8_18;
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
      ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
      ArgY4_10 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 3)));
      ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
      ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
      ArgY7_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
      ArgY8_18 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 7))));
      ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              TypeInfo_38_38 = (MR_Word) (&prof_info_scalar_common_2[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_39_39 = (MR_Word) (&prof_info_scalar_common_2[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_39_39, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  succeeded = (ArgX7_15 == ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      TypeInfo_40_40 = (MR_Word) (&prof_info_scalar_common_2[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_40_40, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
prof_info____Compare____prof_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Float ArgX1_4 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 0)));
    MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 0)));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&prof_info_scalar_common_1[0]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&prof_info_scalar_common_1[1]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&prof_info_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
prof_info____Unify____prof_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 0)));
    MR_Float ArgY1_4 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 0)));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&prof_info_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&prof_info_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_19_19 = (MR_Word) (&prof_info_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
prof_info____Compare____pred_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
prof_info____Unify____pred_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
prof_info____Compare____cycle_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&prof_info_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
prof_info____Unify____cycle_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&prof_info_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
prof_info____Compare____addrdecl_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&prof_info_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
prof_info____Unify____addrdecl_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&prof_info_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
prof_info__pred_info_get_counts_2_p_0(
  MR_Word Pred_3,
  MR_Integer * X_4)
{
  *X_4 = ((MR_Integer) ((MR_hl_field(0, Pred_3, 1))));
}

void MR_CALL 
prof_info__pred_info_get_pred_name_2_p_0(
  MR_Word Pred_3,
  MR_String * X_4)
{
  *X_4 = ((MR_String) ((MR_hl_field(0, Pred_3, 0))));
}

void MR_CALL 
prof_info__pred_info_get_entire_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String * A_4,
  MR_Integer * B_5)
{
  *A_4 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
  *B_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
}

void MR_CALL 
prof_info__pred_info_init_3_p_0(
  MR_String Name_4,
  MR_Integer Count_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Name_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Count_5));
  }
}

void MR_CALL 
prof_info__prof_node_concat_to_member_4_p_0(
  MR_String Name_1,
  MR_Integer Count_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
  {
    MR_String A_7 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Integer B_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Integer C_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 2))));
    MR_Float D_10 = MR_unbox_float((MR_hl_field(1, HeadVar__3_3, 3)));
    MR_Word CList_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 4))));
    MR_Integer F_12 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 5))));
    MR_Integer G_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 6))));
    MR_Word Var_14;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (Name_1));
      MR_hl_field(0, Var_15, 1) = ((MR_Box) (Count_2));
    }
    {
      Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
      MR_hl_field(1, Var_14, 1) = ((MR_Box) (CList_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (A_7));
      MR_hl_field(1, base, 1) = ((MR_Box) (B_8));
      MR_hl_field(1, base, 2) = ((MR_Box) (C_9));
      MR_hl_field(1, base, 3) = MR_box_float(D_10);
      MR_hl_field(1, base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(1, base, 5) = ((MR_Box) (F_12));
      MR_hl_field(1, base, 6) = ((MR_Box) (G_13));
    }
  }
  else
    {
      mercury__require__error_1_p_0((MR_String) "prof_node_concat_to_member: pred_node has no members\n");
      return;
    }
}

void MR_CALL 
prof_info__prof_node_concat_to_name_list_3_p_0(
  MR_String Name_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      mercury__require__error_1_p_0((MR_String) "prof_node_concat_to_name_list: cycle_node has no namelist\n");
      return;
    }
  else
  {
    MR_String A_5 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer B_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer C_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Float D_8 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 3)));
    MR_Word E_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word F_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer G_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Integer H_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word NL_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_14, 0) = ((MR_Box) (Name_1));
      MR_hl_field(1, Var_14, 1) = ((MR_Box) (NL_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (A_5));
      MR_hl_field(0, base, 1) = ((MR_Box) (B_6));
      MR_hl_field(0, base, 2) = ((MR_Box) (C_7));
      MR_hl_field(0, base, 3) = MR_box_float(D_8);
      MR_hl_field(0, base, 4) = ((MR_Box) (E_9));
      MR_hl_field(0, base, 5) = ((MR_Box) (F_10));
      MR_hl_field(0, base, 6) = ((MR_Box) (G_11));
      MR_hl_field(0, base, 7) = ((MR_Box) (H_12));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_14));
    }
  }
}

void MR_CALL 
prof_info__prof_node_set_self_calls_3_p_0(
  MR_Integer Calls_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_String A_15 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Integer B_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Integer C_17 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Float D_18 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, 3)));
    MR_Word E_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 4))));
    MR_Integer F_20 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 5))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (A_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (B_16));
      MR_hl_field(1, base, 2) = ((MR_Box) (C_17));
      MR_hl_field(1, base, 3) = MR_box_float(D_18);
      MR_hl_field(1, base, 4) = ((MR_Box) (E_19));
      MR_hl_field(1, base, 5) = ((MR_Box) (F_20));
      MR_hl_field(1, base, 6) = ((MR_Box) (Calls_1));
    }
  }
  else
  {
    MR_String A_5 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer B_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer C_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Float D_8 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 3)));
    MR_Word E_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word F_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer G_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word I_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (A_5));
      MR_hl_field(0, base, 1) = ((MR_Box) (B_6));
      MR_hl_field(0, base, 2) = ((MR_Box) (C_7));
      MR_hl_field(0, base, 3) = MR_box_float(D_8);
      MR_hl_field(0, base, 4) = ((MR_Box) (E_9));
      MR_hl_field(0, base, 5) = ((MR_Box) (F_10));
      MR_hl_field(0, base, 6) = ((MR_Box) (G_11));
      MR_hl_field(0, base, 7) = ((MR_Box) (Calls_1));
      MR_hl_field(0, base, 8) = ((MR_Box) (I_13));
    }
  }
}

void MR_CALL 
prof_info__prof_node_set_total_calls_3_p_0(
  MR_Integer Calls_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_String A_15 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Integer B_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Integer C_17 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Float D_18 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, 3)));
    MR_Word E_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 4))));
    MR_Integer G_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (A_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (B_16));
      MR_hl_field(1, base, 2) = ((MR_Box) (C_17));
      MR_hl_field(1, base, 3) = MR_box_float(D_18);
      MR_hl_field(1, base, 4) = ((MR_Box) (E_19));
      MR_hl_field(1, base, 5) = ((MR_Box) (Calls_1));
      MR_hl_field(1, base, 6) = ((MR_Box) (G_21));
    }
  }
  else
  {
    MR_String A_5 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer B_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer C_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Float D_8 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 3)));
    MR_Word E_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word F_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer H_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word I_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (A_5));
      MR_hl_field(0, base, 1) = ((MR_Box) (B_6));
      MR_hl_field(0, base, 2) = ((MR_Box) (C_7));
      MR_hl_field(0, base, 3) = MR_box_float(D_8);
      MR_hl_field(0, base, 4) = ((MR_Box) (E_9));
      MR_hl_field(0, base, 5) = ((MR_Box) (F_10));
      MR_hl_field(0, base, 6) = ((MR_Box) (Calls_1));
      MR_hl_field(0, base, 7) = ((MR_Box) (H_12));
      MR_hl_field(0, base, 8) = ((MR_Box) (I_13));
    }
  }
}

void MR_CALL 
prof_info__prof_node_concat_to_child_4_p_0(
  MR_String Name_1,
  MR_Integer Count_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      mercury__require__error_1_p_0((MR_String) "prof_node_concat_to_child: cycle_node has no child\n");
      return;
    }
  else
  {
    MR_String A_7 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer B_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer C_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Float D_10 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 3)));
    MR_Word E_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word CList_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Integer G_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Integer H_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word I_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word Var_16;
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (Name_1));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (Count_2));
    }
    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(1, Var_16, 1) = ((MR_Box) (CList_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (A_7));
      MR_hl_field(0, base, 1) = ((MR_Box) (B_8));
      MR_hl_field(0, base, 2) = ((MR_Box) (C_9));
      MR_hl_field(0, base, 3) = MR_box_float(D_10);
      MR_hl_field(0, base, 4) = ((MR_Box) (E_11));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(0, base, 6) = ((MR_Box) (G_13));
      MR_hl_field(0, base, 7) = ((MR_Box) (H_14));
      MR_hl_field(0, base, 8) = ((MR_Box) (I_15));
    }
  }
}

void MR_CALL 
prof_info__prof_node_concat_to_parent_4_p_0(
  MR_String Name_1,
  MR_Integer Count_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      mercury__require__error_1_p_0((MR_String) "prof_node_concat_to_parent: cycle_node has no parents\n");
      return;
    }
  else
  {
    MR_String A_7 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer B_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer C_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Float D_10 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, 3)));
    MR_Word PList_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word F_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Integer G_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Integer H_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word I_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word Var_16;
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (Name_1));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (Count_2));
    }
    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(1, Var_16, 1) = ((MR_Box) (PList_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (A_7));
      MR_hl_field(0, base, 1) = ((MR_Box) (B_8));
      MR_hl_field(0, base, 2) = ((MR_Box) (C_9));
      MR_hl_field(0, base, 3) = MR_box_float(D_10);
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_16));
      MR_hl_field(0, base, 5) = ((MR_Box) (F_12));
      MR_hl_field(0, base, 6) = ((MR_Box) (G_13));
      MR_hl_field(0, base, 7) = ((MR_Box) (H_14));
      MR_hl_field(0, base, 8) = ((MR_Box) (I_15));
    }
  }
}

void MR_CALL 
prof_info__prof_node_set_propagated_counts_3_p_0(
  MR_Float Count_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_String A_15 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Integer B_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Integer C_17 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Word E_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 4))));
    MR_Integer F_20 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 5))));
    MR_Integer G_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (A_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (B_16));
      MR_hl_field(1, base, 2) = ((MR_Box) (C_17));
      MR_hl_field(1, base, 3) = MR_box_float(Count_1);
      MR_hl_field(1, base, 4) = ((MR_Box) (E_19));
      MR_hl_field(1, base, 5) = ((MR_Box) (F_20));
      MR_hl_field(1, base, 6) = ((MR_Box) (G_21));
    }
  }
  else
  {
    MR_String A_5 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer B_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer C_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word E_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word F_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer G_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Integer H_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word I_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (A_5));
      MR_hl_field(0, base, 1) = ((MR_Box) (B_6));
      MR_hl_field(0, base, 2) = ((MR_Box) (C_7));
      MR_hl_field(0, base, 3) = MR_box_float(Count_1);
      MR_hl_field(0, base, 4) = ((MR_Box) (E_9));
      MR_hl_field(0, base, 5) = ((MR_Box) (F_10));
      MR_hl_field(0, base, 6) = ((MR_Box) (G_11));
      MR_hl_field(0, base, 7) = ((MR_Box) (H_12));
      MR_hl_field(0, base, 8) = ((MR_Box) (I_13));
    }
  }
}

void MR_CALL 
prof_info__prof_node_set_initial_counts_3_p_0(
  MR_Integer Count_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_String A_15 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Integer B_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Float D_18 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, 3)));
    MR_Word E_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 4))));
    MR_Integer F_20 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 5))));
    MR_Integer G_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (A_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (B_16));
      MR_hl_field(1, base, 2) = ((MR_Box) (Count_1));
      MR_hl_field(1, base, 3) = MR_box_float(D_18);
      MR_hl_field(1, base, 4) = ((MR_Box) (E_19));
      MR_hl_field(1, base, 5) = ((MR_Box) (F_20));
      MR_hl_field(1, base, 6) = ((MR_Box) (G_21));
    }
  }
  else
  {
    MR_String A_5 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer B_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Float D_8 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 3)));
    MR_Word E_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word F_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer G_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Integer H_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word I_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (A_5));
      MR_hl_field(0, base, 1) = ((MR_Box) (B_6));
      MR_hl_field(0, base, 2) = ((MR_Box) (Count_1));
      MR_hl_field(0, base, 3) = MR_box_float(D_8);
      MR_hl_field(0, base, 4) = ((MR_Box) (E_9));
      MR_hl_field(0, base, 5) = ((MR_Box) (F_10));
      MR_hl_field(0, base, 6) = ((MR_Box) (G_11));
      MR_hl_field(0, base, 7) = ((MR_Box) (H_12));
      MR_hl_field(0, base, 8) = ((MR_Box) (I_13));
    }
  }
}

void MR_CALL 
prof_info__prof_node_set_cycle_num_3_p_0(
  MR_Integer Cycle_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_String A_15 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Integer C_17 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Float D_18 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, 3)));
    MR_Word E_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 4))));
    MR_Integer F_20 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 5))));
    MR_Integer G_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (A_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cycle_1));
      MR_hl_field(1, base, 2) = ((MR_Box) (C_17));
      MR_hl_field(1, base, 3) = MR_box_float(D_18);
      MR_hl_field(1, base, 4) = ((MR_Box) (E_19));
      MR_hl_field(1, base, 5) = ((MR_Box) (F_20));
      MR_hl_field(1, base, 6) = ((MR_Box) (G_21));
    }
  }
  else
  {
    MR_String A_5 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer C_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Float D_8 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, 3)));
    MR_Word E_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word F_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer G_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Integer H_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word I_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (A_5));
      MR_hl_field(0, base, 1) = ((MR_Box) (Cycle_1));
      MR_hl_field(0, base, 2) = ((MR_Box) (C_7));
      MR_hl_field(0, base, 3) = MR_box_float(D_8);
      MR_hl_field(0, base, 4) = ((MR_Box) (E_9));
      MR_hl_field(0, base, 5) = ((MR_Box) (F_10));
      MR_hl_field(0, base, 6) = ((MR_Box) (G_11));
      MR_hl_field(0, base, 7) = ((MR_Box) (H_12));
      MR_hl_field(0, base, 8) = ((MR_Box) (I_13));
    }
  }
}

void MR_CALL 
prof_info__prof_node_get_self_calls_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Calls_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    *Calls_2 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 6))));
  else
    *Calls_2 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 7))));
}

void MR_CALL 
prof_info__prof_node_get_total_calls_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Calls_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    *Calls_2 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 5))));
  else
    *Calls_2 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 6))));
}

void MR_CALL 
prof_info__prof_node_get_child_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Clist_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      mercury__require__error_1_p_0((MR_String) "prof_node_get_child_list: cycle_node has no child list\n");
      return;
    }
  else
    *Clist_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
}

void MR_CALL 
prof_info__prof_node_get_parent_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * PList_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      mercury__require__error_1_p_0((MR_String) "prof_node_get_parent_list: cycle_node has no parent list\n");
      return;
    }
  else
    *PList_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
}

void MR_CALL 
prof_info__prof_node_get_propagated_counts_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Float * Count_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    *Count_2 = MR_unbox_float((MR_hl_field(1, HeadVar__1_1, 3)));
  else
    *Count_2 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 3)));
}

void MR_CALL 
prof_info__prof_node_get_initial_counts_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Count_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    *Count_2 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 2))));
  else
    *Count_2 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
}

void MR_CALL 
prof_info__prof_node_get_cycle_number_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Cycle_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    *Cycle_2 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
  else
    *Cycle_2 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
}

void MR_CALL 
prof_info__prof_node_get_pred_name_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Name_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    *Name_2 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
  else
    *Name_2 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
}

void MR_CALL 
prof_info__prof_node_get_entire_cycle_8_p_0(
  MR_Word HeadVar__1_1,
  MR_String * A_2,
  MR_Integer * B_3,
  MR_Integer * C_4,
  MR_Float * D_5,
  MR_Word * E_6,
  MR_Integer * F_7,
  MR_Integer * G_8)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    *A_2 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    *B_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
    *C_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 2))));
    *D_5 = MR_unbox_float((MR_hl_field(1, HeadVar__1_1, 3)));
    *E_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 4))));
    *F_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 5))));
    *G_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 6))));
  }
  else
    {
      mercury__require__error_1_p_0((MR_String) "prof_node_get_entire_cycle: not a cycle\n");
      return;
    }
}

void MR_CALL 
prof_info__prof_node_get_entire_pred_10_p_0(
  MR_Word HeadVar__1_1,
  MR_String * A_2,
  MR_Integer * B_3,
  MR_Integer * C_4,
  MR_Float * D_5,
  MR_Word * E_6,
  MR_Word * F_7,
  MR_Integer * G_8,
  MR_Integer * H_9,
  MR_Word * I_10)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      mercury__require__error_1_p_0((MR_String) "prof_node_get_entire_pred: not a pred\n");
      return;
    }
  else
  {
    *A_2 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    *B_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    *C_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    *D_5 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 3)));
    *E_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    *F_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    *G_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 6))));
    *H_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 7))));
    *I_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
  }
}

void MR_CALL 
prof_info__prof_node_type_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    *HeadVar__2_2 = (MR_Integer) 1;
  else
    *HeadVar__2_2 = (MR_Integer) 0;
}

void MR_CALL 
prof_info__prof_set_cyclemap_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Prof_0_6,
  MR_Word * STATE_VARIABLE_Prof_7)
{
  MR_Float Var_8 = MR_unbox_float((MR_hl_field(0, STATE_VARIABLE_Prof_0_6, 0)));
  MR_String Var_9 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Prof_0_6, 1))));
  MR_Integer Var_10 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Prof_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Prof_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Prof_0_6, 4))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Prof_7 = base;
    MR_hl_field(0, base, 0) = MR_box_float(Var_8);
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (X_4));
  }
}

void MR_CALL 
prof_info__prof_set_profnodemap_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Prof_0_6,
  MR_Word * STATE_VARIABLE_Prof_7)
{
  MR_Float Var_8 = MR_unbox_float((MR_hl_field(0, STATE_VARIABLE_Prof_0_6, 0)));
  MR_String Var_9 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Prof_0_6, 1))));
  MR_Integer Var_10 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Prof_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Prof_0_6, 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Prof_0_6, 5))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Prof_7 = base;
    MR_hl_field(0, base, 0) = MR_box_float(Var_8);
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
  }
}

void MR_CALL 
prof_info__prof_set_entire_7_p_0(
  MR_Float A_8,
  MR_String B_9,
  MR_Integer C_10,
  MR_Word D_11,
  MR_Word E_12,
  MR_Word F_13,
  MR_Word * HeadVar__7_7)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__7_7 = base;
    MR_hl_field(0, base, 0) = MR_box_float(A_8);
    MR_hl_field(0, base, 1) = ((MR_Box) (B_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (C_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (D_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (E_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (F_13));
  }
}

void MR_CALL 
prof_info__prof_get_profnodemap_2_p_0(
  MR_Word Prof_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Prof_3, 4))));
}

void MR_CALL 
prof_info__prof_get_addrdeclmap_2_p_0(
  MR_Word Prof_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Prof_3, 3))));
}

void MR_CALL 
prof_info__prof_get_entire_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Float * A_8,
  MR_String * B_9,
  MR_Integer * C_10,
  MR_Word * D_11,
  MR_Word * E_12,
  MR_Word * F_13)
{
  *A_8 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, 0)));
  *B_9 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
  *C_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
  *D_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
  *E_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
  *F_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
}

void MR_CALL 
prof_info__update_prof_node_5_p_0(
  MR_String Pred_6,
  MR_Word ProfNode_7,
  MR_Word AddrMap_8,
  MR_Word STATE_VARIABLE_ProfNodeMap_0_11,
  MR_Word * STATE_VARIABLE_ProfNodeMap_12)
{
  MR_Integer Key_10;
  MR_Box conv0_Key_10;

  mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), AddrMap_8, ((MR_Box) (Pred_6)), &conv0_Key_10);
  Key_10 = ((MR_Integer) (conv0_Key_10));
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), Key_10, ((MR_Box) (ProfNode_7)), STATE_VARIABLE_ProfNodeMap_0_11, STATE_VARIABLE_ProfNodeMap_12);
}

void MR_CALL 
prof_info__get_prof_node_4_p_0(
  MR_String Pred_5,
  MR_Word AddrMap_6,
  MR_Word ProfNodeMap_7,
  MR_Word * ProfNode_8)
{
  MR_Integer Key_9;
  MR_Box conv0_Key_9;
  MR_Box conv1_ProfNode_8;

  mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), AddrMap_6, ((MR_Box) (Pred_5)), &conv0_Key_9);
  Key_9 = ((MR_Integer) (conv0_Key_9));
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&prof_info__prof_info__type_ctor_info_prof_node_0), ProfNodeMap_7, Key_9, &conv1_ProfNode_8);
  *ProfNode_8 = ((MR_Word) (conv1_ProfNode_8));
}

MR_Word MR_CALL 
prof_info__prof_node_init_cycle_7_f_0(
  MR_String A_9,
  MR_Integer B_10,
  MR_Integer C_11,
  MR_Float D_12,
  MR_Word E_13,
  MR_Integer F_14,
  MR_Integer G_15)
{
  MR_Word HeadVar__8_8;

  {
    HeadVar__8_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__8_8, 0) = ((MR_Box) (A_9));
    MR_hl_field(1, HeadVar__8_8, 1) = ((MR_Box) (B_10));
    MR_hl_field(1, HeadVar__8_8, 2) = ((MR_Box) (C_11));
    MR_hl_field(1, HeadVar__8_8, 3) = MR_box_float(D_12);
    MR_hl_field(1, HeadVar__8_8, 4) = ((MR_Box) (E_13));
    MR_hl_field(1, HeadVar__8_8, 5) = ((MR_Box) (F_14));
    MR_hl_field(1, HeadVar__8_8, 6) = ((MR_Box) (G_15));
  }
  return HeadVar__8_8;
}

MR_Word MR_CALL 
prof_info__prof_node_init_1_f_0(
  MR_String PredName_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (PredName_3));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, HeadVar__2_2, 3) = MR_box_float((MR_Float) 0.0000000000000000);
    MR_hl_field(0, HeadVar__2_2, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__2_2, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__2_2, 6) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, HeadVar__2_2, 7) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, HeadVar__2_2, 8) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
prof_info____Unify____addrdecl_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = prof_info____Unify____addrdecl_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
prof_info____Compare____addrdecl_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  prof_info____Compare____addrdecl_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
prof_info____Unify____cycle_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = prof_info____Unify____cycle_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
prof_info____Compare____cycle_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  prof_info____Compare____cycle_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
prof_info____Unify____pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = prof_info____Unify____pred_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
prof_info____Compare____pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  prof_info____Compare____pred_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
prof_info____Unify____prof_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = prof_info____Unify____prof_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
prof_info____Compare____prof_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  prof_info____Compare____prof_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
prof_info____Unify____prof_node_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = prof_info____Unify____prof_node_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
prof_info____Compare____prof_node_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  prof_info____Compare____prof_node_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
prof_info____Unify____prof_node_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = prof_info____Unify____prof_node_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
prof_info____Compare____prof_node_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  prof_info____Compare____prof_node_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
prof_info____Unify____prof_node_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = prof_info____Unify____prof_node_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
prof_info____Compare____prof_node_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  prof_info____Compare____prof_node_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__prof_info__init(void)
{
}

void mercury__prof_info__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&prof_info__prof_info__type_ctor_info_addrdecl_0);
  MR_register_type_ctor_info(&prof_info__prof_info__type_ctor_info_cycle_map_0);
  MR_register_type_ctor_info(&prof_info__prof_info__type_ctor_info_pred_info_0);
  MR_register_type_ctor_info(&prof_info__prof_info__type_ctor_info_prof_0);
  MR_register_type_ctor_info(&prof_info__prof_info__type_ctor_info_prof_node_0);
  MR_register_type_ctor_info(&prof_info__prof_info__type_ctor_info_prof_node_map_0);
  MR_register_type_ctor_info(&prof_info__prof_info__type_ctor_info_prof_node_type_0);
}

void mercury__prof_info__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__prof_info__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module prof_info.
