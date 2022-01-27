/*
** Automatically generated from `prof_info.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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




#line 64 "prof_info.c"
static const MR_FA_TypeInfo_Struct2 prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 67 "prof_info.c"
static const MR_PseudoTypeInfo prof_info__prof_info__field_types_pred_info_0_0[2];

#line 70 "prof_info.c"
static const MR_ConstString prof_info__prof_info__field_names_pred_info_0_0[2];

#line 73 "prof_info.c"
static const MR_DuFunctorDesc prof_info__prof_info__du_functor_desc_pred_info_0_0;

#line 76 "prof_info.c"
static const MR_DuFunctorDescPtr prof_info__prof_info__du_stag_ordered_pred_info_0_0[1];

#line 79 "prof_info.c"
static const MR_DuPtagLayout prof_info__prof_info__du_ptag_ordered_pred_info_0[1];

#line 82 "prof_info.c"
static const MR_DuFunctorDescPtr prof_info__prof_info__du_name_ordered_pred_info_0[1];

#line 85 "prof_info.c"
static const MR_Integer prof_info__prof_info__functor_number_map_pred_info_0[1];

#line 88 "prof_info.c"
static const MR_FA_TypeInfo_Struct2 prof_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0prof_info__type_ctor_info_prof_node_0;

#line 91 "prof_info.c"
static const MR_PseudoTypeInfo prof_info__prof_info__field_types_prof_0_0[6];

#line 94 "prof_info.c"
static const MR_ConstString prof_info__prof_info__field_names_prof_0_0[6];

#line 97 "prof_info.c"
static const MR_DuFunctorDesc prof_info__prof_info__du_functor_desc_prof_0_0;

#line 100 "prof_info.c"
static const MR_DuFunctorDescPtr prof_info__prof_info__du_stag_ordered_prof_0_0[1];

#line 103 "prof_info.c"
static const MR_DuPtagLayout prof_info__prof_info__du_ptag_ordered_prof_0[1];

#line 106 "prof_info.c"
static const MR_DuFunctorDescPtr prof_info__prof_info__du_name_ordered_prof_0[1];

#line 109 "prof_info.c"
static const MR_Integer prof_info__prof_info__functor_number_map_prof_0[1];

#line 112 "prof_info.c"
static const MR_FA_TypeInfo_Struct1 prof_info__list__ti_list_1prof_info__type_ctor_info_pred_info_0;

#line 115 "prof_info.c"
static const MR_FA_TypeInfo_Struct1 prof_info__list__ti_list_1builtin__type_ctor_info_string_0;

#line 118 "prof_info.c"
static const MR_PseudoTypeInfo prof_info__prof_info__field_types_prof_node_0_0[9];

#line 121 "prof_info.c"
static const MR_ConstString prof_info__prof_info__field_names_prof_node_0_0[9];

#line 124 "prof_info.c"
static const MR_DuFunctorDesc prof_info__prof_info__du_functor_desc_prof_node_0_0;

#line 127 "prof_info.c"
static const MR_PseudoTypeInfo prof_info__prof_info__field_types_prof_node_0_1[7];

#line 130 "prof_info.c"
static const MR_ConstString prof_info__prof_info__field_names_prof_node_0_1[7];

#line 133 "prof_info.c"
static const MR_DuFunctorDesc prof_info__prof_info__du_functor_desc_prof_node_0_1;

#line 136 "prof_info.c"
static const MR_DuFunctorDescPtr prof_info__prof_info__du_stag_ordered_prof_node_0_0[1];

#line 139 "prof_info.c"
static const MR_DuFunctorDescPtr prof_info__prof_info__du_stag_ordered_prof_node_0_1[1];

#line 142 "prof_info.c"
static const MR_DuPtagLayout prof_info__prof_info__du_ptag_ordered_prof_node_0[2];

#line 145 "prof_info.c"
static const MR_DuFunctorDescPtr prof_info__prof_info__du_name_ordered_prof_node_0[2];

#line 148 "prof_info.c"
static const MR_Integer prof_info__prof_info__functor_number_map_prof_node_0[2];

#line 151 "prof_info.c"
static const MR_EnumFunctorDesc prof_info__prof_info__enum_functor_desc_prof_node_type_0_0;

#line 154 "prof_info.c"
static const MR_EnumFunctorDesc prof_info__prof_info__enum_functor_desc_prof_node_type_0_1;

#line 157 "prof_info.c"
static const MR_EnumFunctorDescPtr prof_info__prof_info__enum_value_ordered_prof_node_type_0[2];

#line 160 "prof_info.c"
static const MR_EnumFunctorDescPtr prof_info__prof_info__enum_name_ordered_prof_node_type_0[2];

#line 163 "prof_info.c"
static const MR_Integer prof_info__prof_info__functor_number_map_prof_node_type_0[2];

#line 166 "prof_info.c"
static MR_bool MR_CALL 
prof_info____Unify____addrdecl_0_0_10001(
#line 169 "prof_info.c"
  MR_Box prof_info__wrapper_arg_1,
#line 171 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2);

#line 174 "prof_info.c"
static void MR_CALL 
prof_info____Compare____addrdecl_0_0_10001(
#line 177 "prof_info.c"
  MR_Box * prof_info__wrapper_arg_1,
#line 179 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2,
#line 181 "prof_info.c"
  MR_Box prof_info__wrapper_arg_3);

#line 184 "prof_info.c"
static MR_bool MR_CALL 
prof_info____Unify____cycle_map_0_0_10001(
#line 187 "prof_info.c"
  MR_Box prof_info__wrapper_arg_1,
#line 189 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2);

#line 192 "prof_info.c"
static void MR_CALL 
prof_info____Compare____cycle_map_0_0_10001(
#line 195 "prof_info.c"
  MR_Box * prof_info__wrapper_arg_1,
#line 197 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2,
#line 199 "prof_info.c"
  MR_Box prof_info__wrapper_arg_3);

#line 202 "prof_info.c"
static MR_bool MR_CALL 
prof_info____Unify____pred_info_0_0_10001(
#line 205 "prof_info.c"
  MR_Box prof_info__wrapper_arg_1,
#line 207 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2);

#line 210 "prof_info.c"
static void MR_CALL 
prof_info____Compare____pred_info_0_0_10001(
#line 213 "prof_info.c"
  MR_Box * prof_info__wrapper_arg_1,
#line 215 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2,
#line 217 "prof_info.c"
  MR_Box prof_info__wrapper_arg_3);

#line 220 "prof_info.c"
static MR_bool MR_CALL 
prof_info____Unify____prof_0_0_10001(
#line 223 "prof_info.c"
  MR_Box prof_info__wrapper_arg_1,
#line 225 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2);

#line 228 "prof_info.c"
static void MR_CALL 
prof_info____Compare____prof_0_0_10001(
#line 231 "prof_info.c"
  MR_Box * prof_info__wrapper_arg_1,
#line 233 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2,
#line 235 "prof_info.c"
  MR_Box prof_info__wrapper_arg_3);

#line 238 "prof_info.c"
static MR_bool MR_CALL 
prof_info____Unify____prof_node_0_0_10001(
#line 241 "prof_info.c"
  MR_Box prof_info__wrapper_arg_1,
#line 243 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2);

#line 246 "prof_info.c"
static void MR_CALL 
prof_info____Compare____prof_node_0_0_10001(
#line 249 "prof_info.c"
  MR_Box * prof_info__wrapper_arg_1,
#line 251 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2,
#line 253 "prof_info.c"
  MR_Box prof_info__wrapper_arg_3);

#line 256 "prof_info.c"
static MR_bool MR_CALL 
prof_info____Unify____prof_node_map_0_0_10001(
#line 259 "prof_info.c"
  MR_Box prof_info__wrapper_arg_1,
#line 261 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2);

#line 264 "prof_info.c"
static void MR_CALL 
prof_info____Compare____prof_node_map_0_0_10001(
#line 267 "prof_info.c"
  MR_Box * prof_info__wrapper_arg_1,
#line 269 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2,
#line 271 "prof_info.c"
  MR_Box prof_info__wrapper_arg_3);

#line 274 "prof_info.c"
static MR_bool MR_CALL 
prof_info____Unify____prof_node_type_0_0_10001(
#line 277 "prof_info.c"
  MR_Box prof_info__wrapper_arg_1,
#line 279 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2);

#line 282 "prof_info.c"
static void MR_CALL 
prof_info____Compare____prof_node_type_0_0_10001(
#line 285 "prof_info.c"
  MR_Box * prof_info__wrapper_arg_1,
#line 287 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2,
#line 289 "prof_info.c"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 341 "prof_info.c"
static const MR_FA_TypeInfo_Struct2 prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 350 "prof_info.c"
const MR_TypeCtorInfo_Struct prof_info__prof_info__type_ctor_info_addrdecl_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (prof_info____Unify____addrdecl_0_0_10001)),
  ((MR_Box) (prof_info____Compare____addrdecl_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "addrdecl",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 371 "prof_info.c"
const MR_TypeCtorInfo_Struct prof_info__prof_info__type_ctor_info_cycle_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (prof_info____Unify____cycle_map_0_0_10001)),
  ((MR_Box) (prof_info____Compare____cycle_map_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "cycle_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 392 "prof_info.c"
static const MR_PseudoTypeInfo prof_info__prof_info__field_types_pred_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 398 "prof_info.c"
static const MR_ConstString prof_info__prof_info__field_names_pred_info_0_0[2] = {
  (MR_String) "pred_info_name",
  (MR_String) "pred_info_count"
};

#line 404 "prof_info.c"
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
  NULL
};

#line 419 "prof_info.c"
static const MR_DuFunctorDescPtr prof_info__prof_info__du_stag_ordered_pred_info_0_0[1] = {
  &prof_info__prof_info__du_functor_desc_pred_info_0_0
};

#line 424 "prof_info.c"
static const MR_DuPtagLayout prof_info__prof_info__du_ptag_ordered_pred_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    prof_info__prof_info__du_stag_ordered_pred_info_0_0
  }
};

#line 433 "prof_info.c"
static const MR_DuFunctorDescPtr prof_info__prof_info__du_name_ordered_pred_info_0[1] = {
  &prof_info__prof_info__du_functor_desc_pred_info_0_0
};

#line 438 "prof_info.c"
static const MR_Integer prof_info__prof_info__functor_number_map_pred_info_0[1] = {
  (MR_Integer) 0
};

#line 443 "prof_info.c"
const MR_TypeCtorInfo_Struct prof_info__prof_info__type_ctor_info_pred_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (prof_info____Unify____pred_info_0_0_10001)),
  ((MR_Box) (prof_info____Compare____pred_info_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "pred_info",
  {
    prof_info__prof_info__du_name_ordered_pred_info_0
  },
  {
    prof_info__prof_info__du_ptag_ordered_pred_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  prof_info__prof_info__functor_number_map_pred_info_0
};

#line 464 "prof_info.c"
static const MR_FA_TypeInfo_Struct2 prof_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0prof_info__type_ctor_info_prof_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &prof_info__prof_info__type_ctor_info_prof_node_0
  }
};

#line 473 "prof_info.c"
static const MR_PseudoTypeInfo prof_info__prof_info__field_types_prof_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &prof_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0prof_info__type_ctor_info_prof_node_0,
  (MR_PseudoTypeInfo) &prof_info__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
};

#line 483 "prof_info.c"
static const MR_ConstString prof_info__prof_info__field_names_prof_0_0[6] = {
  (MR_String) "scaling_factor",
  (MR_String) "units",
  (MR_String) "total_count",
  (MR_String) "addr_decl_map",
  (MR_String) "prof_node_map",
  (MR_String) "cycle_map"
};

#line 493 "prof_info.c"
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
  NULL
};

#line 508 "prof_info.c"
static const MR_DuFunctorDescPtr prof_info__prof_info__du_stag_ordered_prof_0_0[1] = {
  &prof_info__prof_info__du_functor_desc_prof_0_0
};

#line 513 "prof_info.c"
static const MR_DuPtagLayout prof_info__prof_info__du_ptag_ordered_prof_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    prof_info__prof_info__du_stag_ordered_prof_0_0
  }
};

#line 522 "prof_info.c"
static const MR_DuFunctorDescPtr prof_info__prof_info__du_name_ordered_prof_0[1] = {
  &prof_info__prof_info__du_functor_desc_prof_0_0
};

#line 527 "prof_info.c"
static const MR_Integer prof_info__prof_info__functor_number_map_prof_0[1] = {
  (MR_Integer) 0
};

#line 532 "prof_info.c"
const MR_TypeCtorInfo_Struct prof_info__prof_info__type_ctor_info_prof_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (prof_info____Unify____prof_0_0_10001)),
  ((MR_Box) (prof_info____Compare____prof_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "prof",
  {
    prof_info__prof_info__du_name_ordered_prof_0
  },
  {
    prof_info__prof_info__du_ptag_ordered_prof_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  prof_info__prof_info__functor_number_map_prof_0
};

#line 553 "prof_info.c"
static const MR_FA_TypeInfo_Struct1 prof_info__list__ti_list_1prof_info__type_ctor_info_pred_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &prof_info__prof_info__type_ctor_info_pred_info_0
  }
};

#line 561 "prof_info.c"
static const MR_FA_TypeInfo_Struct1 prof_info__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 569 "prof_info.c"
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

#line 582 "prof_info.c"
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

#line 595 "prof_info.c"
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
  NULL
};

#line 610 "prof_info.c"
static const MR_PseudoTypeInfo prof_info__prof_info__field_types_prof_node_0_1[7] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &prof_info__list__ti_list_1prof_info__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 621 "prof_info.c"
static const MR_ConstString prof_info__prof_info__field_names_prof_node_0_1[7] = {
  (MR_String) "cycle_name",
  (MR_String) "cycle_cycle_number",
  (MR_String) "cycle_self_counts",
  (MR_String) "cycle_propagated_counts",
  (MR_String) "cycle_members",
  (MR_String) "cycle_total_calls",
  (MR_String) "cycle_self_calls"
};

#line 632 "prof_info.c"
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
  NULL
};

#line 647 "prof_info.c"
static const MR_DuFunctorDescPtr prof_info__prof_info__du_stag_ordered_prof_node_0_0[1] = {
  &prof_info__prof_info__du_functor_desc_prof_node_0_0
};

#line 652 "prof_info.c"
static const MR_DuFunctorDescPtr prof_info__prof_info__du_stag_ordered_prof_node_0_1[1] = {
  &prof_info__prof_info__du_functor_desc_prof_node_0_1
};

#line 657 "prof_info.c"
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

#line 671 "prof_info.c"
static const MR_DuFunctorDescPtr prof_info__prof_info__du_name_ordered_prof_node_0[2] = {
  &prof_info__prof_info__du_functor_desc_prof_node_0_1,
  &prof_info__prof_info__du_functor_desc_prof_node_0_0
};

#line 677 "prof_info.c"
static const MR_Integer prof_info__prof_info__functor_number_map_prof_node_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 683 "prof_info.c"
const MR_TypeCtorInfo_Struct prof_info__prof_info__type_ctor_info_prof_node_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (prof_info____Unify____prof_node_0_0_10001)),
  ((MR_Box) (prof_info____Compare____prof_node_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "prof_node",
  {
    prof_info__prof_info__du_name_ordered_prof_node_0
  },
  {
    prof_info__prof_info__du_ptag_ordered_prof_node_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  prof_info__prof_info__functor_number_map_prof_node_0
};

#line 704 "prof_info.c"
const MR_TypeCtorInfo_Struct prof_info__prof_info__type_ctor_info_prof_node_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (prof_info____Unify____prof_node_map_0_0_10001)),
  ((MR_Box) (prof_info____Compare____prof_node_map_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "prof_node_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &prof_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0prof_info__type_ctor_info_prof_node_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 725 "prof_info.c"
static const MR_EnumFunctorDesc prof_info__prof_info__enum_functor_desc_prof_node_type_0_0 = {
  (MR_String) "predicate",
  (MR_Integer) 0
};

#line 731 "prof_info.c"
static const MR_EnumFunctorDesc prof_info__prof_info__enum_functor_desc_prof_node_type_0_1 = {
  (MR_String) "cycle",
  (MR_Integer) 1
};

#line 737 "prof_info.c"
static const MR_EnumFunctorDescPtr prof_info__prof_info__enum_value_ordered_prof_node_type_0[2] = {
  &prof_info__prof_info__enum_functor_desc_prof_node_type_0_0,
  &prof_info__prof_info__enum_functor_desc_prof_node_type_0_1
};

#line 743 "prof_info.c"
static const MR_EnumFunctorDescPtr prof_info__prof_info__enum_name_ordered_prof_node_type_0[2] = {
  &prof_info__prof_info__enum_functor_desc_prof_node_type_0_1,
  &prof_info__prof_info__enum_functor_desc_prof_node_type_0_0
};

#line 749 "prof_info.c"
static const MR_Integer prof_info__prof_info__functor_number_map_prof_node_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 755 "prof_info.c"
const MR_TypeCtorInfo_Struct prof_info__prof_info__type_ctor_info_prof_node_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (prof_info____Unify____prof_node_type_0_0_10001)),
  ((MR_Box) (prof_info____Compare____prof_node_type_0_0_10001)),
  (MR_String) "prof_info",
  (MR_String) "prof_node_type",
  {
    prof_info__prof_info__enum_name_ordered_prof_node_type_0
  },
  {
    prof_info__prof_info__enum_value_ordered_prof_node_type_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  prof_info__prof_info__functor_number_map_prof_node_type_0
};

#line 776 "prof_info.c"
static MR_bool MR_CALL 
prof_info____Unify____addrdecl_0_0_10001(
#line 779 "prof_info.c"
  MR_Box prof_info__wrapper_arg_1,
#line 781 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2)
#line 783 "prof_info.c"
{
#line 785 "prof_info.c"
  {
#line 787 "prof_info.c"
    MR_bool prof_info__succeeded;

#line 790 "prof_info.c"
    {
#line 792 "prof_info.c"
      prof_info__succeeded = prof_info____Unify____addrdecl_0_0(((MR_Word) prof_info__wrapper_arg_1), ((MR_Word) prof_info__wrapper_arg_2));
    }
#line 795 "prof_info.c"
    return prof_info__succeeded;
#line 797 "prof_info.c"
  }
#line 799 "prof_info.c"
}

#line 802 "prof_info.c"
static void MR_CALL 
prof_info____Compare____addrdecl_0_0_10001(
#line 805 "prof_info.c"
  MR_Box * prof_info__wrapper_arg_1,
#line 807 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2,
#line 809 "prof_info.c"
  MR_Box prof_info__wrapper_arg_3)
#line 811 "prof_info.c"
{
#line 813 "prof_info.c"
  {
#line 815 "prof_info.c"
    MR_Word prof_info__conv0_HeadVar__1_1;

#line 818 "prof_info.c"
    {
#line 820 "prof_info.c"
      prof_info____Compare____addrdecl_0_0(&prof_info__conv0_HeadVar__1_1, ((MR_Word) prof_info__wrapper_arg_2), ((MR_Word) prof_info__wrapper_arg_3));
    }
#line 823 "prof_info.c"
    *prof_info__wrapper_arg_1 = ((MR_Box) (prof_info__conv0_HeadVar__1_1));
#line 825 "prof_info.c"
  }
#line 827 "prof_info.c"
}

#line 830 "prof_info.c"
static MR_bool MR_CALL 
prof_info____Unify____cycle_map_0_0_10001(
#line 833 "prof_info.c"
  MR_Box prof_info__wrapper_arg_1,
#line 835 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2)
#line 837 "prof_info.c"
{
#line 839 "prof_info.c"
  {
#line 841 "prof_info.c"
    MR_bool prof_info__succeeded;

#line 844 "prof_info.c"
    {
#line 846 "prof_info.c"
      prof_info__succeeded = prof_info____Unify____cycle_map_0_0(((MR_Word) prof_info__wrapper_arg_1), ((MR_Word) prof_info__wrapper_arg_2));
    }
#line 849 "prof_info.c"
    return prof_info__succeeded;
#line 851 "prof_info.c"
  }
#line 853 "prof_info.c"
}

#line 856 "prof_info.c"
static void MR_CALL 
prof_info____Compare____cycle_map_0_0_10001(
#line 859 "prof_info.c"
  MR_Box * prof_info__wrapper_arg_1,
#line 861 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2,
#line 863 "prof_info.c"
  MR_Box prof_info__wrapper_arg_3)
#line 865 "prof_info.c"
{
#line 867 "prof_info.c"
  {
#line 869 "prof_info.c"
    MR_Word prof_info__conv0_HeadVar__1_1;

#line 872 "prof_info.c"
    {
#line 874 "prof_info.c"
      prof_info____Compare____cycle_map_0_0(&prof_info__conv0_HeadVar__1_1, ((MR_Word) prof_info__wrapper_arg_2), ((MR_Word) prof_info__wrapper_arg_3));
    }
#line 877 "prof_info.c"
    *prof_info__wrapper_arg_1 = ((MR_Box) (prof_info__conv0_HeadVar__1_1));
#line 879 "prof_info.c"
  }
#line 881 "prof_info.c"
}

#line 884 "prof_info.c"
static MR_bool MR_CALL 
prof_info____Unify____pred_info_0_0_10001(
#line 887 "prof_info.c"
  MR_Box prof_info__wrapper_arg_1,
#line 889 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2)
#line 891 "prof_info.c"
{
#line 893 "prof_info.c"
  {
#line 895 "prof_info.c"
    MR_bool prof_info__succeeded;

#line 898 "prof_info.c"
    {
#line 900 "prof_info.c"
      prof_info__succeeded = prof_info____Unify____pred_info_0_0(((MR_Word) prof_info__wrapper_arg_1), ((MR_Word) prof_info__wrapper_arg_2));
    }
#line 903 "prof_info.c"
    return prof_info__succeeded;
#line 905 "prof_info.c"
  }
#line 907 "prof_info.c"
}

#line 910 "prof_info.c"
static void MR_CALL 
prof_info____Compare____pred_info_0_0_10001(
#line 913 "prof_info.c"
  MR_Box * prof_info__wrapper_arg_1,
#line 915 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2,
#line 917 "prof_info.c"
  MR_Box prof_info__wrapper_arg_3)
#line 919 "prof_info.c"
{
#line 921 "prof_info.c"
  {
#line 923 "prof_info.c"
    MR_Word prof_info__conv0_HeadVar__1_1;

#line 926 "prof_info.c"
    {
#line 928 "prof_info.c"
      prof_info____Compare____pred_info_0_0(&prof_info__conv0_HeadVar__1_1, ((MR_Word) prof_info__wrapper_arg_2), ((MR_Word) prof_info__wrapper_arg_3));
    }
#line 931 "prof_info.c"
    *prof_info__wrapper_arg_1 = ((MR_Box) (prof_info__conv0_HeadVar__1_1));
#line 933 "prof_info.c"
  }
#line 935 "prof_info.c"
}

#line 938 "prof_info.c"
static MR_bool MR_CALL 
prof_info____Unify____prof_0_0_10001(
#line 941 "prof_info.c"
  MR_Box prof_info__wrapper_arg_1,
#line 943 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2)
#line 945 "prof_info.c"
{
#line 947 "prof_info.c"
  {
#line 949 "prof_info.c"
    MR_bool prof_info__succeeded;

#line 952 "prof_info.c"
    {
#line 954 "prof_info.c"
      prof_info__succeeded = prof_info____Unify____prof_0_0(((MR_Word) prof_info__wrapper_arg_1), ((MR_Word) prof_info__wrapper_arg_2));
    }
#line 957 "prof_info.c"
    return prof_info__succeeded;
#line 959 "prof_info.c"
  }
#line 961 "prof_info.c"
}

#line 964 "prof_info.c"
static void MR_CALL 
prof_info____Compare____prof_0_0_10001(
#line 967 "prof_info.c"
  MR_Box * prof_info__wrapper_arg_1,
#line 969 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2,
#line 971 "prof_info.c"
  MR_Box prof_info__wrapper_arg_3)
#line 973 "prof_info.c"
{
#line 975 "prof_info.c"
  {
#line 977 "prof_info.c"
    MR_Word prof_info__conv0_HeadVar__1_1;

#line 980 "prof_info.c"
    {
#line 982 "prof_info.c"
      prof_info____Compare____prof_0_0(&prof_info__conv0_HeadVar__1_1, ((MR_Word) prof_info__wrapper_arg_2), ((MR_Word) prof_info__wrapper_arg_3));
    }
#line 985 "prof_info.c"
    *prof_info__wrapper_arg_1 = ((MR_Box) (prof_info__conv0_HeadVar__1_1));
#line 987 "prof_info.c"
  }
#line 989 "prof_info.c"
}

#line 992 "prof_info.c"
static MR_bool MR_CALL 
prof_info____Unify____prof_node_0_0_10001(
#line 995 "prof_info.c"
  MR_Box prof_info__wrapper_arg_1,
#line 997 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2)
#line 999 "prof_info.c"
{
#line 1001 "prof_info.c"
  {
#line 1003 "prof_info.c"
    MR_bool prof_info__succeeded;

#line 1006 "prof_info.c"
    {
#line 1008 "prof_info.c"
      prof_info__succeeded = prof_info____Unify____prof_node_0_0(((MR_Word) prof_info__wrapper_arg_1), ((MR_Word) prof_info__wrapper_arg_2));
    }
#line 1011 "prof_info.c"
    return prof_info__succeeded;
#line 1013 "prof_info.c"
  }
#line 1015 "prof_info.c"
}

#line 1018 "prof_info.c"
static void MR_CALL 
prof_info____Compare____prof_node_0_0_10001(
#line 1021 "prof_info.c"
  MR_Box * prof_info__wrapper_arg_1,
#line 1023 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2,
#line 1025 "prof_info.c"
  MR_Box prof_info__wrapper_arg_3)
#line 1027 "prof_info.c"
{
#line 1029 "prof_info.c"
  {
#line 1031 "prof_info.c"
    MR_Word prof_info__conv0_HeadVar__1_1;

#line 1034 "prof_info.c"
    {
#line 1036 "prof_info.c"
      prof_info____Compare____prof_node_0_0(&prof_info__conv0_HeadVar__1_1, ((MR_Word) prof_info__wrapper_arg_2), ((MR_Word) prof_info__wrapper_arg_3));
    }
#line 1039 "prof_info.c"
    *prof_info__wrapper_arg_1 = ((MR_Box) (prof_info__conv0_HeadVar__1_1));
#line 1041 "prof_info.c"
  }
#line 1043 "prof_info.c"
}

#line 1046 "prof_info.c"
static MR_bool MR_CALL 
prof_info____Unify____prof_node_map_0_0_10001(
#line 1049 "prof_info.c"
  MR_Box prof_info__wrapper_arg_1,
#line 1051 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2)
#line 1053 "prof_info.c"
{
#line 1055 "prof_info.c"
  {
#line 1057 "prof_info.c"
    MR_bool prof_info__succeeded;

#line 1060 "prof_info.c"
    {
#line 1062 "prof_info.c"
      prof_info__succeeded = prof_info____Unify____prof_node_map_0_0(((MR_Word) prof_info__wrapper_arg_1), ((MR_Word) prof_info__wrapper_arg_2));
    }
#line 1065 "prof_info.c"
    return prof_info__succeeded;
#line 1067 "prof_info.c"
  }
#line 1069 "prof_info.c"
}

#line 1072 "prof_info.c"
static void MR_CALL 
prof_info____Compare____prof_node_map_0_0_10001(
#line 1075 "prof_info.c"
  MR_Box * prof_info__wrapper_arg_1,
#line 1077 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2,
#line 1079 "prof_info.c"
  MR_Box prof_info__wrapper_arg_3)
#line 1081 "prof_info.c"
{
#line 1083 "prof_info.c"
  {
#line 1085 "prof_info.c"
    MR_Word prof_info__conv0_HeadVar__1_1;

#line 1088 "prof_info.c"
    {
#line 1090 "prof_info.c"
      prof_info____Compare____prof_node_map_0_0(&prof_info__conv0_HeadVar__1_1, ((MR_Word) prof_info__wrapper_arg_2), ((MR_Word) prof_info__wrapper_arg_3));
    }
#line 1093 "prof_info.c"
    *prof_info__wrapper_arg_1 = ((MR_Box) (prof_info__conv0_HeadVar__1_1));
#line 1095 "prof_info.c"
  }
#line 1097 "prof_info.c"
}

#line 1100 "prof_info.c"
static MR_bool MR_CALL 
prof_info____Unify____prof_node_type_0_0_10001(
#line 1103 "prof_info.c"
  MR_Box prof_info__wrapper_arg_1,
#line 1105 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2)
#line 1107 "prof_info.c"
{
#line 1109 "prof_info.c"
  {
#line 1111 "prof_info.c"
    MR_bool prof_info__succeeded;

#line 1114 "prof_info.c"
    {
#line 1116 "prof_info.c"
      prof_info__succeeded = prof_info____Unify____prof_node_type_0_0(((MR_Word) prof_info__wrapper_arg_1), ((MR_Word) prof_info__wrapper_arg_2));
    }
#line 1119 "prof_info.c"
    return prof_info__succeeded;
#line 1121 "prof_info.c"
  }
#line 1123 "prof_info.c"
}

#line 1126 "prof_info.c"
static void MR_CALL 
prof_info____Compare____prof_node_type_0_0_10001(
#line 1129 "prof_info.c"
  MR_Box * prof_info__wrapper_arg_1,
#line 1131 "prof_info.c"
  MR_Box prof_info__wrapper_arg_2,
#line 1133 "prof_info.c"
  MR_Box prof_info__wrapper_arg_3)
#line 1135 "prof_info.c"
{
#line 1137 "prof_info.c"
  {
#line 1139 "prof_info.c"
    MR_Word prof_info__conv0_HeadVar__1_1;

#line 1142 "prof_info.c"
    {
#line 1144 "prof_info.c"
      prof_info____Compare____prof_node_type_0_0(&prof_info__conv0_HeadVar__1_1, ((MR_Word) prof_info__wrapper_arg_2), ((MR_Word) prof_info__wrapper_arg_3));
    }
#line 1147 "prof_info.c"
    *prof_info__wrapper_arg_1 = ((MR_Box) (prof_info__conv0_HeadVar__1_1));
#line 1149 "prof_info.c"
  }
#line 1151 "prof_info.c"
}

#line 46 "prof_info.m"
void MR_CALL 
prof_info____Compare____prof_node_type_0_0(
#line 46 "prof_info.m"
  MR_Word * prof_info__HeadVar__1_1,
#line 46 "prof_info.m"
  MR_Word prof_info__HeadVar__2_2,
#line 46 "prof_info.m"
  MR_Word prof_info__HeadVar__3_3)
#line 46 "prof_info.m"
{
#line 46 "prof_info.m"
  {
#line 46 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 46 "prof_info.m"
    MR_Integer prof_info__Cast_HeadVar1_4 = (MR_Integer) prof_info__HeadVar__2_2;
#line 46 "prof_info.m"
    MR_Integer prof_info__Cast_HeadVar2_5 = (MR_Integer) prof_info__HeadVar__3_3;

#line 46 "prof_info.m"
    {
#line 46 "prof_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(prof_info__HeadVar__1_1, prof_info__Cast_HeadVar1_4, prof_info__Cast_HeadVar2_5);
#line 46 "prof_info.m"
      return;
    }
#line 46 "prof_info.m"
  }
#line 46 "prof_info.m"
}

#line 46 "prof_info.m"
MR_bool MR_CALL 
prof_info____Unify____prof_node_type_0_0(
#line 46 "prof_info.m"
  MR_Word prof_info__HeadVar__2_1,
#line 46 "prof_info.m"
  MR_Word prof_info__HeadVar__2_2)
#line 46 "prof_info.m"
{
#line 1195 "prof_info.c"
  {
#line 1197 "prof_info.c"
    MR_bool prof_info__succeeded = (prof_info__HeadVar__2_1 == prof_info__HeadVar__2_2);

#line 1200 "prof_info.c"
    return prof_info__succeeded;
#line 1202 "prof_info.c"
  }
#line 46 "prof_info.m"
}

#line 36 "prof_info.m"
void MR_CALL 
prof_info____Compare____prof_node_map_0_0(
#line 36 "prof_info.m"
  MR_Word * prof_info__HeadVar__1_1,
#line 36 "prof_info.m"
  MR_Word prof_info__HeadVar__2_2,
#line 36 "prof_info.m"
  MR_Word prof_info__HeadVar__3_3)
#line 36 "prof_info.m"
{
#line 36 "prof_info.m"
  {
#line 36 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 36 "prof_info.m"
    MR_Word prof_info__Cast_HeadVar1_4 = prof_info__HeadVar__2_2;
#line 36 "prof_info.m"
    MR_Word prof_info__Cast_HeadVar2_5 = prof_info__HeadVar__3_3;

#line 36 "prof_info.m"
    {
#line 36 "prof_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &prof_info_scalar_common_1[1], prof_info__HeadVar__1_1, ((MR_Box) (prof_info__Cast_HeadVar1_4)), ((MR_Box) (prof_info__Cast_HeadVar2_5)));
#line 36 "prof_info.m"
      return;
    }
#line 36 "prof_info.m"
  }
#line 36 "prof_info.m"
}

#line 36 "prof_info.m"
MR_bool MR_CALL 
prof_info____Unify____prof_node_map_0_0(
#line 36 "prof_info.m"
  MR_Word prof_info__HeadVar__1_1,
#line 36 "prof_info.m"
  MR_Word prof_info__HeadVar__2_2)
#line 36 "prof_info.m"
{
#line 36 "prof_info.m"
  {
#line 36 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 36 "prof_info.m"
    MR_Word prof_info__Cast_HeadVar1_3 = prof_info__HeadVar__1_1;
#line 36 "prof_info.m"
    MR_Word prof_info__Cast_HeadVar2_4 = prof_info__HeadVar__2_2;

#line 36 "prof_info.m"
    {
#line 36 "prof_info.m"
      return prof_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &prof_info_scalar_common_1[1], ((MR_Box) (prof_info__Cast_HeadVar1_3)), ((MR_Box) (prof_info__Cast_HeadVar2_4)));
    }
#line 36 "prof_info.m"
    return prof_info__succeeded;
#line 36 "prof_info.m"
  }
#line 36 "prof_info.m"
}

#line 197 "prof_info.m"
void MR_CALL 
prof_info____Compare____prof_node_0_0(
#line 197 "prof_info.m"
  MR_Word * prof_info__HeadVar__1_1,
#line 197 "prof_info.m"
  MR_Word prof_info__HeadVar__2_2,
#line 197 "prof_info.m"
  MR_Word prof_info__HeadVar__3_3)
#line 197 "prof_info.m"
{
#line 197 "prof_info.m"
  {
#line 197 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 197 "prof_info.m"
    MR_Integer prof_info__CastX_82 = (MR_Integer) prof_info__HeadVar__2_2;
#line 197 "prof_info.m"
    MR_Integer prof_info__CastY_83 = (MR_Integer) prof_info__HeadVar__3_3;

#line 197 "prof_info.m"
    prof_info__succeeded = (prof_info__CastX_82 == prof_info__CastY_83);
#line 197 "prof_info.m"
    if (prof_info__succeeded)
#line 1293 "prof_info.c"
      *prof_info__HeadVar__1_1 = (MR_Integer) 0;
#line 197 "prof_info.m"
    else
#line 197 "prof_info.m"
      if (((MR_tag((MR_Word) prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 197 "prof_info.m"
        {
#line 197 "prof_info.m"
          MR_Integer prof_info__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 6)));
#line 197 "prof_info.m"
          MR_Integer prof_info__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 5)));
#line 197 "prof_info.m"
          MR_Word prof_info__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 197 "prof_info.m"
          MR_Float prof_info__V_103_103 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 197 "prof_info.m"
          MR_Integer prof_info__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 197 "prof_info.m"
          MR_Integer prof_info__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 197 "prof_info.m"
          MR_String prof_info__V_106_106 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 0)));

#line 197 "prof_info.m"
          if (((MR_tag((MR_Word) prof_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 197 "prof_info.m"
            {
#line 197 "prof_info.m"
              MR_String prof_info__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 0)));
#line 197 "prof_info.m"
              MR_Integer prof_info__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 1)));
#line 197 "prof_info.m"
              MR_Integer prof_info__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 2)));
#line 197 "prof_info.m"
              MR_Float prof_info__V_72_72 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 3)));
#line 197 "prof_info.m"
              MR_Word prof_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 4)));
#line 197 "prof_info.m"
              MR_Integer prof_info__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 5)));
#line 197 "prof_info.m"
              MR_Integer prof_info__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 6)));
#line 197 "prof_info.m"
              MR_Word prof_info__V_76_76;

#line 197 "prof_info.m"
              {
#line 197 "prof_info.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(&prof_info__V_76_76, prof_info__V_106_106, prof_info__V_69_69);
              }
#line 1342 "prof_info.c"
              prof_info__succeeded = (prof_info__V_76_76 == (MR_Integer) 0);
#line 197 "prof_info.m"
              prof_info__succeeded = !(prof_info__succeeded);
#line 197 "prof_info.m"
              if (prof_info__succeeded)
#line 197 "prof_info.m"
                *prof_info__HeadVar__1_1 = prof_info__V_76_76;
#line 197 "prof_info.m"
              else
#line 197 "prof_info.m"
                {
#line 197 "prof_info.m"
                  MR_Word prof_info__V_77_77;

#line 197 "prof_info.m"
                  {
#line 197 "prof_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&prof_info__V_77_77, prof_info__V_105_105, prof_info__V_70_70);
                  }
#line 1362 "prof_info.c"
                  prof_info__succeeded = (prof_info__V_77_77 == (MR_Integer) 0);
#line 197 "prof_info.m"
                  prof_info__succeeded = !(prof_info__succeeded);
#line 197 "prof_info.m"
                  if (prof_info__succeeded)
#line 197 "prof_info.m"
                    *prof_info__HeadVar__1_1 = prof_info__V_77_77;
#line 197 "prof_info.m"
                  else
#line 197 "prof_info.m"
                    {
#line 197 "prof_info.m"
                      MR_Word prof_info__V_78_78;

#line 197 "prof_info.m"
                      {
#line 197 "prof_info.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&prof_info__V_78_78, prof_info__V_104_104, prof_info__V_71_71);
                      }
#line 1382 "prof_info.c"
                      prof_info__succeeded = (prof_info__V_78_78 == (MR_Integer) 0);
#line 197 "prof_info.m"
                      prof_info__succeeded = !(prof_info__succeeded);
#line 197 "prof_info.m"
                      if (prof_info__succeeded)
#line 197 "prof_info.m"
                        *prof_info__HeadVar__1_1 = prof_info__V_78_78;
#line 197 "prof_info.m"
                      else
#line 197 "prof_info.m"
                        {
#line 197 "prof_info.m"
                          MR_Word prof_info__V_79_79;

#line 197 "prof_info.m"
                          {
#line 197 "prof_info.m"
                            mercury__private_builtin__builtin_compare_float_3_p_0(&prof_info__V_79_79, prof_info__V_103_103, prof_info__V_72_72);
                          }
#line 1402 "prof_info.c"
                          prof_info__succeeded = (prof_info__V_79_79 == (MR_Integer) 0);
#line 197 "prof_info.m"
                          prof_info__succeeded = !(prof_info__succeeded);
#line 197 "prof_info.m"
                          if (prof_info__succeeded)
#line 197 "prof_info.m"
                            *prof_info__HeadVar__1_1 = prof_info__V_79_79;
#line 197 "prof_info.m"
                          else
#line 197 "prof_info.m"
                            {
#line 197 "prof_info.m"
                              MR_Word prof_info__V_80_80;

#line 197 "prof_info.m"
                              {
#line 197 "prof_info.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &prof_info_scalar_common_2[0], &prof_info__V_80_80, ((MR_Box) (prof_info__V_102_102)), ((MR_Box) (prof_info__V_73_73)));
                              }
#line 1422 "prof_info.c"
                              prof_info__succeeded = (prof_info__V_80_80 == (MR_Integer) 0);
#line 197 "prof_info.m"
                              prof_info__succeeded = !(prof_info__succeeded);
#line 197 "prof_info.m"
                              if (prof_info__succeeded)
#line 197 "prof_info.m"
                                *prof_info__HeadVar__1_1 = prof_info__V_80_80;
#line 197 "prof_info.m"
                              else
#line 197 "prof_info.m"
                                {
#line 197 "prof_info.m"
                                  MR_Word prof_info__V_81_81;

#line 197 "prof_info.m"
                                  {
#line 197 "prof_info.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&prof_info__V_81_81, prof_info__V_101_101, prof_info__V_74_74);
                                  }
#line 1442 "prof_info.c"
                                  prof_info__succeeded = (prof_info__V_81_81 == (MR_Integer) 0);
#line 197 "prof_info.m"
                                  prof_info__succeeded = !(prof_info__succeeded);
#line 197 "prof_info.m"
                                  if (prof_info__succeeded)
#line 197 "prof_info.m"
                                    *prof_info__HeadVar__1_1 = prof_info__V_81_81;
#line 197 "prof_info.m"
                                  else
#line 197 "prof_info.m"
                                    {
#line 197 "prof_info.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(prof_info__HeadVar__1_1, prof_info__V_100_100, prof_info__V_75_75);
#line 197 "prof_info.m"
                                      return;
                                    }
#line 197 "prof_info.m"
                                }
#line 197 "prof_info.m"
                            }
#line 197 "prof_info.m"
                        }
#line 197 "prof_info.m"
                    }
#line 197 "prof_info.m"
                }
#line 197 "prof_info.m"
            }
#line 197 "prof_info.m"
          else
#line 1473 "prof_info.c"
            *prof_info__HeadVar__1_1 = (MR_Integer) 2;
#line 197 "prof_info.m"
        }
#line 197 "prof_info.m"
      else
#line 197 "prof_info.m"
        {
#line 197 "prof_info.m"
          MR_Word prof_info__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 8)));
#line 197 "prof_info.m"
          MR_Integer prof_info__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 7)));
#line 197 "prof_info.m"
          MR_Integer prof_info__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 6)));
#line 197 "prof_info.m"
          MR_Word prof_info__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 5)));
#line 197 "prof_info.m"
          MR_Word prof_info__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 197 "prof_info.m"
          MR_Float prof_info__V_112_112 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 197 "prof_info.m"
          MR_Integer prof_info__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 197 "prof_info.m"
          MR_Integer prof_info__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 197 "prof_info.m"
          MR_String prof_info__V_115_115 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));

#line 197 "prof_info.m"
          if (((MR_tag((MR_Word) prof_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1502 "prof_info.c"
            *prof_info__HeadVar__1_1 = (MR_Integer) 1;
#line 197 "prof_info.m"
          else
#line 197 "prof_info.m"
            {
#line 197 "prof_info.m"
              MR_String prof_info__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 0)));
#line 197 "prof_info.m"
              MR_Integer prof_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 1)));
#line 197 "prof_info.m"
              MR_Integer prof_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 2)));
#line 197 "prof_info.m"
              MR_Float prof_info__V_16_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 3)));
#line 197 "prof_info.m"
              MR_Word prof_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 4)));
#line 197 "prof_info.m"
              MR_Word prof_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 5)));
#line 197 "prof_info.m"
              MR_Integer prof_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 6)));
#line 197 "prof_info.m"
              MR_Integer prof_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 7)));
#line 197 "prof_info.m"
              MR_Word prof_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 8)));
#line 197 "prof_info.m"
              MR_Word prof_info__V_22_22;

#line 197 "prof_info.m"
              {
#line 197 "prof_info.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(&prof_info__V_22_22, prof_info__V_115_115, prof_info__V_13_13);
              }
#line 1534 "prof_info.c"
              prof_info__succeeded = (prof_info__V_22_22 == (MR_Integer) 0);
#line 197 "prof_info.m"
              prof_info__succeeded = !(prof_info__succeeded);
#line 197 "prof_info.m"
              if (prof_info__succeeded)
#line 197 "prof_info.m"
                *prof_info__HeadVar__1_1 = prof_info__V_22_22;
#line 197 "prof_info.m"
              else
#line 197 "prof_info.m"
                {
#line 197 "prof_info.m"
                  MR_Word prof_info__V_23_23;

#line 197 "prof_info.m"
                  {
#line 197 "prof_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&prof_info__V_23_23, prof_info__V_114_114, prof_info__V_14_14);
                  }
#line 1554 "prof_info.c"
                  prof_info__succeeded = (prof_info__V_23_23 == (MR_Integer) 0);
#line 197 "prof_info.m"
                  prof_info__succeeded = !(prof_info__succeeded);
#line 197 "prof_info.m"
                  if (prof_info__succeeded)
#line 197 "prof_info.m"
                    *prof_info__HeadVar__1_1 = prof_info__V_23_23;
#line 197 "prof_info.m"
                  else
#line 197 "prof_info.m"
                    {
#line 197 "prof_info.m"
                      MR_Word prof_info__V_24_24;

#line 197 "prof_info.m"
                      {
#line 197 "prof_info.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&prof_info__V_24_24, prof_info__V_113_113, prof_info__V_15_15);
                      }
#line 1574 "prof_info.c"
                      prof_info__succeeded = (prof_info__V_24_24 == (MR_Integer) 0);
#line 197 "prof_info.m"
                      prof_info__succeeded = !(prof_info__succeeded);
#line 197 "prof_info.m"
                      if (prof_info__succeeded)
#line 197 "prof_info.m"
                        *prof_info__HeadVar__1_1 = prof_info__V_24_24;
#line 197 "prof_info.m"
                      else
#line 197 "prof_info.m"
                        {
#line 197 "prof_info.m"
                          MR_Word prof_info__V_25_25;

#line 197 "prof_info.m"
                          {
#line 197 "prof_info.m"
                            mercury__private_builtin__builtin_compare_float_3_p_0(&prof_info__V_25_25, prof_info__V_112_112, prof_info__V_16_16);
                          }
#line 1594 "prof_info.c"
                          prof_info__succeeded = (prof_info__V_25_25 == (MR_Integer) 0);
#line 197 "prof_info.m"
                          prof_info__succeeded = !(prof_info__succeeded);
#line 197 "prof_info.m"
                          if (prof_info__succeeded)
#line 197 "prof_info.m"
                            *prof_info__HeadVar__1_1 = prof_info__V_25_25;
#line 197 "prof_info.m"
                          else
#line 197 "prof_info.m"
                            {
#line 197 "prof_info.m"
                              MR_Word prof_info__V_26_26;

#line 197 "prof_info.m"
                              {
#line 197 "prof_info.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &prof_info_scalar_common_2[0], &prof_info__V_26_26, ((MR_Box) (prof_info__V_111_111)), ((MR_Box) (prof_info__V_17_17)));
                              }
#line 1614 "prof_info.c"
                              prof_info__succeeded = (prof_info__V_26_26 == (MR_Integer) 0);
#line 197 "prof_info.m"
                              prof_info__succeeded = !(prof_info__succeeded);
#line 197 "prof_info.m"
                              if (prof_info__succeeded)
#line 197 "prof_info.m"
                                *prof_info__HeadVar__1_1 = prof_info__V_26_26;
#line 197 "prof_info.m"
                              else
#line 197 "prof_info.m"
                                {
#line 197 "prof_info.m"
                                  MR_Word prof_info__V_27_27;

#line 197 "prof_info.m"
                                  {
#line 197 "prof_info.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &prof_info_scalar_common_2[0], &prof_info__V_27_27, ((MR_Box) (prof_info__V_110_110)), ((MR_Box) (prof_info__V_18_18)));
                                  }
#line 1634 "prof_info.c"
                                  prof_info__succeeded = (prof_info__V_27_27 == (MR_Integer) 0);
#line 197 "prof_info.m"
                                  prof_info__succeeded = !(prof_info__succeeded);
#line 197 "prof_info.m"
                                  if (prof_info__succeeded)
#line 197 "prof_info.m"
                                    *prof_info__HeadVar__1_1 = prof_info__V_27_27;
#line 197 "prof_info.m"
                                  else
#line 197 "prof_info.m"
                                    {
#line 197 "prof_info.m"
                                      MR_Word prof_info__V_28_28;

#line 197 "prof_info.m"
                                      {
#line 197 "prof_info.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&prof_info__V_28_28, prof_info__V_109_109, prof_info__V_19_19);
                                      }
#line 1654 "prof_info.c"
                                      prof_info__succeeded = (prof_info__V_28_28 == (MR_Integer) 0);
#line 197 "prof_info.m"
                                      prof_info__succeeded = !(prof_info__succeeded);
#line 197 "prof_info.m"
                                      if (prof_info__succeeded)
#line 197 "prof_info.m"
                                        *prof_info__HeadVar__1_1 = prof_info__V_28_28;
#line 197 "prof_info.m"
                                      else
#line 197 "prof_info.m"
                                        {
#line 197 "prof_info.m"
                                          MR_Word prof_info__V_29_29;

#line 197 "prof_info.m"
                                          {
#line 197 "prof_info.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&prof_info__V_29_29, prof_info__V_108_108, prof_info__V_20_20);
                                          }
#line 1674 "prof_info.c"
                                          prof_info__succeeded = (prof_info__V_29_29 == (MR_Integer) 0);
#line 197 "prof_info.m"
                                          prof_info__succeeded = !(prof_info__succeeded);
#line 197 "prof_info.m"
                                          if (prof_info__succeeded)
#line 197 "prof_info.m"
                                            *prof_info__HeadVar__1_1 = prof_info__V_29_29;
#line 197 "prof_info.m"
                                          else
#line 197 "prof_info.m"
                                            {
#line 197 "prof_info.m"
                                              {
#line 197 "prof_info.m"
                                                mercury__builtin__compare_3_p_0((MR_Word) &prof_info_scalar_common_2[1], prof_info__HeadVar__1_1, ((MR_Box) (prof_info__V_107_107)), ((MR_Box) (prof_info__V_21_21)));
#line 197 "prof_info.m"
                                                return;
                                              }
#line 197 "prof_info.m"
                                            }
#line 197 "prof_info.m"
                                        }
#line 197 "prof_info.m"
                                    }
#line 197 "prof_info.m"
                                }
#line 197 "prof_info.m"
                            }
#line 197 "prof_info.m"
                        }
#line 197 "prof_info.m"
                    }
#line 197 "prof_info.m"
                }
#line 197 "prof_info.m"
            }
#line 197 "prof_info.m"
        }
#line 197 "prof_info.m"
  }
#line 197 "prof_info.m"
}

#line 197 "prof_info.m"
MR_bool MR_CALL 
prof_info____Unify____prof_node_0_0(
#line 197 "prof_info.m"
  MR_Word prof_info__HeadVar__1_1,
#line 197 "prof_info.m"
  MR_Word prof_info__HeadVar__2_2)
#line 197 "prof_info.m"
{
#line 197 "prof_info.m"
  {
#line 197 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 197 "prof_info.m"
    MR_Integer prof_info__CastX_35 = (MR_Integer) prof_info__HeadVar__1_1;
#line 197 "prof_info.m"
    MR_Integer prof_info__CastY_36 = (MR_Integer) prof_info__HeadVar__2_2;

#line 197 "prof_info.m"
    prof_info__succeeded = (prof_info__CastX_35 == prof_info__CastY_36);
#line 197 "prof_info.m"
    if (prof_info__succeeded)
#line 197 "prof_info.m"
      prof_info__succeeded = MR_TRUE;
#line 197 "prof_info.m"
    else
#line 197 "prof_info.m"
      if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 197 "prof_info.m"
        {
#line 197 "prof_info.m"
          MR_Word prof_info__TypeInfo_37_37;
#line 197 "prof_info.m"
          MR_String prof_info__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 197 "prof_info.m"
          MR_Integer prof_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 197 "prof_info.m"
          MR_Integer prof_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 197 "prof_info.m"
          MR_Float prof_info__V_24_24 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 197 "prof_info.m"
          MR_Word prof_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 197 "prof_info.m"
          MR_Integer prof_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 197 "prof_info.m"
          MR_Integer prof_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 6)));
#line 197 "prof_info.m"
          MR_String prof_info__V_28_28;
#line 197 "prof_info.m"
          MR_Integer prof_info__V_29_29;
#line 197 "prof_info.m"
          MR_Integer prof_info__V_30_30;
#line 197 "prof_info.m"
          MR_Float prof_info__V_31_31;
#line 197 "prof_info.m"
          MR_Word prof_info__V_32_32;
#line 197 "prof_info.m"
          MR_Integer prof_info__V_33_33;
#line 197 "prof_info.m"
          MR_Integer prof_info__V_34_34;

#line 197 "prof_info.m"
          prof_info__succeeded = ((MR_tag((MR_Word) prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 197 "prof_info.m"
          if (prof_info__succeeded)
#line 197 "prof_info.m"
            {
#line 197 "prof_info.m"
              prof_info__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 197 "prof_info.m"
              prof_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 197 "prof_info.m"
              prof_info__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 197 "prof_info.m"
              prof_info__V_31_31 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 197 "prof_info.m"
              prof_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 197 "prof_info.m"
              prof_info__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 5)));
#line 197 "prof_info.m"
              prof_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 6)));
#line 1799 "prof_info.c"
              prof_info__succeeded = (strcmp(prof_info__V_21_21, prof_info__V_28_28) == 0);
#line 197 "prof_info.m"
              if (prof_info__succeeded)
#line 197 "prof_info.m"
                {
#line 1805 "prof_info.c"
                  prof_info__succeeded = (prof_info__V_22_22 == prof_info__V_29_29);
#line 197 "prof_info.m"
                  if (prof_info__succeeded)
#line 197 "prof_info.m"
                    {
#line 1811 "prof_info.c"
                      prof_info__succeeded = (prof_info__V_23_23 == prof_info__V_30_30);
#line 197 "prof_info.m"
                      if (prof_info__succeeded)
#line 197 "prof_info.m"
                        {
#line 1817 "prof_info.c"
                          prof_info__succeeded = (prof_info__V_24_24 == prof_info__V_31_31);
#line 197 "prof_info.m"
                          if (prof_info__succeeded)
#line 197 "prof_info.m"
                            {
#line 1823 "prof_info.c"
                              prof_info__TypeInfo_37_37 = (MR_Word) &prof_info_scalar_common_2[0];
#line 1825 "prof_info.c"
                              {
#line 1827 "prof_info.c"
                                prof_info__succeeded = mercury__builtin__unify_2_p_0(prof_info__TypeInfo_37_37, ((MR_Box) (prof_info__V_25_25)), ((MR_Box) (prof_info__V_32_32)));
                              }
#line 197 "prof_info.m"
                              if (prof_info__succeeded)
#line 197 "prof_info.m"
                                {
#line 1834 "prof_info.c"
                                  prof_info__succeeded = (prof_info__V_26_26 == prof_info__V_33_33);
#line 197 "prof_info.m"
                                  if (prof_info__succeeded)
#line 1838 "prof_info.c"
                                    prof_info__succeeded = (prof_info__V_27_27 == prof_info__V_34_34);
#line 197 "prof_info.m"
                                }
#line 197 "prof_info.m"
                            }
#line 197 "prof_info.m"
                        }
#line 197 "prof_info.m"
                    }
#line 197 "prof_info.m"
                }
#line 197 "prof_info.m"
            }
#line 197 "prof_info.m"
        }
#line 197 "prof_info.m"
      else
#line 197 "prof_info.m"
        {
#line 197 "prof_info.m"
          MR_Word prof_info__TypeInfo_38_38;
#line 197 "prof_info.m"
          MR_Word prof_info__TypeInfo_39_39;
#line 197 "prof_info.m"
          MR_Word prof_info__TypeInfo_40_40;
#line 197 "prof_info.m"
          MR_String prof_info__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 197 "prof_info.m"
          MR_Integer prof_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 197 "prof_info.m"
          MR_Integer prof_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 197 "prof_info.m"
          MR_Float prof_info__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 197 "prof_info.m"
          MR_Word prof_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 197 "prof_info.m"
          MR_Word prof_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 197 "prof_info.m"
          MR_Integer prof_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 6)));
#line 197 "prof_info.m"
          MR_Integer prof_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 7)));
#line 197 "prof_info.m"
          MR_Word prof_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 8)));
#line 197 "prof_info.m"
          MR_String prof_info__V_12_12;
#line 197 "prof_info.m"
          MR_Integer prof_info__V_13_13;
#line 197 "prof_info.m"
          MR_Integer prof_info__V_14_14;
#line 197 "prof_info.m"
          MR_Float prof_info__V_15_15;
#line 197 "prof_info.m"
          MR_Word prof_info__V_16_16;
#line 197 "prof_info.m"
          MR_Word prof_info__V_17_17;
#line 197 "prof_info.m"
          MR_Integer prof_info__V_18_18;
#line 197 "prof_info.m"
          MR_Integer prof_info__V_19_19;
#line 197 "prof_info.m"
          MR_Word prof_info__V_20_20;

#line 197 "prof_info.m"
          prof_info__succeeded = ((MR_tag((MR_Word) prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 197 "prof_info.m"
          if (prof_info__succeeded)
#line 197 "prof_info.m"
            {
#line 197 "prof_info.m"
              prof_info__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 197 "prof_info.m"
              prof_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 197 "prof_info.m"
              prof_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 197 "prof_info.m"
              prof_info__V_15_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 197 "prof_info.m"
              prof_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 197 "prof_info.m"
              prof_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 5)));
#line 197 "prof_info.m"
              prof_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 6)));
#line 197 "prof_info.m"
              prof_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 7)));
#line 197 "prof_info.m"
              prof_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 8)));
#line 1925 "prof_info.c"
              prof_info__succeeded = (strcmp(prof_info__V_3_3, prof_info__V_12_12) == 0);
#line 197 "prof_info.m"
              if (prof_info__succeeded)
#line 197 "prof_info.m"
                {
#line 1931 "prof_info.c"
                  prof_info__succeeded = (prof_info__V_4_4 == prof_info__V_13_13);
#line 197 "prof_info.m"
                  if (prof_info__succeeded)
#line 197 "prof_info.m"
                    {
#line 1937 "prof_info.c"
                      prof_info__succeeded = (prof_info__V_5_5 == prof_info__V_14_14);
#line 197 "prof_info.m"
                      if (prof_info__succeeded)
#line 197 "prof_info.m"
                        {
#line 1943 "prof_info.c"
                          prof_info__succeeded = (prof_info__V_6_6 == prof_info__V_15_15);
#line 197 "prof_info.m"
                          if (prof_info__succeeded)
#line 197 "prof_info.m"
                            {
#line 1949 "prof_info.c"
                              prof_info__TypeInfo_38_38 = (MR_Word) &prof_info_scalar_common_2[0];
#line 1951 "prof_info.c"
                              {
#line 1953 "prof_info.c"
                                prof_info__succeeded = mercury__builtin__unify_2_p_0(prof_info__TypeInfo_38_38, ((MR_Box) (prof_info__V_7_7)), ((MR_Box) (prof_info__V_16_16)));
                              }
#line 197 "prof_info.m"
                              if (prof_info__succeeded)
#line 197 "prof_info.m"
                                {
#line 1960 "prof_info.c"
                                  prof_info__TypeInfo_39_39 = (MR_Word) &prof_info_scalar_common_2[0];
#line 1962 "prof_info.c"
                                  {
#line 1964 "prof_info.c"
                                    prof_info__succeeded = mercury__builtin__unify_2_p_0(prof_info__TypeInfo_39_39, ((MR_Box) (prof_info__V_8_8)), ((MR_Box) (prof_info__V_17_17)));
                                  }
#line 197 "prof_info.m"
                                  if (prof_info__succeeded)
#line 197 "prof_info.m"
                                    {
#line 1971 "prof_info.c"
                                      prof_info__succeeded = (prof_info__V_9_9 == prof_info__V_18_18);
#line 197 "prof_info.m"
                                      if (prof_info__succeeded)
#line 197 "prof_info.m"
                                        {
#line 1977 "prof_info.c"
                                          prof_info__succeeded = (prof_info__V_10_10 == prof_info__V_19_19);
#line 197 "prof_info.m"
                                          if (prof_info__succeeded)
#line 197 "prof_info.m"
                                            {
#line 1983 "prof_info.c"
                                              prof_info__TypeInfo_40_40 = (MR_Word) &prof_info_scalar_common_2[1];
#line 1985 "prof_info.c"
                                              {
#line 1987 "prof_info.c"
                                                return prof_info__succeeded = mercury__builtin__unify_2_p_0(prof_info__TypeInfo_40_40, ((MR_Box) (prof_info__V_11_11)), ((MR_Box) (prof_info__V_20_20)));
                                              }
#line 197 "prof_info.m"
                                            }
#line 197 "prof_info.m"
                                        }
#line 197 "prof_info.m"
                                    }
#line 197 "prof_info.m"
                                }
#line 197 "prof_info.m"
                            }
#line 197 "prof_info.m"
                        }
#line 197 "prof_info.m"
                    }
#line 197 "prof_info.m"
                }
#line 197 "prof_info.m"
            }
#line 197 "prof_info.m"
        }
#line 197 "prof_info.m"
    return prof_info__succeeded;
#line 197 "prof_info.m"
  }
#line 197 "prof_info.m"
}

#line 171 "prof_info.m"
void MR_CALL 
prof_info____Compare____prof_0_0(
#line 171 "prof_info.m"
  MR_Word * prof_info__HeadVar__1_1,
#line 171 "prof_info.m"
  MR_Word prof_info__HeadVar__2_2,
#line 171 "prof_info.m"
  MR_Word prof_info__HeadVar__3_3)
#line 171 "prof_info.m"
{
#line 171 "prof_info.m"
  {
#line 171 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 171 "prof_info.m"
    MR_Integer prof_info__CastX_21 = (MR_Integer) prof_info__HeadVar__2_2;
#line 171 "prof_info.m"
    MR_Integer prof_info__CastY_22 = (MR_Integer) prof_info__HeadVar__3_3;

#line 171 "prof_info.m"
    prof_info__succeeded = (prof_info__CastX_21 == prof_info__CastY_22);
#line 171 "prof_info.m"
    if (prof_info__succeeded)
#line 2041 "prof_info.c"
      *prof_info__HeadVar__1_1 = (MR_Integer) 0;
#line 171 "prof_info.m"
    else
#line 171 "prof_info.m"
      {
#line 171 "prof_info.m"
        MR_Float prof_info__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "prof_info.m"
        MR_String prof_info__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "prof_info.m"
        MR_Integer prof_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 171 "prof_info.m"
        MR_Word prof_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 171 "prof_info.m"
        MR_Word prof_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 171 "prof_info.m"
        MR_Word prof_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 5)));
#line 171 "prof_info.m"
        MR_Float prof_info__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 0)));
#line 171 "prof_info.m"
        MR_String prof_info__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 1)));
#line 171 "prof_info.m"
        MR_Integer prof_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 2)));
#line 171 "prof_info.m"
        MR_Word prof_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 3)));
#line 171 "prof_info.m"
        MR_Word prof_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 4)));
#line 171 "prof_info.m"
        MR_Word prof_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 5)));
#line 171 "prof_info.m"
        MR_Word prof_info__V_16_16;

#line 171 "prof_info.m"
        {
#line 171 "prof_info.m"
          mercury__private_builtin__builtin_compare_float_3_p_0(&prof_info__V_16_16, prof_info__V_4_4, prof_info__V_10_10);
        }
#line 2079 "prof_info.c"
        prof_info__succeeded = (prof_info__V_16_16 == (MR_Integer) 0);
#line 171 "prof_info.m"
        prof_info__succeeded = !(prof_info__succeeded);
#line 171 "prof_info.m"
        if (prof_info__succeeded)
#line 171 "prof_info.m"
          *prof_info__HeadVar__1_1 = prof_info__V_16_16;
#line 171 "prof_info.m"
        else
#line 171 "prof_info.m"
          {
#line 171 "prof_info.m"
            MR_Word prof_info__V_17_17;

#line 171 "prof_info.m"
            {
#line 171 "prof_info.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&prof_info__V_17_17, prof_info__V_5_5, prof_info__V_11_11);
            }
#line 2099 "prof_info.c"
            prof_info__succeeded = (prof_info__V_17_17 == (MR_Integer) 0);
#line 171 "prof_info.m"
            prof_info__succeeded = !(prof_info__succeeded);
#line 171 "prof_info.m"
            if (prof_info__succeeded)
#line 171 "prof_info.m"
              *prof_info__HeadVar__1_1 = prof_info__V_17_17;
#line 171 "prof_info.m"
            else
#line 171 "prof_info.m"
              {
#line 171 "prof_info.m"
                MR_Word prof_info__V_18_18;

#line 171 "prof_info.m"
                {
#line 171 "prof_info.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&prof_info__V_18_18, prof_info__V_6_6, prof_info__V_12_12);
                }
#line 2119 "prof_info.c"
                prof_info__succeeded = (prof_info__V_18_18 == (MR_Integer) 0);
#line 171 "prof_info.m"
                prof_info__succeeded = !(prof_info__succeeded);
#line 171 "prof_info.m"
                if (prof_info__succeeded)
#line 171 "prof_info.m"
                  *prof_info__HeadVar__1_1 = prof_info__V_18_18;
#line 171 "prof_info.m"
                else
#line 171 "prof_info.m"
                  {
#line 171 "prof_info.m"
                    MR_Word prof_info__V_19_19;

#line 171 "prof_info.m"
                    {
#line 171 "prof_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &prof_info_scalar_common_1[0], &prof_info__V_19_19, ((MR_Box) (prof_info__V_7_7)), ((MR_Box) (prof_info__V_13_13)));
                    }
#line 2139 "prof_info.c"
                    prof_info__succeeded = (prof_info__V_19_19 == (MR_Integer) 0);
#line 171 "prof_info.m"
                    prof_info__succeeded = !(prof_info__succeeded);
#line 171 "prof_info.m"
                    if (prof_info__succeeded)
#line 171 "prof_info.m"
                      *prof_info__HeadVar__1_1 = prof_info__V_19_19;
#line 171 "prof_info.m"
                    else
#line 171 "prof_info.m"
                      {
#line 171 "prof_info.m"
                        MR_Word prof_info__V_20_20;

#line 171 "prof_info.m"
                        {
#line 171 "prof_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &prof_info_scalar_common_1[1], &prof_info__V_20_20, ((MR_Box) (prof_info__V_8_8)), ((MR_Box) (prof_info__V_14_14)));
                        }
#line 2159 "prof_info.c"
                        prof_info__succeeded = (prof_info__V_20_20 == (MR_Integer) 0);
#line 171 "prof_info.m"
                        prof_info__succeeded = !(prof_info__succeeded);
#line 171 "prof_info.m"
                        if (prof_info__succeeded)
#line 171 "prof_info.m"
                          *prof_info__HeadVar__1_1 = prof_info__V_20_20;
#line 171 "prof_info.m"
                        else
#line 171 "prof_info.m"
                          {
#line 171 "prof_info.m"
                            {
#line 171 "prof_info.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &prof_info_scalar_common_1[0], prof_info__HeadVar__1_1, ((MR_Box) (prof_info__V_9_9)), ((MR_Box) (prof_info__V_15_15)));
#line 171 "prof_info.m"
                              return;
                            }
#line 171 "prof_info.m"
                          }
#line 171 "prof_info.m"
                      }
#line 171 "prof_info.m"
                  }
#line 171 "prof_info.m"
              }
#line 171 "prof_info.m"
          }
#line 171 "prof_info.m"
      }
#line 171 "prof_info.m"
  }
#line 171 "prof_info.m"
}

#line 171 "prof_info.m"
MR_bool MR_CALL 
prof_info____Unify____prof_0_0(
#line 171 "prof_info.m"
  MR_Word prof_info__HeadVar__1_1,
#line 171 "prof_info.m"
  MR_Word prof_info__HeadVar__2_2)
#line 171 "prof_info.m"
{
#line 171 "prof_info.m"
  {
#line 171 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 171 "prof_info.m"
    MR_Integer prof_info__CastX_15 = (MR_Integer) prof_info__HeadVar__1_1;
#line 171 "prof_info.m"
    MR_Integer prof_info__CastY_16 = (MR_Integer) prof_info__HeadVar__2_2;

#line 171 "prof_info.m"
    prof_info__succeeded = (prof_info__CastX_15 == prof_info__CastY_16);
#line 171 "prof_info.m"
    if (prof_info__succeeded)
#line 171 "prof_info.m"
      prof_info__succeeded = MR_TRUE;
#line 171 "prof_info.m"
    else
#line 171 "prof_info.m"
      {
#line 171 "prof_info.m"
        MR_Word prof_info__TypeInfo_17_17;
#line 171 "prof_info.m"
        MR_Word prof_info__TypeInfo_18_18;
#line 171 "prof_info.m"
        MR_Word prof_info__TypeInfo_19_19;
#line 171 "prof_info.m"
        MR_Float prof_info__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 171 "prof_info.m"
        MR_String prof_info__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 171 "prof_info.m"
        MR_Integer prof_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 171 "prof_info.m"
        MR_Word prof_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 171 "prof_info.m"
        MR_Word prof_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 171 "prof_info.m"
        MR_Word prof_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 171 "prof_info.m"
        MR_Float prof_info__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "prof_info.m"
        MR_String prof_info__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "prof_info.m"
        MR_Integer prof_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 171 "prof_info.m"
        MR_Word prof_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 171 "prof_info.m"
        MR_Word prof_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 171 "prof_info.m"
        MR_Word prof_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 5)));

#line 2254 "prof_info.c"
        prof_info__succeeded = (prof_info__V_3_3 == prof_info__V_9_9);
#line 171 "prof_info.m"
        if (prof_info__succeeded)
#line 171 "prof_info.m"
          {
#line 2260 "prof_info.c"
            prof_info__succeeded = (strcmp(prof_info__V_4_4, prof_info__V_10_10) == 0);
#line 171 "prof_info.m"
            if (prof_info__succeeded)
#line 171 "prof_info.m"
              {
#line 2266 "prof_info.c"
                prof_info__succeeded = (prof_info__V_5_5 == prof_info__V_11_11);
#line 171 "prof_info.m"
                if (prof_info__succeeded)
#line 171 "prof_info.m"
                  {
#line 2272 "prof_info.c"
                    prof_info__TypeInfo_17_17 = (MR_Word) &prof_info_scalar_common_1[0];
#line 2274 "prof_info.c"
                    {
#line 2276 "prof_info.c"
                      prof_info__succeeded = mercury__builtin__unify_2_p_0(prof_info__TypeInfo_17_17, ((MR_Box) (prof_info__V_6_6)), ((MR_Box) (prof_info__V_12_12)));
                    }
#line 171 "prof_info.m"
                    if (prof_info__succeeded)
#line 171 "prof_info.m"
                      {
#line 2283 "prof_info.c"
                        prof_info__TypeInfo_18_18 = (MR_Word) &prof_info_scalar_common_1[1];
#line 2285 "prof_info.c"
                        {
#line 2287 "prof_info.c"
                          prof_info__succeeded = mercury__builtin__unify_2_p_0(prof_info__TypeInfo_18_18, ((MR_Box) (prof_info__V_7_7)), ((MR_Box) (prof_info__V_13_13)));
                        }
#line 171 "prof_info.m"
                        if (prof_info__succeeded)
#line 171 "prof_info.m"
                          {
#line 2294 "prof_info.c"
                            prof_info__TypeInfo_19_19 = (MR_Word) &prof_info_scalar_common_1[0];
#line 2296 "prof_info.c"
                            {
#line 2298 "prof_info.c"
                              return prof_info__succeeded = mercury__builtin__unify_2_p_0(prof_info__TypeInfo_19_19, ((MR_Box) (prof_info__V_8_8)), ((MR_Box) (prof_info__V_14_14)));
                            }
#line 171 "prof_info.m"
                          }
#line 171 "prof_info.m"
                      }
#line 171 "prof_info.m"
                  }
#line 171 "prof_info.m"
              }
#line 171 "prof_info.m"
          }
#line 171 "prof_info.m"
      }
#line 171 "prof_info.m"
    return prof_info__succeeded;
#line 171 "prof_info.m"
  }
#line 171 "prof_info.m"
}

#line 255 "prof_info.m"
void MR_CALL 
prof_info____Compare____pred_info_0_0(
#line 255 "prof_info.m"
  MR_Word * prof_info__HeadVar__1_1,
#line 255 "prof_info.m"
  MR_Word prof_info__HeadVar__2_2,
#line 255 "prof_info.m"
  MR_Word prof_info__HeadVar__3_3)
#line 255 "prof_info.m"
{
#line 255 "prof_info.m"
  {
#line 255 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 255 "prof_info.m"
    MR_Integer prof_info__CastX_9 = (MR_Integer) prof_info__HeadVar__2_2;
#line 255 "prof_info.m"
    MR_Integer prof_info__CastY_10 = (MR_Integer) prof_info__HeadVar__3_3;

#line 255 "prof_info.m"
    prof_info__succeeded = (prof_info__CastX_9 == prof_info__CastY_10);
#line 255 "prof_info.m"
    if (prof_info__succeeded)
#line 2344 "prof_info.c"
      *prof_info__HeadVar__1_1 = (MR_Integer) 0;
#line 255 "prof_info.m"
    else
#line 255 "prof_info.m"
      {
#line 255 "prof_info.m"
        MR_String prof_info__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 255 "prof_info.m"
        MR_Integer prof_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 255 "prof_info.m"
        MR_String prof_info__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 0)));
#line 255 "prof_info.m"
        MR_Integer prof_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 1)));
#line 255 "prof_info.m"
        MR_Word prof_info__V_8_8;

#line 255 "prof_info.m"
        {
#line 255 "prof_info.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&prof_info__V_8_8, prof_info__V_4_4, prof_info__V_6_6);
        }
#line 2366 "prof_info.c"
        prof_info__succeeded = (prof_info__V_8_8 == (MR_Integer) 0);
#line 255 "prof_info.m"
        prof_info__succeeded = !(prof_info__succeeded);
#line 255 "prof_info.m"
        if (prof_info__succeeded)
#line 255 "prof_info.m"
          *prof_info__HeadVar__1_1 = prof_info__V_8_8;
#line 255 "prof_info.m"
        else
#line 255 "prof_info.m"
          {
#line 255 "prof_info.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(prof_info__HeadVar__1_1, prof_info__V_5_5, prof_info__V_7_7);
#line 255 "prof_info.m"
            return;
          }
#line 255 "prof_info.m"
      }
#line 255 "prof_info.m"
  }
#line 255 "prof_info.m"
}

#line 255 "prof_info.m"
MR_bool MR_CALL 
prof_info____Unify____pred_info_0_0(
#line 255 "prof_info.m"
  MR_Word prof_info__HeadVar__1_1,
#line 255 "prof_info.m"
  MR_Word prof_info__HeadVar__2_2)
#line 255 "prof_info.m"
{
#line 255 "prof_info.m"
  {
#line 255 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 255 "prof_info.m"
    MR_Integer prof_info__CastX_7 = (MR_Integer) prof_info__HeadVar__1_1;
#line 255 "prof_info.m"
    MR_Integer prof_info__CastY_8 = (MR_Integer) prof_info__HeadVar__2_2;

#line 255 "prof_info.m"
    prof_info__succeeded = (prof_info__CastX_7 == prof_info__CastY_8);
#line 255 "prof_info.m"
    if (prof_info__succeeded)
#line 255 "prof_info.m"
      prof_info__succeeded = MR_TRUE;
#line 255 "prof_info.m"
    else
#line 255 "prof_info.m"
      {
#line 255 "prof_info.m"
        MR_String prof_info__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 255 "prof_info.m"
        MR_Integer prof_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 255 "prof_info.m"
        MR_String prof_info__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 255 "prof_info.m"
        MR_Integer prof_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));

#line 2427 "prof_info.c"
        prof_info__succeeded = (strcmp(prof_info__V_3_3, prof_info__V_5_5) == 0);
#line 255 "prof_info.m"
        if (prof_info__succeeded)
#line 2431 "prof_info.c"
          prof_info__succeeded = (prof_info__V_4_4 == prof_info__V_6_6);
#line 255 "prof_info.m"
      }
#line 255 "prof_info.m"
    return prof_info__succeeded;
#line 255 "prof_info.m"
  }
#line 255 "prof_info.m"
}

#line 39 "prof_info.m"
void MR_CALL 
prof_info____Compare____cycle_map_0_0(
#line 39 "prof_info.m"
  MR_Word * prof_info__HeadVar__1_1,
#line 39 "prof_info.m"
  MR_Word prof_info__HeadVar__2_2,
#line 39 "prof_info.m"
  MR_Word prof_info__HeadVar__3_3)
#line 39 "prof_info.m"
{
#line 39 "prof_info.m"
  {
#line 39 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 39 "prof_info.m"
    MR_Word prof_info__Cast_HeadVar1_4 = prof_info__HeadVar__2_2;
#line 39 "prof_info.m"
    MR_Word prof_info__Cast_HeadVar2_5 = prof_info__HeadVar__3_3;

#line 39 "prof_info.m"
    {
#line 39 "prof_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &prof_info_scalar_common_1[0], prof_info__HeadVar__1_1, ((MR_Box) (prof_info__Cast_HeadVar1_4)), ((MR_Box) (prof_info__Cast_HeadVar2_5)));
#line 39 "prof_info.m"
      return;
    }
#line 39 "prof_info.m"
  }
#line 39 "prof_info.m"
}

#line 39 "prof_info.m"
MR_bool MR_CALL 
prof_info____Unify____cycle_map_0_0(
#line 39 "prof_info.m"
  MR_Word prof_info__HeadVar__1_1,
#line 39 "prof_info.m"
  MR_Word prof_info__HeadVar__2_2)
#line 39 "prof_info.m"
{
#line 39 "prof_info.m"
  {
#line 39 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 39 "prof_info.m"
    MR_Word prof_info__Cast_HeadVar1_3 = prof_info__HeadVar__1_1;
#line 39 "prof_info.m"
    MR_Word prof_info__Cast_HeadVar2_4 = prof_info__HeadVar__2_2;

#line 39 "prof_info.m"
    {
#line 39 "prof_info.m"
      return prof_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &prof_info_scalar_common_1[0], ((MR_Box) (prof_info__Cast_HeadVar1_3)), ((MR_Box) (prof_info__Cast_HeadVar2_4)));
    }
#line 39 "prof_info.m"
    return prof_info__succeeded;
#line 39 "prof_info.m"
  }
#line 39 "prof_info.m"
}

#line 33 "prof_info.m"
void MR_CALL 
prof_info____Compare____addrdecl_0_0(
#line 33 "prof_info.m"
  MR_Word * prof_info__HeadVar__1_1,
#line 33 "prof_info.m"
  MR_Word prof_info__HeadVar__2_2,
#line 33 "prof_info.m"
  MR_Word prof_info__HeadVar__3_3)
#line 33 "prof_info.m"
{
#line 33 "prof_info.m"
  {
#line 33 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 33 "prof_info.m"
    MR_Word prof_info__Cast_HeadVar1_4 = prof_info__HeadVar__2_2;
#line 33 "prof_info.m"
    MR_Word prof_info__Cast_HeadVar2_5 = prof_info__HeadVar__3_3;

#line 33 "prof_info.m"
    {
#line 33 "prof_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &prof_info_scalar_common_1[0], prof_info__HeadVar__1_1, ((MR_Box) (prof_info__Cast_HeadVar1_4)), ((MR_Box) (prof_info__Cast_HeadVar2_5)));
#line 33 "prof_info.m"
      return;
    }
#line 33 "prof_info.m"
  }
#line 33 "prof_info.m"
}

#line 33 "prof_info.m"
MR_bool MR_CALL 
prof_info____Unify____addrdecl_0_0(
#line 33 "prof_info.m"
  MR_Word prof_info__HeadVar__1_1,
#line 33 "prof_info.m"
  MR_Word prof_info__HeadVar__2_2)
#line 33 "prof_info.m"
{
#line 33 "prof_info.m"
  {
#line 33 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 33 "prof_info.m"
    MR_Word prof_info__Cast_HeadVar1_3 = prof_info__HeadVar__1_1;
#line 33 "prof_info.m"
    MR_Word prof_info__Cast_HeadVar2_4 = prof_info__HeadVar__2_2;

#line 33 "prof_info.m"
    {
#line 33 "prof_info.m"
      return prof_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &prof_info_scalar_common_1[0], ((MR_Box) (prof_info__Cast_HeadVar1_3)), ((MR_Box) (prof_info__Cast_HeadVar2_4)));
    }
#line 33 "prof_info.m"
    return prof_info__succeeded;
#line 33 "prof_info.m"
  }
#line 33 "prof_info.m"
}

#line 162 "prof_info.m"
void MR_CALL 
prof_info__pred_info_get_counts_2_p_0(
#line 162 "prof_info.m"
  MR_Word prof_info__Pred_3,
#line 162 "prof_info.m"
  MR_Integer * prof_info__HeadVar__2_2)
#line 162 "prof_info.m"
{
#line 410 "prof_info.m"
  {
#line 410 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 410 "prof_info.m"
    MR_String prof_info__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__Pred_3, (MR_Integer) 0)));

#line 410 "prof_info.m"
    *prof_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__Pred_3, (MR_Integer) 1)));
#line 410 "prof_info.m"
  }
#line 162 "prof_info.m"
}

#line 161 "prof_info.m"
void MR_CALL 
prof_info__pred_info_get_pred_name_2_p_0(
#line 161 "prof_info.m"
  MR_Word prof_info__Pred_3,
#line 161 "prof_info.m"
  MR_String * prof_info__HeadVar__2_2)
#line 161 "prof_info.m"
{
#line 409 "prof_info.m"
  {
#line 409 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 409 "prof_info.m"
    MR_Integer prof_info__V_4_4;

#line 409 "prof_info.m"
    *prof_info__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__Pred_3, (MR_Integer) 0)));
#line 409 "prof_info.m"
    prof_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__Pred_3, (MR_Integer) 1)));
#line 409 "prof_info.m"
  }
#line 161 "prof_info.m"
}

#line 160 "prof_info.m"
void MR_CALL 
prof_info__pred_info_get_entire_3_p_0(
#line 160 "prof_info.m"
  MR_Word prof_info__HeadVar__1_1,
#line 160 "prof_info.m"
  MR_String * prof_info__A_4,
#line 160 "prof_info.m"
  MR_Integer * prof_info__B_5)
#line 160 "prof_info.m"
{
#line 407 "prof_info.m"
  {
#line 407 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 407 "prof_info.m"
    *prof_info__A_4 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 407 "prof_info.m"
    *prof_info__B_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 407 "prof_info.m"
  }
#line 160 "prof_info.m"
}

#line 153 "prof_info.m"
void MR_CALL 
prof_info__pred_info_init_3_p_0(
#line 153 "prof_info.m"
  MR_String prof_info__Name_4,
#line 153 "prof_info.m"
  MR_Integer prof_info__Count_5,
#line 153 "prof_info.m"
  MR_Word * prof_info__HeadVar__3_3)
#line 153 "prof_info.m"
{
#line 401 "prof_info.m"
  {
#line 401 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 401 "prof_info.m"
    {
#line 401 "prof_info.m"
      MR_Word base;
#line 401 "prof_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 401 "prof_info.m"
      *prof_info__HeadVar__3_3 = base;
#line 401 "prof_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (prof_info__Name_4));
#line 401 "prof_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__Count_5));
#line 401 "prof_info.m"
    }
#line 401 "prof_info.m"
  }
#line 153 "prof_info.m"
}

#line 145 "prof_info.m"
void MR_CALL 
prof_info__prof_node_concat_to_member_4_p_0(
#line 145 "prof_info.m"
  MR_String prof_info__Name_1,
#line 145 "prof_info.m"
  MR_Integer prof_info__Count_2,
#line 145 "prof_info.m"
  MR_Word prof_info__HeadVar__3_3,
#line 145 "prof_info.m"
  MR_Word * prof_info__HeadVar__4_4)
#line 145 "prof_info.m"
{
#line 392 "prof_info.m"
  {
#line 392 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 392 "prof_info.m"
    if (((MR_tag((MR_Word) prof_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 392 "prof_info.m"
      {
#line 392 "prof_info.m"
        MR_String prof_info__A_7 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 0)));
#line 392 "prof_info.m"
        MR_Integer prof_info__B_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 1)));
#line 392 "prof_info.m"
        MR_Integer prof_info__C_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 2)));
#line 392 "prof_info.m"
        MR_Float prof_info__D_10 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 3)));
#line 392 "prof_info.m"
        MR_Word prof_info__CList_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 4)));
#line 392 "prof_info.m"
        MR_Integer prof_info__F_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 5)));
#line 392 "prof_info.m"
        MR_Integer prof_info__G_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__3_3, (MR_Integer) 6)));
#line 392 "prof_info.m"
        MR_Word prof_info__V_14_14;
#line 392 "prof_info.m"
        MR_Word prof_info__V_15_15;

#line 393 "prof_info.m"
        {
#line 393 "prof_info.m"
          prof_info__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "prof_info.m"
          MR_hl_field(MR_mktag(0), prof_info__V_15_15, 0) = ((MR_Box) (prof_info__Name_1));
#line 393 "prof_info.m"
          MR_hl_field(MR_mktag(0), prof_info__V_15_15, 1) = ((MR_Box) (prof_info__Count_2));
#line 393 "prof_info.m"
        }
#line 393 "prof_info.m"
        {
#line 393 "prof_info.m"
          prof_info__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "prof_info.m"
          MR_hl_field(MR_mktag(1), prof_info__V_14_14, 0) = ((MR_Box) (prof_info__V_15_15));
#line 393 "prof_info.m"
          MR_hl_field(MR_mktag(1), prof_info__V_14_14, 1) = ((MR_Box) (prof_info__CList_11));
#line 393 "prof_info.m"
        }
#line 393 "prof_info.m"
        {
#line 393 "prof_info.m"
          MR_Word base;
#line 393 "prof_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 393 "prof_info.m"
          *prof_info__HeadVar__4_4 = base;
#line 393 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (prof_info__A_7));
#line 393 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (prof_info__B_8));
#line 393 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (prof_info__C_9));
#line 393 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 3) = MR_box_float(prof_info__D_10);
#line 393 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (prof_info__V_14_14));
#line 393 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (prof_info__F_12));
#line 393 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (prof_info__G_13));
#line 393 "prof_info.m"
        }
#line 392 "prof_info.m"
      }
#line 392 "prof_info.m"
    else
#line 394 "prof_info.m"
      {
#line 395 "prof_info.m"
        {
#line 395 "prof_info.m"
          mercury__require__error_1_p_0((MR_String) "prof_node_concat_to_member: pred_node has no members\n");
#line 395 "prof_info.m"
          return;
        }
#line 394 "prof_info.m"
      }
#line 392 "prof_info.m"
  }
#line 145 "prof_info.m"
}

#line 142 "prof_info.m"
void MR_CALL 
prof_info__prof_node_concat_to_name_list_3_p_0(
#line 142 "prof_info.m"
  MR_String prof_info__Name_1,
#line 142 "prof_info.m"
  MR_Word prof_info__HeadVar__2_2,
#line 142 "prof_info.m"
  MR_Word * prof_info__HeadVar__3_3)
#line 142 "prof_info.m"
{
#line 387 "prof_info.m"
  {
#line 387 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 387 "prof_info.m"
    if (((MR_tag((MR_Word) prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 389 "prof_info.m"
      {
#line 390 "prof_info.m"
        {
#line 390 "prof_info.m"
          mercury__require__error_1_p_0((MR_String) "prof_node_concat_to_name_list: cycle_node has no namelist\n");
#line 390 "prof_info.m"
          return;
        }
#line 389 "prof_info.m"
      }
#line 387 "prof_info.m"
    else
#line 387 "prof_info.m"
      {
#line 387 "prof_info.m"
        MR_String prof_info__A_5 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 387 "prof_info.m"
        MR_Integer prof_info__B_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 387 "prof_info.m"
        MR_Integer prof_info__C_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 387 "prof_info.m"
        MR_Float prof_info__D_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 387 "prof_info.m"
        MR_Word prof_info__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 387 "prof_info.m"
        MR_Word prof_info__F_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 5)));
#line 387 "prof_info.m"
        MR_Integer prof_info__G_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 6)));
#line 387 "prof_info.m"
        MR_Integer prof_info__H_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 7)));
#line 387 "prof_info.m"
        MR_Word prof_info__NL_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 8)));
#line 387 "prof_info.m"
        MR_Word prof_info__V_14_14;

#line 388 "prof_info.m"
        {
#line 388 "prof_info.m"
          prof_info__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "prof_info.m"
          MR_hl_field(MR_mktag(1), prof_info__V_14_14, 0) = ((MR_Box) (prof_info__Name_1));
#line 388 "prof_info.m"
          MR_hl_field(MR_mktag(1), prof_info__V_14_14, 1) = ((MR_Box) (prof_info__NL_13));
#line 388 "prof_info.m"
        }
#line 388 "prof_info.m"
        {
#line 388 "prof_info.m"
          MR_Word base;
#line 388 "prof_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 388 "prof_info.m"
          *prof_info__HeadVar__3_3 = base;
#line 388 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (prof_info__A_5));
#line 388 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__B_6));
#line 388 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__C_7));
#line 388 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(prof_info__D_8);
#line 388 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__E_9));
#line 388 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__F_10));
#line 388 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (prof_info__G_11));
#line 388 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (prof_info__H_12));
#line 388 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (prof_info__V_14_14));
#line 388 "prof_info.m"
        }
#line 387 "prof_info.m"
      }
#line 387 "prof_info.m"
  }
#line 142 "prof_info.m"
}

#line 139 "prof_info.m"
void MR_CALL 
prof_info__prof_node_set_self_calls_3_p_0(
#line 139 "prof_info.m"
  MR_Integer prof_info__Calls_1,
#line 139 "prof_info.m"
  MR_Word prof_info__HeadVar__2_2,
#line 139 "prof_info.m"
  MR_Word * prof_info__HeadVar__3_3)
#line 139 "prof_info.m"
{
#line 382 "prof_info.m"
  {
#line 382 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 382 "prof_info.m"
    if (((MR_tag((MR_Word) prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 384 "prof_info.m"
      {
#line 384 "prof_info.m"
        MR_String prof_info__A_15 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 384 "prof_info.m"
        MR_Integer prof_info__B_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 384 "prof_info.m"
        MR_Integer prof_info__C_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 384 "prof_info.m"
        MR_Float prof_info__D_18 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 384 "prof_info.m"
        MR_Word prof_info__E_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 384 "prof_info.m"
        MR_Integer prof_info__F_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 5)));
#line 384 "prof_info.m"
        MR_Integer prof_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 6)));

#line 385 "prof_info.m"
        {
#line 385 "prof_info.m"
          MR_Word base;
#line 385 "prof_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 385 "prof_info.m"
          *prof_info__HeadVar__3_3 = base;
#line 385 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (prof_info__A_15));
#line 385 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (prof_info__B_16));
#line 385 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (prof_info__C_17));
#line 385 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 3) = MR_box_float(prof_info__D_18);
#line 385 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (prof_info__E_19));
#line 385 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (prof_info__F_20));
#line 385 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (prof_info__Calls_1));
#line 385 "prof_info.m"
        }
#line 384 "prof_info.m"
      }
#line 382 "prof_info.m"
    else
#line 382 "prof_info.m"
      {
#line 382 "prof_info.m"
        MR_String prof_info__A_5 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "prof_info.m"
        MR_Integer prof_info__B_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "prof_info.m"
        MR_Integer prof_info__C_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 382 "prof_info.m"
        MR_Float prof_info__D_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 382 "prof_info.m"
        MR_Word prof_info__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 382 "prof_info.m"
        MR_Word prof_info__F_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 5)));
#line 382 "prof_info.m"
        MR_Integer prof_info__G_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 6)));
#line 382 "prof_info.m"
        MR_Word prof_info__I_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 8)));
#line 382 "prof_info.m"
        MR_Integer prof_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 7)));

#line 383 "prof_info.m"
        {
#line 383 "prof_info.m"
          MR_Word base;
#line 383 "prof_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 383 "prof_info.m"
          *prof_info__HeadVar__3_3 = base;
#line 383 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (prof_info__A_5));
#line 383 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__B_6));
#line 383 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__C_7));
#line 383 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(prof_info__D_8);
#line 383 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__E_9));
#line 383 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__F_10));
#line 383 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (prof_info__G_11));
#line 383 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (prof_info__Calls_1));
#line 383 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (prof_info__I_13));
#line 383 "prof_info.m"
        }
#line 382 "prof_info.m"
      }
#line 382 "prof_info.m"
  }
#line 139 "prof_info.m"
}

#line 136 "prof_info.m"
void MR_CALL 
prof_info__prof_node_set_total_calls_3_p_0(
#line 136 "prof_info.m"
  MR_Integer prof_info__Calls_1,
#line 136 "prof_info.m"
  MR_Word prof_info__HeadVar__2_2,
#line 136 "prof_info.m"
  MR_Word * prof_info__HeadVar__3_3)
#line 136 "prof_info.m"
{
#line 377 "prof_info.m"
  {
#line 377 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 377 "prof_info.m"
    if (((MR_tag((MR_Word) prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 379 "prof_info.m"
      {
#line 379 "prof_info.m"
        MR_String prof_info__A_15 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 379 "prof_info.m"
        MR_Integer prof_info__B_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 379 "prof_info.m"
        MR_Integer prof_info__C_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 379 "prof_info.m"
        MR_Float prof_info__D_18 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 379 "prof_info.m"
        MR_Word prof_info__E_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 379 "prof_info.m"
        MR_Integer prof_info__G_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 6)));
#line 379 "prof_info.m"
        MR_Integer prof_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 5)));

#line 380 "prof_info.m"
        {
#line 380 "prof_info.m"
          MR_Word base;
#line 380 "prof_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 380 "prof_info.m"
          *prof_info__HeadVar__3_3 = base;
#line 380 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (prof_info__A_15));
#line 380 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (prof_info__B_16));
#line 380 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (prof_info__C_17));
#line 380 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 3) = MR_box_float(prof_info__D_18);
#line 380 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (prof_info__E_19));
#line 380 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (prof_info__Calls_1));
#line 380 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (prof_info__G_21));
#line 380 "prof_info.m"
        }
#line 379 "prof_info.m"
      }
#line 377 "prof_info.m"
    else
#line 377 "prof_info.m"
      {
#line 377 "prof_info.m"
        MR_String prof_info__A_5 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 377 "prof_info.m"
        MR_Integer prof_info__B_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 377 "prof_info.m"
        MR_Integer prof_info__C_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 377 "prof_info.m"
        MR_Float prof_info__D_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 377 "prof_info.m"
        MR_Word prof_info__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 377 "prof_info.m"
        MR_Word prof_info__F_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 5)));
#line 377 "prof_info.m"
        MR_Integer prof_info__H_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 7)));
#line 377 "prof_info.m"
        MR_Word prof_info__I_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 8)));
#line 377 "prof_info.m"
        MR_Integer prof_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 6)));

#line 378 "prof_info.m"
        {
#line 378 "prof_info.m"
          MR_Word base;
#line 378 "prof_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 378 "prof_info.m"
          *prof_info__HeadVar__3_3 = base;
#line 378 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (prof_info__A_5));
#line 378 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__B_6));
#line 378 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__C_7));
#line 378 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(prof_info__D_8);
#line 378 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__E_9));
#line 378 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__F_10));
#line 378 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (prof_info__Calls_1));
#line 378 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (prof_info__H_12));
#line 378 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (prof_info__I_13));
#line 378 "prof_info.m"
        }
#line 377 "prof_info.m"
      }
#line 377 "prof_info.m"
  }
#line 136 "prof_info.m"
}

#line 133 "prof_info.m"
void MR_CALL 
prof_info__prof_node_concat_to_child_4_p_0(
#line 133 "prof_info.m"
  MR_String prof_info__Name_1,
#line 133 "prof_info.m"
  MR_Integer prof_info__Count_2,
#line 133 "prof_info.m"
  MR_Word prof_info__HeadVar__3_3,
#line 133 "prof_info.m"
  MR_Word * prof_info__HeadVar__4_4)
#line 133 "prof_info.m"
{
#line 372 "prof_info.m"
  {
#line 372 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 372 "prof_info.m"
    if (((MR_tag((MR_Word) prof_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 374 "prof_info.m"
      {
#line 375 "prof_info.m"
        {
#line 375 "prof_info.m"
          mercury__require__error_1_p_0((MR_String) "prof_node_concat_to_child: cycle_node has no child\n");
#line 375 "prof_info.m"
          return;
        }
#line 374 "prof_info.m"
      }
#line 372 "prof_info.m"
    else
#line 372 "prof_info.m"
      {
#line 372 "prof_info.m"
        MR_String prof_info__A_7 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 0)));
#line 372 "prof_info.m"
        MR_Integer prof_info__B_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 1)));
#line 372 "prof_info.m"
        MR_Integer prof_info__C_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 2)));
#line 372 "prof_info.m"
        MR_Float prof_info__D_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 3)));
#line 372 "prof_info.m"
        MR_Word prof_info__E_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 4)));
#line 372 "prof_info.m"
        MR_Word prof_info__CList_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 5)));
#line 372 "prof_info.m"
        MR_Integer prof_info__G_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 6)));
#line 372 "prof_info.m"
        MR_Integer prof_info__H_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 7)));
#line 372 "prof_info.m"
        MR_Word prof_info__I_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 8)));
#line 372 "prof_info.m"
        MR_Word prof_info__V_16_16;
#line 372 "prof_info.m"
        MR_Word prof_info__V_17_17;

#line 373 "prof_info.m"
        {
#line 373 "prof_info.m"
          prof_info__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 373 "prof_info.m"
          MR_hl_field(MR_mktag(0), prof_info__V_17_17, 0) = ((MR_Box) (prof_info__Name_1));
#line 373 "prof_info.m"
          MR_hl_field(MR_mktag(0), prof_info__V_17_17, 1) = ((MR_Box) (prof_info__Count_2));
#line 373 "prof_info.m"
        }
#line 373 "prof_info.m"
        {
#line 373 "prof_info.m"
          prof_info__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "prof_info.m"
          MR_hl_field(MR_mktag(1), prof_info__V_16_16, 0) = ((MR_Box) (prof_info__V_17_17));
#line 373 "prof_info.m"
          MR_hl_field(MR_mktag(1), prof_info__V_16_16, 1) = ((MR_Box) (prof_info__CList_12));
#line 373 "prof_info.m"
        }
#line 373 "prof_info.m"
        {
#line 373 "prof_info.m"
          MR_Word base;
#line 373 "prof_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 373 "prof_info.m"
          *prof_info__HeadVar__4_4 = base;
#line 373 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (prof_info__A_7));
#line 373 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__B_8));
#line 373 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__C_9));
#line 373 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(prof_info__D_10);
#line 373 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__E_11));
#line 373 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__V_16_16));
#line 373 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (prof_info__G_13));
#line 373 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (prof_info__H_14));
#line 373 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (prof_info__I_15));
#line 373 "prof_info.m"
        }
#line 372 "prof_info.m"
      }
#line 372 "prof_info.m"
  }
#line 133 "prof_info.m"
}

#line 130 "prof_info.m"
void MR_CALL 
prof_info__prof_node_concat_to_parent_4_p_0(
#line 130 "prof_info.m"
  MR_String prof_info__Name_1,
#line 130 "prof_info.m"
  MR_Integer prof_info__Count_2,
#line 130 "prof_info.m"
  MR_Word prof_info__HeadVar__3_3,
#line 130 "prof_info.m"
  MR_Word * prof_info__HeadVar__4_4)
#line 130 "prof_info.m"
{
#line 367 "prof_info.m"
  {
#line 367 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 367 "prof_info.m"
    if (((MR_tag((MR_Word) prof_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 369 "prof_info.m"
      {
#line 370 "prof_info.m"
        {
#line 370 "prof_info.m"
          mercury__require__error_1_p_0((MR_String) "prof_node_concat_to_parent: cycle_node has no parents\n");
#line 370 "prof_info.m"
          return;
        }
#line 369 "prof_info.m"
      }
#line 367 "prof_info.m"
    else
#line 367 "prof_info.m"
      {
#line 367 "prof_info.m"
        MR_String prof_info__A_7 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 0)));
#line 367 "prof_info.m"
        MR_Integer prof_info__B_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 1)));
#line 367 "prof_info.m"
        MR_Integer prof_info__C_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 2)));
#line 367 "prof_info.m"
        MR_Float prof_info__D_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 3)));
#line 367 "prof_info.m"
        MR_Word prof_info__PList_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 4)));
#line 367 "prof_info.m"
        MR_Word prof_info__F_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 5)));
#line 367 "prof_info.m"
        MR_Integer prof_info__G_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 6)));
#line 367 "prof_info.m"
        MR_Integer prof_info__H_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 7)));
#line 367 "prof_info.m"
        MR_Word prof_info__I_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__3_3, (MR_Integer) 8)));
#line 367 "prof_info.m"
        MR_Word prof_info__V_16_16;
#line 367 "prof_info.m"
        MR_Word prof_info__V_17_17;

#line 368 "prof_info.m"
        {
#line 368 "prof_info.m"
          prof_info__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 368 "prof_info.m"
          MR_hl_field(MR_mktag(0), prof_info__V_17_17, 0) = ((MR_Box) (prof_info__Name_1));
#line 368 "prof_info.m"
          MR_hl_field(MR_mktag(0), prof_info__V_17_17, 1) = ((MR_Box) (prof_info__Count_2));
#line 368 "prof_info.m"
        }
#line 368 "prof_info.m"
        {
#line 368 "prof_info.m"
          prof_info__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "prof_info.m"
          MR_hl_field(MR_mktag(1), prof_info__V_16_16, 0) = ((MR_Box) (prof_info__V_17_17));
#line 368 "prof_info.m"
          MR_hl_field(MR_mktag(1), prof_info__V_16_16, 1) = ((MR_Box) (prof_info__PList_11));
#line 368 "prof_info.m"
        }
#line 368 "prof_info.m"
        {
#line 368 "prof_info.m"
          MR_Word base;
#line 368 "prof_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 368 "prof_info.m"
          *prof_info__HeadVar__4_4 = base;
#line 368 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (prof_info__A_7));
#line 368 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__B_8));
#line 368 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__C_9));
#line 368 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(prof_info__D_10);
#line 368 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__V_16_16));
#line 368 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__F_12));
#line 368 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (prof_info__G_13));
#line 368 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (prof_info__H_14));
#line 368 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (prof_info__I_15));
#line 368 "prof_info.m"
        }
#line 367 "prof_info.m"
      }
#line 367 "prof_info.m"
  }
#line 130 "prof_info.m"
}

#line 127 "prof_info.m"
void MR_CALL 
prof_info__prof_node_set_propagated_counts_3_p_0(
#line 127 "prof_info.m"
  MR_Float prof_info__Count_1,
#line 127 "prof_info.m"
  MR_Word prof_info__HeadVar__2_2,
#line 127 "prof_info.m"
  MR_Word * prof_info__HeadVar__3_3)
#line 127 "prof_info.m"
{
#line 362 "prof_info.m"
  {
#line 362 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 362 "prof_info.m"
    if (((MR_tag((MR_Word) prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 364 "prof_info.m"
      {
#line 364 "prof_info.m"
        MR_String prof_info__A_15 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 364 "prof_info.m"
        MR_Integer prof_info__B_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 364 "prof_info.m"
        MR_Integer prof_info__C_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 364 "prof_info.m"
        MR_Word prof_info__E_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 364 "prof_info.m"
        MR_Integer prof_info__F_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 5)));
#line 364 "prof_info.m"
        MR_Integer prof_info__G_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 6)));
#line 364 "prof_info.m"
        MR_Float prof_info__V_18_18 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 3)));

#line 365 "prof_info.m"
        {
#line 365 "prof_info.m"
          MR_Word base;
#line 365 "prof_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 365 "prof_info.m"
          *prof_info__HeadVar__3_3 = base;
#line 365 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (prof_info__A_15));
#line 365 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (prof_info__B_16));
#line 365 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (prof_info__C_17));
#line 365 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 3) = MR_box_float(prof_info__Count_1);
#line 365 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (prof_info__E_19));
#line 365 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (prof_info__F_20));
#line 365 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (prof_info__G_21));
#line 365 "prof_info.m"
        }
#line 364 "prof_info.m"
      }
#line 362 "prof_info.m"
    else
#line 362 "prof_info.m"
      {
#line 362 "prof_info.m"
        MR_String prof_info__A_5 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 362 "prof_info.m"
        MR_Integer prof_info__B_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 362 "prof_info.m"
        MR_Integer prof_info__C_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 362 "prof_info.m"
        MR_Word prof_info__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 362 "prof_info.m"
        MR_Word prof_info__F_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 5)));
#line 362 "prof_info.m"
        MR_Integer prof_info__G_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 6)));
#line 362 "prof_info.m"
        MR_Integer prof_info__H_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 7)));
#line 362 "prof_info.m"
        MR_Word prof_info__I_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 8)));
#line 362 "prof_info.m"
        MR_Float prof_info__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 3)));

#line 363 "prof_info.m"
        {
#line 363 "prof_info.m"
          MR_Word base;
#line 363 "prof_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 363 "prof_info.m"
          *prof_info__HeadVar__3_3 = base;
#line 363 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (prof_info__A_5));
#line 363 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__B_6));
#line 363 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__C_7));
#line 363 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(prof_info__Count_1);
#line 363 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__E_9));
#line 363 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__F_10));
#line 363 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (prof_info__G_11));
#line 363 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (prof_info__H_12));
#line 363 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (prof_info__I_13));
#line 363 "prof_info.m"
        }
#line 362 "prof_info.m"
      }
#line 362 "prof_info.m"
  }
#line 127 "prof_info.m"
}

#line 124 "prof_info.m"
void MR_CALL 
prof_info__prof_node_set_initial_counts_3_p_0(
#line 124 "prof_info.m"
  MR_Integer prof_info__Count_1,
#line 124 "prof_info.m"
  MR_Word prof_info__HeadVar__2_2,
#line 124 "prof_info.m"
  MR_Word * prof_info__HeadVar__3_3)
#line 124 "prof_info.m"
{
#line 357 "prof_info.m"
  {
#line 357 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 357 "prof_info.m"
    if (((MR_tag((MR_Word) prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 359 "prof_info.m"
      {
#line 359 "prof_info.m"
        MR_String prof_info__A_15 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 359 "prof_info.m"
        MR_Integer prof_info__B_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 359 "prof_info.m"
        MR_Float prof_info__D_18 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 359 "prof_info.m"
        MR_Word prof_info__E_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 359 "prof_info.m"
        MR_Integer prof_info__F_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 5)));
#line 359 "prof_info.m"
        MR_Integer prof_info__G_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 6)));
#line 359 "prof_info.m"
        MR_Integer prof_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 2)));

#line 360 "prof_info.m"
        {
#line 360 "prof_info.m"
          MR_Word base;
#line 360 "prof_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 360 "prof_info.m"
          *prof_info__HeadVar__3_3 = base;
#line 360 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (prof_info__A_15));
#line 360 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (prof_info__B_16));
#line 360 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (prof_info__Count_1));
#line 360 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 3) = MR_box_float(prof_info__D_18);
#line 360 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (prof_info__E_19));
#line 360 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (prof_info__F_20));
#line 360 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (prof_info__G_21));
#line 360 "prof_info.m"
        }
#line 359 "prof_info.m"
      }
#line 357 "prof_info.m"
    else
#line 357 "prof_info.m"
      {
#line 357 "prof_info.m"
        MR_String prof_info__A_5 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 357 "prof_info.m"
        MR_Integer prof_info__B_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));
#line 357 "prof_info.m"
        MR_Float prof_info__D_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 357 "prof_info.m"
        MR_Word prof_info__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 357 "prof_info.m"
        MR_Word prof_info__F_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 5)));
#line 357 "prof_info.m"
        MR_Integer prof_info__G_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 6)));
#line 357 "prof_info.m"
        MR_Integer prof_info__H_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 7)));
#line 357 "prof_info.m"
        MR_Word prof_info__I_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 8)));
#line 357 "prof_info.m"
        MR_Integer prof_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 2)));

#line 358 "prof_info.m"
        {
#line 358 "prof_info.m"
          MR_Word base;
#line 358 "prof_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 358 "prof_info.m"
          *prof_info__HeadVar__3_3 = base;
#line 358 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (prof_info__A_5));
#line 358 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__B_6));
#line 358 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__Count_1));
#line 358 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(prof_info__D_8);
#line 358 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__E_9));
#line 358 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__F_10));
#line 358 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (prof_info__G_11));
#line 358 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (prof_info__H_12));
#line 358 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (prof_info__I_13));
#line 358 "prof_info.m"
        }
#line 357 "prof_info.m"
      }
#line 357 "prof_info.m"
  }
#line 124 "prof_info.m"
}

#line 122 "prof_info.m"
void MR_CALL 
prof_info__prof_node_set_cycle_num_3_p_0(
#line 122 "prof_info.m"
  MR_Integer prof_info__Cycle_1,
#line 122 "prof_info.m"
  MR_Word prof_info__HeadVar__2_2,
#line 122 "prof_info.m"
  MR_Word * prof_info__HeadVar__3_3)
#line 122 "prof_info.m"
{
#line 352 "prof_info.m"
  {
#line 352 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 352 "prof_info.m"
    if (((MR_tag((MR_Word) prof_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 354 "prof_info.m"
      {
#line 354 "prof_info.m"
        MR_String prof_info__A_15 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 354 "prof_info.m"
        MR_Integer prof_info__C_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 354 "prof_info.m"
        MR_Float prof_info__D_18 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 354 "prof_info.m"
        MR_Word prof_info__E_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 354 "prof_info.m"
        MR_Integer prof_info__F_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 5)));
#line 354 "prof_info.m"
        MR_Integer prof_info__G_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 6)));
#line 354 "prof_info.m"
        MR_Integer prof_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__2_2, (MR_Integer) 1)));

#line 355 "prof_info.m"
        {
#line 355 "prof_info.m"
          MR_Word base;
#line 355 "prof_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 355 "prof_info.m"
          *prof_info__HeadVar__3_3 = base;
#line 355 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (prof_info__A_15));
#line 355 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (prof_info__Cycle_1));
#line 355 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (prof_info__C_17));
#line 355 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 3) = MR_box_float(prof_info__D_18);
#line 355 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (prof_info__E_19));
#line 355 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (prof_info__F_20));
#line 355 "prof_info.m"
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (prof_info__G_21));
#line 355 "prof_info.m"
        }
#line 354 "prof_info.m"
      }
#line 352 "prof_info.m"
    else
#line 352 "prof_info.m"
      {
#line 352 "prof_info.m"
        MR_String prof_info__A_5 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 0)));
#line 352 "prof_info.m"
        MR_Integer prof_info__C_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 2)));
#line 352 "prof_info.m"
        MR_Float prof_info__D_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 3)));
#line 352 "prof_info.m"
        MR_Word prof_info__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 4)));
#line 352 "prof_info.m"
        MR_Word prof_info__F_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 5)));
#line 352 "prof_info.m"
        MR_Integer prof_info__G_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 6)));
#line 352 "prof_info.m"
        MR_Integer prof_info__H_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 7)));
#line 352 "prof_info.m"
        MR_Word prof_info__I_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 8)));
#line 352 "prof_info.m"
        MR_Integer prof_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, (MR_Integer) 1)));

#line 353 "prof_info.m"
        {
#line 353 "prof_info.m"
          MR_Word base;
#line 353 "prof_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 353 "prof_info.m"
          *prof_info__HeadVar__3_3 = base;
#line 353 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (prof_info__A_5));
#line 353 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__Cycle_1));
#line 353 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__C_7));
#line 353 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(prof_info__D_8);
#line 353 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__E_9));
#line 353 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__F_10));
#line 353 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (prof_info__G_11));
#line 353 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (prof_info__H_12));
#line 353 "prof_info.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (prof_info__I_13));
#line 353 "prof_info.m"
        }
#line 352 "prof_info.m"
      }
#line 352 "prof_info.m"
  }
#line 122 "prof_info.m"
}

#line 115 "prof_info.m"
void MR_CALL 
prof_info__prof_node_get_self_calls_2_p_0(
#line 115 "prof_info.m"
  MR_Word prof_info__HeadVar__1_1,
#line 115 "prof_info.m"
  MR_Integer * prof_info__Calls_2)
#line 115 "prof_info.m"
{
#line 345 "prof_info.m"
  {
#line 345 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 345 "prof_info.m"
    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 346 "prof_info.m"
      {
#line 346 "prof_info.m"
        MR_String prof_info__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 346 "prof_info.m"
        MR_Integer prof_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 346 "prof_info.m"
        MR_Integer prof_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 346 "prof_info.m"
        MR_Float prof_info__V_15_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 346 "prof_info.m"
        MR_Word prof_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 346 "prof_info.m"
        MR_Integer prof_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 5)));

#line 346 "prof_info.m"
        *prof_info__Calls_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 6)));
#line 346 "prof_info.m"
      }
#line 345 "prof_info.m"
    else
#line 345 "prof_info.m"
      {
#line 345 "prof_info.m"
        MR_String prof_info__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 345 "prof_info.m"
        MR_Integer prof_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 345 "prof_info.m"
        MR_Integer prof_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 345 "prof_info.m"
        MR_Float prof_info__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 345 "prof_info.m"
        MR_Word prof_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 345 "prof_info.m"
        MR_Word prof_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 345 "prof_info.m"
        MR_Integer prof_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 6)));
#line 345 "prof_info.m"
        MR_Word prof_info__V_11_11;

#line 345 "prof_info.m"
        *prof_info__Calls_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 7)));
#line 345 "prof_info.m"
        prof_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 8)));
#line 345 "prof_info.m"
      }
#line 345 "prof_info.m"
  }
#line 115 "prof_info.m"
}

#line 114 "prof_info.m"
void MR_CALL 
prof_info__prof_node_get_total_calls_2_p_0(
#line 114 "prof_info.m"
  MR_Word prof_info__HeadVar__1_1,
#line 114 "prof_info.m"
  MR_Integer * prof_info__Calls_2)
#line 114 "prof_info.m"
{
#line 342 "prof_info.m"
  {
#line 342 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 342 "prof_info.m"
    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 343 "prof_info.m"
      {
#line 343 "prof_info.m"
        MR_String prof_info__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 343 "prof_info.m"
        MR_Integer prof_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 343 "prof_info.m"
        MR_Integer prof_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 343 "prof_info.m"
        MR_Float prof_info__V_15_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 343 "prof_info.m"
        MR_Word prof_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 343 "prof_info.m"
        MR_Integer prof_info__V_18_18;

#line 343 "prof_info.m"
        *prof_info__Calls_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 343 "prof_info.m"
        prof_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 6)));
#line 343 "prof_info.m"
      }
#line 342 "prof_info.m"
    else
#line 342 "prof_info.m"
      {
#line 342 "prof_info.m"
        MR_String prof_info__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 342 "prof_info.m"
        MR_Integer prof_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 342 "prof_info.m"
        MR_Integer prof_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 342 "prof_info.m"
        MR_Float prof_info__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 342 "prof_info.m"
        MR_Word prof_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 342 "prof_info.m"
        MR_Word prof_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 342 "prof_info.m"
        MR_Integer prof_info__V_10_10;
#line 342 "prof_info.m"
        MR_Word prof_info__V_11_11;

#line 342 "prof_info.m"
        *prof_info__Calls_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 6)));
#line 342 "prof_info.m"
        prof_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 7)));
#line 342 "prof_info.m"
        prof_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 8)));
#line 342 "prof_info.m"
      }
#line 342 "prof_info.m"
  }
#line 114 "prof_info.m"
}

#line 113 "prof_info.m"
void MR_CALL 
prof_info__prof_node_get_child_list_2_p_0(
#line 113 "prof_info.m"
  MR_Word prof_info__HeadVar__1_1,
#line 113 "prof_info.m"
  MR_Word * prof_info__Clist_2)
#line 113 "prof_info.m"
{
#line 338 "prof_info.m"
  {
#line 338 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 338 "prof_info.m"
    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 339 "prof_info.m"
      {
#line 340 "prof_info.m"
        {
#line 340 "prof_info.m"
          mercury__require__error_1_p_0((MR_String) "prof_node_get_child_list: cycle_node has no child list\n");
#line 340 "prof_info.m"
          return;
        }
#line 339 "prof_info.m"
      }
#line 338 "prof_info.m"
    else
#line 338 "prof_info.m"
      {
#line 338 "prof_info.m"
        MR_String prof_info__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 338 "prof_info.m"
        MR_Integer prof_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 338 "prof_info.m"
        MR_Integer prof_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 338 "prof_info.m"
        MR_Float prof_info__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 338 "prof_info.m"
        MR_Word prof_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 338 "prof_info.m"
        MR_Integer prof_info__V_9_9;
#line 338 "prof_info.m"
        MR_Integer prof_info__V_10_10;
#line 338 "prof_info.m"
        MR_Word prof_info__V_11_11;

#line 338 "prof_info.m"
        *prof_info__Clist_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 338 "prof_info.m"
        prof_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 6)));
#line 338 "prof_info.m"
        prof_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 7)));
#line 338 "prof_info.m"
        prof_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 8)));
#line 338 "prof_info.m"
      }
#line 338 "prof_info.m"
  }
#line 113 "prof_info.m"
}

#line 112 "prof_info.m"
void MR_CALL 
prof_info__prof_node_get_parent_list_2_p_0(
#line 112 "prof_info.m"
  MR_Word prof_info__HeadVar__1_1,
#line 112 "prof_info.m"
  MR_Word * prof_info__PList_2)
#line 112 "prof_info.m"
{
#line 334 "prof_info.m"
  {
#line 334 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 334 "prof_info.m"
    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 335 "prof_info.m"
      {
#line 336 "prof_info.m"
        {
#line 336 "prof_info.m"
          mercury__require__error_1_p_0((MR_String) "prof_node_get_parent_list: cycle_node has no parent list\n");
#line 336 "prof_info.m"
          return;
        }
#line 335 "prof_info.m"
      }
#line 334 "prof_info.m"
    else
#line 334 "prof_info.m"
      {
#line 334 "prof_info.m"
        MR_String prof_info__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 334 "prof_info.m"
        MR_Integer prof_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 334 "prof_info.m"
        MR_Integer prof_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 334 "prof_info.m"
        MR_Float prof_info__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 334 "prof_info.m"
        MR_Word prof_info__V_8_8;
#line 334 "prof_info.m"
        MR_Integer prof_info__V_9_9;
#line 334 "prof_info.m"
        MR_Integer prof_info__V_10_10;
#line 334 "prof_info.m"
        MR_Word prof_info__V_11_11;

#line 334 "prof_info.m"
        *prof_info__PList_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 334 "prof_info.m"
        prof_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 334 "prof_info.m"
        prof_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 6)));
#line 334 "prof_info.m"
        prof_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 7)));
#line 334 "prof_info.m"
        prof_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 8)));
#line 334 "prof_info.m"
      }
#line 334 "prof_info.m"
  }
#line 112 "prof_info.m"
}

#line 111 "prof_info.m"
void MR_CALL 
prof_info__prof_node_get_propagated_counts_2_p_0(
#line 111 "prof_info.m"
  MR_Word prof_info__HeadVar__1_1,
#line 111 "prof_info.m"
  MR_Float * prof_info__Count_2)
#line 111 "prof_info.m"
{
#line 331 "prof_info.m"
  {
#line 331 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 331 "prof_info.m"
    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 332 "prof_info.m"
      {
#line 332 "prof_info.m"
        MR_String prof_info__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 332 "prof_info.m"
        MR_Integer prof_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 332 "prof_info.m"
        MR_Integer prof_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 332 "prof_info.m"
        MR_Word prof_info__V_16_16;
#line 332 "prof_info.m"
        MR_Integer prof_info__V_17_17;
#line 332 "prof_info.m"
        MR_Integer prof_info__V_18_18;

#line 332 "prof_info.m"
        *prof_info__Count_2 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 332 "prof_info.m"
        prof_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 332 "prof_info.m"
        prof_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 332 "prof_info.m"
        prof_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 6)));
#line 332 "prof_info.m"
      }
#line 331 "prof_info.m"
    else
#line 331 "prof_info.m"
      {
#line 331 "prof_info.m"
        MR_String prof_info__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 331 "prof_info.m"
        MR_Integer prof_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 331 "prof_info.m"
        MR_Integer prof_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 331 "prof_info.m"
        MR_Word prof_info__V_7_7;
#line 331 "prof_info.m"
        MR_Word prof_info__V_8_8;
#line 331 "prof_info.m"
        MR_Integer prof_info__V_9_9;
#line 331 "prof_info.m"
        MR_Integer prof_info__V_10_10;
#line 331 "prof_info.m"
        MR_Word prof_info__V_11_11;

#line 331 "prof_info.m"
        *prof_info__Count_2 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 331 "prof_info.m"
        prof_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 331 "prof_info.m"
        prof_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 331 "prof_info.m"
        prof_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 6)));
#line 331 "prof_info.m"
        prof_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 7)));
#line 331 "prof_info.m"
        prof_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 8)));
#line 331 "prof_info.m"
      }
#line 331 "prof_info.m"
  }
#line 111 "prof_info.m"
}

#line 110 "prof_info.m"
void MR_CALL 
prof_info__prof_node_get_initial_counts_2_p_0(
#line 110 "prof_info.m"
  MR_Word prof_info__HeadVar__1_1,
#line 110 "prof_info.m"
  MR_Integer * prof_info__Count_2)
#line 110 "prof_info.m"
{
#line 328 "prof_info.m"
  {
#line 328 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 328 "prof_info.m"
    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 329 "prof_info.m"
      {
#line 329 "prof_info.m"
        MR_String prof_info__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 329 "prof_info.m"
        MR_Integer prof_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 329 "prof_info.m"
        MR_Float prof_info__V_15_15;
#line 329 "prof_info.m"
        MR_Word prof_info__V_16_16;
#line 329 "prof_info.m"
        MR_Integer prof_info__V_17_17;
#line 329 "prof_info.m"
        MR_Integer prof_info__V_18_18;

#line 329 "prof_info.m"
        *prof_info__Count_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 329 "prof_info.m"
        prof_info__V_15_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 329 "prof_info.m"
        prof_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 329 "prof_info.m"
        prof_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 329 "prof_info.m"
        prof_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 6)));
#line 329 "prof_info.m"
      }
#line 328 "prof_info.m"
    else
#line 328 "prof_info.m"
      {
#line 328 "prof_info.m"
        MR_String prof_info__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 328 "prof_info.m"
        MR_Integer prof_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 328 "prof_info.m"
        MR_Float prof_info__V_6_6;
#line 328 "prof_info.m"
        MR_Word prof_info__V_7_7;
#line 328 "prof_info.m"
        MR_Word prof_info__V_8_8;
#line 328 "prof_info.m"
        MR_Integer prof_info__V_9_9;
#line 328 "prof_info.m"
        MR_Integer prof_info__V_10_10;
#line 328 "prof_info.m"
        MR_Word prof_info__V_11_11;

#line 328 "prof_info.m"
        *prof_info__Count_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 328 "prof_info.m"
        prof_info__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 328 "prof_info.m"
        prof_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 328 "prof_info.m"
        prof_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 328 "prof_info.m"
        prof_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 6)));
#line 328 "prof_info.m"
        prof_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 7)));
#line 328 "prof_info.m"
        prof_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 8)));
#line 328 "prof_info.m"
      }
#line 328 "prof_info.m"
  }
#line 110 "prof_info.m"
}

#line 109 "prof_info.m"
void MR_CALL 
prof_info__prof_node_get_cycle_number_2_p_0(
#line 109 "prof_info.m"
  MR_Word prof_info__HeadVar__1_1,
#line 109 "prof_info.m"
  MR_Integer * prof_info__Cycle_2)
#line 109 "prof_info.m"
{
#line 325 "prof_info.m"
  {
#line 325 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 325 "prof_info.m"
    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 326 "prof_info.m"
      {
#line 326 "prof_info.m"
        MR_String prof_info__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 326 "prof_info.m"
        MR_Integer prof_info__V_14_14;
#line 326 "prof_info.m"
        MR_Float prof_info__V_15_15;
#line 326 "prof_info.m"
        MR_Word prof_info__V_16_16;
#line 326 "prof_info.m"
        MR_Integer prof_info__V_17_17;
#line 326 "prof_info.m"
        MR_Integer prof_info__V_18_18;

#line 326 "prof_info.m"
        *prof_info__Cycle_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 326 "prof_info.m"
        prof_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 326 "prof_info.m"
        prof_info__V_15_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 326 "prof_info.m"
        prof_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 326 "prof_info.m"
        prof_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 326 "prof_info.m"
        prof_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 6)));
#line 326 "prof_info.m"
      }
#line 325 "prof_info.m"
    else
#line 325 "prof_info.m"
      {
#line 325 "prof_info.m"
        MR_String prof_info__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 325 "prof_info.m"
        MR_Integer prof_info__V_5_5;
#line 325 "prof_info.m"
        MR_Float prof_info__V_6_6;
#line 325 "prof_info.m"
        MR_Word prof_info__V_7_7;
#line 325 "prof_info.m"
        MR_Word prof_info__V_8_8;
#line 325 "prof_info.m"
        MR_Integer prof_info__V_9_9;
#line 325 "prof_info.m"
        MR_Integer prof_info__V_10_10;
#line 325 "prof_info.m"
        MR_Word prof_info__V_11_11;

#line 325 "prof_info.m"
        *prof_info__Cycle_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 325 "prof_info.m"
        prof_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 325 "prof_info.m"
        prof_info__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 325 "prof_info.m"
        prof_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 325 "prof_info.m"
        prof_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 325 "prof_info.m"
        prof_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 6)));
#line 325 "prof_info.m"
        prof_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 7)));
#line 325 "prof_info.m"
        prof_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 8)));
#line 325 "prof_info.m"
      }
#line 325 "prof_info.m"
  }
#line 109 "prof_info.m"
}

#line 108 "prof_info.m"
void MR_CALL 
prof_info__prof_node_get_pred_name_2_p_0(
#line 108 "prof_info.m"
  MR_Word prof_info__HeadVar__1_1,
#line 108 "prof_info.m"
  MR_String * prof_info__Name_2)
#line 108 "prof_info.m"
{
#line 322 "prof_info.m"
  {
#line 322 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 322 "prof_info.m"
    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 323 "prof_info.m"
      {
#line 323 "prof_info.m"
        MR_Integer prof_info__V_13_13;
#line 323 "prof_info.m"
        MR_Integer prof_info__V_14_14;
#line 323 "prof_info.m"
        MR_Float prof_info__V_15_15;
#line 323 "prof_info.m"
        MR_Word prof_info__V_16_16;
#line 323 "prof_info.m"
        MR_Integer prof_info__V_17_17;
#line 323 "prof_info.m"
        MR_Integer prof_info__V_18_18;

#line 323 "prof_info.m"
        *prof_info__Name_2 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 323 "prof_info.m"
        prof_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 323 "prof_info.m"
        prof_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 323 "prof_info.m"
        prof_info__V_15_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 323 "prof_info.m"
        prof_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 323 "prof_info.m"
        prof_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 323 "prof_info.m"
        prof_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 6)));
#line 323 "prof_info.m"
      }
#line 322 "prof_info.m"
    else
#line 322 "prof_info.m"
      {
#line 322 "prof_info.m"
        MR_Integer prof_info__V_4_4;
#line 322 "prof_info.m"
        MR_Integer prof_info__V_5_5;
#line 322 "prof_info.m"
        MR_Float prof_info__V_6_6;
#line 322 "prof_info.m"
        MR_Word prof_info__V_7_7;
#line 322 "prof_info.m"
        MR_Word prof_info__V_8_8;
#line 322 "prof_info.m"
        MR_Integer prof_info__V_9_9;
#line 322 "prof_info.m"
        MR_Integer prof_info__V_10_10;
#line 322 "prof_info.m"
        MR_Word prof_info__V_11_11;

#line 322 "prof_info.m"
        *prof_info__Name_2 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 322 "prof_info.m"
        prof_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 322 "prof_info.m"
        prof_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 322 "prof_info.m"
        prof_info__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 322 "prof_info.m"
        prof_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 322 "prof_info.m"
        prof_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 322 "prof_info.m"
        prof_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 6)));
#line 322 "prof_info.m"
        prof_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 7)));
#line 322 "prof_info.m"
        prof_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 8)));
#line 322 "prof_info.m"
      }
#line 322 "prof_info.m"
  }
#line 108 "prof_info.m"
}

#line 105 "prof_info.m"
void MR_CALL 
prof_info__prof_node_get_entire_cycle_8_p_0(
#line 105 "prof_info.m"
  MR_Word prof_info__HeadVar__1_1,
#line 105 "prof_info.m"
  MR_String * prof_info__A_2,
#line 105 "prof_info.m"
  MR_Integer * prof_info__B_3,
#line 105 "prof_info.m"
  MR_Integer * prof_info__C_4,
#line 105 "prof_info.m"
  MR_Float * prof_info__D_5,
#line 105 "prof_info.m"
  MR_Word * prof_info__E_6,
#line 105 "prof_info.m"
  MR_Integer * prof_info__F_7,
#line 105 "prof_info.m"
  MR_Integer * prof_info__G_8)
#line 105 "prof_info.m"
{
#line 318 "prof_info.m"
  {
#line 318 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 318 "prof_info.m"
    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 318 "prof_info.m"
      {
#line 318 "prof_info.m"
        *prof_info__A_2 = ((MR_String) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 318 "prof_info.m"
        *prof_info__B_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 318 "prof_info.m"
        *prof_info__C_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 318 "prof_info.m"
        *prof_info__D_5 = MR_unbox_float((MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 318 "prof_info.m"
        *prof_info__E_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 318 "prof_info.m"
        *prof_info__F_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 318 "prof_info.m"
        *prof_info__G_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), prof_info__HeadVar__1_1, (MR_Integer) 6)));
#line 318 "prof_info.m"
      }
#line 318 "prof_info.m"
    else
#line 319 "prof_info.m"
      {
#line 320 "prof_info.m"
        {
#line 320 "prof_info.m"
          mercury__require__error_1_p_0((MR_String) "prof_node_get_entire_cycle: not a cycle\n");
#line 320 "prof_info.m"
          return;
        }
#line 319 "prof_info.m"
      }
#line 318 "prof_info.m"
  }
#line 105 "prof_info.m"
}

#line 101 "prof_info.m"
void MR_CALL 
prof_info__prof_node_get_entire_pred_10_p_0(
#line 101 "prof_info.m"
  MR_Word prof_info__HeadVar__1_1,
#line 101 "prof_info.m"
  MR_String * prof_info__A_2,
#line 101 "prof_info.m"
  MR_Integer * prof_info__B_3,
#line 101 "prof_info.m"
  MR_Integer * prof_info__C_4,
#line 101 "prof_info.m"
  MR_Float * prof_info__D_5,
#line 101 "prof_info.m"
  MR_Word * prof_info__E_6,
#line 101 "prof_info.m"
  MR_Word * prof_info__F_7,
#line 101 "prof_info.m"
  MR_Integer * prof_info__G_8,
#line 101 "prof_info.m"
  MR_Integer * prof_info__H_9,
#line 101 "prof_info.m"
  MR_Word * prof_info__I_10)
#line 101 "prof_info.m"
{
#line 314 "prof_info.m"
  {
#line 314 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 314 "prof_info.m"
    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 315 "prof_info.m"
      {
#line 316 "prof_info.m"
        {
#line 316 "prof_info.m"
          mercury__require__error_1_p_0((MR_String) "prof_node_get_entire_pred: not a pred\n");
#line 316 "prof_info.m"
          return;
        }
#line 315 "prof_info.m"
      }
#line 314 "prof_info.m"
    else
#line 314 "prof_info.m"
      {
#line 314 "prof_info.m"
        *prof_info__A_2 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 314 "prof_info.m"
        *prof_info__B_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 314 "prof_info.m"
        *prof_info__C_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 314 "prof_info.m"
        *prof_info__D_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 314 "prof_info.m"
        *prof_info__E_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 314 "prof_info.m"
        *prof_info__F_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 314 "prof_info.m"
        *prof_info__G_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 6)));
#line 314 "prof_info.m"
        *prof_info__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 7)));
#line 314 "prof_info.m"
        *prof_info__I_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 8)));
#line 314 "prof_info.m"
      }
#line 314 "prof_info.m"
  }
#line 101 "prof_info.m"
}

#line 94 "prof_info.m"
void MR_CALL 
prof_info__prof_node_type_2_p_0(
#line 94 "prof_info.m"
  MR_Word prof_info__HeadVar__1_1,
#line 94 "prof_info.m"
  MR_Word * prof_info__HeadVar__2_2)
#line 94 "prof_info.m"
{
#line 307 "prof_info.m"
  {
#line 307 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 307 "prof_info.m"
    if (((MR_tag((MR_Word) prof_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 308 "prof_info.m"
      *prof_info__HeadVar__2_2 = (MR_Integer) 1;
#line 307 "prof_info.m"
    else
#line 307 "prof_info.m"
      *prof_info__HeadVar__2_2 = (MR_Integer) 0;
#line 307 "prof_info.m"
  }
#line 94 "prof_info.m"
}

#line 87 "prof_info.m"
void MR_CALL 
prof_info__prof_set_cyclemap_3_p_0(
#line 87 "prof_info.m"
  MR_Word prof_info__CycleMap_4,
#line 87 "prof_info.m"
  MR_Word prof_info__Prof_5,
#line 87 "prof_info.m"
  MR_Word * prof_info__HeadVar__3_3)
#line 87 "prof_info.m"
{
#line 291 "prof_info.m"
  {
#line 291 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 291 "prof_info.m"
    MR_Float prof_info__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 0)));
#line 291 "prof_info.m"
    MR_String prof_info__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 1)));
#line 291 "prof_info.m"
    MR_Integer prof_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 2)));
#line 291 "prof_info.m"
    MR_Word prof_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 3)));
#line 291 "prof_info.m"
    MR_Word prof_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 4)));
#line 291 "prof_info.m"
    MR_Word prof_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 5)));

#line 291 "prof_info.m"
    {
#line 291 "prof_info.m"
      MR_Word base;
#line 291 "prof_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 291 "prof_info.m"
      *prof_info__HeadVar__3_3 = base;
#line 291 "prof_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(prof_info__V_6_6);
#line 291 "prof_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__V_7_7));
#line 291 "prof_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__V_8_8));
#line 291 "prof_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (prof_info__V_9_9));
#line 291 "prof_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__V_10_10));
#line 291 "prof_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__CycleMap_4));
#line 291 "prof_info.m"
    }
#line 291 "prof_info.m"
  }
#line 87 "prof_info.m"
}

#line 86 "prof_info.m"
void MR_CALL 
prof_info__prof_set_profnodemap_3_p_0(
#line 86 "prof_info.m"
  MR_Word prof_info__ProfNodeMap_4,
#line 86 "prof_info.m"
  MR_Word prof_info__Prof_5,
#line 86 "prof_info.m"
  MR_Word * prof_info__HeadVar__3_3)
#line 86 "prof_info.m"
{
#line 290 "prof_info.m"
  {
#line 290 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 290 "prof_info.m"
    MR_Float prof_info__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 0)));
#line 290 "prof_info.m"
    MR_String prof_info__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 1)));
#line 290 "prof_info.m"
    MR_Integer prof_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 2)));
#line 290 "prof_info.m"
    MR_Word prof_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 3)));
#line 290 "prof_info.m"
    MR_Word prof_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 5)));
#line 290 "prof_info.m"
    MR_Word prof_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_5, (MR_Integer) 4)));

#line 290 "prof_info.m"
    {
#line 290 "prof_info.m"
      MR_Word base;
#line 290 "prof_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 290 "prof_info.m"
      *prof_info__HeadVar__3_3 = base;
#line 290 "prof_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(prof_info__V_6_6);
#line 290 "prof_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__V_7_7));
#line 290 "prof_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__V_8_8));
#line 290 "prof_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (prof_info__V_9_9));
#line 290 "prof_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__ProfNodeMap_4));
#line 290 "prof_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__V_11_11));
#line 290 "prof_info.m"
    }
#line 290 "prof_info.m"
  }
#line 86 "prof_info.m"
}

#line 83 "prof_info.m"
void MR_CALL 
prof_info__prof_set_entire_7_p_0(
#line 83 "prof_info.m"
  MR_Float prof_info__A_8,
#line 83 "prof_info.m"
  MR_String prof_info__B_9,
#line 83 "prof_info.m"
  MR_Integer prof_info__C_10,
#line 83 "prof_info.m"
  MR_Word prof_info__D_11,
#line 83 "prof_info.m"
  MR_Word prof_info__E_12,
#line 83 "prof_info.m"
  MR_Word prof_info__F_13,
#line 83 "prof_info.m"
  MR_Word * prof_info__HeadVar__7_7)
#line 83 "prof_info.m"
{
#line 288 "prof_info.m"
  {
#line 288 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 288 "prof_info.m"
    {
#line 288 "prof_info.m"
      MR_Word base;
#line 288 "prof_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 288 "prof_info.m"
      *prof_info__HeadVar__7_7 = base;
#line 288 "prof_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(prof_info__A_8);
#line 288 "prof_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (prof_info__B_9));
#line 288 "prof_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (prof_info__C_10));
#line 288 "prof_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (prof_info__D_11));
#line 288 "prof_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (prof_info__E_12));
#line 288 "prof_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (prof_info__F_13));
#line 288 "prof_info.m"
    }
#line 288 "prof_info.m"
  }
#line 83 "prof_info.m"
}

#line 76 "prof_info.m"
void MR_CALL 
prof_info__prof_get_profnodemap_2_p_0(
#line 76 "prof_info.m"
  MR_Word prof_info__Prof_3,
#line 76 "prof_info.m"
  MR_Word * prof_info__HeadVar__2_2)
#line 76 "prof_info.m"
{
#line 282 "prof_info.m"
  {
#line 282 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 282 "prof_info.m"
    MR_Float prof_info__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 0)));
#line 282 "prof_info.m"
    MR_String prof_info__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 1)));
#line 282 "prof_info.m"
    MR_Integer prof_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 2)));
#line 282 "prof_info.m"
    MR_Word prof_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 3)));
#line 282 "prof_info.m"
    MR_Word prof_info__V_8_8;

#line 282 "prof_info.m"
    *prof_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 4)));
#line 282 "prof_info.m"
    prof_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 5)));
#line 282 "prof_info.m"
  }
#line 76 "prof_info.m"
}

#line 75 "prof_info.m"
void MR_CALL 
prof_info__prof_get_addrdeclmap_2_p_0(
#line 75 "prof_info.m"
  MR_Word prof_info__Prof_3,
#line 75 "prof_info.m"
  MR_Word * prof_info__HeadVar__2_2)
#line 75 "prof_info.m"
{
#line 281 "prof_info.m"
  {
#line 281 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 281 "prof_info.m"
    MR_Float prof_info__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 0)));
#line 281 "prof_info.m"
    MR_String prof_info__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 1)));
#line 281 "prof_info.m"
    MR_Integer prof_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 2)));
#line 281 "prof_info.m"
    MR_Word prof_info__V_7_7;
#line 281 "prof_info.m"
    MR_Word prof_info__V_8_8;

#line 281 "prof_info.m"
    *prof_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 3)));
#line 281 "prof_info.m"
    prof_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 4)));
#line 281 "prof_info.m"
    prof_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__Prof_3, (MR_Integer) 5)));
#line 281 "prof_info.m"
  }
#line 75 "prof_info.m"
}

#line 72 "prof_info.m"
void MR_CALL 
prof_info__prof_get_entire_7_p_0(
#line 72 "prof_info.m"
  MR_Word prof_info__HeadVar__1_1,
#line 72 "prof_info.m"
  MR_Float * prof_info__A_8,
#line 72 "prof_info.m"
  MR_String * prof_info__B_9,
#line 72 "prof_info.m"
  MR_Integer * prof_info__C_10,
#line 72 "prof_info.m"
  MR_Word * prof_info__D_11,
#line 72 "prof_info.m"
  MR_Word * prof_info__E_12,
#line 72 "prof_info.m"
  MR_Word * prof_info__F_13)
#line 72 "prof_info.m"
{
#line 279 "prof_info.m"
  {
#line 279 "prof_info.m"
    MR_bool prof_info__succeeded;

#line 279 "prof_info.m"
    *prof_info__A_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 0)));
#line 279 "prof_info.m"
    *prof_info__B_9 = ((MR_String) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 1)));
#line 279 "prof_info.m"
    *prof_info__C_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 2)));
#line 279 "prof_info.m"
    *prof_info__D_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 3)));
#line 279 "prof_info.m"
    *prof_info__E_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 4)));
#line 279 "prof_info.m"
    *prof_info__F_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), prof_info__HeadVar__1_1, (MR_Integer) 5)));
#line 279 "prof_info.m"
  }
#line 72 "prof_info.m"
}

#line 64 "prof_info.m"
MR_Word MR_CALL 
prof_info__prof_node_init_cycle_7_f_0(
#line 64 "prof_info.m"
  MR_String prof_info__A_9,
#line 64 "prof_info.m"
  MR_Integer prof_info__B_10,
#line 64 "prof_info.m"
  MR_Integer prof_info__C_11,
#line 64 "prof_info.m"
  MR_Float prof_info__D_12,
#line 64 "prof_info.m"
  MR_Word prof_info__E_13,
#line 64 "prof_info.m"
  MR_Integer prof_info__F_14,
#line 64 "prof_info.m"
  MR_Integer prof_info__G_15)
#line 64 "prof_info.m"
{
#line 301 "prof_info.m"
  {
#line 301 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 301 "prof_info.m"
    MR_Word prof_info__HeadVar__8_8;

#line 301 "prof_info.m"
    {
#line 301 "prof_info.m"
      prof_info__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 301 "prof_info.m"
      MR_hl_field(MR_mktag(1), prof_info__HeadVar__8_8, 0) = ((MR_Box) (prof_info__A_9));
#line 301 "prof_info.m"
      MR_hl_field(MR_mktag(1), prof_info__HeadVar__8_8, 1) = ((MR_Box) (prof_info__B_10));
#line 301 "prof_info.m"
      MR_hl_field(MR_mktag(1), prof_info__HeadVar__8_8, 2) = ((MR_Box) (prof_info__C_11));
#line 301 "prof_info.m"
      MR_hl_field(MR_mktag(1), prof_info__HeadVar__8_8, 3) = MR_box_float(prof_info__D_12);
#line 301 "prof_info.m"
      MR_hl_field(MR_mktag(1), prof_info__HeadVar__8_8, 4) = ((MR_Box) (prof_info__E_13));
#line 301 "prof_info.m"
      MR_hl_field(MR_mktag(1), prof_info__HeadVar__8_8, 5) = ((MR_Box) (prof_info__F_14));
#line 301 "prof_info.m"
      MR_hl_field(MR_mktag(1), prof_info__HeadVar__8_8, 6) = ((MR_Box) (prof_info__G_15));
#line 301 "prof_info.m"
    }
#line 301 "prof_info.m"
    return prof_info__HeadVar__8_8;
#line 301 "prof_info.m"
  }
#line 64 "prof_info.m"
}

#line 62 "prof_info.m"
MR_Word MR_CALL 
prof_info__prof_node_init_1_f_0(
#line 62 "prof_info.m"
  MR_String prof_info__PredName_3)
#line 62 "prof_info.m"
{
#line 297 "prof_info.m"
  {
#line 297 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 297 "prof_info.m"
    MR_Word prof_info__HeadVar__2_2;

#line 298 "prof_info.m"
    {
#line 298 "prof_info.m"
      prof_info__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 298 "prof_info.m"
      MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, 0) = ((MR_Box) (prof_info__PredName_3));
#line 298 "prof_info.m"
      MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 0));
#line 298 "prof_info.m"
      MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, 2) = ((MR_Box) ((MR_Integer) 0));
#line 298 "prof_info.m"
      MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, 3) = MR_box_float((MR_Float) 0.0000000000000000);
#line 298 "prof_info.m"
      MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "prof_info.m"
      MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "prof_info.m"
      MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, 6) = ((MR_Box) ((MR_Integer) 0));
#line 298 "prof_info.m"
      MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, 7) = ((MR_Box) ((MR_Integer) 0));
#line 298 "prof_info.m"
      MR_hl_field(MR_mktag(0), prof_info__HeadVar__2_2, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "prof_info.m"
    }
#line 297 "prof_info.m"
    return prof_info__HeadVar__2_2;
#line 297 "prof_info.m"
  }
#line 62 "prof_info.m"
}

#line 57 "prof_info.m"
void MR_CALL 
prof_info__update_prof_node_5_p_0(
#line 57 "prof_info.m"
  MR_String prof_info__Pred_6,
#line 57 "prof_info.m"
  MR_Word prof_info__ProfNode_7,
#line 57 "prof_info.m"
  MR_Word prof_info__AddrMap_8,
#line 57 "prof_info.m"
  MR_Word prof_info__STATE_VARIABLE_ProfNodeMap_0_11,
#line 57 "prof_info.m"
  MR_Word * prof_info__STATE_VARIABLE_ProfNodeMap_12)
#line 57 "prof_info.m"
{
#line 271 "prof_info.m"
  {
#line 271 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 271 "prof_info.m"
    MR_Integer prof_info__Key_10;
#line 272 "prof_info.m"
    MR_Box prof_info__conv0_Key_10;

#line 272 "prof_info.m"
    {
#line 272 "prof_info.m"
      mercury__map__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, prof_info__AddrMap_8, ((MR_Box) (prof_info__Pred_6)), &prof_info__conv0_Key_10);
    }
#line 272 "prof_info.m"
    prof_info__Key_10 = ((MR_Integer) prof_info__conv0_Key_10);
#line 273 "prof_info.m"
    {
#line 273 "prof_info.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, prof_info__Key_10, ((MR_Box) (prof_info__ProfNode_7)), prof_info__STATE_VARIABLE_ProfNodeMap_0_11, prof_info__STATE_VARIABLE_ProfNodeMap_12);
#line 273 "prof_info.m"
      return;
    }
#line 271 "prof_info.m"
  }
#line 57 "prof_info.m"
}

#line 54 "prof_info.m"
void MR_CALL 
prof_info__get_prof_node_4_p_0(
#line 54 "prof_info.m"
  MR_String prof_info__Pred_5,
#line 54 "prof_info.m"
  MR_Word prof_info__AddrMap_6,
#line 54 "prof_info.m"
  MR_Word prof_info__ProfNodeMap_7,
#line 54 "prof_info.m"
  MR_Word * prof_info__ProfNode_8)
#line 54 "prof_info.m"
{
#line 267 "prof_info.m"
  {
#line 267 "prof_info.m"
    MR_bool prof_info__succeeded;
#line 267 "prof_info.m"
    MR_Integer prof_info__Key_9;
#line 268 "prof_info.m"
    MR_Box prof_info__conv0_Key_9;
#line 269 "prof_info.m"
    MR_Box prof_info__conv1_ProfNode_8;

#line 268 "prof_info.m"
    {
#line 268 "prof_info.m"
      mercury__map__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, prof_info__AddrMap_6, ((MR_Box) (prof_info__Pred_5)), &prof_info__conv0_Key_9);
    }
#line 268 "prof_info.m"
    prof_info__Key_9 = ((MR_Integer) prof_info__conv0_Key_9);
#line 269 "prof_info.m"
    {
#line 269 "prof_info.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, prof_info__ProfNodeMap_7, prof_info__Key_9, &prof_info__conv1_ProfNode_8);
    }
#line 269 "prof_info.m"
    *prof_info__ProfNode_8 = ((MR_Word) prof_info__conv1_ProfNode_8);
#line 267 "prof_info.m"
  }
#line 54 "prof_info.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module prof_info. */
