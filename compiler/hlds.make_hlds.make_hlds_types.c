/*
** Automatically generated from `make_hlds_types.m'
** by the Mercury compiler,
** version rotd-2026-01-13
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


// :- module hlds.make_hlds.make_hlds_types.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__make_hlds_types__init
ENDINIT
*/

#include "hlds.make_hlds.make_hlds_types.mih"


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "hlds.make_hlds.mih"
#include "hlds.status.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"




static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_functor_desc_found_invalid_inst_or_mode_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_functor_desc_found_invalid_inst_or_mode_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_ordinal_ordered_found_invalid_inst_or_mode_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_name_ordered_found_invalid_inst_or_mode_0[2];

static const MR_Integer hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__functor_number_map_found_invalid_inst_or_mode_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_functor_desc_found_invalid_type_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_functor_desc_found_invalid_type_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_ordinal_ordered_found_invalid_type_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_name_ordered_found_invalid_type_0[2];

static const MR_Integer hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__functor_number_map_found_invalid_type_0[2];

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__pti_ims_sub_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_types__cord__pti_cord_1__pseudo_hlds__make_hlds__make_hlds_types__pti_ims_sub_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_types__list__pti_list_1__pseudo_hlds__make_hlds__make_hlds_types__pti_ims_sub_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_types__list__pti_list_1__pseudo_1;

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__field_types_ims_sub_list_1_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_functor_desc_ims_sub_list_1_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_stag_ordered_ims_sub_list_1_0[1];

static const MR_DuPtagLayout hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_ptag_ordered_ims_sub_list_1[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_name_ordered_ims_sub_list_1[1];

static const MR_Integer hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__functor_number_map_ims_sub_list_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__pti_sec_sub_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_types__cord__pti_cord_1__pseudo_hlds__make_hlds__make_hlds_types__pti_sec_sub_list_1__pseudo_1;

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__field_types_sec_info_0_0[2];

static const MR_DuArgLocn hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__field_locns_sec_info_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_functor_desc_sec_info_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_stag_ordered_sec_info_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_ptag_ordered_sec_info_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_name_ordered_sec_info_0[1];

static const MR_Integer hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__functor_number_map_sec_info_0[1];

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_types__list__pti_list_1__pseudo_hlds__make_hlds__make_hlds_types__pti_sec_sub_list_1__pseudo_1;

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__field_types_sec_sub_list_1_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_functor_desc_sec_sub_list_1_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_stag_ordered_sec_sub_list_1_0[1];

static const MR_DuPtagLayout hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_ptag_ordered_sec_sub_list_1[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_name_ordered_sec_sub_list_1[1];

static const MR_Integer hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__functor_number_map_sec_sub_list_1[1];

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____found_invalid_inst_or_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____found_invalid_inst_or_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____found_invalid_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____found_invalid_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____ims_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____ims_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____ims_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____ims_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____ims_sub_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____ims_sub_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____sec_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____sec_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____sec_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____sec_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____sec_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____sec_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____sec_sub_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____sec_sub_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);









static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_functor_desc_found_invalid_inst_or_mode_0_0 = {
  (MR_String) "did_not_find_invalid_inst_or_mode",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_functor_desc_found_invalid_inst_or_mode_0_1 = {
  (MR_String) "found_invalid_inst_or_mode",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_ordinal_ordered_found_invalid_inst_or_mode_0[2] = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_functor_desc_found_invalid_inst_or_mode_0_0,
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_functor_desc_found_invalid_inst_or_mode_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_name_ordered_found_invalid_inst_or_mode_0[2] = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_functor_desc_found_invalid_inst_or_mode_0_0,
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_functor_desc_found_invalid_inst_or_mode_0_1
};

static const MR_Integer hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__functor_number_map_found_invalid_inst_or_mode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_found_invalid_inst_or_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__make_hlds_types____Unify____found_invalid_inst_or_mode_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_types____Compare____found_invalid_inst_or_mode_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_types",
  (MR_String) "found_invalid_inst_or_mode",
  { hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_name_ordered_found_invalid_inst_or_mode_0 },
  { hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_ordinal_ordered_found_invalid_inst_or_mode_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__functor_number_map_found_invalid_inst_or_mode_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_functor_desc_found_invalid_type_0_0 = {
  (MR_String) "did_not_find_invalid_type",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_functor_desc_found_invalid_type_0_1 = {
  (MR_String) "found_invalid_type",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_ordinal_ordered_found_invalid_type_0[2] = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_functor_desc_found_invalid_type_0_0,
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_functor_desc_found_invalid_type_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_name_ordered_found_invalid_type_0[2] = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_functor_desc_found_invalid_type_0_0,
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_functor_desc_found_invalid_type_0_1
};

static const MR_Integer hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__functor_number_map_found_invalid_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_found_invalid_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__make_hlds_types____Unify____found_invalid_type_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_types____Compare____found_invalid_type_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_types",
  (MR_String) "found_invalid_type",
  { hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_name_ordered_found_invalid_type_0 },
  { hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__enum_ordinal_ordered_found_invalid_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__functor_number_map_found_invalid_type_0,

};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__pti_ims_sub_list_1__pseudo_1 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_types__cord__pti_cord_1__pseudo_hlds__make_hlds__make_hlds_types__pti_ims_sub_list_1__pseudo_1 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__pti_ims_sub_list_1__pseudo_1) }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_cord_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (hlds__make_hlds__make_hlds_types____Unify____ims_cord_1_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_types____Compare____ims_cord_1_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_types",
  (MR_String) "ims_cord",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_types__cord__pti_cord_1__pseudo_hlds__make_hlds__make_hlds_types__pti_ims_sub_list_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_types__list__pti_list_1__pseudo_hlds__make_hlds__make_hlds_types__pti_ims_sub_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__pti_ims_sub_list_1__pseudo_1) }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_list_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (hlds__make_hlds__make_hlds_types____Unify____ims_list_1_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_types____Compare____ims_list_1_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_types",
  (MR_String) "ims_list",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_types__list__pti_list_1__pseudo_hlds__make_hlds__make_hlds_types__pti_ims_sub_list_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_types__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__field_types_ims_sub_list_1_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_types__list__pti_list_1__pseudo_1)
};

static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_functor_desc_ims_sub_list_1_0 = {
  (MR_String) "ims_sub_list",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__field_types_ims_sub_list_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_stag_ordered_ims_sub_list_1_0[1] = { &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_functor_desc_ims_sub_list_1_0 };

static const MR_DuPtagLayout hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_ptag_ordered_ims_sub_list_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_stag_ordered_ims_sub_list_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_name_ordered_ims_sub_list_1[1] = { &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_functor_desc_ims_sub_list_1_0 };

static const MR_Integer hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__functor_number_map_ims_sub_list_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__make_hlds_types____Unify____ims_sub_list_1_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_types____Compare____ims_sub_list_1_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_types",
  (MR_String) "ims_sub_list",
  { hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_name_ordered_ims_sub_list_1 },
  { hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_ptag_ordered_ims_sub_list_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__functor_number_map_ims_sub_list_1,

};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__pti_sec_sub_list_1__pseudo_1 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_types__cord__pti_cord_1__pseudo_hlds__make_hlds__make_hlds_types__pti_sec_sub_list_1__pseudo_1 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__pti_sec_sub_list_1__pseudo_1) }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_cord_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (hlds__make_hlds__make_hlds_types____Unify____sec_cord_1_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_types____Compare____sec_cord_1_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_types",
  (MR_String) "sec_cord",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_types__cord__pti_cord_1__pseudo_hlds__make_hlds__make_hlds_types__pti_sec_sub_list_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__field_types_sec_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)
};

static const MR_DuArgLocn hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__field_locns_sec_info_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_functor_desc_sec_info_0_0 = {
  (MR_String) "sec_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__field_types_sec_info_0_0,
  NULL,
  hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__field_locns_sec_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_stag_ordered_sec_info_0_0[1] = { &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_functor_desc_sec_info_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_ptag_ordered_sec_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_stag_ordered_sec_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_name_ordered_sec_info_0[1] = { &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_functor_desc_sec_info_0_0 };

static const MR_Integer hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__functor_number_map_sec_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__make_hlds_types____Unify____sec_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_types____Compare____sec_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_types",
  (MR_String) "sec_info",
  { hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_name_ordered_sec_info_0 },
  { hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_ptag_ordered_sec_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__functor_number_map_sec_info_0,

};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_types__list__pti_list_1__pseudo_hlds__make_hlds__make_hlds_types__pti_sec_sub_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__pti_sec_sub_list_1__pseudo_1) }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_list_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (hlds__make_hlds__make_hlds_types____Unify____sec_list_1_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_types____Compare____sec_list_1_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_types",
  (MR_String) "sec_list",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_types__list__pti_list_1__pseudo_hlds__make_hlds__make_hlds_types__pti_sec_sub_list_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__field_types_sec_sub_list_1_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_types__list__pti_list_1__pseudo_1)
};

static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_functor_desc_sec_sub_list_1_0 = {
  (MR_String) "sec_sub_list",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__field_types_sec_sub_list_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_stag_ordered_sec_sub_list_1_0[1] = { &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_functor_desc_sec_sub_list_1_0 };

static const MR_DuPtagLayout hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_ptag_ordered_sec_sub_list_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_stag_ordered_sec_sub_list_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_name_ordered_sec_sub_list_1[1] = { &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_functor_desc_sec_sub_list_1_0 };

static const MR_Integer hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__functor_number_map_sec_sub_list_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__make_hlds_types____Unify____sec_sub_list_1_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_types____Compare____sec_sub_list_1_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_types",
  (MR_String) "sec_sub_list",
  { hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_name_ordered_sec_sub_list_1 },
  { hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__du_ptag_ordered_sec_sub_list_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__functor_number_map_sec_sub_list_1,

};

void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____sec_sub_list_1_0(
  MR_Word TypeInfo_for_T_11,
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    hlds__make_hlds__make_hlds_types____Compare____sec_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__list____Compare____list_1_0(TypeInfo_for_T_11, HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____sec_sub_list_1_0(
  MR_Word TypeInfo_for_T_9,
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = hlds__make_hlds__make_hlds_types____Unify____sec_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_9, ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____sec_list_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__list____Compare____list_1_0(TypeInfo_8_8, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____sec_list_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_7_7, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1));
    MR_hl_field(0, TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_7_7, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____sec_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__status____Compare____item_mercury_status_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_13 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_14 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_13 < Var_14);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_13 > Var_14);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____sec_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);

    succeeded = hlds__status____Unify____item_mercury_status_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____sec_cord_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__cord____Compare____cord_1_0(TypeInfo_8_8, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____sec_cord_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_7_7, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1));
    MR_hl_field(0, TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__cord____Unify____cord_1_0(TypeInfo_7_7, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____ims_sub_list_1_0(
  MR_Word TypeInfo_for_T_11,
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    hlds__status____Compare____item_mercury_status_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__list____Compare____list_1_0(TypeInfo_for_T_11, HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____ims_sub_list_1_0(
  MR_Word TypeInfo_for_T_9,
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = hlds__status____Unify____item_mercury_status_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_9, ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____ims_list_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__list____Compare____list_1_0(TypeInfo_8_8, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____ims_list_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_7_7, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1));
    MR_hl_field(0, TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_7_7, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____ims_cord_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__cord____Compare____cord_1_0(TypeInfo_8_8, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____ims_cord_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_7_7, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1));
    MR_hl_field(0, TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__cord____Unify____cord_1_0(TypeInfo_7_7, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____found_invalid_type_0_0(
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
hlds__make_hlds__make_hlds_types____Unify____found_invalid_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____found_invalid_inst_or_mode_0_0(
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
hlds__make_hlds__make_hlds_types____Unify____found_invalid_inst_or_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____found_invalid_inst_or_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_types____Unify____found_invalid_inst_or_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____found_invalid_inst_or_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_types____Compare____found_invalid_inst_or_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____found_invalid_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_types____Unify____found_invalid_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____found_invalid_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_types____Compare____found_invalid_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____ims_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_types____Unify____ims_cord_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____ims_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_types____Compare____ims_cord_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____ims_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_types____Unify____ims_list_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____ims_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_types____Compare____ims_list_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____ims_sub_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_types____Unify____ims_sub_list_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____ims_sub_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_types____Compare____ims_sub_list_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____sec_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_types____Unify____sec_cord_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____sec_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_types____Compare____sec_cord_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____sec_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_types____Unify____sec_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____sec_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_types____Compare____sec_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____sec_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_types____Unify____sec_list_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____sec_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_types____Compare____sec_list_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_types____Unify____sec_sub_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_types____Unify____sec_sub_list_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_types____Compare____sec_sub_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_types____Compare____sec_sub_list_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__make_hlds_types__init(void)
{
}

void mercury__hlds__make_hlds__make_hlds_types__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_found_invalid_inst_or_mode_0);
  MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_found_invalid_type_0);
  MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_cord_1);
  MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_list_1);
  MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1);
  MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_cord_1);
  MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_info_0);
  MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_list_1);
  MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1);
}

void mercury__hlds__make_hlds__make_hlds_types__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__make_hlds_types__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.make_hlds_types.
