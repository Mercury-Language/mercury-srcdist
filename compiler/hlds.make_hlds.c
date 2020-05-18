/*
** Automatically generated from `make_hlds.m'
** by the Mercury compiler,
** version rotd-2020-05-18
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


// :- module hlds.make_hlds.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__init
ENDINIT
*/

#include "hlds.make_hlds.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"




static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_inst_or_mode_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_inst_or_mode_0[2];

static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_inst_or_mode_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_type_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_type_0[2];

static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_type_0[2];

static const MR_PseudoTypeInfo hlds__make_hlds__hlds__make_hlds__field_types_ims_item_1_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__hlds__make_hlds__du_functor_desc_ims_item_1_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_stag_ordered_ims_item_1_0[1];

static const MR_DuPtagLayout hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_ims_item_1[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_name_ordered_ims_item_1[1];

static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_ims_item_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__hlds__make_hlds__pti_ims_item_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__list__pti_list_1__pseudo_hlds__make_hlds__pti_ims_item_1__pseudo_1;

static const MR_PseudoTypeInfo hlds__make_hlds__hlds__make_hlds__field_types_sec_info_0_0[2];

static const MR_DuArgLocn hlds__make_hlds__hlds__make_hlds__field_locns_sec_info_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_info_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_stag_ordered_sec_info_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_sec_info_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_name_ordered_sec_info_0[1];

static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_sec_info_0[1];

static const MR_PseudoTypeInfo hlds__make_hlds__hlds__make_hlds__field_types_sec_item_1_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_item_1_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_stag_ordered_sec_item_1_0[1];

static const MR_DuPtagLayout hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_sec_item_1[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_name_ordered_sec_item_1[1];

static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_sec_item_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__hlds__make_hlds__pti_sec_item_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__list__pti_list_1__pseudo_hlds__make_hlds__pti_sec_item_1__pseudo_1;

static MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds____Compare____found_invalid_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds____Unify____ims_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds____Compare____ims_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
hlds__make_hlds____Unify____ims_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds____Compare____ims_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
hlds__make_hlds____Unify____make_hlds_qual_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds____Compare____make_hlds_qual_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds____Compare____sec_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds____Compare____sec_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds____Compare____sec_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);







#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_0 = {
  (MR_String) "did_not_find_invalid_inst_or_mode",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_1 = {
  (MR_String) "found_invalid_inst_or_mode",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_inst_or_mode_0[2] = {
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_0,
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_inst_or_mode_0[2] = {
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_0,
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_1
};

static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_inst_or_mode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_inst_or_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0_10001)),
  ((MR_Box) (hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0_10001)),
  (MR_String) "hlds.make_hlds",
  (MR_String) "found_invalid_inst_or_mode",
  {     hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_inst_or_mode_0 },
  {     hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_inst_or_mode_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_inst_or_mode_0
};

static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_0 = {
  (MR_String) "did_not_find_invalid_type",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_1 = {
  (MR_String) "found_invalid_type",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_type_0[2] = {
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_0,
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_type_0[2] = {
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_0,
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_1
};

static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds____Unify____found_invalid_type_0_0_10001)),
  ((MR_Box) (hlds__make_hlds____Compare____found_invalid_type_0_0_10001)),
  (MR_String) "hlds.make_hlds",
  (MR_String) "found_invalid_type",
  {     hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_type_0 },
  {     hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_type_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_type_0
};

static const MR_PseudoTypeInfo hlds__make_hlds__hlds__make_hlds__field_types_ims_item_1_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc hlds__make_hlds__hlds__make_hlds__du_functor_desc_ims_item_1_0 = {
  (MR_String) "ims_item",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__hlds__make_hlds__field_types_ims_item_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_stag_ordered_ims_item_1_0[1] = {
  &hlds__make_hlds__hlds__make_hlds__du_functor_desc_ims_item_1_0
};

static const MR_DuPtagLayout hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_ims_item_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__hlds__make_hlds__du_stag_ordered_ims_item_1_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_name_ordered_ims_item_1[1] = {
  &hlds__make_hlds__hlds__make_hlds__du_functor_desc_ims_item_1_0
};

static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_ims_item_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds____Unify____ims_item_1_0_10001)),
  ((MR_Box) (hlds__make_hlds____Compare____ims_item_1_0_10001)),
  (MR_String) "hlds.make_hlds",
  (MR_String) "ims_item",
  {     hlds__make_hlds__hlds__make_hlds__du_name_ordered_ims_item_1 },
  {     hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_ims_item_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__make_hlds__hlds__make_hlds__functor_number_map_ims_item_1
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__hlds__make_hlds__pti_ims_item_1__pseudo_1 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__list__pti_list_1__pseudo_hlds__make_hlds__pti_ims_item_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__hlds__make_hlds__pti_ims_item_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_list_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (hlds__make_hlds____Unify____ims_list_1_0_10001)),
  ((MR_Box) (hlds__make_hlds____Compare____ims_list_1_0_10001)),
  (MR_String) "hlds.make_hlds",
  (MR_String) "ims_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__make_hlds__list__pti_list_1__pseudo_hlds__make_hlds__pti_ims_item_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__hlds__make_hlds__type_ctor_info_make_hlds_qual_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds____Unify____make_hlds_qual_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds____Compare____make_hlds_qual_info_0_0_10001)),
  (MR_String) "hlds.make_hlds",
  (MR_String) "make_hlds_qual_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo hlds__make_hlds__hlds__make_hlds__field_types_sec_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)
};

static const MR_DuArgLocn hlds__make_hlds__hlds__make_hlds__field_locns_sec_info_0_0[2] = {
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

static const MR_DuFunctorDesc hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_info_0_0 = {
  (MR_String) "sec_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__hlds__make_hlds__field_types_sec_info_0_0,
  NULL,
  hlds__make_hlds__hlds__make_hlds__field_locns_sec_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_stag_ordered_sec_info_0_0[1] = {
  &hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_info_0_0
};

static const MR_DuPtagLayout hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_sec_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__hlds__make_hlds__du_stag_ordered_sec_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_name_ordered_sec_info_0[1] = {
  &hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_info_0_0
};

static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_sec_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds____Unify____sec_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds____Compare____sec_info_0_0_10001)),
  (MR_String) "hlds.make_hlds",
  (MR_String) "sec_info",
  {     hlds__make_hlds__hlds__make_hlds__du_name_ordered_sec_info_0 },
  {     hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_sec_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__make_hlds__hlds__make_hlds__functor_number_map_sec_info_0
};

static const MR_PseudoTypeInfo hlds__make_hlds__hlds__make_hlds__field_types_sec_item_1_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_info_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_item_1_0 = {
  (MR_String) "sec_item",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__hlds__make_hlds__field_types_sec_item_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_stag_ordered_sec_item_1_0[1] = {
  &hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_item_1_0
};

static const MR_DuPtagLayout hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_sec_item_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__hlds__make_hlds__du_stag_ordered_sec_item_1_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_name_ordered_sec_item_1[1] = {
  &hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_item_1_0
};

static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_sec_item_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds____Unify____sec_item_1_0_10001)),
  ((MR_Box) (hlds__make_hlds____Compare____sec_item_1_0_10001)),
  (MR_String) "hlds.make_hlds",
  (MR_String) "sec_item",
  {     hlds__make_hlds__hlds__make_hlds__du_name_ordered_sec_item_1 },
  {     hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_sec_item_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__make_hlds__hlds__make_hlds__functor_number_map_sec_item_1
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__hlds__make_hlds__pti_sec_item_1__pseudo_1 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__list__pti_list_1__pseudo_hlds__make_hlds__pti_sec_item_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__hlds__make_hlds__pti_sec_item_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_list_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (hlds__make_hlds____Unify____sec_list_1_0_10001)),
  ((MR_Box) (hlds__make_hlds____Compare____sec_list_1_0_10001)),
  (MR_String) "hlds.make_hlds",
  (MR_String) "sec_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__make_hlds__list__pti_list_1__pseudo_hlds__make_hlds__pti_sec_item_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

void MR_CALL 
hlds__make_hlds____Compare____sec_list_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_8_8;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    mercury__list____Compare____list_1_0(TypeInfo_8_8, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_list_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_7_7;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1));
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_7_7, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds____Compare____sec_item_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
      MR_Box ArgY2_8 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
      MR_Word SubResult1_6;

      hlds__make_hlds____Compare____sec_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0(TypeInfo_for_T_11, HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_item_1_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));

      succeeded = hlds__make_hlds____Unify____sec_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_9, ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds____Compare____sec_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
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
}

MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

      succeeded = hlds__status____Unify____item_mercury_status_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds____Compare____make_hlds_qual_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    hlds__make_hlds__qual_info____Compare____qual_info_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__make_hlds____Unify____make_hlds_qual_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = hlds__make_hlds__qual_info____Unify____qual_info_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds____Compare____ims_list_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_8_8;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    mercury__list____Compare____list_1_0(TypeInfo_8_8, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
hlds__make_hlds____Unify____ims_list_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_7_7;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1));
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_7_7, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds____Compare____ims_item_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
      MR_Box ArgY2_8 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
      MR_Word SubResult1_6;

      hlds__status____Compare____item_mercury_status_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0(TypeInfo_for_T_11, HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds____Unify____ims_item_1_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));

      succeeded = hlds__status____Unify____item_mercury_status_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_9, ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds____Compare____found_invalid_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__set_module_recomp_info_3_p_0(
  MR_Word QualInfo_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7)
{
  hlds__make_hlds__qual_info__set_module_recompilation_info_3_p_0(QualInfo_4, STATE_VARIABLE_ModuleInfo_0_6, STATE_VARIABLE_ModuleInfo_7);
}

void MR_CALL 
hlds__make_hlds__produce_instance_method_clauses_16_p_0(
  MR_Word InstanceProcDefn_17,
  MR_Word PredOrFunc_18,
  MR_Integer PredArity_19,
  MR_Word ArgTypes_20,
  MR_Word Markers_21,
  MR_Word Context_22,
  MR_Word Status_23,
  MR_Word * ClausesInfo_24,
  MR_Word STATE_VARIABLE_TVarSet_0_29,
  MR_Word * STATE_VARIABLE_TVarSet_30,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_QualInfo_0_33,
  MR_Word * STATE_VARIABLE_QualInfo_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0(InstanceProcDefn_17, PredOrFunc_18, PredArity_19, ArgTypes_20, Markers_21, Context_22, Status_23, ClausesInfo_24, STATE_VARIABLE_TVarSet_0_29, STATE_VARIABLE_TVarSet_30, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32, STATE_VARIABLE_QualInfo_0_33, STATE_VARIABLE_QualInfo_34, STATE_VARIABLE_Specs_0_35, STATE_VARIABLE_Specs_36);
}

void MR_CALL 
hlds__make_hlds__parse_tree_to_hlds_11_p_0(
  MR_Word AugCompilationUnit_12,
  MR_Word Globals_13,
  MR_String DumpBaseFileName_14,
  MR_Word MQInfo0_15,
  MR_Word TypeEqvMap_16,
  MR_Word UsedModules_17,
  MR_Word * QualInfo_18,
  MR_Word * FoundInvalidType_19,
  MR_Word * FoundInvalidMode_20,
  MR_Word * ModuleInfo_21,
  MR_Word * Specs_22)
{
  hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0(AugCompilationUnit_12, Globals_13, DumpBaseFileName_14, MQInfo0_15, TypeEqvMap_16, UsedModules_17, QualInfo_18, FoundInvalidType_19, FoundInvalidMode_20, ModuleInfo_21, Specs_22);
}

void MR_CALL 
hlds__make_hlds__wrap_with_section_info_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word SectionInfo_4,
  MR_Box Item_5,
  MR_Word * SectionItem_6)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *SectionItem_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SectionInfo_4));
    MR_hl_field(MR_mktag(0), base, 1) = Item_5;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds____Unify____found_invalid_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds____Compare____found_invalid_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds____Compare____found_invalid_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds____Unify____ims_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds____Unify____ims_item_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds____Compare____ims_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds____Compare____ims_item_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds____Unify____ims_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds____Unify____ims_list_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds____Compare____ims_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds____Compare____ims_list_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds____Unify____make_hlds_qual_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds____Unify____make_hlds_qual_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds____Compare____make_hlds_qual_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds____Compare____make_hlds_qual_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds____Unify____sec_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds____Compare____sec_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds____Compare____sec_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds____Unify____sec_item_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds____Compare____sec_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds____Compare____sec_item_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds____Unify____sec_list_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds____Compare____sec_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds____Compare____sec_list_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__make_hlds__init(void)
{
}

void mercury__hlds__make_hlds__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_inst_or_mode_0);
	MR_register_type_ctor_info(&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0);
	MR_register_type_ctor_info(&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1);
	MR_register_type_ctor_info(&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_list_1);
	MR_register_type_ctor_info(&hlds__make_hlds__hlds__make_hlds__type_ctor_info_make_hlds_qual_info_0);
	MR_register_type_ctor_info(&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_info_0);
	MR_register_type_ctor_info(&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1);
	MR_register_type_ctor_info(&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_list_1);
}

void mercury__hlds__make_hlds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.
