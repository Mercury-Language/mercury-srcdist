/*
** Automatically generated from `pred_info_types.m'
** by the Mercury compiler,
** version rotd-2026-08-22
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


// :- module hlds.pred_info_types.
// :- implementation.

/*
INIT mercury__hlds__pred_info_types__init
ENDINIT
*/

#include "hlds.pred_info_types.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_proc_id.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_PseudoTypeInfo hlds__pred_info_types__hlds__pred_info_types__field_types_arg_info_0_0[2];

static const MR_DuArgLocn hlds__pred_info_types__hlds__pred_info_types__field_locns_arg_info_0_0[2];

static const MR_DuFunctorDesc hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_arg_info_0_0;

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_arg_info_0_0[1];

static const MR_DuPtagLayout hlds__pred_info_types__hlds__pred_info_types__du_ptag_ordered_arg_info_0[1];

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_name_ordered_arg_info_0[1];

static const MR_Integer hlds__pred_info_types__hlds__pred_info_types__functor_number_map_arg_info_0[1];

static const MR_PseudoTypeInfo hlds__pred_info_types__hlds__pred_info_types__field_types_arg_loc_0_0[2];

static const MR_DuArgLocn hlds__pred_info_types__hlds__pred_info_types__field_locns_arg_loc_0_0[2];

static const MR_DuFunctorDesc hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_arg_loc_0_0;

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_arg_loc_0_0[1];

static const MR_DuPtagLayout hlds__pred_info_types__hlds__pred_info_types__du_ptag_ordered_arg_loc_0[1];

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_name_ordered_arg_loc_0[1];

static const MR_Integer hlds__pred_info_types__hlds__pred_info_types__functor_number_map_arg_loc_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__pred_info_types__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__pred_info_types__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct2 hlds__pred_info_types__pair__ti_pair_2tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0;

static const MR_PseudoTypeInfo hlds__pred_info_types__hlds__pred_info_types__field_types_cur_user_decl_info_0_0[3];

static const MR_DuArgLocn hlds__pred_info_types__hlds__pred_info_types__field_locns_cur_user_decl_info_0_0[3];

static const MR_DuFunctorDesc hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_cur_user_decl_info_0_0;

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_cur_user_decl_info_0_0[1];

static const MR_DuPtagLayout hlds__pred_info_types__hlds__pred_info_types__du_ptag_ordered_cur_user_decl_info_0[1];

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_name_ordered_cur_user_decl_info_0[1];

static const MR_Integer hlds__pred_info_types__hlds__pred_info_types__functor_number_map_cur_user_decl_info_0[1];

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_decl_section_0_0;

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_decl_section_0_1;

static const MR_EnumFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__enum_ordinal_ordered_decl_section_0[2];

static const MR_EnumFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__enum_name_ordered_decl_section_0[2];

static const MR_Integer hlds__pred_info_types__hlds__pred_info_types__functor_number_map_decl_section_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__pred_info_types__one_or_more__ti_one_or_more_1parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0;

static const MR_PseudoTypeInfo hlds__pred_info_types__hlds__pred_info_types__field_types_format_call_info_0_0[2];

static const MR_DuFunctorDesc hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_format_call_info_0_0;

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_format_call_info_0_0[1];

static const MR_DuPtagLayout hlds__pred_info_types__hlds__pred_info_types__du_ptag_ordered_format_call_info_0[1];

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_name_ordered_format_call_info_0[1];

static const MR_Integer hlds__pred_info_types__hlds__pred_info_types__functor_number_map_format_call_info_0[1];

static const MR_PseudoTypeInfo hlds__pred_info_types__hlds__pred_info_types__field_types_goal_type_0_0[1];

static const MR_DuArgLocn hlds__pred_info_types__hlds__pred_info_types__field_locns_goal_type_0_0[1];

static const MR_DuFunctorDesc hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_goal_type_0_0;

static const MR_PseudoTypeInfo hlds__pred_info_types__hlds__pred_info_types__field_types_goal_type_0_1[1];

static const MR_DuArgLocn hlds__pred_info_types__hlds__pred_info_types__field_locns_goal_type_0_1[1];

static const MR_DuFunctorDesc hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_goal_type_0_1;

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_goal_type_0_0[1];

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_goal_type_0_1[1];

static const MR_DuPtagLayout hlds__pred_info_types__hlds__pred_info_types__du_ptag_ordered_goal_type_0[2];

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_name_ordered_goal_type_0[2];

static const MR_Integer hlds__pred_info_types__hlds__pred_info_types__functor_number_map_goal_type_0[2];

static const MR_DuFunctorDesc hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_implementation_language_0_0;

static const MR_PseudoTypeInfo hlds__pred_info_types__hlds__pred_info_types__field_types_implementation_language_0_1[1];

static const MR_DuArgLocn hlds__pred_info_types__hlds__pred_info_types__field_locns_implementation_language_0_1[1];

static const MR_DuFunctorDesc hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_implementation_language_0_1;

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_implementation_language_0_0[1];

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_implementation_language_0_1[1];

static const MR_DuPtagLayout hlds__pred_info_types__hlds__pred_info_types__du_ptag_ordered_implementation_language_0[2];

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_name_ordered_implementation_language_0[2];

static const MR_Integer hlds__pred_info_types__hlds__pred_info_types__functor_number_map_implementation_language_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__pred_info_types__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_maybe_predmode_decl_0_0;

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_maybe_predmode_decl_0_1;

static const MR_EnumFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__enum_ordinal_ordered_maybe_predmode_decl_0[2];

static const MR_EnumFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__enum_name_ordered_maybe_predmode_decl_0[2];

static const MR_Integer hlds__pred_info_types__hlds__pred_info_types__functor_number_map_maybe_predmode_decl_0[2];

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_np_goal_type_0_0;

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_np_goal_type_0_1;

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_np_goal_type_0_2;

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_np_goal_type_0_3;

static const MR_EnumFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__enum_ordinal_ordered_np_goal_type_0[4];

static const MR_EnumFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__enum_name_ordered_np_goal_type_0[4];

static const MR_Integer hlds__pred_info_types__hlds__pred_info_types__functor_number_map_np_goal_type_0[4];

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_top_functor_mode_0_0;

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_top_functor_mode_0_1;

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_top_functor_mode_0_2;

static const MR_EnumFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__enum_ordinal_ordered_top_functor_mode_0[3];

static const MR_EnumFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__enum_name_ordered_top_functor_mode_0[3];

static const MR_Integer hlds__pred_info_types__hlds__pred_info_types__functor_number_map_top_functor_mode_0[3];

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____arg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_info_types____Compare____arg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____arg_loc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_info_types____Compare____arg_loc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____arg_modes_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_info_types____Compare____arg_modes_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____cur_user_decl_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_info_types____Compare____cur_user_decl_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____decl_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_info_types____Compare____decl_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____format_call_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_info_types____Compare____format_call_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____goal_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_info_types____Compare____goal_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____implementation_language_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_info_types____Compare____implementation_language_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____liveness_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_info_types____Compare____liveness_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____maybe_predmode_decl_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_info_types____Compare____maybe_predmode_decl_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____np_goal_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_info_types____Compare____np_goal_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____top_functor_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_info_types____Compare____top_functor_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__pred_info_types_scalar_common_1[3][2];

static /* final */ const MR_Box hlds__pred_info_types_scalar_common_2[2][3];




static /* final */ const MR_Box hlds__pred_info_types_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__pred_info_types_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__pred_info_types_scalar_common_1[0])),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__pred_info_types_scalar_common_2[0])),
    ((MR_Box) (&hlds__pred_info_types_scalar_common_2[0]))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_PseudoTypeInfo hlds__pred_info_types__hlds__pred_info_types__field_types_arg_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_arg_loc_0),
  (MR_PseudoTypeInfo) (&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_top_functor_mode_0)
};

static const MR_DuArgLocn hlds__pred_info_types__hlds__pred_info_types__field_locns_arg_info_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_arg_info_0_0 = {
  (MR_String) "arg_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__pred_info_types__hlds__pred_info_types__field_types_arg_info_0_0,
  NULL,
  hlds__pred_info_types__hlds__pred_info_types__field_locns_arg_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_arg_info_0_0[1] = { &hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_arg_info_0_0 };

static const MR_DuPtagLayout hlds__pred_info_types__hlds__pred_info_types__du_ptag_ordered_arg_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_arg_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_name_ordered_arg_info_0[1] = { &hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_arg_info_0_0 };

static const MR_Integer hlds__pred_info_types__hlds__pred_info_types__functor_number_map_arg_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_arg_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_info_types____Unify____arg_info_0_0_10001)),
  ((MR_Box) (hlds__pred_info_types____Compare____arg_info_0_0_10001)),
  (MR_String) "hlds.pred_info_types",
  (MR_String) "arg_info",
  { hlds__pred_info_types__hlds__pred_info_types__du_name_ordered_arg_info_0 },
  { hlds__pred_info_types__hlds__pred_info_types__du_ptag_ordered_arg_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__pred_info_types__hlds__pred_info_types__functor_number_map_arg_info_0,

};

static const MR_PseudoTypeInfo hlds__pred_info_types__hlds__pred_info_types__field_types_arg_loc_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn hlds__pred_info_types__hlds__pred_info_types__field_locns_arg_loc_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_arg_loc_0_0 = {
  (MR_String) "reg",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__pred_info_types__hlds__pred_info_types__field_types_arg_loc_0_0,
  NULL,
  hlds__pred_info_types__hlds__pred_info_types__field_locns_arg_loc_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_arg_loc_0_0[1] = { &hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_arg_loc_0_0 };

static const MR_DuPtagLayout hlds__pred_info_types__hlds__pred_info_types__du_ptag_ordered_arg_loc_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_arg_loc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_name_ordered_arg_loc_0[1] = { &hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_arg_loc_0_0 };

static const MR_Integer hlds__pred_info_types__hlds__pred_info_types__functor_number_map_arg_loc_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_arg_loc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_info_types____Unify____arg_loc_0_0_10001)),
  ((MR_Box) (hlds__pred_info_types____Compare____arg_loc_0_0_10001)),
  (MR_String) "hlds.pred_info_types",
  (MR_String) "arg_loc",
  { hlds__pred_info_types__hlds__pred_info_types__du_name_ordered_arg_loc_0 },
  { hlds__pred_info_types__hlds__pred_info_types__du_ptag_ordered_arg_loc_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__pred_info_types__hlds__pred_info_types__functor_number_map_arg_loc_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__pred_info_types__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__pred_info_types__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__pred_info_types__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__pred_info_types__pair__ti_pair_2tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__pred_info_types__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0),
    (MR_TypeInfo) (&hlds__pred_info_types__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_arg_modes_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_info_types____Unify____arg_modes_map_0_0_10001)),
  ((MR_Box) (hlds__pred_info_types____Compare____arg_modes_map_0_0_10001)),
  (MR_String) "hlds.pred_info_types",
  (MR_String) "arg_modes_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__pred_info_types__pair__ti_pair_2tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0bool__type_ctor_info_bool_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo hlds__pred_info_types__hlds__pred_info_types__field_types_cur_user_decl_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_decl_section_0),
  (MR_PseudoTypeInfo) (&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_maybe_predmode_decl_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_item_seq_num_0)
};

static const MR_DuArgLocn hlds__pred_info_types__hlds__pred_info_types__field_locns_cur_user_decl_info_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_cur_user_decl_info_0_0 = {
  (MR_String) "cur_user_decl_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__pred_info_types__hlds__pred_info_types__field_types_cur_user_decl_info_0_0,
  NULL,
  hlds__pred_info_types__hlds__pred_info_types__field_locns_cur_user_decl_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_cur_user_decl_info_0_0[1] = { &hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_cur_user_decl_info_0_0 };

static const MR_DuPtagLayout hlds__pred_info_types__hlds__pred_info_types__du_ptag_ordered_cur_user_decl_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_cur_user_decl_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_name_ordered_cur_user_decl_info_0[1] = { &hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_cur_user_decl_info_0_0 };

static const MR_Integer hlds__pred_info_types__hlds__pred_info_types__functor_number_map_cur_user_decl_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_cur_user_decl_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_info_types____Unify____cur_user_decl_info_0_0_10001)),
  ((MR_Box) (hlds__pred_info_types____Compare____cur_user_decl_info_0_0_10001)),
  (MR_String) "hlds.pred_info_types",
  (MR_String) "cur_user_decl_info",
  { hlds__pred_info_types__hlds__pred_info_types__du_name_ordered_cur_user_decl_info_0 },
  { hlds__pred_info_types__hlds__pred_info_types__du_ptag_ordered_cur_user_decl_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__pred_info_types__hlds__pred_info_types__functor_number_map_cur_user_decl_info_0,

};

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_decl_section_0_0 = {
  (MR_String) "decl_interface",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_decl_section_0_1 = {
  (MR_String) "decl_implementation",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__enum_ordinal_ordered_decl_section_0[2] = {
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_decl_section_0_0,
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_decl_section_0_1
};

static const MR_EnumFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__enum_name_ordered_decl_section_0[2] = {
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_decl_section_0_1,
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_decl_section_0_0
};

static const MR_Integer hlds__pred_info_types__hlds__pred_info_types__functor_number_map_decl_section_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_decl_section_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__pred_info_types____Unify____decl_section_0_0_10001)),
  ((MR_Box) (hlds__pred_info_types____Compare____decl_section_0_0_10001)),
  (MR_String) "hlds.pred_info_types",
  (MR_String) "decl_section",
  { hlds__pred_info_types__hlds__pred_info_types__enum_name_ordered_decl_section_0 },
  { hlds__pred_info_types__hlds__pred_info_types__enum_ordinal_ordered_decl_section_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__pred_info_types__hlds__pred_info_types__functor_number_map_decl_section_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__pred_info_types__one_or_more__ti_one_or_more_1parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0) }
};

static const MR_PseudoTypeInfo hlds__pred_info_types__hlds__pred_info_types__field_types_format_call_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__pred_info_types__one_or_more__ti_one_or_more_1parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0)
};

static const MR_DuFunctorDesc hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_format_call_info_0_0 = {
  (MR_String) "format_call_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__pred_info_types__hlds__pred_info_types__field_types_format_call_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_format_call_info_0_0[1] = { &hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_format_call_info_0_0 };

static const MR_DuPtagLayout hlds__pred_info_types__hlds__pred_info_types__du_ptag_ordered_format_call_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_format_call_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_name_ordered_format_call_info_0[1] = { &hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_format_call_info_0_0 };

static const MR_Integer hlds__pred_info_types__hlds__pred_info_types__functor_number_map_format_call_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_format_call_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_info_types____Unify____format_call_info_0_0_10001)),
  ((MR_Box) (hlds__pred_info_types____Compare____format_call_info_0_0_10001)),
  (MR_String) "hlds.pred_info_types",
  (MR_String) "format_call_info",
  { hlds__pred_info_types__hlds__pred_info_types__du_name_ordered_format_call_info_0 },
  { hlds__pred_info_types__hlds__pred_info_types__du_ptag_ordered_format_call_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__pred_info_types__hlds__pred_info_types__functor_number_map_format_call_info_0,

};

static const MR_PseudoTypeInfo hlds__pred_info_types__hlds__pred_info_types__field_types_goal_type_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_np_goal_type_0) };

static const MR_DuArgLocn hlds__pred_info_types__hlds__pred_info_types__field_locns_goal_type_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_goal_type_0_0 = {
  (MR_String) "goal_not_for_promise",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__pred_info_types__hlds__pred_info_types__field_types_goal_type_0_0,
  NULL,
  hlds__pred_info_types__hlds__pred_info_types__field_locns_goal_type_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_info_types__hlds__pred_info_types__field_types_goal_type_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data_rare__parse_tree__prog_data_rare__type_ctor_info_promise_type_0) };

static const MR_DuArgLocn hlds__pred_info_types__hlds__pred_info_types__field_locns_goal_type_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_goal_type_0_1 = {
  (MR_String) "goal_for_promise",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__pred_info_types__hlds__pred_info_types__field_types_goal_type_0_1,
  NULL,
  hlds__pred_info_types__hlds__pred_info_types__field_locns_goal_type_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_goal_type_0_0[1] = { &hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_goal_type_0_0 };

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_goal_type_0_1[1] = { &hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_goal_type_0_1 };

static const MR_DuPtagLayout hlds__pred_info_types__hlds__pred_info_types__du_ptag_ordered_goal_type_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_goal_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_goal_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_name_ordered_goal_type_0[2] = {
  &hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_goal_type_0_1,
  &hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_goal_type_0_0
};

static const MR_Integer hlds__pred_info_types__hlds__pred_info_types__functor_number_map_goal_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_goal_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_info_types____Unify____goal_type_0_0_10001)),
  ((MR_Box) (hlds__pred_info_types____Compare____goal_type_0_0_10001)),
  (MR_String) "hlds.pred_info_types",
  (MR_String) "goal_type",
  { hlds__pred_info_types__hlds__pred_info_types__du_name_ordered_goal_type_0 },
  { hlds__pred_info_types__hlds__pred_info_types__du_ptag_ordered_goal_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__pred_info_types__hlds__pred_info_types__functor_number_map_goal_type_0,

};

static const MR_DuFunctorDesc hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_implementation_language_0_0 = {
  (MR_String) "impl_lang_mercury",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_info_types__hlds__pred_info_types__field_types_implementation_language_0_1[1] = { (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0) };

static const MR_DuArgLocn hlds__pred_info_types__hlds__pred_info_types__field_locns_implementation_language_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_implementation_language_0_1 = {
  (MR_String) "impl_lang_foreign",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__pred_info_types__hlds__pred_info_types__field_types_implementation_language_0_1,
  NULL,
  hlds__pred_info_types__hlds__pred_info_types__field_locns_implementation_language_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_implementation_language_0_0[1] = { &hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_implementation_language_0_0 };

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_implementation_language_0_1[1] = { &hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_implementation_language_0_1 };

static const MR_DuPtagLayout hlds__pred_info_types__hlds__pred_info_types__du_ptag_ordered_implementation_language_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_implementation_language_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_info_types__hlds__pred_info_types__du_stag_ordered_implementation_language_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__du_name_ordered_implementation_language_0[2] = {
  &hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_implementation_language_0_1,
  &hlds__pred_info_types__hlds__pred_info_types__du_functor_desc_implementation_language_0_0
};

static const MR_Integer hlds__pred_info_types__hlds__pred_info_types__functor_number_map_implementation_language_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_implementation_language_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_info_types____Unify____implementation_language_0_0_10001)),
  ((MR_Box) (hlds__pred_info_types____Compare____implementation_language_0_0_10001)),
  (MR_String) "hlds.pred_info_types",
  (MR_String) "implementation_language",
  { hlds__pred_info_types__hlds__pred_info_types__du_name_ordered_implementation_language_0 },
  { hlds__pred_info_types__hlds__pred_info_types__du_ptag_ordered_implementation_language_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__pred_info_types__hlds__pred_info_types__functor_number_map_implementation_language_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__pred_info_types__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&hlds__pred_info_types__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

const MR_TypeCtorInfo_Struct hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_liveness_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__pred_info_types____Unify____liveness_info_0_0_10001)),
  ((MR_Box) (hlds__pred_info_types____Compare____liveness_info_0_0_10001)),
  (MR_String) "hlds.pred_info_types",
  (MR_String) "liveness_info",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__pred_info_types__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_maybe_predmode_decl_0_0 = {
  (MR_String) "no_predmode_decl",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_maybe_predmode_decl_0_1 = {
  (MR_String) "predmode_decl",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__enum_ordinal_ordered_maybe_predmode_decl_0[2] = {
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_maybe_predmode_decl_0_0,
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_maybe_predmode_decl_0_1
};

static const MR_EnumFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__enum_name_ordered_maybe_predmode_decl_0[2] = {
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_maybe_predmode_decl_0_0,
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_maybe_predmode_decl_0_1
};

static const MR_Integer hlds__pred_info_types__hlds__pred_info_types__functor_number_map_maybe_predmode_decl_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_maybe_predmode_decl_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__pred_info_types____Unify____maybe_predmode_decl_0_0_10001)),
  ((MR_Box) (hlds__pred_info_types____Compare____maybe_predmode_decl_0_0_10001)),
  (MR_String) "hlds.pred_info_types",
  (MR_String) "maybe_predmode_decl",
  { hlds__pred_info_types__hlds__pred_info_types__enum_name_ordered_maybe_predmode_decl_0 },
  { hlds__pred_info_types__hlds__pred_info_types__enum_ordinal_ordered_maybe_predmode_decl_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__pred_info_types__hlds__pred_info_types__functor_number_map_maybe_predmode_decl_0,

};

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_np_goal_type_0_0 = {
  (MR_String) "np_goal_type_none",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_np_goal_type_0_1 = {
  (MR_String) "np_goal_type_clause",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_np_goal_type_0_2 = {
  (MR_String) "np_goal_type_foreign",
  INT32_C(2)
};

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_np_goal_type_0_3 = {
  (MR_String) "np_goal_type_clause_and_foreign",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__enum_ordinal_ordered_np_goal_type_0[4] = {
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_np_goal_type_0_0,
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_np_goal_type_0_1,
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_np_goal_type_0_2,
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_np_goal_type_0_3
};

static const MR_EnumFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__enum_name_ordered_np_goal_type_0[4] = {
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_np_goal_type_0_1,
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_np_goal_type_0_3,
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_np_goal_type_0_2,
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_np_goal_type_0_0
};

static const MR_Integer hlds__pred_info_types__hlds__pred_info_types__functor_number_map_np_goal_type_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_np_goal_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__pred_info_types____Unify____np_goal_type_0_0_10001)),
  ((MR_Box) (hlds__pred_info_types____Compare____np_goal_type_0_0_10001)),
  (MR_String) "hlds.pred_info_types",
  (MR_String) "np_goal_type",
  { hlds__pred_info_types__hlds__pred_info_types__enum_name_ordered_np_goal_type_0 },
  { hlds__pred_info_types__hlds__pred_info_types__enum_ordinal_ordered_np_goal_type_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  hlds__pred_info_types__hlds__pred_info_types__functor_number_map_np_goal_type_0,

};

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_top_functor_mode_0_0 = {
  (MR_String) "top_in",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_top_functor_mode_0_1 = {
  (MR_String) "top_out",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_top_functor_mode_0_2 = {
  (MR_String) "top_unused",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__enum_ordinal_ordered_top_functor_mode_0[3] = {
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_top_functor_mode_0_0,
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_top_functor_mode_0_1,
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_top_functor_mode_0_2
};

static const MR_EnumFunctorDescPtr hlds__pred_info_types__hlds__pred_info_types__enum_name_ordered_top_functor_mode_0[3] = {
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_top_functor_mode_0_0,
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_top_functor_mode_0_1,
  &hlds__pred_info_types__hlds__pred_info_types__enum_functor_desc_top_functor_mode_0_2
};

static const MR_Integer hlds__pred_info_types__hlds__pred_info_types__functor_number_map_top_functor_mode_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_top_functor_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__pred_info_types____Unify____top_functor_mode_0_0_10001)),
  ((MR_Box) (hlds__pred_info_types____Compare____top_functor_mode_0_0_10001)),
  (MR_String) "hlds.pred_info_types",
  (MR_String) "top_functor_mode",
  { hlds__pred_info_types__hlds__pred_info_types__enum_name_ordered_top_functor_mode_0 },
  { hlds__pred_info_types__hlds__pred_info_types__enum_ordinal_ordered_top_functor_mode_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__pred_info_types__hlds__pred_info_types__functor_number_map_top_functor_mode_0,

};

void MR_CALL 
hlds__pred_info_types____Compare____top_functor_mode_0_0(
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
hlds__pred_info_types____Unify____top_functor_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__pred_info_types____Compare____np_goal_type_0_0(
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
hlds__pred_info_types____Unify____np_goal_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__pred_info_types____Compare____maybe_predmode_decl_0_0(
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
hlds__pred_info_types____Unify____maybe_predmode_decl_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__pred_info_types____Compare____liveness_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_info_types_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__pred_info_types____Unify____liveness_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__pred_info_types_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__pred_info_types____Compare____implementation_language_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 3);
    MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
hlds__pred_info_types____Unify____implementation_language_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 3);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__pred_info_types____Compare____goal_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 3);
      MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 3);
      MR_Integer Var_12 = (MR_Integer) (ArgX1_6);
      MR_Integer Var_13 = (MR_Integer) (ArgY1_7);

      succeeded = (Var_12 < Var_13);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_12 > Var_13);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 3);
    MR_Integer Var_14 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_15 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_14 < Var_15);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_14 > Var_15);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
hlds__pred_info_types____Unify____goal_type_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 3);
      succeeded = (ArgX1_5 == ArgY1_6);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__pred_info_types____Compare____format_call_info_0_0(
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

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_info_types_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
hlds__pred_info_types____Unify____format_call_info_0_0(
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
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&hlds__pred_info_types_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__pred_info_types____Compare____decl_section_0_0(
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
hlds__pred_info_types____Unify____decl_section_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__pred_info_types____Compare____cur_user_decl_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_19 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_20 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_19 < Var_20);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_19 > Var_20);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        parse_tree__prog_data____Compare____item_seq_num_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
hlds__pred_info_types____Unify____cur_user_decl_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = parse_tree__prog_data____Unify____item_seq_num_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__pred_info_types____Compare____arg_modes_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_info_types_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__pred_info_types____Unify____arg_modes_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__pred_info_types_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__pred_info_types____Compare____arg_info_0_0(
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
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 3);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 3);
    MR_Word SubResult1_6;

    hlds__pred_info_types____Compare____arg_loc_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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

void MR_CALL 
hlds__pred_info_types____Compare____arg_loc_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
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
hlds__pred_info_types____Unify____arg_info_0_0(
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
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 3);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 3);

    succeeded = hlds__pred_info_types____Unify____arg_loc_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__pred_info_types____Unify____arg_loc_0_0(
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____arg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_info_types____Unify____arg_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_info_types____Compare____arg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_info_types____Compare____arg_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____arg_loc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_info_types____Unify____arg_loc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_info_types____Compare____arg_loc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_info_types____Compare____arg_loc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____arg_modes_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_info_types____Unify____arg_modes_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_info_types____Compare____arg_modes_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_info_types____Compare____arg_modes_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____cur_user_decl_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_info_types____Unify____cur_user_decl_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_info_types____Compare____cur_user_decl_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_info_types____Compare____cur_user_decl_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____decl_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_info_types____Unify____decl_section_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_info_types____Compare____decl_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_info_types____Compare____decl_section_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____format_call_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_info_types____Unify____format_call_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_info_types____Compare____format_call_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_info_types____Compare____format_call_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____goal_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_info_types____Unify____goal_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_info_types____Compare____goal_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_info_types____Compare____goal_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____implementation_language_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_info_types____Unify____implementation_language_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_info_types____Compare____implementation_language_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_info_types____Compare____implementation_language_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____liveness_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_info_types____Unify____liveness_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_info_types____Compare____liveness_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_info_types____Compare____liveness_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____maybe_predmode_decl_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_info_types____Unify____maybe_predmode_decl_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_info_types____Compare____maybe_predmode_decl_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_info_types____Compare____maybe_predmode_decl_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____np_goal_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_info_types____Unify____np_goal_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_info_types____Compare____np_goal_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_info_types____Compare____np_goal_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_info_types____Unify____top_functor_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_info_types____Unify____top_functor_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_info_types____Compare____top_functor_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_info_types____Compare____top_functor_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__pred_info_types__init(void)
{
}

void mercury__hlds__pred_info_types__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_arg_info_0);
  MR_register_type_ctor_info(&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_arg_loc_0);
  MR_register_type_ctor_info(&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_arg_modes_map_0);
  MR_register_type_ctor_info(&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_cur_user_decl_info_0);
  MR_register_type_ctor_info(&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_decl_section_0);
  MR_register_type_ctor_info(&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_format_call_info_0);
  MR_register_type_ctor_info(&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_goal_type_0);
  MR_register_type_ctor_info(&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_implementation_language_0);
  MR_register_type_ctor_info(&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_liveness_info_0);
  MR_register_type_ctor_info(&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_maybe_predmode_decl_0);
  MR_register_type_ctor_info(&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_np_goal_type_0);
  MR_register_type_ctor_info(&hlds__pred_info_types__hlds__pred_info_types__type_ctor_info_top_functor_mode_0);
}

void mercury__hlds__pred_info_types__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__pred_info_types__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.pred_info_types.
