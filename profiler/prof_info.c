/*
** Automatically generated from `prof_info.m'
** by the Mercury compiler,
** version DEV
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module prof_info. */
/* :- implementation. */

/*
INIT mercury__prof_info__init
ENDINIT
*/

#include "prof_info.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
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

static const MR_EnumFunctorDescPtr prof_info__prof_info__enum_value_ordered_prof_node_type_0[2];

static const MR_EnumFunctorDescPtr prof_info__prof_info__enum_name_ordered_prof_node_type_0[2];

static const MR_Integer prof_info__prof_info__functor_number_map_prof_node_type_0[2];

static MR_bool MR_CALL 
prof_info____Unify____addrdecl_0_0_10001(
  MR_Box prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2);

static void MR_CALL 
prof_info____Compare____addrdecl_0_0_10001(
  MR_Box * prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2,
  MR_Box prof_info__wrapper_arg_3);

static MR_bool MR_CALL 
prof_info____Unify____cycle_map_0_0_10001(
  MR_Box prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2);

static void MR_CALL 
prof_info____Compare____cycle_map_0_0_10001(
  MR_Box * prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2,
  MR_Box prof_info__wrapper_arg_3);

static MR_bool MR_CALL 
prof_info____Unify____pred_info_0_0_10001(
  MR_Box prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2);

static void MR_CALL 
prof_info____Compare____pred_info_0_0_10001(
  MR_Box * prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2,
  MR_Box prof_info__wrapper_arg_3);

static MR_bool MR_CALL 
prof_info____Unify____prof_0_0_10001(
  MR_Box prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2);

static void MR_CALL 
prof_info____Compare____prof_0_0_10001(
  MR_Box * prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2,
  MR_Box prof_info__wrapper_arg_3);

static MR_bool MR_CALL 
prof_info____Unify____prof_node_0_0_10001(
  MR_Box prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2);

static void MR_CALL 
prof_info____Compare____prof_node_0_0_10001(
  MR_Box * prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2,
  MR_Box prof_info__wrapper_arg_3);

static MR_bool MR_CALL 
prof_info____Unify____prof_node_map_0_0_10001(
  MR_Box prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2);

static void MR_CALL 
prof_info____Compare____prof_node_map_0_0_10001(
  MR_Box * prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2,
  MR_Box prof_info__wrapper_arg_3);

static MR_bool MR_CALL 
prof_info____Unify____prof_node_type_0_0_10001(
  MR_Box prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2);

static void MR_CALL 
prof_info____Compare____prof_node_type_0_0_10001(
  MR_Box * prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2,
  MR_Box prof_info__wrapper_arg_3);


static /* final */ const MR_Box prof_info_scalar_common_1[2][3];

static /* final */ const MR_Box prof_info_scalar_common_2[2][2];




static /* final */ const MR_Box prof_info_scalar_common_1[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&prof_info__prof_info__type_ctor_info_prof_node_0))
  },
};

static /* final */ const MR_Box prof_info_scalar_common_2[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&prof_info__prof_info__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct2 prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

const MR_TypeCtorInfo_Struct prof_info__prof_info__type_ctor_info_addrdecl_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (prof_info____Unify____addrdecl_0_0_10001)),
  ((MR_Box) (prof_info____Compare____addrdecl_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "addrdecl",
  {     NULL },
  {     (MR_PseudoTypeInfo) &prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct prof_info__prof_info__type_ctor_info_cycle_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (prof_info____Unify____cycle_map_0_0_10001)),
  ((MR_Box) (prof_info____Compare____cycle_map_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "cycle_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo prof_info__prof_info__field_types_pred_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString prof_info__prof_info__field_names_pred_info_0_0[2] = {
  (MR_String) "pred_info_name",
  (MR_String) "pred_info_count"
};

static const MR_DuFunctorDesc prof_info__prof_info__du_functor_desc_pred_info_0_0 = {
  (MR_String) "pred_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  prof_info__prof_info__field_types_pred_info_0_0,
  prof_info__prof_info__field_names_pred_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr prof_info__prof_info__du_stag_ordered_pred_info_0_0[1] = {
  &prof_info__prof_info__du_functor_desc_pred_info_0_0
};

static const MR_DuPtagLayout prof_info__prof_info__du_ptag_ordered_pred_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    prof_info__prof_info__du_stag_ordered_pred_info_0_0
  }
};

static const MR_DuFunctorDescPtr prof_info__prof_info__du_name_ordered_pred_info_0[1] = {
  &prof_info__prof_info__du_functor_desc_pred_info_0_0
};

static const MR_Integer prof_info__prof_info__functor_number_map_pred_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct prof_info__prof_info__type_ctor_info_pred_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (prof_info____Unify____pred_info_0_0_10001)),
  ((MR_Box) (prof_info____Compare____pred_info_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "pred_info",
  {     prof_info__prof_info__du_name_ordered_pred_info_0 },
  {     prof_info__prof_info__du_ptag_ordered_pred_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  prof_info__prof_info__functor_number_map_pred_info_0
};

static const MR_FA_TypeInfo_Struct2 prof_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0prof_info__type_ctor_info_prof_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &prof_info__prof_info__type_ctor_info_prof_node_0
  }
};

static const MR_PseudoTypeInfo prof_info__prof_info__field_types_prof_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &prof_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0prof_info__type_ctor_info_prof_node_0,
  (MR_PseudoTypeInfo) &prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
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
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  prof_info__prof_info__field_types_prof_0_0,
  prof_info__prof_info__field_names_prof_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr prof_info__prof_info__du_stag_ordered_prof_0_0[1] = {
  &prof_info__prof_info__du_functor_desc_prof_0_0
};

static const MR_DuPtagLayout prof_info__prof_info__du_ptag_ordered_prof_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    prof_info__prof_info__du_stag_ordered_prof_0_0
  }
};

static const MR_DuFunctorDescPtr prof_info__prof_info__du_name_ordered_prof_0[1] = {
  &prof_info__prof_info__du_functor_desc_prof_0_0
};

static const MR_Integer prof_info__prof_info__functor_number_map_prof_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct prof_info__prof_info__type_ctor_info_prof_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (prof_info____Unify____prof_0_0_10001)),
  ((MR_Box) (prof_info____Compare____prof_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "prof",
  {     prof_info__prof_info__du_name_ordered_prof_0 },
  {     prof_info__prof_info__du_ptag_ordered_prof_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  prof_info__prof_info__functor_number_map_prof_0
};

static const MR_FA_TypeInfo_Struct1 prof_info__list__ti_list_1prof_info__type_ctor_info_pred_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &prof_info__prof_info__type_ctor_info_pred_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 prof_info__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo prof_info__prof_info__field_types_prof_node_0_0[9] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &prof_info__list__ti_list_1prof_info__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &prof_info__list__ti_list_1prof_info__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &prof_info__list__ti_list_1builtin__type_ctor_info_string_0
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
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  prof_info__prof_info__field_types_prof_node_0_0,
  prof_info__prof_info__field_names_prof_node_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo prof_info__prof_info__field_types_prof_node_0_1[7] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &prof_info__list__ti_list_1prof_info__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
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
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  prof_info__prof_info__field_types_prof_node_0_1,
  prof_info__prof_info__field_names_prof_node_0_1,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr prof_info__prof_info__du_stag_ordered_prof_node_0_0[1] = {
  &prof_info__prof_info__du_functor_desc_prof_node_0_0
};

static const MR_DuFunctorDescPtr prof_info__prof_info__du_stag_ordered_prof_node_0_1[1] = {
  &prof_info__prof_info__du_functor_desc_prof_node_0_1
};

static const MR_DuPtagLayout prof_info__prof_info__du_ptag_ordered_prof_node_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    prof_info__prof_info__du_stag_ordered_prof_node_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    prof_info__prof_info__du_stag_ordered_prof_node_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (prof_info____Unify____prof_node_0_0_10001)),
  ((MR_Box) (prof_info____Compare____prof_node_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "prof_node",
  {     prof_info__prof_info__du_name_ordered_prof_node_0 },
  {     prof_info__prof_info__du_ptag_ordered_prof_node_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  prof_info__prof_info__functor_number_map_prof_node_0
};

const MR_TypeCtorInfo_Struct prof_info__prof_info__type_ctor_info_prof_node_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (prof_info____Unify____prof_node_map_0_0_10001)),
  ((MR_Box) (prof_info____Compare____prof_node_map_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "prof_node_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &prof_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0prof_info__type_ctor_info_prof_node_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc prof_info__prof_info__enum_functor_desc_prof_node_type_0_0 = {
  (MR_String) "predicate",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc prof_info__prof_info__enum_functor_desc_prof_node_type_0_1 = {
  (MR_String) "cycle",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr prof_info__prof_info__enum_value_ordered_prof_node_type_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (prof_info____Unify____prof_node_type_0_0_10001)),
  ((MR_Box) (prof_info____Compare____prof_node_type_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "prof_node_type",
  {     prof_info__prof_info__enum_name_ordered_prof_node_type_0 },
  {     prof_info__prof_info__enum_value_ordered_prof_node_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  prof_info__prof_info__functor_number_map_prof_node_type_0
};

static MR_bool MR_CALL 
prof_info____Unify____addrdecl_0_0_10001(
  MR_Box prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2)
{
  {
    MR_bool prof_info__succeeded;

    {
      prof_info__succeeded = prof_info____Unify____addrdecl_0_0(((MR_Word) prof_info__wrapper_arg_1), ((MR_Word) prof_info__wrapper_arg_2));
    }
    return prof_info__succeeded;
  }
}

static void MR_CALL 
prof_info____Compare____addrdecl_0_0_10001(
  MR_Box * prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2,
  MR_Box prof_info__wrapper_arg_3)
{
  {
    MR_Word prof_info__conv0_HeadVar__1_1;

    {
      prof_info____Compare____addrdecl_0_0(&prof_info__conv0_HeadVar__1_1, ((MR_Word) prof_info__wrapper_arg_2), ((MR_Word) prof_info__wrapper_arg_3));
    }
    *prof_info__wrapper_arg_1 = ((MR_Box) (prof_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
prof_info____Unify____cycle_map_0_0_10001(
  MR_Box prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2)
{
  {
    MR_bool prof_info__succeeded;

    {
      prof_info__succeeded = prof_info____Unify____cycle_map_0_0(((MR_Word) prof_info__wrapper_arg_1), ((MR_Word) prof_info__wrapper_arg_2));
    }
    return prof_info__succeeded;
  }
}

static void MR_CALL 
prof_info____Compare____cycle_map_0_0_10001(
  MR_Box * prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2,
  MR_Box prof_info__wrapper_arg_3)
{
  {
    MR_Word prof_info__conv0_HeadVar__1_1;

    {
      prof_info____Compare____cycle_map_0_0(&prof_info__conv0_HeadVar__1_1, ((MR_Word) prof_info__wrapper_arg_2), ((MR_Word) prof_info__wrapper_arg_3));
    }
    *prof_info__wrapper_arg_1 = ((MR_Box) (prof_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
prof_info____Unify____pred_info_0_0_10001(
  MR_Box prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2)
{
  {
    MR_bool prof_info__succeeded;

    {
      prof_info__succeeded = prof_info____Unify____pred_info_0_0(((MR_Word) prof_info__wrapper_arg_1), ((MR_Word) prof_info__wrapper_arg_2));
    }
    return prof_info__succeeded;
  }
}

static void MR_CALL 
prof_info____Compare____pred_info_0_0_10001(
  MR_Box * prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2,
  MR_Box prof_info__wrapper_arg_3)
{
  {
    MR_Word prof_info__conv0_HeadVar__1_1;

    {
      prof_info____Compare____pred_info_0_0(&prof_info__conv0_HeadVar__1_1, ((MR_Word) prof_info__wrapper_arg_2), ((MR_Word) prof_info__wrapper_arg_3));
    }
    *prof_info__wrapper_arg_1 = ((MR_Box) (prof_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
prof_info____Unify____prof_0_0_10001(
  MR_Box prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2)
{
  {
    MR_bool prof_info__succeeded;

    {
      prof_info__succeeded = prof_info____Unify____prof_0_0(((MR_Word) prof_info__wrapper_arg_1), ((MR_Word) prof_info__wrapper_arg_2));
    }
    return prof_info__succeeded;
  }
}

static void MR_CALL 
prof_info____Compare____prof_0_0_10001(
  MR_Box * prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2,
  MR_Box prof_info__wrapper_arg_3)
{
  {
    MR_Word prof_info__conv0_HeadVar__1_1;

    {
      prof_info____Compare____prof_0_0(&prof_info__conv0_HeadVar__1_1, ((MR_Word) prof_info__wrapper_arg_2), ((MR_Word) prof_info__wrapper_arg_3));
    }
    *prof_info__wrapper_arg_1 = ((MR_Box) (prof_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
prof_info____Unify____prof_node_0_0_10001(
  MR_Box prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2)
{
  {
    MR_bool prof_info__succeeded;

    {
      prof_info__succeeded = prof_info____Unify____prof_node_0_0(((MR_Word) prof_info__wrapper_arg_1), ((MR_Word) prof_info__wrapper_arg_2));
    }
    return prof_info__succeeded;
  }
}

static void MR_CALL 
prof_info____Compare____prof_node_0_0_10001(
  MR_Box * prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2,
  MR_Box prof_info__wrapper_arg_3)
{
  {
    MR_Word prof_info__conv0_HeadVar__1_1;

    {
      prof_info____Compare____prof_node_0_0(&prof_info__conv0_HeadVar__1_1, ((MR_Word) prof_info__wrapper_arg_2), ((MR_Word) prof_info__wrapper_arg_3));
    }
    *prof_info__wrapper_arg_1 = ((MR_Box) (prof_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
prof_info____Unify____prof_node_map_0_0_10001(
  MR_Box prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2)
{
  {
    MR_bool prof_info__succeeded;

    {
      prof_info__succeeded = prof_info____Unify____prof_node_map_0_0(((MR_Word) prof_info__wrapper_arg_1), ((MR_Word) prof_info__wrapper_arg_2));
    }
    return prof_info__succeeded;
  }
}

static void MR_CALL 
prof_info____Compare____prof_node_map_0_0_10001(
  MR_Box * prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2,
  MR_Box prof_info__wrapper_arg_3)
{
  {
    MR_Word prof_info__conv0_HeadVar__1_1;

    {
      prof_info____Compare____prof_node_map_0_0(&prof_info__conv0_HeadVar__1_1, ((MR_Word) prof_info__wrapper_arg_2), ((MR_Word) prof_info__wrapper_arg_3));
    }
    *prof_info__wrapper_arg_1 = ((MR_Box) (prof_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
prof_info____Unify____prof_node_type_0_0_10001(
  MR_Box prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2)
{
  {
    MR_bool prof_info__succeeded;

    {
      prof_info__succeeded = prof_info____Unify____prof_node_type_0_0(((MR_Word) prof_info__wrapper_arg_1), ((MR_Word) prof_info__wrapper_arg_2));
    }
    return prof_info__succeeded;
  }
}

static void MR_CALL 
prof_info____Compare____prof_node_type_0_0_10001(
  MR_Box * prof_info__wrapper_arg_1,
  MR_Box prof_info__wrapper_arg_2,
  MR_Box prof_info__wrapper_arg_3)
{
  {
    MR_Word prof_info__conv0_HeadVar__1_1;

    {
      prof_info____Compare____prof_node_type_0_0(&prof_info__conv0_HeadVar__1_1, ((MR_Word) prof_info__wrapper_arg_2), ((MR_Word) prof_info__wrapper_arg_3));
    }
    *prof_info__wrapper_arg_1 = ((MR_Box) (prof_info__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
prof_info____Compare____prof_node_type_0_0(
  MR_Word * prof_info__HeadVar__1_1,
  MR_Word prof_info__HeadVar__2_2,
  MR_Word prof_info__HeadVar__3_3)
{
  {
    MR_bool prof_info__succeeded;
    MR_Integer prof_info__Cast_HeadVar1_4 = (MR_Integer) prof_info__HeadVar__2_2;
    MR_Integer prof_info__Cast_HeadVar2_5 = (MR_Integer) prof_info__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(prof_info__HeadVar__1_1, prof_info__Cast_HeadVar1_4, prof_info__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
prof_info____Unify____prof_node_type_0_0(
  MR_Word prof_info__HeadVar__2_1,
  MR_Word prof_info__HeadVar__2_2)
{
  {
    MR_bool prof_info__succeeded = (prof_info__HeadVar__2_1 == prof_info__HeadVar__2_2);

    return prof_info__succeeded;
  }
}

void MR_CALL 
prof_info____Compare____prof_node_map_0_0(
  MR_Word * prof_info__HeadVar__1_1,
  MR_Word prof_info__HeadVar__2_2,
  MR_Word prof_info__HeadVar__3_3)
{
  {
    MR_bool prof_info__succeeded;
    MR_Word prof_info__Cast_HeadVar1_4 = prof_info__HeadVar__2_2;
    MR_Word prof_info__Cast_HeadVar2_5 = prof_info__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &prof_info_scalar_common_1[1], prof_info__HeadVar__1_1, ((MR_Box) (prof_info__Cast_HeadVar1_4)), ((MR_Box) (prof_info__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
prof_info____Unify____prof_node_map_0_0(
  MR_Word prof_info__HeadVar__1_1,
  MR_Word prof_info__HeadVar__2_2)
{
  {
    MR_bool prof_info__succeeded;
    MR_Word prof_info__Cast_HeadVar1_3 = prof_info__HeadVar__1_1;
    MR_Word prof_info__Cast_HeadVar2_4 = prof_info__HeadVar__2_2;

    {
      prof_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &prof_info_scalar_common_1[1], ((MR_Box) (prof_info__Cast_HeadVar1_3)), ((MR_Box) (prof_info__Cast_HeadVar2_4)));
    }
    return prof_info__succeeded;
  }
}

void MR_CALL 
prof_info____Compare____prof_node_0_0(
  MR_Word * prof_info__HeadVar__1_1,
  MR_Word prof_info__HeadVar__2_2,
  MR_Word prof_info__HeadVar__3_3)
{
  {
    MR_bool prof_info__succeeded;
    MR_Integer prof_info__CastX_82 = (MR_Integer) prof_info__HeadVar__2_2;
    MR_Integer prof_info__CastY_83 = (MR_Integer) prof_info__HeadVar__3_3;

    prof_info__succeeded = (prof_info__CastX_82 == prof_info__CastY_83);
    if (prof_info__succeeded)
      *prof_info__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Integer prof_info__Var_100 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer prof_info__Var_101 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word prof_info__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Float prof_info__Var_103 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer prof_info__Var_104 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer prof_info__Var_105 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_String prof_info__Var_106 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) prof_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String prof_info__Var_69 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer prof_info__Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 1)));
            MR_Integer prof_info__Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 2)));
            MR_Float prof_info__Var_72 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 3)));
            MR_Word prof_info__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 4)));
            MR_Integer prof_info__Var_74 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 5)));
            MR_Integer prof_info__Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 6)));
            MR_Word prof_info__Var_76;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&prof_info__Var_76, prof_info__Var_106, prof_info__Var_69);
            }
            prof_info__succeeded = (prof_info__Var_76 == (MR_Integer) 0);
            prof_info__succeeded = !(prof_info__succeeded);
            if (prof_info__succeeded)
              *prof_info__HeadVar__1_1 = prof_info__Var_76;
            else
              {
                MR_Word prof_info__Var_77;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&prof_info__Var_77, prof_info__Var_105, prof_info__Var_70);
                }
                prof_info__succeeded = (prof_info__Var_77 == (MR_Integer) 0);
                prof_info__succeeded = !(prof_info__succeeded);
                if (prof_info__succeeded)
                  *prof_info__HeadVar__1_1 = prof_info__Var_77;
                else
                  {
                    MR_Word prof_info__Var_78;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&prof_info__Var_78, prof_info__Var_104, prof_info__Var_71);
                    }
                    prof_info__succeeded = (prof_info__Var_78 == (MR_Integer) 0);
                    prof_info__succeeded = !(prof_info__succeeded);
                    if (prof_info__succeeded)
                      *prof_info__HeadVar__1_1 = prof_info__Var_78;
                    else
                      {
                        MR_Word prof_info__Var_79;

                        {
                          mercury__private_builtin__builtin_compare_float_3_p_0(&prof_info__Var_79, prof_info__Var_103, prof_info__Var_72);
                        }
                        prof_info__succeeded = (prof_info__Var_79 == (MR_Integer) 0);
                        prof_info__succeeded = !(prof_info__succeeded);
                        if (prof_info__succeeded)
                          *prof_info__HeadVar__1_1 = prof_info__Var_79;
                        else
                          {
                            MR_Word prof_info__Var_80;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &prof_info_scalar_common_2[0], &prof_info__Var_80, ((MR_Box) (prof_info__Var_102)), ((MR_Box) (prof_info__Var_73)));
                            }
                            prof_info__succeeded = (prof_info__Var_80 == (MR_Integer) 0);
                            prof_info__succeeded = !(prof_info__succeeded);
                            if (prof_info__succeeded)
                              *prof_info__HeadVar__1_1 = prof_info__Var_80;
                            else
                              {
                                MR_Word prof_info__Var_81;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&prof_info__Var_81, prof_info__Var_101, prof_info__Var_74);
                                }
                                prof_info__succeeded = (prof_info__Var_81 == (MR_Integer) 0);
                                prof_info__succeeded = !(prof_info__succeeded);
                                if (prof_info__succeeded)
                                  *prof_info__HeadVar__1_1 = prof_info__Var_81;
                                else
                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(prof_info__HeadVar__1_1, prof_info__Var_100, prof_info__Var_75);
                                  }
                              }
                          }
                      }
                  }
              }
          }
        else
          *prof_info__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word prof_info__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 8)));
        MR_Integer prof_info__Var_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 7)));
        MR_Integer prof_info__Var_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word prof_info__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word prof_info__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Float prof_info__Var_112 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer prof_info__Var_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer prof_info__Var_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_String prof_info__Var_115 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) prof_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *prof_info__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_String prof_info__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer prof_info__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 1)));
            MR_Integer prof_info__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 2)));
            MR_Float prof_info__Var_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 3)));
            MR_Word prof_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 4)));
            MR_Word prof_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 5)));
            MR_Integer prof_info__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 6)));
            MR_Integer prof_info__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 7)));
            MR_Word prof_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 8)));
            MR_Word prof_info__Var_22;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&prof_info__Var_22, prof_info__Var_115, prof_info__Var_13);
            }
            prof_info__succeeded = (prof_info__Var_22 == (MR_Integer) 0);
            prof_info__succeeded = !(prof_info__succeeded);
            if (prof_info__succeeded)
              *prof_info__HeadVar__1_1 = prof_info__Var_22;
            else
              {
                MR_Word prof_info__Var_23;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&prof_info__Var_23, prof_info__Var_114, prof_info__Var_14);
                }
                prof_info__succeeded = (prof_info__Var_23 == (MR_Integer) 0);
                prof_info__succeeded = !(prof_info__succeeded);
                if (prof_info__succeeded)
                  *prof_info__HeadVar__1_1 = prof_info__Var_23;
                else
                  {
                    MR_Word prof_info__Var_24;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&prof_info__Var_24, prof_info__Var_113, prof_info__Var_15);
                    }
                    prof_info__succeeded = (prof_info__Var_24 == (MR_Integer) 0);
                    prof_info__succeeded = !(prof_info__succeeded);
                    if (prof_info__succeeded)
                      *prof_info__HeadVar__1_1 = prof_info__Var_24;
                    else
                      {
                        MR_Word prof_info__Var_25;

                        {
                          mercury__private_builtin__builtin_compare_float_3_p_0(&prof_info__Var_25, prof_info__Var_112, prof_info__Var_16);
                        }
                        prof_info__succeeded = (prof_info__Var_25 == (MR_Integer) 0);
                        prof_info__succeeded = !(prof_info__succeeded);
                        if (prof_info__succeeded)
                          *prof_info__HeadVar__1_1 = prof_info__Var_25;
                        else
                          {
                            MR_Word prof_info__Var_26;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &prof_info_scalar_common_2[0], &prof_info__Var_26, ((MR_Box) (prof_info__Var_111)), ((MR_Box) (prof_info__Var_17)));
                            }
                            prof_info__succeeded = (prof_info__Var_26 == (MR_Integer) 0);
                            prof_info__succeeded = !(prof_info__succeeded);
                            if (prof_info__succeeded)
                              *prof_info__HeadVar__1_1 = prof_info__Var_26;
                            else
                              {
                                MR_Word prof_info__Var_27;

                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &prof_info_scalar_common_2[0], &prof_info__Var_27, ((MR_Box) (prof_info__Var_110)), ((MR_Box) (prof_info__Var_18)));
                                }
                                prof_info__succeeded = (prof_info__Var_27 == (MR_Integer) 0);
                                prof_info__succeeded = !(prof_info__succeeded);
                                if (prof_info__succeeded)
                                  *prof_info__HeadVar__1_1 = prof_info__Var_27;
                                else
                                  {
                                    MR_Word prof_info__Var_28;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&prof_info__Var_28, prof_info__Var_109, prof_info__Var_19);
                                    }
                                    prof_info__succeeded = (prof_info__Var_28 == (MR_Integer) 0);
                                    prof_info__succeeded = !(prof_info__succeeded);
                                    if (prof_info__succeeded)
                                      *prof_info__HeadVar__1_1 = prof_info__Var_28;
                                    else
                                      {
                                        MR_Word prof_info__Var_29;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&prof_info__Var_29, prof_info__Var_108, prof_info__Var_20);
                                        }
                                        prof_info__succeeded = (prof_info__Var_29 == (MR_Integer) 0);
                                        prof_info__succeeded = !(prof_info__succeeded);
                                        if (prof_info__succeeded)
                                          *prof_info__HeadVar__1_1 = prof_info__Var_29;
                                        else
                                          {
                                            {
                                              mercury__builtin__compare_3_p_0((MR_Word) &prof_info_scalar_common_2[1], prof_info__HeadVar__1_1, ((MR_Box) (prof_info__Var_107)), ((MR_Box) (prof_info__Var_21)));
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
      }
  }
}

MR_bool MR_CALL 
prof_info____Unify____prof_node_0_0(
  MR_Word prof_info__HeadVar__1_1,
  MR_Word prof_info__HeadVar__2_2)
{
  {
    MR_bool prof_info__succeeded;
    MR_Integer prof_info__CastX_35 = (MR_Integer) prof_info__HeadVar__1_1;
    MR_Integer prof_info__CastY_36 = (MR_Integer) prof_info__HeadVar__2_2;

    prof_info__succeeded = (prof_info__CastX_35 == prof_info__CastY_36);
    if (prof_info__succeeded)
      prof_info__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word prof_info__TypeInfo_37_37;
        MR_String prof_info__Var_21 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer prof_info__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer prof_info__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Float prof_info__Var_24 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word prof_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer prof_info__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 5)));
        MR_Integer prof_info__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 6)));
        MR_String prof_info__Var_28;
        MR_Integer prof_info__Var_29;
        MR_Integer prof_info__Var_30;
        MR_Float prof_info__Var_31;
        MR_Word prof_info__Var_32;
        MR_Integer prof_info__Var_33;
        MR_Integer prof_info__Var_34;

        prof_info__succeeded = ((MR_tag((MR_Word) prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (prof_info__succeeded)
          {
            prof_info__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 0)));
            prof_info__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 1)));
            prof_info__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 2)));
            prof_info__Var_31 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 3)));
            prof_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 4)));
            prof_info__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 5)));
            prof_info__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 6)));
            prof_info__succeeded = (strcmp(prof_info__Var_21, prof_info__Var_28) == 0);
            if (prof_info__succeeded)
              {
                prof_info__succeeded = (prof_info__Var_22 == prof_info__Var_29);
                if (prof_info__succeeded)
                  {
                    prof_info__succeeded = (prof_info__Var_23 == prof_info__Var_30);
                    if (prof_info__succeeded)
                      {
                        prof_info__succeeded = (prof_info__Var_24 == prof_info__Var_31);
                        if (prof_info__succeeded)
                          {
                            prof_info__TypeInfo_37_37 = (MR_Word) &prof_info_scalar_common_2[0];
                            {
                              prof_info__succeeded = mercury__builtin__unify_2_p_0(prof_info__TypeInfo_37_37, ((MR_Box) (prof_info__Var_25)), ((MR_Box) (prof_info__Var_32)));
                            }
                            if (prof_info__succeeded)
                              {
                                prof_info__succeeded = (prof_info__Var_26 == prof_info__Var_33);
                                if (prof_info__succeeded)
                                  prof_info__succeeded = (prof_info__Var_27 == prof_info__Var_34);
                              }
                          }
                      }
                  }
              }
          }
      }
    else
      {
        MR_Word prof_info__TypeInfo_38_38;
        MR_Word prof_info__TypeInfo_39_39;
        MR_Word prof_info__TypeInfo_40_40;
        MR_String prof_info__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer prof_info__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer prof_info__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Float prof_info__Var_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word prof_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word prof_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
        MR_Integer prof_info__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 6)));
        MR_Integer prof_info__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word prof_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 8)));
        MR_String prof_info__Var_12;
        MR_Integer prof_info__Var_13;
        MR_Integer prof_info__Var_14;
        MR_Float prof_info__Var_15;
        MR_Word prof_info__Var_16;
        MR_Word prof_info__Var_17;
        MR_Integer prof_info__Var_18;
        MR_Integer prof_info__Var_19;
        MR_Word prof_info__Var_20;

        prof_info__succeeded = ((MR_tag((MR_Word) prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (prof_info__succeeded)
          {
            prof_info__Var_12 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
            prof_info__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));
            prof_info__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 2)));
            prof_info__Var_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 3)));
            prof_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 4)));
            prof_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 5)));
            prof_info__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 6)));
            prof_info__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 7)));
            prof_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 8)));
            prof_info__succeeded = (strcmp(prof_info__Var_3, prof_info__Var_12) == 0);
            if (prof_info__succeeded)
              {
                prof_info__succeeded = (prof_info__Var_4 == prof_info__Var_13);
                if (prof_info__succeeded)
                  {
                    prof_info__succeeded = (prof_info__Var_5 == prof_info__Var_14);
                    if (prof_info__succeeded)
                      {
                        prof_info__succeeded = (prof_info__Var_6 == prof_info__Var_15);
                        if (prof_info__succeeded)
                          {
                            prof_info__TypeInfo_38_38 = (MR_Word) &prof_info_scalar_common_2[0];
                            {
                              prof_info__succeeded = mercury__builtin__unify_2_p_0(prof_info__TypeInfo_38_38, ((MR_Box) (prof_info__Var_7)), ((MR_Box) (prof_info__Var_16)));
                            }
                            if (prof_info__succeeded)
                              {
                                prof_info__TypeInfo_39_39 = (MR_Word) &prof_info_scalar_common_2[0];
                                {
                                  prof_info__succeeded = mercury__builtin__unify_2_p_0(prof_info__TypeInfo_39_39, ((MR_Box) (prof_info__Var_8)), ((MR_Box) (prof_info__Var_17)));
                                }
                                if (prof_info__succeeded)
                                  {
                                    prof_info__succeeded = (prof_info__Var_9 == prof_info__Var_18);
                                    if (prof_info__succeeded)
                                      {
                                        prof_info__succeeded = (prof_info__Var_10 == prof_info__Var_19);
                                        if (prof_info__succeeded)
                                          {
                                            prof_info__TypeInfo_40_40 = (MR_Word) &prof_info_scalar_common_2[1];
                                            {
                                              prof_info__succeeded = mercury__builtin__unify_2_p_0(prof_info__TypeInfo_40_40, ((MR_Box) (prof_info__Var_11)), ((MR_Box) (prof_info__Var_20)));
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
      }
    return prof_info__succeeded;
  }
}

void MR_CALL 
prof_info____Compare____prof_0_0(
  MR_Word * prof_info__HeadVar__1_1,
  MR_Word prof_info__HeadVar__2_2,
  MR_Word prof_info__HeadVar__3_3)
{
  {
    MR_bool prof_info__succeeded;
    MR_Integer prof_info__CastX_21 = (MR_Integer) prof_info__HeadVar__2_2;
    MR_Integer prof_info__CastY_22 = (MR_Integer) prof_info__HeadVar__3_3;

    prof_info__succeeded = (prof_info__CastX_21 == prof_info__CastY_22);
    if (prof_info__succeeded)
      *prof_info__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Float prof_info__Var_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_String prof_info__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer prof_info__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word prof_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word prof_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word prof_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Float prof_info__Var_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_String prof_info__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer prof_info__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word prof_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word prof_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word prof_info__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word prof_info__Var_16;

        {
          mercury__private_builtin__builtin_compare_float_3_p_0(&prof_info__Var_16, prof_info__Var_4, prof_info__Var_10);
        }
        prof_info__succeeded = (prof_info__Var_16 == (MR_Integer) 0);
        prof_info__succeeded = !(prof_info__succeeded);
        if (prof_info__succeeded)
          *prof_info__HeadVar__1_1 = prof_info__Var_16;
        else
          {
            MR_Word prof_info__Var_17;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&prof_info__Var_17, prof_info__Var_5, prof_info__Var_11);
            }
            prof_info__succeeded = (prof_info__Var_17 == (MR_Integer) 0);
            prof_info__succeeded = !(prof_info__succeeded);
            if (prof_info__succeeded)
              *prof_info__HeadVar__1_1 = prof_info__Var_17;
            else
              {
                MR_Word prof_info__Var_18;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&prof_info__Var_18, prof_info__Var_6, prof_info__Var_12);
                }
                prof_info__succeeded = (prof_info__Var_18 == (MR_Integer) 0);
                prof_info__succeeded = !(prof_info__succeeded);
                if (prof_info__succeeded)
                  *prof_info__HeadVar__1_1 = prof_info__Var_18;
                else
                  {
                    MR_Word prof_info__Var_19;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &prof_info_scalar_common_1[0], &prof_info__Var_19, ((MR_Box) (prof_info__Var_7)), ((MR_Box) (prof_info__Var_13)));
                    }
                    prof_info__succeeded = (prof_info__Var_19 == (MR_Integer) 0);
                    prof_info__succeeded = !(prof_info__succeeded);
                    if (prof_info__succeeded)
                      *prof_info__HeadVar__1_1 = prof_info__Var_19;
                    else
                      {
                        MR_Word prof_info__Var_20;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &prof_info_scalar_common_1[1], &prof_info__Var_20, ((MR_Box) (prof_info__Var_8)), ((MR_Box) (prof_info__Var_14)));
                        }
                        prof_info__succeeded = (prof_info__Var_20 == (MR_Integer) 0);
                        prof_info__succeeded = !(prof_info__succeeded);
                        if (prof_info__succeeded)
                          *prof_info__HeadVar__1_1 = prof_info__Var_20;
                        else
                          {
                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &prof_info_scalar_common_1[0], prof_info__HeadVar__1_1, ((MR_Box) (prof_info__Var_9)), ((MR_Box) (prof_info__Var_15)));
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
prof_info____Unify____prof_0_0(
  MR_Word prof_info__HeadVar__1_1,
  MR_Word prof_info__HeadVar__2_2)
{
  {
    MR_bool prof_info__succeeded;
    MR_Integer prof_info__CastX_15 = (MR_Integer) prof_info__HeadVar__1_1;
    MR_Integer prof_info__CastY_16 = (MR_Integer) prof_info__HeadVar__2_2;

    prof_info__succeeded = (prof_info__CastX_15 == prof_info__CastY_16);
    if (prof_info__succeeded)
      prof_info__succeeded = MR_TRUE;
    else
      {
        MR_Word prof_info__TypeInfo_17_17;
        MR_Word prof_info__TypeInfo_18_18;
        MR_Word prof_info__TypeInfo_19_19;
        MR_Float prof_info__Var_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_String prof_info__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer prof_info__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word prof_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word prof_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word prof_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
        MR_Float prof_info__Var_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_String prof_info__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer prof_info__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word prof_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word prof_info__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word prof_info__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 5)));

        prof_info__succeeded = (prof_info__Var_3 == prof_info__Var_9);
        if (prof_info__succeeded)
          {
            prof_info__succeeded = (strcmp(prof_info__Var_4, prof_info__Var_10) == 0);
            if (prof_info__succeeded)
              {
                prof_info__succeeded = (prof_info__Var_5 == prof_info__Var_11);
                if (prof_info__succeeded)
                  {
                    prof_info__TypeInfo_17_17 = (MR_Word) &prof_info_scalar_common_1[0];
                    {
                      prof_info__succeeded = mercury__builtin__unify_2_p_0(prof_info__TypeInfo_17_17, ((MR_Box) (prof_info__Var_6)), ((MR_Box) (prof_info__Var_12)));
                    }
                    if (prof_info__succeeded)
                      {
                        prof_info__TypeInfo_18_18 = (MR_Word) &prof_info_scalar_common_1[1];
                        {
                          prof_info__succeeded = mercury__builtin__unify_2_p_0(prof_info__TypeInfo_18_18, ((MR_Box) (prof_info__Var_7)), ((MR_Box) (prof_info__Var_13)));
                        }
                        if (prof_info__succeeded)
                          {
                            prof_info__TypeInfo_19_19 = (MR_Word) &prof_info_scalar_common_1[0];
                            {
                              prof_info__succeeded = mercury__builtin__unify_2_p_0(prof_info__TypeInfo_19_19, ((MR_Box) (prof_info__Var_8)), ((MR_Box) (prof_info__Var_14)));
                            }
                          }
                      }
                  }
              }
          }
      }
    return prof_info__succeeded;
  }
}

void MR_CALL 
prof_info____Compare____pred_info_0_0(
  MR_Word * prof_info__HeadVar__1_1,
  MR_Word prof_info__HeadVar__2_2,
  MR_Word prof_info__HeadVar__3_3)
{
  {
    MR_bool prof_info__succeeded;
    MR_Integer prof_info__CastX_9 = (MR_Integer) prof_info__HeadVar__2_2;
    MR_Integer prof_info__CastY_10 = (MR_Integer) prof_info__HeadVar__3_3;

    prof_info__succeeded = (prof_info__CastX_9 == prof_info__CastY_10);
    if (prof_info__succeeded)
      *prof_info__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String prof_info__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer prof_info__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_String prof_info__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer prof_info__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word prof_info__Var_8;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&prof_info__Var_8, prof_info__Var_4, prof_info__Var_6);
        }
        prof_info__succeeded = (prof_info__Var_8 == (MR_Integer) 0);
        prof_info__succeeded = !(prof_info__succeeded);
        if (prof_info__succeeded)
          *prof_info__HeadVar__1_1 = prof_info__Var_8;
        else
          {
            mercury__private_builtin__builtin_compare_int_3_p_0(prof_info__HeadVar__1_1, prof_info__Var_5, prof_info__Var_7);
          }
      }
  }
}

MR_bool MR_CALL 
prof_info____Unify____pred_info_0_0(
  MR_Word prof_info__HeadVar__1_1,
  MR_Word prof_info__HeadVar__2_2)
{
  {
    MR_bool prof_info__succeeded;
    MR_Integer prof_info__CastX_7 = (MR_Integer) prof_info__HeadVar__1_1;
    MR_Integer prof_info__CastY_8 = (MR_Integer) prof_info__HeadVar__2_2;

    prof_info__succeeded = (prof_info__CastX_7 == prof_info__CastY_8);
    if (prof_info__succeeded)
      prof_info__succeeded = MR_TRUE;
    else
      {
        MR_String prof_info__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer prof_info__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_String prof_info__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer prof_info__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));

        prof_info__succeeded = (strcmp(prof_info__Var_3, prof_info__Var_5) == 0);
        if (prof_info__succeeded)
          prof_info__succeeded = (prof_info__Var_4 == prof_info__Var_6);
      }
    return prof_info__succeeded;
  }
}

void MR_CALL 
prof_info____Compare____cycle_map_0_0(
  MR_Word * prof_info__HeadVar__1_1,
  MR_Word prof_info__HeadVar__2_2,
  MR_Word prof_info__HeadVar__3_3)
{
  {
    MR_bool prof_info__succeeded;
    MR_Word prof_info__Cast_HeadVar1_4 = prof_info__HeadVar__2_2;
    MR_Word prof_info__Cast_HeadVar2_5 = prof_info__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &prof_info_scalar_common_1[0], prof_info__HeadVar__1_1, ((MR_Box) (prof_info__Cast_HeadVar1_4)), ((MR_Box) (prof_info__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
prof_info____Unify____cycle_map_0_0(
  MR_Word prof_info__HeadVar__1_1,
  MR_Word prof_info__HeadVar__2_2)
{
  {
    MR_bool prof_info__succeeded;
    MR_Word prof_info__Cast_HeadVar1_3 = prof_info__HeadVar__1_1;
    MR_Word prof_info__Cast_HeadVar2_4 = prof_info__HeadVar__2_2;

    {
      prof_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &prof_info_scalar_common_1[0], ((MR_Box) (prof_info__Cast_HeadVar1_3)), ((MR_Box) (prof_info__Cast_HeadVar2_4)));
    }
    return prof_info__succeeded;
  }
}

void MR_CALL 
prof_info____Compare____addrdecl_0_0(
  MR_Word * prof_info__HeadVar__1_1,
  MR_Word prof_info__HeadVar__2_2,
  MR_Word prof_info__HeadVar__3_3)
{
  {
    MR_bool prof_info__succeeded;
    MR_Word prof_info__Cast_HeadVar1_4 = prof_info__HeadVar__2_2;
    MR_Word prof_info__Cast_HeadVar2_5 = prof_info__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &prof_info_scalar_common_1[0], prof_info__HeadVar__1_1, ((MR_Box) (prof_info__Cast_HeadVar1_4)), ((MR_Box) (prof_info__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
prof_info____Unify____addrdecl_0_0(
  MR_Word prof_info__HeadVar__1_1,
  MR_Word prof_info__HeadVar__2_2)
{
  {
    MR_bool prof_info__succeeded;
    MR_Word prof_info__Cast_HeadVar1_3 = prof_info__HeadVar__1_1;
    MR_Word prof_info__Cast_HeadVar2_4 = prof_info__HeadVar__2_2;

    {
      prof_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &prof_info_scalar_common_1[0], ((MR_Box) (prof_info__Cast_HeadVar1_3)), ((MR_Box) (prof_info__Cast_HeadVar2_4)));
    }
    return prof_info__succeeded;
  }
}

void MR_CALL 
prof_info__pred_info_get_counts_2_p_0(
  MR_Word prof_info__Pred_3,
  MR_Integer * prof_info__HeadVar__2_2)
{
  {
    MR_bool prof_info__succeeded;
    MR_String prof_info__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__Pred_3, (MR_Integer) 0)));

    *prof_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__Pred_3, (MR_Integer) 1)));
  }
}

void MR_CALL 
prof_info__pred_info_get_pred_name_2_p_0(
  MR_Word prof_info__Pred_3,
  MR_String * prof_info__HeadVar__2_2)
{
  {
    MR_bool prof_info__succeeded;
    MR_Integer prof_info__Var_4;

    *prof_info__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__Pred_3, (MR_Integer) 0)));
    prof_info__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__Pred_3, (MR_Integer) 1)));
  }
}

void MR_CALL 
prof_info__pred_info_get_entire_3_p_0(
  MR_Word prof_info__HeadVar__1_1,
  MR_String * prof_info__A_4,
  MR_Integer * prof_info__B_5)
{
  {
    MR_bool prof_info__succeeded;

    *prof_info__A_4 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
    *prof_info__B_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
  }
}

void MR_CALL 
prof_info__pred_info_init_3_p_0(
  MR_String prof_info__Name_4,
  MR_Integer prof_info__Count_5,
  MR_Word * prof_info__HeadVar__3_3)
{
  {
    MR_bool prof_info__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *prof_info__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (prof_info__Name_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__Count_5));
    }
  }
}

void MR_CALL 
prof_info__prof_node_concat_to_member_4_p_0(
  MR_String prof_info__Name_1,
  MR_Integer prof_info__Count_2,
  MR_Word prof_info__HeadVar__3_3,
  MR_Word * prof_info__HeadVar__4_4)
{
  {
    MR_bool prof_info__succeeded;

    if (((MR_tag((MR_Word) prof_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String prof_info__A_7 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer prof_info__B_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer prof_info__C_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 2)));
        MR_Float prof_info__D_10 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word prof_info__CList_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 4)));
        MR_Integer prof_info__F_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 5)));
        MR_Integer prof_info__G_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word prof_info__Var_14;
        MR_Word prof_info__Var_15;

        {
          prof_info__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), prof_info__Var_15, 0) = ((MR_Box) (prof_info__Name_1));
          MR_hl_field(MR_mktag(0), prof_info__Var_15, 1) = ((MR_Box) (prof_info__Count_2));
        }
        {
          prof_info__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), prof_info__Var_14, 0) = ((MR_Box) (prof_info__Var_15));
          MR_hl_field(MR_mktag(1), prof_info__Var_14, 1) = ((MR_Box) (prof_info__CList_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          *prof_info__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (prof_info__A_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (prof_info__B_8));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (prof_info__C_9));
          MR_hl_field(MR_mktag(1), base, 3) = MR_box_float(prof_info__D_10);
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (prof_info__Var_14));
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (prof_info__F_12));
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (prof_info__G_13));
        }
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "prof_node_concat_to_member: pred_node has no members\n");
          return;
        }
      }
  }
}

void MR_CALL 
prof_info__prof_node_concat_to_name_list_3_p_0(
  MR_String prof_info__Name_1,
  MR_Word prof_info__HeadVar__2_2,
  MR_Word * prof_info__HeadVar__3_3)
{
  {
    MR_bool prof_info__succeeded;

    if (((MR_tag((MR_Word) prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__error_1_p_0((MR_String) "prof_node_concat_to_name_list: cycle_node has no namelist\n");
          return;
        }
      }
    else
      {
        MR_String prof_info__A_5 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer prof_info__B_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer prof_info__C_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Float prof_info__D_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word prof_info__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word prof_info__F_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer prof_info__G_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer prof_info__H_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word prof_info__NL_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word prof_info__Var_14;

        {
          prof_info__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), prof_info__Var_14, 0) = ((MR_Box) (prof_info__Name_1));
          MR_hl_field(MR_mktag(1), prof_info__Var_14, 1) = ((MR_Box) (prof_info__NL_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
          *prof_info__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (prof_info__A_5));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__B_6));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__C_7));
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(prof_info__D_8);
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__E_9));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__F_10));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (prof_info__G_11));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (prof_info__H_12));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (prof_info__Var_14));
        }
      }
  }
}

void MR_CALL 
prof_info__prof_node_set_self_calls_3_p_0(
  MR_Integer prof_info__Calls_1,
  MR_Word prof_info__HeadVar__2_2,
  MR_Word * prof_info__HeadVar__3_3)
{
  {
    MR_bool prof_info__succeeded;

    if (((MR_tag((MR_Word) prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String prof_info__A_15 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer prof_info__B_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer prof_info__C_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Float prof_info__D_18 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word prof_info__E_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer prof_info__F_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer prof_info__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 6)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          *prof_info__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (prof_info__A_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (prof_info__B_16));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (prof_info__C_17));
          MR_hl_field(MR_mktag(1), base, 3) = MR_box_float(prof_info__D_18);
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (prof_info__E_19));
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (prof_info__F_20));
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (prof_info__Calls_1));
        }
      }
    else
      {
        MR_String prof_info__A_5 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer prof_info__B_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer prof_info__C_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Float prof_info__D_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word prof_info__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word prof_info__F_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer prof_info__G_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word prof_info__I_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 8)));
        MR_Integer prof_info__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 7)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
          *prof_info__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (prof_info__A_5));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__B_6));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__C_7));
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(prof_info__D_8);
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__E_9));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__F_10));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (prof_info__G_11));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (prof_info__Calls_1));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (prof_info__I_13));
        }
      }
  }
}

void MR_CALL 
prof_info__prof_node_set_total_calls_3_p_0(
  MR_Integer prof_info__Calls_1,
  MR_Word prof_info__HeadVar__2_2,
  MR_Word * prof_info__HeadVar__3_3)
{
  {
    MR_bool prof_info__succeeded;

    if (((MR_tag((MR_Word) prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String prof_info__A_15 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer prof_info__B_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer prof_info__C_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Float prof_info__D_18 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word prof_info__E_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer prof_info__G_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer prof_info__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 5)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          *prof_info__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (prof_info__A_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (prof_info__B_16));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (prof_info__C_17));
          MR_hl_field(MR_mktag(1), base, 3) = MR_box_float(prof_info__D_18);
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (prof_info__E_19));
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (prof_info__Calls_1));
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (prof_info__G_21));
        }
      }
    else
      {
        MR_String prof_info__A_5 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer prof_info__B_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer prof_info__C_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Float prof_info__D_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word prof_info__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word prof_info__F_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer prof_info__H_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word prof_info__I_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 8)));
        MR_Integer prof_info__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 6)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
          *prof_info__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (prof_info__A_5));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__B_6));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__C_7));
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(prof_info__D_8);
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__E_9));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__F_10));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (prof_info__Calls_1));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (prof_info__H_12));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (prof_info__I_13));
        }
      }
  }
}

void MR_CALL 
prof_info__prof_node_concat_to_child_4_p_0(
  MR_String prof_info__Name_1,
  MR_Integer prof_info__Count_2,
  MR_Word prof_info__HeadVar__3_3,
  MR_Word * prof_info__HeadVar__4_4)
{
  {
    MR_bool prof_info__succeeded;

    if (((MR_tag((MR_Word) prof_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__error_1_p_0((MR_String) "prof_node_concat_to_child: cycle_node has no child\n");
          return;
        }
      }
    else
      {
        MR_String prof_info__A_7 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer prof_info__B_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer prof_info__C_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 2)));
        MR_Float prof_info__D_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word prof_info__E_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word prof_info__CList_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 5)));
        MR_Integer prof_info__G_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 6)));
        MR_Integer prof_info__H_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word prof_info__I_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word prof_info__Var_16;
        MR_Word prof_info__Var_17;

        {
          prof_info__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), prof_info__Var_17, 0) = ((MR_Box) (prof_info__Name_1));
          MR_hl_field(MR_mktag(0), prof_info__Var_17, 1) = ((MR_Box) (prof_info__Count_2));
        }
        {
          prof_info__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), prof_info__Var_16, 0) = ((MR_Box) (prof_info__Var_17));
          MR_hl_field(MR_mktag(1), prof_info__Var_16, 1) = ((MR_Box) (prof_info__CList_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
          *prof_info__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (prof_info__A_7));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__B_8));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__C_9));
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(prof_info__D_10);
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__E_11));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__Var_16));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (prof_info__G_13));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (prof_info__H_14));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (prof_info__I_15));
        }
      }
  }
}

void MR_CALL 
prof_info__prof_node_concat_to_parent_4_p_0(
  MR_String prof_info__Name_1,
  MR_Integer prof_info__Count_2,
  MR_Word prof_info__HeadVar__3_3,
  MR_Word * prof_info__HeadVar__4_4)
{
  {
    MR_bool prof_info__succeeded;

    if (((MR_tag((MR_Word) prof_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__error_1_p_0((MR_String) "prof_node_concat_to_parent: cycle_node has no parents\n");
          return;
        }
      }
    else
      {
        MR_String prof_info__A_7 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer prof_info__B_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer prof_info__C_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 2)));
        MR_Float prof_info__D_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word prof_info__PList_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word prof_info__F_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 5)));
        MR_Integer prof_info__G_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 6)));
        MR_Integer prof_info__H_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word prof_info__I_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word prof_info__Var_16;
        MR_Word prof_info__Var_17;

        {
          prof_info__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), prof_info__Var_17, 0) = ((MR_Box) (prof_info__Name_1));
          MR_hl_field(MR_mktag(0), prof_info__Var_17, 1) = ((MR_Box) (prof_info__Count_2));
        }
        {
          prof_info__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), prof_info__Var_16, 0) = ((MR_Box) (prof_info__Var_17));
          MR_hl_field(MR_mktag(1), prof_info__Var_16, 1) = ((MR_Box) (prof_info__PList_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
          *prof_info__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (prof_info__A_7));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__B_8));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__C_9));
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(prof_info__D_10);
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__Var_16));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__F_12));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (prof_info__G_13));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (prof_info__H_14));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (prof_info__I_15));
        }
      }
  }
}

void MR_CALL 
prof_info__prof_node_set_propagated_counts_3_p_0(
  MR_Float prof_info__Count_1,
  MR_Word prof_info__HeadVar__2_2,
  MR_Word * prof_info__HeadVar__3_3)
{
  {
    MR_bool prof_info__succeeded;

    if (((MR_tag((MR_Word) prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String prof_info__A_15 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer prof_info__B_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer prof_info__C_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word prof_info__E_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer prof_info__F_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer prof_info__G_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Float prof_info__Var_18 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 3)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          *prof_info__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (prof_info__A_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (prof_info__B_16));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (prof_info__C_17));
          MR_hl_field(MR_mktag(1), base, 3) = MR_box_float(prof_info__Count_1);
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (prof_info__E_19));
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (prof_info__F_20));
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (prof_info__G_21));
        }
      }
    else
      {
        MR_String prof_info__A_5 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer prof_info__B_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer prof_info__C_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word prof_info__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word prof_info__F_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer prof_info__G_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer prof_info__H_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word prof_info__I_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 8)));
        MR_Float prof_info__Var_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 3)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
          *prof_info__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (prof_info__A_5));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__B_6));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__C_7));
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(prof_info__Count_1);
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__E_9));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__F_10));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (prof_info__G_11));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (prof_info__H_12));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (prof_info__I_13));
        }
      }
  }
}

void MR_CALL 
prof_info__prof_node_set_initial_counts_3_p_0(
  MR_Integer prof_info__Count_1,
  MR_Word prof_info__HeadVar__2_2,
  MR_Word * prof_info__HeadVar__3_3)
{
  {
    MR_bool prof_info__succeeded;

    if (((MR_tag((MR_Word) prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String prof_info__A_15 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer prof_info__B_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Float prof_info__D_18 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word prof_info__E_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer prof_info__F_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer prof_info__G_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer prof_info__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 2)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          *prof_info__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (prof_info__A_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (prof_info__B_16));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (prof_info__Count_1));
          MR_hl_field(MR_mktag(1), base, 3) = MR_box_float(prof_info__D_18);
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (prof_info__E_19));
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (prof_info__F_20));
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (prof_info__G_21));
        }
      }
    else
      {
        MR_String prof_info__A_5 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer prof_info__B_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Float prof_info__D_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word prof_info__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word prof_info__F_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer prof_info__G_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer prof_info__H_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word prof_info__I_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 8)));
        MR_Integer prof_info__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 2)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
          *prof_info__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (prof_info__A_5));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__B_6));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__Count_1));
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(prof_info__D_8);
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__E_9));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__F_10));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (prof_info__G_11));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (prof_info__H_12));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (prof_info__I_13));
        }
      }
  }
}

void MR_CALL 
prof_info__prof_node_set_cycle_num_3_p_0(
  MR_Integer prof_info__Cycle_1,
  MR_Word prof_info__HeadVar__2_2,
  MR_Word * prof_info__HeadVar__3_3)
{
  {
    MR_bool prof_info__succeeded;

    if (((MR_tag((MR_Word) prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String prof_info__A_15 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer prof_info__C_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Float prof_info__D_18 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word prof_info__E_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer prof_info__F_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer prof_info__G_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer prof_info__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 1)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          *prof_info__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (prof_info__A_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (prof_info__Cycle_1));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (prof_info__C_17));
          MR_hl_field(MR_mktag(1), base, 3) = MR_box_float(prof_info__D_18);
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (prof_info__E_19));
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (prof_info__F_20));
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (prof_info__G_21));
        }
      }
    else
      {
        MR_String prof_info__A_5 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer prof_info__C_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Float prof_info__D_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word prof_info__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word prof_info__F_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer prof_info__G_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer prof_info__H_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word prof_info__I_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 8)));
        MR_Integer prof_info__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
          *prof_info__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (prof_info__A_5));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__Cycle_1));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__C_7));
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(prof_info__D_8);
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__E_9));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__F_10));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (prof_info__G_11));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (prof_info__H_12));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (prof_info__I_13));
        }
      }
  }
}

void MR_CALL 
prof_info__prof_node_get_self_calls_2_p_0(
  MR_Word prof_info__HeadVar__1_1,
  MR_Integer * prof_info__Calls_2)
{
  {
    MR_bool prof_info__succeeded;

    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String prof_info__Var_12 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer prof_info__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer prof_info__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Float prof_info__Var_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word prof_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer prof_info__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 5)));

        *prof_info__Calls_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 6)));
      }
    else
      {
        MR_String prof_info__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer prof_info__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer prof_info__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Float prof_info__Var_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word prof_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word prof_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
        MR_Integer prof_info__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word prof_info__Var_11;

        *prof_info__Calls_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 7)));
        prof_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 8)));
      }
  }
}

void MR_CALL 
prof_info__prof_node_get_total_calls_2_p_0(
  MR_Word prof_info__HeadVar__1_1,
  MR_Integer * prof_info__Calls_2)
{
  {
    MR_bool prof_info__succeeded;

    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String prof_info__Var_12 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer prof_info__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer prof_info__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Float prof_info__Var_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word prof_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer prof_info__Var_18;

        *prof_info__Calls_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 5)));
        prof_info__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 6)));
      }
    else
      {
        MR_String prof_info__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer prof_info__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer prof_info__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Float prof_info__Var_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word prof_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word prof_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
        MR_Integer prof_info__Var_10;
        MR_Word prof_info__Var_11;

        *prof_info__Calls_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 6)));
        prof_info__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 7)));
        prof_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 8)));
      }
  }
}

void MR_CALL 
prof_info__prof_node_get_child_list_2_p_0(
  MR_Word prof_info__HeadVar__1_1,
  MR_Word * prof_info__Clist_2)
{
  {
    MR_bool prof_info__succeeded;

    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__error_1_p_0((MR_String) "prof_node_get_child_list: cycle_node has no child list\n");
          return;
        }
      }
    else
      {
        MR_String prof_info__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer prof_info__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer prof_info__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Float prof_info__Var_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word prof_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer prof_info__Var_9;
        MR_Integer prof_info__Var_10;
        MR_Word prof_info__Var_11;

        *prof_info__Clist_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
        prof_info__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 6)));
        prof_info__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 7)));
        prof_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 8)));
      }
  }
}

void MR_CALL 
prof_info__prof_node_get_parent_list_2_p_0(
  MR_Word prof_info__HeadVar__1_1,
  MR_Word * prof_info__PList_2)
{
  {
    MR_bool prof_info__succeeded;

    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__error_1_p_0((MR_String) "prof_node_get_parent_list: cycle_node has no parent list\n");
          return;
        }
      }
    else
      {
        MR_String prof_info__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer prof_info__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer prof_info__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Float prof_info__Var_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word prof_info__Var_8;
        MR_Integer prof_info__Var_9;
        MR_Integer prof_info__Var_10;
        MR_Word prof_info__Var_11;

        *prof_info__PList_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
        prof_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
        prof_info__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 6)));
        prof_info__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 7)));
        prof_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 8)));
      }
  }
}

void MR_CALL 
prof_info__prof_node_get_propagated_counts_2_p_0(
  MR_Word prof_info__HeadVar__1_1,
  MR_Float * prof_info__Count_2)
{
  {
    MR_bool prof_info__succeeded;

    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String prof_info__Var_12 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer prof_info__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer prof_info__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word prof_info__Var_16;
        MR_Integer prof_info__Var_17;
        MR_Integer prof_info__Var_18;

        *prof_info__Count_2 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 3)));
        prof_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 4)));
        prof_info__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 5)));
        prof_info__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 6)));
      }
    else
      {
        MR_String prof_info__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer prof_info__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer prof_info__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word prof_info__Var_7;
        MR_Word prof_info__Var_8;
        MR_Integer prof_info__Var_9;
        MR_Integer prof_info__Var_10;
        MR_Word prof_info__Var_11;

        *prof_info__Count_2 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
        prof_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
        prof_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
        prof_info__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 6)));
        prof_info__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 7)));
        prof_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 8)));
      }
  }
}

void MR_CALL 
prof_info__prof_node_get_initial_counts_2_p_0(
  MR_Word prof_info__HeadVar__1_1,
  MR_Integer * prof_info__Count_2)
{
  {
    MR_bool prof_info__succeeded;

    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String prof_info__Var_12 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer prof_info__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Float prof_info__Var_15;
        MR_Word prof_info__Var_16;
        MR_Integer prof_info__Var_17;
        MR_Integer prof_info__Var_18;

        *prof_info__Count_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 2)));
        prof_info__Var_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 3)));
        prof_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 4)));
        prof_info__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 5)));
        prof_info__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 6)));
      }
    else
      {
        MR_String prof_info__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer prof_info__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Float prof_info__Var_6;
        MR_Word prof_info__Var_7;
        MR_Word prof_info__Var_8;
        MR_Integer prof_info__Var_9;
        MR_Integer prof_info__Var_10;
        MR_Word prof_info__Var_11;

        *prof_info__Count_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
        prof_info__Var_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
        prof_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
        prof_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
        prof_info__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 6)));
        prof_info__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 7)));
        prof_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 8)));
      }
  }
}

void MR_CALL 
prof_info__prof_node_get_cycle_number_2_p_0(
  MR_Word prof_info__HeadVar__1_1,
  MR_Integer * prof_info__Cycle_2)
{
  {
    MR_bool prof_info__succeeded;

    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String prof_info__Var_12 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer prof_info__Var_14;
        MR_Float prof_info__Var_15;
        MR_Word prof_info__Var_16;
        MR_Integer prof_info__Var_17;
        MR_Integer prof_info__Var_18;

        *prof_info__Cycle_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 1)));
        prof_info__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 2)));
        prof_info__Var_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 3)));
        prof_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 4)));
        prof_info__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 5)));
        prof_info__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 6)));
      }
    else
      {
        MR_String prof_info__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer prof_info__Var_5;
        MR_Float prof_info__Var_6;
        MR_Word prof_info__Var_7;
        MR_Word prof_info__Var_8;
        MR_Integer prof_info__Var_9;
        MR_Integer prof_info__Var_10;
        MR_Word prof_info__Var_11;

        *prof_info__Cycle_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
        prof_info__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
        prof_info__Var_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
        prof_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
        prof_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
        prof_info__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 6)));
        prof_info__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 7)));
        prof_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 8)));
      }
  }
}

void MR_CALL 
prof_info__prof_node_get_pred_name_2_p_0(
  MR_Word prof_info__HeadVar__1_1,
  MR_String * prof_info__Name_2)
{
  {
    MR_bool prof_info__succeeded;

    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Integer prof_info__Var_13;
        MR_Integer prof_info__Var_14;
        MR_Float prof_info__Var_15;
        MR_Word prof_info__Var_16;
        MR_Integer prof_info__Var_17;
        MR_Integer prof_info__Var_18;

        *prof_info__Name_2 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 0)));
        prof_info__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 1)));
        prof_info__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 2)));
        prof_info__Var_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 3)));
        prof_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 4)));
        prof_info__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 5)));
        prof_info__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 6)));
      }
    else
      {
        MR_Integer prof_info__Var_4;
        MR_Integer prof_info__Var_5;
        MR_Float prof_info__Var_6;
        MR_Word prof_info__Var_7;
        MR_Word prof_info__Var_8;
        MR_Integer prof_info__Var_9;
        MR_Integer prof_info__Var_10;
        MR_Word prof_info__Var_11;

        *prof_info__Name_2 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
        prof_info__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
        prof_info__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
        prof_info__Var_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
        prof_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
        prof_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
        prof_info__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 6)));
        prof_info__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 7)));
        prof_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 8)));
      }
  }
}

void MR_CALL 
prof_info__prof_node_get_entire_cycle_8_p_0(
  MR_Word prof_info__HeadVar__1_1,
  MR_String * prof_info__A_2,
  MR_Integer * prof_info__B_3,
  MR_Integer * prof_info__C_4,
  MR_Float * prof_info__D_5,
  MR_Word * prof_info__E_6,
  MR_Integer * prof_info__F_7,
  MR_Integer * prof_info__G_8)
{
  {
    MR_bool prof_info__succeeded;

    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        *prof_info__A_2 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 0)));
        *prof_info__B_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 1)));
        *prof_info__C_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 2)));
        *prof_info__D_5 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 3)));
        *prof_info__E_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 4)));
        *prof_info__F_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 5)));
        *prof_info__G_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 6)));
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "prof_node_get_entire_cycle: not a cycle\n");
          return;
        }
      }
  }
}

void MR_CALL 
prof_info__prof_node_get_entire_pred_10_p_0(
  MR_Word prof_info__HeadVar__1_1,
  MR_String * prof_info__A_2,
  MR_Integer * prof_info__B_3,
  MR_Integer * prof_info__C_4,
  MR_Float * prof_info__D_5,
  MR_Word * prof_info__E_6,
  MR_Word * prof_info__F_7,
  MR_Integer * prof_info__G_8,
  MR_Integer * prof_info__H_9,
  MR_Word * prof_info__I_10)
{
  {
    MR_bool prof_info__succeeded;

    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__error_1_p_0((MR_String) "prof_node_get_entire_pred: not a pred\n");
          return;
        }
      }
    else
      {
        *prof_info__A_2 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
        *prof_info__B_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
        *prof_info__C_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
        *prof_info__D_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
        *prof_info__E_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
        *prof_info__F_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
        *prof_info__G_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 6)));
        *prof_info__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 7)));
        *prof_info__I_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 8)));
      }
  }
}

void MR_CALL 
prof_info__prof_node_type_2_p_0(
  MR_Word prof_info__HeadVar__1_1,
  MR_Word * prof_info__HeadVar__2_2)
{
  {
    MR_bool prof_info__succeeded;

    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      *prof_info__HeadVar__2_2 = (MR_Integer) 1;
    else
      *prof_info__HeadVar__2_2 = (MR_Integer) 0;
  }
}

void MR_CALL 
prof_info__prof_set_cyclemap_3_p_0(
  MR_Word prof_info__CycleMap_4,
  MR_Word prof_info__Prof_5,
  MR_Word * prof_info__HeadVar__3_3)
{
  {
    MR_bool prof_info__succeeded;
    MR_Float prof_info__Var_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 0)));
    MR_String prof_info__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 1)));
    MR_Integer prof_info__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 2)));
    MR_Word prof_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 3)));
    MR_Word prof_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 4)));
    MR_Word prof_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 5)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *prof_info__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(prof_info__Var_6);
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__Var_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__Var_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (prof_info__Var_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__Var_10));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__CycleMap_4));
    }
  }
}

void MR_CALL 
prof_info__prof_set_profnodemap_3_p_0(
  MR_Word prof_info__ProfNodeMap_4,
  MR_Word prof_info__Prof_5,
  MR_Word * prof_info__HeadVar__3_3)
{
  {
    MR_bool prof_info__succeeded;
    MR_Float prof_info__Var_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 0)));
    MR_String prof_info__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 1)));
    MR_Integer prof_info__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 2)));
    MR_Word prof_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 3)));
    MR_Word prof_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 5)));
    MR_Word prof_info__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *prof_info__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(prof_info__Var_6);
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__Var_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__Var_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (prof_info__Var_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__ProfNodeMap_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__Var_11));
    }
  }
}

void MR_CALL 
prof_info__prof_set_entire_7_p_0(
  MR_Float prof_info__A_8,
  MR_String prof_info__B_9,
  MR_Integer prof_info__C_10,
  MR_Word prof_info__D_11,
  MR_Word prof_info__E_12,
  MR_Word prof_info__F_13,
  MR_Word * prof_info__HeadVar__7_7)
{
  {
    MR_bool prof_info__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *prof_info__HeadVar__7_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(prof_info__A_8);
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__B_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__C_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (prof_info__D_11));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__E_12));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__F_13));
    }
  }
}

void MR_CALL 
prof_info__prof_get_profnodemap_2_p_0(
  MR_Word prof_info__Prof_3,
  MR_Word * prof_info__HeadVar__2_2)
{
  {
    MR_bool prof_info__succeeded;
    MR_Float prof_info__Var_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 0)));
    MR_String prof_info__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 1)));
    MR_Integer prof_info__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 2)));
    MR_Word prof_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 3)));
    MR_Word prof_info__Var_8;

    *prof_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 4)));
    prof_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
prof_info__prof_get_addrdeclmap_2_p_0(
  MR_Word prof_info__Prof_3,
  MR_Word * prof_info__HeadVar__2_2)
{
  {
    MR_bool prof_info__succeeded;
    MR_Float prof_info__Var_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 0)));
    MR_String prof_info__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 1)));
    MR_Integer prof_info__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 2)));
    MR_Word prof_info__Var_7;
    MR_Word prof_info__Var_8;

    *prof_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 3)));
    prof_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 4)));
    prof_info__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
prof_info__prof_get_entire_7_p_0(
  MR_Word prof_info__HeadVar__1_1,
  MR_Float * prof_info__A_8,
  MR_String * prof_info__B_9,
  MR_Integer * prof_info__C_10,
  MR_Word * prof_info__D_11,
  MR_Word * prof_info__E_12,
  MR_Word * prof_info__F_13)
{
  {
    MR_bool prof_info__succeeded;

    *prof_info__A_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
    *prof_info__B_9 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
    *prof_info__C_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
    *prof_info__D_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
    *prof_info__E_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
    *prof_info__F_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
  }
}

MR_Word MR_CALL 
prof_info__prof_node_init_cycle_7_f_0(
  MR_String prof_info__A_9,
  MR_Integer prof_info__B_10,
  MR_Integer prof_info__C_11,
  MR_Float prof_info__D_12,
  MR_Word prof_info__E_13,
  MR_Integer prof_info__F_14,
  MR_Integer prof_info__G_15)
{
  {
    MR_bool prof_info__succeeded;
    MR_Word prof_info__HeadVar__8_8;

    {
      prof_info__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), prof_info__HeadVar__8_8, 0) = ((MR_Box) (prof_info__A_9));
      MR_hl_field(MR_mktag(1), prof_info__HeadVar__8_8, 1) = ((MR_Box) (prof_info__B_10));
      MR_hl_field(MR_mktag(1), prof_info__HeadVar__8_8, 2) = ((MR_Box) (prof_info__C_11));
      MR_hl_field(MR_mktag(1), prof_info__HeadVar__8_8, 3) = MR_box_float(prof_info__D_12);
      MR_hl_field(MR_mktag(1), prof_info__HeadVar__8_8, 4) = ((MR_Box) (prof_info__E_13));
      MR_hl_field(MR_mktag(1), prof_info__HeadVar__8_8, 5) = ((MR_Box) (prof_info__F_14));
      MR_hl_field(MR_mktag(1), prof_info__HeadVar__8_8, 6) = ((MR_Box) (prof_info__G_15));
    }
    return prof_info__HeadVar__8_8;
  }
}

MR_Word MR_CALL 
prof_info__prof_node_init_1_f_0(
  MR_String prof_info__PredName_3)
{
  {
    MR_bool prof_info__succeeded;
    MR_Word prof_info__HeadVar__2_2;

    {
      prof_info__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, 0) = ((MR_Box) (prof_info__PredName_3));
      MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, 3) = MR_box_float((MR_Float) 0.0000000000000000);
      MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, 6) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, 7) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return prof_info__HeadVar__2_2;
  }
}

void MR_CALL 
prof_info__update_prof_node_5_p_0(
  MR_String prof_info__Pred_6,
  MR_Word prof_info__ProfNode_7,
  MR_Word prof_info__AddrMap_8,
  MR_Word prof_info__STATE_VARIABLE_ProfNodeMap_0_11,
  MR_Word * prof_info__STATE_VARIABLE_ProfNodeMap_12)
{
  {
    MR_bool prof_info__succeeded;
    MR_Integer prof_info__Key_10;
    MR_Box prof_info__conv0_Key_10;

    {
      mercury__map__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, prof_info__AddrMap_8, ((MR_Box) (prof_info__Pred_6)), &prof_info__conv0_Key_10);
    }
    prof_info__Key_10 = ((MR_Integer) prof_info__conv0_Key_10);
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, prof_info__Key_10, ((MR_Box) (prof_info__ProfNode_7)), prof_info__STATE_VARIABLE_ProfNodeMap_0_11, prof_info__STATE_VARIABLE_ProfNodeMap_12);
    }
  }
}

void MR_CALL 
prof_info__get_prof_node_4_p_0(
  MR_String prof_info__Pred_5,
  MR_Word prof_info__AddrMap_6,
  MR_Word prof_info__ProfNodeMap_7,
  MR_Word * prof_info__ProfNode_8)
{
  {
    MR_bool prof_info__succeeded;
    MR_Integer prof_info__Key_9;
    MR_Box prof_info__conv0_Key_9;
    MR_Box prof_info__conv1_ProfNode_8;

    {
      mercury__map__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, prof_info__AddrMap_6, ((MR_Box) (prof_info__Pred_5)), &prof_info__conv0_Key_9);
    }
    prof_info__Key_9 = ((MR_Integer) prof_info__conv0_Key_9);
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, prof_info__ProfNodeMap_7, prof_info__Key_9, &prof_info__conv1_ProfNode_8);
    }
    *prof_info__ProfNode_8 = ((MR_Word) prof_info__conv1_ProfNode_8);
  }
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

/* :- end_module prof_info. */
