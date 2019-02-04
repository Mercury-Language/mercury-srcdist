/*
** Automatically generated from `prog_item_stats.m'
** by the Mercury compiler,
** version rotd-2018-08-08
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


// :- module parse_tree.prog_item_stats.
// :- implementation.

/*
INIT mercury__parse_tree__prog_item_stats__init
ENDINIT
*/

#include "parse_tree.prog_item_stats.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
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
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_item_stats__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_item_stats__type_ctor_info_section_stats_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_item_stats__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_item_stats__type_ctor_info_section_stats_0;

static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_goal_stats_0_0[27];

static const MR_ConstString parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_goal_stats_0_0[27];

static const MR_DuFunctorDesc parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_goal_stats_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_goal_stats_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_goal_stats_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_goal_stats_0[1];

static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_goal_stats_0[1];

static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_item_stats_0_0[22];

static const MR_ConstString parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_item_stats_0_0[22];

static const MR_DuFunctorDesc parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_item_stats_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_item_stats_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_item_stats_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_item_stats_0[1];

static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_item_stats_0[1];

static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_section_stats_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_section_stats_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_section_stats_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_section_stats_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_section_stats_0[1];

static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_section_stats_0[1];

static void MR_CALL 
parse_tree__prog_item_stats____Compare____section_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____section_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_item_stats____Compare____item_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____item_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_item_stats____Compare____goal_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____goal_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_item_stats__write_section_stats_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_item_stats__write_goal_stats_5_p_0(
  MR_Word Stream_6,
  MR_String SectionName_7,
  MR_Word GoalStats_8);

static void MR_CALL 
parse_tree__prog_item_stats__write_one_stat_6_p_0(
  MR_Word Stream_7,
  MR_String SectionName_8,
  MR_String StatName_9,
  MR_Integer StatNum_10);

static void MR_CALL 
parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho4_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CompUnitStats_0_3,
  MR_Word * STATE_VARIABLE_CompUnitStats_4);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho3_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CompUnitStats_0_3,
  MR_Word * STATE_VARIABLE_CompUnitStats_4);

static MR_Word MR_CALL 
parse_tree__prog_item_stats__init_goal_stats_0_f_0(void);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho2_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CompUnitStats_0_3,
  MR_Word * STATE_VARIABLE_CompUnitStats_4);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho1_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CompUnitStats_0_3,
  MR_Word * STATE_VARIABLE_CompUnitStats_4);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ItemStats_0_2,
  MR_Word * STATE_VARIABLE_ItemStats_3,
  MR_Word STATE_VARIABLE_GoalStats_0_4,
  MR_Word * STATE_VARIABLE_GoalStats_5);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_5_p_0(
  MR_Word Item_6,
  MR_Word STATE_VARIABLE_ItemStats_0_34,
  MR_Word * STATE_VARIABLE_ItemStats_35,
  MR_Word STATE_VARIABLE_GoalStats_0_36,
  MR_Word * STATE_VARIABLE_GoalStats_37);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_GoalStats_0_83,
  MR_Word * STATE_VARIABLE_GoalStats_84);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_catch_exprs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalStats_0_2,
  MR_Word * STATE_VARIABLE_GoalStats_3);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalStats_0_2,
  MR_Word * STATE_VARIABLE_GoalStats_3);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_pragma_3_p_0(
  MR_Word ItemPragmaInfo_4,
  MR_Word STATE_VARIABLE_ItemStats_0_44,
  MR_Word * STATE_VARIABLE_ItemStats_45);

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____goal_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_stats____Compare____goal_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____item_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_stats____Compare____item_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____section_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_stats____Compare____section_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_2[1][22];

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_3[1][27];

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_4[1][7];




static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_1[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_2[1][22] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_3[1][27] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item_stats__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_item_stats__type_ctor_info_section_stats_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_item_stats__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_item_stats__type_ctor_info_section_stats_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_item_stats__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_item_stats__type_ctor_info_section_stats_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_comp_unit_stats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0_10001)),
  (MR_String) "parse_tree.prog_item_stats",
  (MR_String) "comp_unit_stats",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__prog_item_stats__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_item_stats__type_ctor_info_section_stats_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_goal_stats_0_0[27] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_goal_stats_0_0[27] = {
  (MR_String) "goal_num_conj",
  (MR_String) "goal_num_par_conj",
  (MR_String) "goal_num_true",
  (MR_String) "goal_num_disj",
  (MR_String) "goal_num_fail",
  (MR_String) "goal_num_some",
  (MR_String) "goal_num_all",
  (MR_String) "goal_num_some_state_vars",
  (MR_String) "goal_num_all_state_vars",
  (MR_String) "goal_num_promise_purity",
  (MR_String) "goal_num_promise_eqv_solns",
  (MR_String) "goal_num_promise_eqv_sets",
  (MR_String) "goal_num_promise_arbitrary",
  (MR_String) "goal_num_req_detism",
  (MR_String) "goal_num_req_compl_switch",
  (MR_String) "goal_num_req_arm_detism",
  (MR_String) "goal_num_disable_warnings",
  (MR_String) "goal_num_trace",
  (MR_String) "goal_num_atomic",
  (MR_String) "goal_num_try",
  (MR_String) "goal_num_implies",
  (MR_String) "goal_num_equivalent",
  (MR_String) "goal_num_not",
  (MR_String) "goal_num_if_then_else",
  (MR_String) "goal_num_event",
  (MR_String) "goal_num_call",
  (MR_String) "goal_num_unify"
};

static const MR_DuFunctorDesc parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_goal_stats_0_0 = {
  (MR_String) "goal_stats",
  (MR_Integer) 27,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_goal_stats_0_0,
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_goal_stats_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_goal_stats_0_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_goal_stats_0_0
};

static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_goal_stats_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_goal_stats_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_goal_stats_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_goal_stats_0_0
};

static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_goal_stats_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_goal_stats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_stats____Unify____goal_stats_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_stats____Compare____goal_stats_0_0_10001)),
  (MR_String) "parse_tree.prog_item_stats",
  (MR_String) "goal_stats",
  {     parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_goal_stats_0 },
  {     parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_goal_stats_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_goal_stats_0
};

static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_item_stats_0_0[22] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_item_stats_0_0[22] = {
  (MR_String) "item_num_clauses",
  (MR_String) "item_num_type_defn",
  (MR_String) "item_num_inst_defn",
  (MR_String) "item_num_mode_defn",
  (MR_String) "item_num_pred_decl",
  (MR_String) "item_num_mode_decl",
  (MR_String) "item_num_pragma_fim",
  (MR_String) "item_num_pragma_term",
  (MR_String) "item_num_pragma_term2",
  (MR_String) "item_num_pragma_exceptions",
  (MR_String) "item_num_pragma_trailing",
  (MR_String) "item_num_pragma_mm_tabling",
  (MR_String) "item_num_pragma_other_pass_2",
  (MR_String) "item_num_pragma_other_pass_3",
  (MR_String) "item_num_promise",
  (MR_String) "item_num_typeclass",
  (MR_String) "item_num_instance",
  (MR_String) "item_num_initialise",
  (MR_String) "item_num_finalise",
  (MR_String) "item_num_mutable",
  (MR_String) "item_num_type_repn",
  (MR_String) "item_num_nothing"
};

static const MR_DuFunctorDesc parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_item_stats_0_0 = {
  (MR_String) "item_stats",
  (MR_Integer) 22,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_item_stats_0_0,
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_item_stats_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_item_stats_0_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_item_stats_0_0
};

static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_item_stats_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_item_stats_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_item_stats_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_item_stats_0_0
};

static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_item_stats_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_item_stats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_stats____Unify____item_stats_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_stats____Compare____item_stats_0_0_10001)),
  (MR_String) "parse_tree.prog_item_stats",
  (MR_String) "item_stats",
  {     parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_item_stats_0 },
  {     parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_item_stats_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_item_stats_0
};

static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_section_stats_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_item_stats_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_goal_stats_0)
};

static const MR_DuFunctorDesc parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_section_stats_0_0 = {
  (MR_String) "section_stats",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_section_stats_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_section_stats_0_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_section_stats_0_0
};

static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_section_stats_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_section_stats_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_section_stats_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_section_stats_0_0
};

static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_section_stats_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_stats____Unify____section_stats_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_stats____Compare____section_stats_0_0_10001)),
  (MR_String) "parse_tree.prog_item_stats",
  (MR_String) "section_stats",
  {     parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_section_stats_0 },
  {     parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_section_stats_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_section_stats_0
};

static void MR_CALL 
parse_tree__prog_item_stats____Compare____section_stats_0_0(
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_8;

      parse_tree__prog_item_stats____Compare____item_stats_0_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        parse_tree__prog_item_stats____Compare____goal_stats_0_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____section_stats_0_0(
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
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = parse_tree__prog_item_stats____Unify____item_stats_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = parse_tree__prog_item_stats____Unify____goal_stats_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats____Compare____item_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_69 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_70 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_69 == CastY_70);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Integer ArgX4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgY4_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Integer ArgX5_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer ArgY5_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Integer ArgX6_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Integer ArgY6_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Integer ArgX7_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Integer ArgY7_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Integer ArgX8_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Integer ArgY8_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Integer ArgX9_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Integer ArgY9_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Integer ArgX10_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Integer ArgY10_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Integer ArgX11_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Integer ArgY11_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))));
      MR_Integer ArgX12_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Integer ArgY12_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11))));
      MR_Integer ArgX13_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_Integer ArgY13_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 12))));
      MR_Integer ArgX14_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
      MR_Integer ArgY14_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 13))));
      MR_Integer ArgX15_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
      MR_Integer ArgY15_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))));
      MR_Integer ArgX16_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15))));
      MR_Integer ArgY16_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 15))));
      MR_Integer ArgX17_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16))));
      MR_Integer ArgY17_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 16))));
      MR_Integer ArgX18_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 17))));
      MR_Integer ArgY18_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 17))));
      MR_Integer ArgX19_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 18))));
      MR_Integer ArgY19_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 18))));
      MR_Integer ArgX20_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 19))));
      MR_Integer ArgY20_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 19))));
      MR_Integer ArgX21_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 20))));
      MR_Integer ArgY21_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 20))));
      MR_Integer ArgX22_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 21))));
      MR_Integer ArgY22_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 21))));
      MR_Word Var_48;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_48, ArgX1_4, ArgY1_5);
      succeeded = (Var_48 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_48;
      else
      {
        MR_Word Var_49;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_49, ArgX2_6, ArgY2_7);
        succeeded = (Var_49 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_49;
        else
        {
          MR_Word Var_50;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_50, ArgX3_8, ArgY3_9);
          succeeded = (Var_50 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_50;
          else
          {
            MR_Word Var_51;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_51, ArgX4_10, ArgY4_11);
            succeeded = (Var_51 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_51;
            else
            {
              MR_Word Var_52;

              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_52, ArgX5_12, ArgY5_13);
              succeeded = (Var_52 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_52;
              else
              {
                MR_Word Var_53;

                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_53, ArgX6_14, ArgY6_15);
                succeeded = (Var_53 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_53;
                else
                {
                  MR_Word Var_54;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_54, ArgX7_16, ArgY7_17);
                  succeeded = (Var_54 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_54;
                  else
                  {
                    MR_Word Var_55;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_55, ArgX8_18, ArgY8_19);
                    succeeded = (Var_55 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_55;
                    else
                    {
                      MR_Word Var_56;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_56, ArgX9_20, ArgY9_21);
                      succeeded = (Var_56 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_56;
                      else
                      {
                        MR_Word Var_57;

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_57, ArgX10_22, ArgY10_23);
                        succeeded = (Var_57 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_57;
                        else
                        {
                          MR_Word Var_58;

                          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_58, ArgX11_24, ArgY11_25);
                          succeeded = (Var_58 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_58;
                          else
                          {
                            MR_Word Var_59;

                            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_59, ArgX12_26, ArgY12_27);
                            succeeded = (Var_59 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_59;
                            else
                            {
                              MR_Word Var_60;

                              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_60, ArgX13_28, ArgY13_29);
                              succeeded = (Var_60 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_60;
                              else
                              {
                                MR_Word Var_61;

                                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_61, ArgX14_30, ArgY14_31);
                                succeeded = (Var_61 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  *HeadVar__1_1 = Var_61;
                                else
                                {
                                  MR_Word Var_62;

                                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_62, ArgX15_32, ArgY15_33);
                                  succeeded = (Var_62 == (MR_Integer) 0);
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                    *HeadVar__1_1 = Var_62;
                                  else
                                  {
                                    MR_Word Var_63;

                                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_63, ArgX16_34, ArgY16_35);
                                    succeeded = (Var_63 == (MR_Integer) 0);
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                      *HeadVar__1_1 = Var_63;
                                    else
                                    {
                                      MR_Word Var_64;

                                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_64, ArgX17_36, ArgY17_37);
                                      succeeded = (Var_64 == (MR_Integer) 0);
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                        *HeadVar__1_1 = Var_64;
                                      else
                                      {
                                        MR_Word Var_65;

                                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_65, ArgX18_38, ArgY18_39);
                                        succeeded = (Var_65 == (MR_Integer) 0);
                                        succeeded = !(succeeded);
                                        if (succeeded)
                                          *HeadVar__1_1 = Var_65;
                                        else
                                        {
                                          MR_Word Var_66;

                                          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_66, ArgX19_40, ArgY19_41);
                                          succeeded = (Var_66 == (MR_Integer) 0);
                                          succeeded = !(succeeded);
                                          if (succeeded)
                                            *HeadVar__1_1 = Var_66;
                                          else
                                          {
                                            MR_Word Var_67;

                                            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_67, ArgX20_42, ArgY20_43);
                                            succeeded = (Var_67 == (MR_Integer) 0);
                                            succeeded = !(succeeded);
                                            if (succeeded)
                                              *HeadVar__1_1 = Var_67;
                                            else
                                            {
                                              MR_Word Var_68;

                                              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_68, ArgX21_44, ArgY21_45);
                                              succeeded = (Var_68 == (MR_Integer) 0);
                                              succeeded = !(succeeded);
                                              if (succeeded)
                                                *HeadVar__1_1 = Var_68;
                                              else
                                                mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX22_46, ArgY22_47);
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

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____item_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_47 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_48 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_47 == CastY_48);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Integer ArgY8_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Integer ArgX9_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Integer ArgY9_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Integer ArgX10_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Integer ArgY10_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Integer ArgX11_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))));
      MR_Integer ArgY11_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Integer ArgX12_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11))));
      MR_Integer ArgY12_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Integer ArgX13_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 12))));
      MR_Integer ArgY13_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_Integer ArgX14_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 13))));
      MR_Integer ArgY14_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
      MR_Integer ArgX15_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))));
      MR_Integer ArgY15_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
      MR_Integer ArgX16_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 15))));
      MR_Integer ArgY16_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15))));
      MR_Integer ArgX17_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 16))));
      MR_Integer ArgY17_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16))));
      MR_Integer ArgX18_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 17))));
      MR_Integer ArgY18_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 17))));
      MR_Integer ArgX19_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 18))));
      MR_Integer ArgY19_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 18))));
      MR_Integer ArgX20_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 19))));
      MR_Integer ArgY20_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 19))));
      MR_Integer ArgX21_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 20))));
      MR_Integer ArgY21_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 20))));
      MR_Integer ArgX22_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 21))));
      MR_Integer ArgY22_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 21))));

      succeeded = (ArgX1_3 == ArgY1_4);
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
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                {
                  succeeded = (ArgX7_15 == ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                      {
                        succeeded = (ArgX10_21 == ArgY10_22);
                        if (succeeded)
                        {
                          succeeded = (ArgX11_23 == ArgY11_24);
                          if (succeeded)
                          {
                            succeeded = (ArgX12_25 == ArgY12_26);
                            if (succeeded)
                            {
                              succeeded = (ArgX13_27 == ArgY13_28);
                              if (succeeded)
                              {
                                succeeded = (ArgX14_29 == ArgY14_30);
                                if (succeeded)
                                {
                                  succeeded = (ArgX15_31 == ArgY15_32);
                                  if (succeeded)
                                  {
                                    succeeded = (ArgX16_33 == ArgY16_34);
                                    if (succeeded)
                                    {
                                      succeeded = (ArgX17_35 == ArgY17_36);
                                      if (succeeded)
                                      {
                                        succeeded = (ArgX18_37 == ArgY18_38);
                                        if (succeeded)
                                        {
                                          succeeded = (ArgX19_39 == ArgY19_40);
                                          if (succeeded)
                                          {
                                            succeeded = (ArgX20_41 == ArgY20_42);
                                            if (succeeded)
                                            {
                                              succeeded = (ArgX21_43 == ArgY21_44);
                                              if (succeeded)
                                                succeeded = (ArgX22_45 == ArgY22_46);
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
}

static void MR_CALL 
parse_tree__prog_item_stats____Compare____goal_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_84 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_85 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_84 == CastY_85);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Integer ArgX4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgY4_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Integer ArgX5_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer ArgY5_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Integer ArgX6_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Integer ArgY6_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Integer ArgX7_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Integer ArgY7_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Integer ArgX8_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Integer ArgY8_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Integer ArgX9_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Integer ArgY9_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Integer ArgX10_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Integer ArgY10_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Integer ArgX11_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Integer ArgY11_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))));
      MR_Integer ArgX12_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Integer ArgY12_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11))));
      MR_Integer ArgX13_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_Integer ArgY13_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 12))));
      MR_Integer ArgX14_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
      MR_Integer ArgY14_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 13))));
      MR_Integer ArgX15_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
      MR_Integer ArgY15_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))));
      MR_Integer ArgX16_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15))));
      MR_Integer ArgY16_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 15))));
      MR_Integer ArgX17_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16))));
      MR_Integer ArgY17_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 16))));
      MR_Integer ArgX18_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 17))));
      MR_Integer ArgY18_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 17))));
      MR_Integer ArgX19_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 18))));
      MR_Integer ArgY19_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 18))));
      MR_Integer ArgX20_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 19))));
      MR_Integer ArgY20_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 19))));
      MR_Integer ArgX21_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 20))));
      MR_Integer ArgY21_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 20))));
      MR_Integer ArgX22_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 21))));
      MR_Integer ArgY22_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 21))));
      MR_Integer ArgX23_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 22))));
      MR_Integer ArgY23_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 22))));
      MR_Integer ArgX24_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 23))));
      MR_Integer ArgY24_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 23))));
      MR_Integer ArgX25_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 24))));
      MR_Integer ArgY25_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 24))));
      MR_Integer ArgX26_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 25))));
      MR_Integer ArgY26_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 25))));
      MR_Integer ArgX27_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 26))));
      MR_Integer ArgY27_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 26))));
      MR_Word Var_58;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_58, ArgX1_4, ArgY1_5);
      succeeded = (Var_58 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_58;
      else
      {
        MR_Word Var_59;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_59, ArgX2_6, ArgY2_7);
        succeeded = (Var_59 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_59;
        else
        {
          MR_Word Var_60;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_60, ArgX3_8, ArgY3_9);
          succeeded = (Var_60 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_60;
          else
          {
            MR_Word Var_61;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_61, ArgX4_10, ArgY4_11);
            succeeded = (Var_61 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_61;
            else
            {
              MR_Word Var_62;

              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_62, ArgX5_12, ArgY5_13);
              succeeded = (Var_62 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_62;
              else
              {
                MR_Word Var_63;

                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_63, ArgX6_14, ArgY6_15);
                succeeded = (Var_63 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_63;
                else
                {
                  MR_Word Var_64;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_64, ArgX7_16, ArgY7_17);
                  succeeded = (Var_64 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_64;
                  else
                  {
                    MR_Word Var_65;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_65, ArgX8_18, ArgY8_19);
                    succeeded = (Var_65 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_65;
                    else
                    {
                      MR_Word Var_66;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_66, ArgX9_20, ArgY9_21);
                      succeeded = (Var_66 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_66;
                      else
                      {
                        MR_Word Var_67;

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_67, ArgX10_22, ArgY10_23);
                        succeeded = (Var_67 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_67;
                        else
                        {
                          MR_Word Var_68;

                          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_68, ArgX11_24, ArgY11_25);
                          succeeded = (Var_68 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_68;
                          else
                          {
                            MR_Word Var_69;

                            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_69, ArgX12_26, ArgY12_27);
                            succeeded = (Var_69 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_69;
                            else
                            {
                              MR_Word Var_70;

                              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_70, ArgX13_28, ArgY13_29);
                              succeeded = (Var_70 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_70;
                              else
                              {
                                MR_Word Var_71;

                                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_71, ArgX14_30, ArgY14_31);
                                succeeded = (Var_71 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  *HeadVar__1_1 = Var_71;
                                else
                                {
                                  MR_Word Var_72;

                                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_72, ArgX15_32, ArgY15_33);
                                  succeeded = (Var_72 == (MR_Integer) 0);
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                    *HeadVar__1_1 = Var_72;
                                  else
                                  {
                                    MR_Word Var_73;

                                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_73, ArgX16_34, ArgY16_35);
                                    succeeded = (Var_73 == (MR_Integer) 0);
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                      *HeadVar__1_1 = Var_73;
                                    else
                                    {
                                      MR_Word Var_74;

                                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_74, ArgX17_36, ArgY17_37);
                                      succeeded = (Var_74 == (MR_Integer) 0);
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                        *HeadVar__1_1 = Var_74;
                                      else
                                      {
                                        MR_Word Var_75;

                                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_75, ArgX18_38, ArgY18_39);
                                        succeeded = (Var_75 == (MR_Integer) 0);
                                        succeeded = !(succeeded);
                                        if (succeeded)
                                          *HeadVar__1_1 = Var_75;
                                        else
                                        {
                                          MR_Word Var_76;

                                          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_76, ArgX19_40, ArgY19_41);
                                          succeeded = (Var_76 == (MR_Integer) 0);
                                          succeeded = !(succeeded);
                                          if (succeeded)
                                            *HeadVar__1_1 = Var_76;
                                          else
                                          {
                                            MR_Word Var_77;

                                            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_77, ArgX20_42, ArgY20_43);
                                            succeeded = (Var_77 == (MR_Integer) 0);
                                            succeeded = !(succeeded);
                                            if (succeeded)
                                              *HeadVar__1_1 = Var_77;
                                            else
                                            {
                                              MR_Word Var_78;

                                              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_78, ArgX21_44, ArgY21_45);
                                              succeeded = (Var_78 == (MR_Integer) 0);
                                              succeeded = !(succeeded);
                                              if (succeeded)
                                                *HeadVar__1_1 = Var_78;
                                              else
                                              {
                                                MR_Word Var_79;

                                                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_79, ArgX22_46, ArgY22_47);
                                                succeeded = (Var_79 == (MR_Integer) 0);
                                                succeeded = !(succeeded);
                                                if (succeeded)
                                                  *HeadVar__1_1 = Var_79;
                                                else
                                                {
                                                  MR_Word Var_80;

                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_80, ArgX23_48, ArgY23_49);
                                                  succeeded = (Var_80 == (MR_Integer) 0);
                                                  succeeded = !(succeeded);
                                                  if (succeeded)
                                                    *HeadVar__1_1 = Var_80;
                                                  else
                                                  {
                                                    MR_Word Var_81;

                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_81, ArgX24_50, ArgY24_51);
                                                    succeeded = (Var_81 == (MR_Integer) 0);
                                                    succeeded = !(succeeded);
                                                    if (succeeded)
                                                      *HeadVar__1_1 = Var_81;
                                                    else
                                                    {
                                                      MR_Word Var_82;

                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_82, ArgX25_52, ArgY25_53);
                                                      succeeded = (Var_82 == (MR_Integer) 0);
                                                      succeeded = !(succeeded);
                                                      if (succeeded)
                                                        *HeadVar__1_1 = Var_82;
                                                      else
                                                      {
                                                        MR_Word Var_83;

                                                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_83, ArgX26_54, ArgY26_55);
                                                        succeeded = (Var_83 == (MR_Integer) 0);
                                                        succeeded = !(succeeded);
                                                        if (succeeded)
                                                          *HeadVar__1_1 = Var_83;
                                                        else
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX27_56, ArgY27_57);
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
  }
}

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____goal_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_57 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_58 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_57 == CastY_58);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Integer ArgY8_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Integer ArgX9_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Integer ArgY9_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Integer ArgX10_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Integer ArgY10_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Integer ArgX11_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))));
      MR_Integer ArgY11_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Integer ArgX12_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11))));
      MR_Integer ArgY12_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Integer ArgX13_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 12))));
      MR_Integer ArgY13_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_Integer ArgX14_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 13))));
      MR_Integer ArgY14_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
      MR_Integer ArgX15_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))));
      MR_Integer ArgY15_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
      MR_Integer ArgX16_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 15))));
      MR_Integer ArgY16_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15))));
      MR_Integer ArgX17_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 16))));
      MR_Integer ArgY17_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16))));
      MR_Integer ArgX18_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 17))));
      MR_Integer ArgY18_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 17))));
      MR_Integer ArgX19_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 18))));
      MR_Integer ArgY19_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 18))));
      MR_Integer ArgX20_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 19))));
      MR_Integer ArgY20_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 19))));
      MR_Integer ArgX21_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 20))));
      MR_Integer ArgY21_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 20))));
      MR_Integer ArgX22_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 21))));
      MR_Integer ArgY22_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 21))));
      MR_Integer ArgX23_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 22))));
      MR_Integer ArgY23_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 22))));
      MR_Integer ArgX24_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 23))));
      MR_Integer ArgY24_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 23))));
      MR_Integer ArgX25_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 24))));
      MR_Integer ArgY25_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 24))));
      MR_Integer ArgX26_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 25))));
      MR_Integer ArgY26_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 25))));
      MR_Integer ArgX27_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 26))));
      MR_Integer ArgY27_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 26))));

      succeeded = (ArgX1_3 == ArgY1_4);
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
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                {
                  succeeded = (ArgX7_15 == ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                      {
                        succeeded = (ArgX10_21 == ArgY10_22);
                        if (succeeded)
                        {
                          succeeded = (ArgX11_23 == ArgY11_24);
                          if (succeeded)
                          {
                            succeeded = (ArgX12_25 == ArgY12_26);
                            if (succeeded)
                            {
                              succeeded = (ArgX13_27 == ArgY13_28);
                              if (succeeded)
                              {
                                succeeded = (ArgX14_29 == ArgY14_30);
                                if (succeeded)
                                {
                                  succeeded = (ArgX15_31 == ArgY15_32);
                                  if (succeeded)
                                  {
                                    succeeded = (ArgX16_33 == ArgY16_34);
                                    if (succeeded)
                                    {
                                      succeeded = (ArgX17_35 == ArgY17_36);
                                      if (succeeded)
                                      {
                                        succeeded = (ArgX18_37 == ArgY18_38);
                                        if (succeeded)
                                        {
                                          succeeded = (ArgX19_39 == ArgY19_40);
                                          if (succeeded)
                                          {
                                            succeeded = (ArgX20_41 == ArgY20_42);
                                            if (succeeded)
                                            {
                                              succeeded = (ArgX21_43 == ArgY21_44);
                                              if (succeeded)
                                              {
                                                succeeded = (ArgX22_45 == ArgY22_46);
                                                if (succeeded)
                                                {
                                                  succeeded = (ArgX23_47 == ArgY23_48);
                                                  if (succeeded)
                                                  {
                                                    succeeded = (ArgX24_49 == ArgY24_50);
                                                    if (succeeded)
                                                    {
                                                      succeeded = (ArgX25_51 == ArgY25_52);
                                                      if (succeeded)
                                                      {
                                                        succeeded = (ArgX26_53 == ArgY26_54);
                                                        if (succeeded)
                                                          succeeded = (ArgX27_55 == ArgY27_56);
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
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_stats_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_item_stats_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__write_section_stats_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_String SectionName_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word SectionStats_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ItemStats_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionStats_7, (MR_Integer) 0))));
    MR_Word GoalStats_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionStats_7, (MR_Integer) 1))));
    MR_Integer Clause_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 0))));
    MR_Integer TypeDefn_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 1))));
    MR_Integer InstDefn_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 2))));
    MR_Integer ModeDefn_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 3))));
    MR_Integer PredDecl_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 4))));
    MR_Integer ModeDecl_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 5))));
    MR_Integer PragmaFIM_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 6))));
    MR_Integer PragmaTerm_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 7))));
    MR_Integer PragmaTerm2_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 8))));
    MR_Integer PragmaExcp_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 9))));
    MR_Integer PragmaTrail_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 10))));
    MR_Integer PragmaMM_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 11))));
    MR_Integer PragmaPass2_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 12))));
    MR_Integer PragmaPass3_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 13))));
    MR_Integer Promise_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 14))));
    MR_Integer Typeclasse_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 15))));
    MR_Integer Instance_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 16))));
    MR_Integer Initialise_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 17))));
    MR_Integer Finalise_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 18))));
    MR_Integer Mutable_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 19))));
    MR_Integer TypeRepn_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 20))));
    MR_Integer Nothing_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemStats_9, (MR_Integer) 21))));

    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_clause", Clause_21);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_type_defn", TypeDefn_22);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_inst_defn", InstDefn_23);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_mode_defn", ModeDefn_24);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pred_decl", PredDecl_25);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_mode_decl", ModeDecl_26);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_fim", PragmaFIM_27);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_term", PragmaTerm_28);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_term2", PragmaTerm2_29);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_excp", PragmaExcp_30);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_trail", PragmaTrail_31);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_mm", PragmaMM_32);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_pass2", PragmaPass2_33);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_pass3", PragmaPass3_34);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_promise", Promise_35);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_typeclass", Typeclasse_36);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_instance", Instance_37);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_promise", Promise_35);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_initialise", Initialise_38);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_finalise", Finalise_39);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_mutable", Mutable_40);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_type_repn", TypeRepn_41);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_nothing", Nothing_42);
    parse_tree__prog_item_stats__write_goal_stats_5_p_0(Stream_5, SectionName_6, GoalStats_10);
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__write_goal_stats_5_p_0(
  MR_Word Stream_6,
  MR_String SectionName_7,
  MR_Word GoalStats_8)
{
  {
    MR_Integer Conj_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 0))));
    MR_Integer ParConj_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 1))));
    MR_Integer True_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 2))));
    MR_Integer Disj_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 3))));
    MR_Integer Fail_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 4))));
    MR_Integer Some_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 5))));
    MR_Integer All_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 6))));
    MR_Integer SomeStateVars_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 7))));
    MR_Integer AllStateVars_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 8))));
    MR_Integer PromisePurity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 9))));
    MR_Integer PromiseEqvSolns_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 10))));
    MR_Integer PromiseEqvSolnSets_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 11))));
    MR_Integer PromiseArbitrary_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 12))));
    MR_Integer ReqDetism_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 13))));
    MR_Integer ReqComplSwitch_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 14))));
    MR_Integer ReqSwitchArmDetism_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 15))));
    MR_Integer DisableWarnings_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 16))));
    MR_Integer Trace_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 17))));
    MR_Integer Atomic_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 18))));
    MR_Integer Try_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 19))));
    MR_Integer Implies_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 20))));
    MR_Integer Equivalent_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 21))));
    MR_Integer Not_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 22))));
    MR_Integer IfThenElse_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 23))));
    MR_Integer Event_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 24))));
    MR_Integer Call_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 25))));
    MR_Integer Unify_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), GoalStats_8, (MR_Integer) 26))));

    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_conj", Conj_10);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_par_conj", ParConj_11);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_true", True_12);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_disj", Disj_13);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_fail", Fail_14);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_some", Some_15);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_all", All_16);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_some_state_vars", SomeStateVars_17);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_all_state_vars", AllStateVars_18);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_pro_purity", PromisePurity_19);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_pro_eqv_solns", PromiseEqvSolns_20);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_pro_eqv_soln_sets", PromiseEqvSolnSets_21);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_pro_arbitrary", PromiseArbitrary_22);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_req_detism", ReqDetism_23);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_req_compl_switch", ReqComplSwitch_24);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_req_arm_detism", ReqSwitchArmDetism_25);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_disable_warnings", DisableWarnings_26);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_trace", Trace_27);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_atomic", Atomic_28);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_try", Try_29);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_implies", Implies_30);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_equivalent", Equivalent_31);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_not", Not_32);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_if_then_else", IfThenElse_33);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_event", Event_34);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_call", Call_35);
    parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_6, SectionName_7, (MR_String) "goal_unify", Unify_36);
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__write_one_stat_6_p_0(
  MR_Word Stream_7,
  MR_String SectionName_8,
  MR_String StatName_9,
  MR_Integer StatNum_10)
{
  {
    mercury__io__write_string_4_p_0(Stream_7, SectionName_8);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_7, StatName_9);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ");
    mercury__io__write_int_4_p_0(Stream_7, StatNum_10);
    mercury__io__nl_3_p_0(Stream_7);
    mercury__io__flush_output_3_p_0(Stream_7);
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__prog_item_stats__write_section_stats_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0(
  MR_Word Stream_5,
  MR_Word AugCompUnit_6)
{
  {
    MR_Word CompUnitStats_8;
    MR_Word Var_11;
    MR_Word SrcItemBlocks_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 3))));
    MR_Word DirectIntItemBlocks_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 4))));
    MR_Word IndirectIntItemBlocks_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 5))));
    MR_Word OptItemBlocks_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 6))));
    MR_Word IntForOptItemBlocks_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 7))));
    MR_Word STATE_VARIABLE_CompUnitStats_14_31;
    MR_Word STATE_VARIABLE_CompUnitStats_16_33;
    MR_Word STATE_VARIABLE_CompUnitStats_18_35;
    MR_Word STATE_VARIABLE_CompUnitStats_20_37;
    MR_Word STATE_VARIABLE_CompUnitStats_22_39;
    MR_Word SectionStatPairs_64;
    MR_String Var_69;
    MR_Word Var_71;
    MR_Box conv0_STATE_VARIABLE_IO_10;

    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0), &STATE_VARIABLE_CompUnitStats_14_31);
    parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho4_4_p_0(SrcItemBlocks_26, STATE_VARIABLE_CompUnitStats_14_31, &STATE_VARIABLE_CompUnitStats_16_33);
    parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho3_4_p_0(DirectIntItemBlocks_27, STATE_VARIABLE_CompUnitStats_16_33, &STATE_VARIABLE_CompUnitStats_18_35);
    parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho3_4_p_0(IndirectIntItemBlocks_28, STATE_VARIABLE_CompUnitStats_18_35, &STATE_VARIABLE_CompUnitStats_20_37);
    parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho2_4_p_0(IntForOptItemBlocks_30, STATE_VARIABLE_CompUnitStats_20_37, &STATE_VARIABLE_CompUnitStats_22_39);
    parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho1_4_p_0(OptItemBlocks_29, STATE_VARIABLE_CompUnitStats_22_39, &CompUnitStats_8);
    Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_6, (MR_Integer) 0))));
    Var_69 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Var_11);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "MODULE ");
    mercury__io__write_string_4_p_0(Stream_5, Var_69);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0), CompUnitStats_8, &SectionStatPairs_64);
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&parse_tree__prog_item_stats_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (Stream_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item_stats_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_71, SectionStatPairs_64, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_10);
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho4_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CompUnitStats_0_3,
  MR_Word * STATE_VARIABLE_CompUnitStats_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CompUnitStats_4 = STATE_VARIABLE_CompUnitStats_0_3;
    else
    {
      MR_Word ItemBlock_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ItemBlocks_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Section_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_10, (MR_Integer) 0))));
      MR_Word Items_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_10, (MR_Integer) 4))));
      MR_String SectionName_18;
      MR_Word STATE_VARIABLE_CompUnitStats_27_27;
      MR_Word SectionStats0_19;
      MR_Box conv0_SectionStats0_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_CompUnitStats_0_3;

      switch (Section_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          SectionName_18 = (MR_String) "src_impl_sub";
          break;
        case (MR_Integer) 1:
          SectionName_18 = (MR_String) "src_impl";
          break;
        case (MR_Integer) 0:
          SectionName_18 = (MR_String) "src_int";
          break;
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0), STATE_VARIABLE_CompUnitStats_0_3, ((MR_Box) (SectionName_18)), &conv0_SectionStats0_19);
      if (succeeded)
      {
        SectionStats0_19 = ((MR_Word) (conv0_SectionStats0_19));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word ItemStats0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionStats0_19, (MR_Integer) 0))));
        MR_Word GoalStats0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionStats0_19, (MR_Integer) 1))));
        MR_Word ItemStats_22;
        MR_Word GoalStats_23;
        MR_Word SectionStats_24;

        parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(Items_17, ItemStats0_20, &ItemStats_22, GoalStats0_21, &GoalStats_23);
        {
          SectionStats_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SectionStats_24, 0) = ((MR_Box) (ItemStats_22));
          MR_hl_field(MR_mktag(0), SectionStats_24, 1) = ((MR_Box) (GoalStats_23));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0), ((MR_Box) (SectionName_18)), ((MR_Box) (SectionStats_24)), STATE_VARIABLE_CompUnitStats_0_3, &STATE_VARIABLE_CompUnitStats_27_27);
      }
      else
      {
        MR_Word ItemStats_32;
        MR_Word GoalStats_33;
        MR_Word SectionStats_34;

        parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(Items_17, (MR_Word) (&parse_tree__prog_item_stats_scalar_common_2[0]), &ItemStats_32, (MR_Word) (&parse_tree__prog_item_stats_scalar_common_3[0]), &GoalStats_33);
        {
          SectionStats_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SectionStats_34, 0) = ((MR_Box) (ItemStats_32));
          MR_hl_field(MR_mktag(0), SectionStats_34, 1) = ((MR_Box) (GoalStats_33));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0), ((MR_Box) (SectionName_18)), ((MR_Box) (SectionStats_34)), STATE_VARIABLE_CompUnitStats_0_3, &STATE_VARIABLE_CompUnitStats_27_27);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ItemBlocks_11;
      next_value_of_STATE_VARIABLE_CompUnitStats_0_3 = STATE_VARIABLE_CompUnitStats_27_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_CompUnitStats_0_3 = next_value_of_STATE_VARIABLE_CompUnitStats_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho3_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CompUnitStats_0_3,
  MR_Word * STATE_VARIABLE_CompUnitStats_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CompUnitStats_4 = STATE_VARIABLE_CompUnitStats_0_3;
    else
    {
      MR_Word ItemBlock_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ItemBlocks_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Section_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_10, (MR_Integer) 0))));
      MR_Word Items_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_10, (MR_Integer) 4))));
      MR_String SectionName_18;
      MR_Word STATE_VARIABLE_CompUnitStats_27_27;
      MR_Word SectionStats0_19;
      MR_Box conv0_SectionStats0_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_CompUnitStats_0_3;

      if (((MR_tag((MR_Word) Section_13)) == (MR_Integer) 1))
        SectionName_18 = (MR_String) "int_abstract_imported";
      else
      {
        MR_Word Var_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Section_13, (MR_Integer) 1))) & (MR_Integer) 3);
        MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Section_13, (MR_Integer) 1)));

        switch (Var_56) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            SectionName_18 = (MR_String) "int_imported";
            break;
          case (MR_Integer) 1:
            SectionName_18 = (MR_String) "int_used";
            break;
          case (MR_Integer) 2:
            SectionName_18 = (MR_String) "int_used_and_imported";
            break;
        }
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0), STATE_VARIABLE_CompUnitStats_0_3, ((MR_Box) (SectionName_18)), &conv0_SectionStats0_19);
      if (succeeded)
      {
        SectionStats0_19 = ((MR_Word) (conv0_SectionStats0_19));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word ItemStats0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionStats0_19, (MR_Integer) 0))));
        MR_Word GoalStats0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionStats0_19, (MR_Integer) 1))));
        MR_Word ItemStats_22;
        MR_Word GoalStats_23;
        MR_Word SectionStats_24;

        parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(Items_17, ItemStats0_20, &ItemStats_22, GoalStats0_21, &GoalStats_23);
        {
          SectionStats_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SectionStats_24, 0) = ((MR_Box) (ItemStats_22));
          MR_hl_field(MR_mktag(0), SectionStats_24, 1) = ((MR_Box) (GoalStats_23));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0), ((MR_Box) (SectionName_18)), ((MR_Box) (SectionStats_24)), STATE_VARIABLE_CompUnitStats_0_3, &STATE_VARIABLE_CompUnitStats_27_27);
      }
      else
      {
        MR_Word Var_29;
        MR_Word ItemStats_32;
        MR_Word GoalStats_33;
        MR_Word SectionStats_34;

        Var_29 = parse_tree__prog_item_stats__init_goal_stats_0_f_0();
        parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(Items_17, (MR_Word) (&parse_tree__prog_item_stats_scalar_common_2[0]), &ItemStats_32, Var_29, &GoalStats_33);
        {
          SectionStats_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SectionStats_34, 0) = ((MR_Box) (ItemStats_32));
          MR_hl_field(MR_mktag(0), SectionStats_34, 1) = ((MR_Box) (GoalStats_33));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0), ((MR_Box) (SectionName_18)), ((MR_Box) (SectionStats_34)), STATE_VARIABLE_CompUnitStats_0_3, &STATE_VARIABLE_CompUnitStats_27_27);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ItemBlocks_11;
      next_value_of_STATE_VARIABLE_CompUnitStats_0_3 = STATE_VARIABLE_CompUnitStats_27_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_CompUnitStats_0_3 = next_value_of_STATE_VARIABLE_CompUnitStats_0_3;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
parse_tree__prog_item_stats__init_goal_stats_0_f_0(void)
{
  {
    return (MR_Word) (&parse_tree__prog_item_stats_scalar_common_3[0]);
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho2_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CompUnitStats_0_3,
  MR_Word * STATE_VARIABLE_CompUnitStats_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CompUnitStats_4 = STATE_VARIABLE_CompUnitStats_0_3;
    else
    {
      MR_Word ItemBlock_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ItemBlocks_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Items_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_10, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_CompUnitStats_27_27;
      MR_Word SectionStats0_19;
      MR_Box conv0_SectionStats0_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_CompUnitStats_0_3;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0), STATE_VARIABLE_CompUnitStats_0_3, ((MR_Box) ((MR_String) "int_for_opt_imported")), &conv0_SectionStats0_19);
      if (succeeded)
      {
        SectionStats0_19 = ((MR_Word) (conv0_SectionStats0_19));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word ItemStats0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionStats0_19, (MR_Integer) 0))));
        MR_Word GoalStats0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionStats0_19, (MR_Integer) 1))));
        MR_Word ItemStats_22;
        MR_Word GoalStats_23;
        MR_Word SectionStats_24;

        parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(Items_17, ItemStats0_20, &ItemStats_22, GoalStats0_21, &GoalStats_23);
        {
          SectionStats_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SectionStats_24, 0) = ((MR_Box) (ItemStats_22));
          MR_hl_field(MR_mktag(0), SectionStats_24, 1) = ((MR_Box) (GoalStats_23));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0), ((MR_Box) ((MR_String) "int_for_opt_imported")), ((MR_Box) (SectionStats_24)), STATE_VARIABLE_CompUnitStats_0_3, &STATE_VARIABLE_CompUnitStats_27_27);
      }
      else
      {
        MR_Word ItemStats_32;
        MR_Word GoalStats_33;
        MR_Word SectionStats_34;

        parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(Items_17, (MR_Word) (&parse_tree__prog_item_stats_scalar_common_2[0]), &ItemStats_32, (MR_Word) (&parse_tree__prog_item_stats_scalar_common_3[0]), &GoalStats_33);
        {
          SectionStats_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SectionStats_34, 0) = ((MR_Box) (ItemStats_32));
          MR_hl_field(MR_mktag(0), SectionStats_34, 1) = ((MR_Box) (GoalStats_33));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0), ((MR_Box) ((MR_String) "int_for_opt_imported")), ((MR_Box) (SectionStats_34)), STATE_VARIABLE_CompUnitStats_0_3, &STATE_VARIABLE_CompUnitStats_27_27);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ItemBlocks_11;
      next_value_of_STATE_VARIABLE_CompUnitStats_0_3 = STATE_VARIABLE_CompUnitStats_27_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_CompUnitStats_0_3 = next_value_of_STATE_VARIABLE_CompUnitStats_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho1_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CompUnitStats_0_3,
  MR_Word * STATE_VARIABLE_CompUnitStats_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CompUnitStats_4 = STATE_VARIABLE_CompUnitStats_0_3;
    else
    {
      MR_Word ItemBlock_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ItemBlocks_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Items_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemBlock_10, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_CompUnitStats_27_27;
      MR_Word SectionStats0_19;
      MR_Box conv0_SectionStats0_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_CompUnitStats_0_3;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0), STATE_VARIABLE_CompUnitStats_0_3, ((MR_Box) ((MR_String) "opt_imported")), &conv0_SectionStats0_19);
      if (succeeded)
      {
        SectionStats0_19 = ((MR_Word) (conv0_SectionStats0_19));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word ItemStats0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionStats0_19, (MR_Integer) 0))));
        MR_Word GoalStats0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionStats0_19, (MR_Integer) 1))));
        MR_Word ItemStats_22;
        MR_Word GoalStats_23;
        MR_Word SectionStats_24;

        parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(Items_17, ItemStats0_20, &ItemStats_22, GoalStats0_21, &GoalStats_23);
        {
          SectionStats_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SectionStats_24, 0) = ((MR_Box) (ItemStats_22));
          MR_hl_field(MR_mktag(0), SectionStats_24, 1) = ((MR_Box) (GoalStats_23));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0), ((MR_Box) ((MR_String) "opt_imported")), ((MR_Box) (SectionStats_24)), STATE_VARIABLE_CompUnitStats_0_3, &STATE_VARIABLE_CompUnitStats_27_27);
      }
      else
      {
        MR_Word ItemStats_32;
        MR_Word GoalStats_33;
        MR_Word SectionStats_34;

        parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(Items_17, (MR_Word) (&parse_tree__prog_item_stats_scalar_common_2[0]), &ItemStats_32, (MR_Word) (&parse_tree__prog_item_stats_scalar_common_3[0]), &GoalStats_33);
        {
          SectionStats_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SectionStats_34, 0) = ((MR_Box) (ItemStats_32));
          MR_hl_field(MR_mktag(0), SectionStats_34, 1) = ((MR_Box) (GoalStats_33));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0), ((MR_Box) ((MR_String) "opt_imported")), ((MR_Box) (SectionStats_34)), STATE_VARIABLE_CompUnitStats_0_3, &STATE_VARIABLE_CompUnitStats_27_27);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ItemBlocks_11;
      next_value_of_STATE_VARIABLE_CompUnitStats_0_3 = STATE_VARIABLE_CompUnitStats_27_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_CompUnitStats_0_3 = next_value_of_STATE_VARIABLE_CompUnitStats_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ItemStats_0_2,
  MR_Word * STATE_VARIABLE_ItemStats_3,
  MR_Word STATE_VARIABLE_GoalStats_0_4,
  MR_Word * STATE_VARIABLE_GoalStats_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_GoalStats_5 = STATE_VARIABLE_GoalStats_0_4;
      *STATE_VARIABLE_ItemStats_3 = STATE_VARIABLE_ItemStats_0_2;
    }
    else
    {
      MR_Word Item_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ItemStats_20_20;
      MR_Word STATE_VARIABLE_GoalStats_21_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ItemStats_0_2;
      MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_4;

      parse_tree__prog_item_stats__gather_stats_in_item_5_p_0(Item_12, STATE_VARIABLE_ItemStats_0_2, &STATE_VARIABLE_ItemStats_20_20, STATE_VARIABLE_GoalStats_0_4, &STATE_VARIABLE_GoalStats_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_13;
      next_value_of_STATE_VARIABLE_ItemStats_0_2 = STATE_VARIABLE_ItemStats_20_20;
      next_value_of_STATE_VARIABLE_GoalStats_0_4 = STATE_VARIABLE_GoalStats_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ItemStats_0_2 = next_value_of_STATE_VARIABLE_ItemStats_0_2;
      STATE_VARIABLE_GoalStats_0_4 = next_value_of_STATE_VARIABLE_GoalStats_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_5_p_0(
  MR_Word Item_6,
  MR_Word STATE_VARIABLE_ItemStats_0_34,
  MR_Word * STATE_VARIABLE_ItemStats_35,
  MR_Word STATE_VARIABLE_GoalStats_0_36,
  MR_Word * STATE_VARIABLE_GoalStats_37)
{
  switch (MR_tag((MR_Word) Item_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ItemClauseInfo_9 = (MR_Word) (MR_body((MR_Word) (Item_6), (MR_Integer) 0));
        MR_Word MaybeGoal_15;
        MR_Integer Var_92;
        MR_Integer Var_93 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 0))));
        MR_Integer Var_96 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 1))));
        MR_Integer Var_97 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 2))));
        MR_Integer Var_98 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 3))));
        MR_Integer Var_99 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 4))));
        MR_Integer Var_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 5))));
        MR_Integer Var_101 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 6))));
        MR_Integer Var_102 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 7))));
        MR_Integer Var_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 8))));
        MR_Integer Var_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 9))));
        MR_Integer Var_105 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 10))));
        MR_Integer Var_106 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 11))));
        MR_Integer Var_107 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 12))));
        MR_Integer Var_108 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 13))));
        MR_Integer Var_109 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 14))));
        MR_Integer Var_110 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 15))));
        MR_Integer Var_111 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 16))));
        MR_Integer Var_112 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 17))));
        MR_Integer Var_113 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 18))));
        MR_Integer Var_114 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 19))));
        MR_Integer Var_115 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 20))));
        MR_Integer Var_116 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 21))));

        Var_92 = (MR_Integer) ((MR_Unsigned) Var_93 + (MR_Unsigned) (MR_Integer) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemStats_35 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_92));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_96));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_97));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_98));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_99));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_100));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_101));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_103));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_104));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_105));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_107));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_108));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_110));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_111));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_112));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_113));
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_114));
          MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_115));
          MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_116));
        }
        MaybeGoal_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClauseInfo_9, (MR_Integer) 5))));
        if (((MR_tag((MR_Word) MaybeGoal_15)) == (MR_Integer) 0))
          *STATE_VARIABLE_GoalStats_37 = STATE_VARIABLE_GoalStats_0_36;
        else
        {
          MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal_15, (MR_Integer) 0))));

          parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(Goal_18, STATE_VARIABLE_GoalStats_0_36, STATE_VARIABLE_GoalStats_37);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Var_88;
        MR_Integer Var_89 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 1))));
        MR_Integer Var_139 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 0))));
        MR_Integer Var_140 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 2))));
        MR_Integer Var_141 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 3))));
        MR_Integer Var_142 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 4))));
        MR_Integer Var_143 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 5))));
        MR_Integer Var_144 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 6))));
        MR_Integer Var_145 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 7))));
        MR_Integer Var_146 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 8))));
        MR_Integer Var_147 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 9))));
        MR_Integer Var_148 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 10))));
        MR_Integer Var_149 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 11))));
        MR_Integer Var_150 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 12))));
        MR_Integer Var_151 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 13))));
        MR_Integer Var_152 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 14))));
        MR_Integer Var_153 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 15))));
        MR_Integer Var_154 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 16))));
        MR_Integer Var_155 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 17))));
        MR_Integer Var_156 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 18))));
        MR_Integer Var_157 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 19))));
        MR_Integer Var_158 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 20))));
        MR_Integer Var_159 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 21))));

        Var_88 = (MR_Integer) ((MR_Unsigned) Var_89 + (MR_Unsigned) (MR_Integer) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemStats_35 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_139));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_88));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_140));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_141));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_142));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_143));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_144));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_145));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_146));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_147));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_148));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_149));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_150));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_151));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_152));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_153));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_154));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_155));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_156));
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_157));
          MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_158));
          MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_159));
        }
        *STATE_VARIABLE_GoalStats_37 = STATE_VARIABLE_GoalStats_0_36;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Var_84;
        MR_Integer Var_85 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 2))));
        MR_Integer Var_182 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 0))));
        MR_Integer Var_183 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 1))));
        MR_Integer Var_184 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 3))));
        MR_Integer Var_185 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 4))));
        MR_Integer Var_186 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 5))));
        MR_Integer Var_187 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 6))));
        MR_Integer Var_188 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 7))));
        MR_Integer Var_189 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 8))));
        MR_Integer Var_190 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 9))));
        MR_Integer Var_191 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 10))));
        MR_Integer Var_192 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 11))));
        MR_Integer Var_193 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 12))));
        MR_Integer Var_194 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 13))));
        MR_Integer Var_195 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 14))));
        MR_Integer Var_196 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 15))));
        MR_Integer Var_197 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 16))));
        MR_Integer Var_198 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 17))));
        MR_Integer Var_199 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 18))));
        MR_Integer Var_200 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 19))));
        MR_Integer Var_201 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 20))));
        MR_Integer Var_202 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 21))));

        Var_84 = (MR_Integer) ((MR_Unsigned) Var_85 + (MR_Unsigned) (MR_Integer) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemStats_35 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_182));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_183));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_184));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_185));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_186));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_187));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_188));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_189));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_190));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_191));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_192));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_193));
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_194));
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_195));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_196));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_197));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_198));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_199));
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_200));
          MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_201));
          MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_202));
        }
        *STATE_VARIABLE_GoalStats_37 = STATE_VARIABLE_GoalStats_0_36;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Var_80;
            MR_Integer Var_81 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 3))));
            MR_Integer Var_225 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 0))));
            MR_Integer Var_226 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 1))));
            MR_Integer Var_227 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 2))));
            MR_Integer Var_228 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 4))));
            MR_Integer Var_229 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 5))));
            MR_Integer Var_230 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 6))));
            MR_Integer Var_231 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 7))));
            MR_Integer Var_232 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 8))));
            MR_Integer Var_233 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 9))));
            MR_Integer Var_234 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 10))));
            MR_Integer Var_235 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 11))));
            MR_Integer Var_236 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 12))));
            MR_Integer Var_237 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 13))));
            MR_Integer Var_238 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 14))));
            MR_Integer Var_239 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 15))));
            MR_Integer Var_240 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 16))));
            MR_Integer Var_241 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 17))));
            MR_Integer Var_242 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 18))));
            MR_Integer Var_243 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 19))));
            MR_Integer Var_244 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 20))));
            MR_Integer Var_245 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 21))));

            Var_80 = (MR_Integer) ((MR_Unsigned) Var_81 + (MR_Unsigned) (MR_Integer) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_35 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_225));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_226));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_227));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_80));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_228));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_229));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_230));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_231));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_232));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_233));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_234));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_235));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_236));
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_237));
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_238));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_239));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_240));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_241));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_242));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_243));
              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_244));
              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_245));
            }
            *STATE_VARIABLE_GoalStats_37 = STATE_VARIABLE_GoalStats_0_36;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_76;
            MR_Integer Var_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 4))));
            MR_Integer Var_268 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 0))));
            MR_Integer Var_269 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 1))));
            MR_Integer Var_270 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 2))));
            MR_Integer Var_271 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 3))));
            MR_Integer Var_272 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 5))));
            MR_Integer Var_273 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 6))));
            MR_Integer Var_274 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 7))));
            MR_Integer Var_275 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 8))));
            MR_Integer Var_276 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 9))));
            MR_Integer Var_277 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 10))));
            MR_Integer Var_278 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 11))));
            MR_Integer Var_279 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 12))));
            MR_Integer Var_280 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 13))));
            MR_Integer Var_281 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 14))));
            MR_Integer Var_282 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 15))));
            MR_Integer Var_283 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 16))));
            MR_Integer Var_284 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 17))));
            MR_Integer Var_285 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 18))));
            MR_Integer Var_286 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 19))));
            MR_Integer Var_287 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 20))));
            MR_Integer Var_288 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 21))));

            Var_76 = (MR_Integer) ((MR_Unsigned) Var_77 + (MR_Unsigned) (MR_Integer) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_35 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_268));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_269));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_270));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_271));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_76));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_272));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_273));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_274));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_275));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_276));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_277));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_278));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_279));
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_280));
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_281));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_282));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_283));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_284));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_285));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_286));
              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_287));
              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_288));
            }
            *STATE_VARIABLE_GoalStats_37 = STATE_VARIABLE_GoalStats_0_36;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_72;
            MR_Integer Var_73 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 5))));
            MR_Integer Var_311 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 0))));
            MR_Integer Var_312 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 1))));
            MR_Integer Var_313 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 2))));
            MR_Integer Var_314 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 3))));
            MR_Integer Var_315 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 4))));
            MR_Integer Var_316 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 6))));
            MR_Integer Var_317 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 7))));
            MR_Integer Var_318 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 8))));
            MR_Integer Var_319 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 9))));
            MR_Integer Var_320 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 10))));
            MR_Integer Var_321 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 11))));
            MR_Integer Var_322 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 12))));
            MR_Integer Var_323 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 13))));
            MR_Integer Var_324 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 14))));
            MR_Integer Var_325 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 15))));
            MR_Integer Var_326 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 16))));
            MR_Integer Var_327 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 17))));
            MR_Integer Var_328 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 18))));
            MR_Integer Var_329 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 19))));
            MR_Integer Var_330 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 20))));
            MR_Integer Var_331 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 21))));

            Var_72 = (MR_Integer) ((MR_Unsigned) Var_73 + (MR_Unsigned) (MR_Integer) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_35 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_311));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_312));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_313));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_314));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_315));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_316));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_317));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_318));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_319));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_320));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_321));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_322));
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_323));
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_324));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_325));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_326));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_327));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_328));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_329));
              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_330));
              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_331));
            }
            *STATE_VARIABLE_GoalStats_37 = STATE_VARIABLE_GoalStats_0_36;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ItemPragmaInfo_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_6, (MR_Integer) 1))));

            parse_tree__prog_item_stats__gather_stats_in_item_pragma_3_p_0(ItemPragmaInfo_25, STATE_VARIABLE_ItemStats_0_34, STATE_VARIABLE_ItemStats_35);
            *STATE_VARIABLE_GoalStats_37 = STATE_VARIABLE_GoalStats_0_36;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Integer Var_67;
            MR_Integer Var_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 14))));
            MR_Integer Var_354 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 0))));
            MR_Integer Var_355 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 1))));
            MR_Integer Var_356 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 2))));
            MR_Integer Var_357 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 3))));
            MR_Integer Var_358 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 4))));
            MR_Integer Var_359 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 5))));
            MR_Integer Var_360 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 6))));
            MR_Integer Var_361 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 7))));
            MR_Integer Var_362 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 8))));
            MR_Integer Var_363 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 9))));
            MR_Integer Var_364 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 10))));
            MR_Integer Var_365 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 11))));
            MR_Integer Var_366 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 12))));
            MR_Integer Var_367 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 13))));
            MR_Integer Var_368 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 15))));
            MR_Integer Var_369 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 16))));
            MR_Integer Var_370 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 17))));
            MR_Integer Var_371 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 18))));
            MR_Integer Var_372 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 19))));
            MR_Integer Var_373 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 20))));
            MR_Integer Var_374 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 21))));

            Var_67 = (MR_Integer) ((MR_Unsigned) Var_68 + (MR_Unsigned) (MR_Integer) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_35 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_354));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_355));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_356));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_357));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_358));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_359));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_360));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_361));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_362));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_363));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_364));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_365));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_366));
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_367));
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_67));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_368));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_369));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_370));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_371));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_372));
              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_373));
              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_374));
            }
            *STATE_VARIABLE_GoalStats_37 = STATE_VARIABLE_GoalStats_0_36;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Integer Var_63;
            MR_Integer Var_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 15))));
            MR_Integer Var_397 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 0))));
            MR_Integer Var_398 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 1))));
            MR_Integer Var_399 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 2))));
            MR_Integer Var_400 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 3))));
            MR_Integer Var_401 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 4))));
            MR_Integer Var_402 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 5))));
            MR_Integer Var_403 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 6))));
            MR_Integer Var_404 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 7))));
            MR_Integer Var_405 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 8))));
            MR_Integer Var_406 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 9))));
            MR_Integer Var_407 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 10))));
            MR_Integer Var_408 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 11))));
            MR_Integer Var_409 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 12))));
            MR_Integer Var_410 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 13))));
            MR_Integer Var_411 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 14))));
            MR_Integer Var_412 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 16))));
            MR_Integer Var_413 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 17))));
            MR_Integer Var_414 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 18))));
            MR_Integer Var_415 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 19))));
            MR_Integer Var_416 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 20))));
            MR_Integer Var_417 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 21))));

            Var_63 = (MR_Integer) ((MR_Unsigned) Var_64 + (MR_Unsigned) (MR_Integer) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_35 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_397));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_398));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_399));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_400));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_401));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_402));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_403));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_404));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_405));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_406));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_407));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_408));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_409));
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_410));
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_411));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_63));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_412));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_413));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_414));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_415));
              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_416));
              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_417));
            }
            *STATE_VARIABLE_GoalStats_37 = STATE_VARIABLE_GoalStats_0_36;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Integer Var_59;
            MR_Integer Var_60 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 16))));
            MR_Integer Var_440 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 0))));
            MR_Integer Var_441 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 1))));
            MR_Integer Var_442 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 2))));
            MR_Integer Var_443 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 3))));
            MR_Integer Var_444 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 4))));
            MR_Integer Var_445 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 5))));
            MR_Integer Var_446 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 6))));
            MR_Integer Var_447 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 7))));
            MR_Integer Var_448 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 8))));
            MR_Integer Var_449 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 9))));
            MR_Integer Var_450 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 10))));
            MR_Integer Var_451 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 11))));
            MR_Integer Var_452 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 12))));
            MR_Integer Var_453 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 13))));
            MR_Integer Var_454 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 14))));
            MR_Integer Var_455 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 15))));
            MR_Integer Var_456 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 17))));
            MR_Integer Var_457 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 18))));
            MR_Integer Var_458 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 19))));
            MR_Integer Var_459 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 20))));
            MR_Integer Var_460 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 21))));

            Var_59 = (MR_Integer) ((MR_Unsigned) Var_60 + (MR_Unsigned) (MR_Integer) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_35 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_440));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_441));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_442));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_443));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_444));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_445));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_446));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_447));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_448));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_449));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_450));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_451));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_452));
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_453));
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_454));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_455));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_59));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_456));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_457));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_458));
              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_459));
              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_460));
            }
            *STATE_VARIABLE_GoalStats_37 = STATE_VARIABLE_GoalStats_0_36;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Integer Var_55;
            MR_Integer Var_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 17))));
            MR_Integer Var_483 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 0))));
            MR_Integer Var_484 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 1))));
            MR_Integer Var_485 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 2))));
            MR_Integer Var_486 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 3))));
            MR_Integer Var_487 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 4))));
            MR_Integer Var_488 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 5))));
            MR_Integer Var_489 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 6))));
            MR_Integer Var_490 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 7))));
            MR_Integer Var_491 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 8))));
            MR_Integer Var_492 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 9))));
            MR_Integer Var_493 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 10))));
            MR_Integer Var_494 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 11))));
            MR_Integer Var_495 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 12))));
            MR_Integer Var_496 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 13))));
            MR_Integer Var_497 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 14))));
            MR_Integer Var_498 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 15))));
            MR_Integer Var_499 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 16))));
            MR_Integer Var_500 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 18))));
            MR_Integer Var_501 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 19))));
            MR_Integer Var_502 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 20))));
            MR_Integer Var_503 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 21))));

            Var_55 = (MR_Integer) ((MR_Unsigned) Var_56 + (MR_Unsigned) (MR_Integer) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_35 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_483));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_484));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_485));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_486));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_487));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_488));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_489));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_490));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_491));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_492));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_493));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_494));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_495));
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_496));
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_497));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_498));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_499));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_55));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_500));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_501));
              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_502));
              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_503));
            }
            *STATE_VARIABLE_GoalStats_37 = STATE_VARIABLE_GoalStats_0_36;
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Integer Var_51;
            MR_Integer Var_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 18))));
            MR_Integer Var_526 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 0))));
            MR_Integer Var_527 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 1))));
            MR_Integer Var_528 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 2))));
            MR_Integer Var_529 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 3))));
            MR_Integer Var_530 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 4))));
            MR_Integer Var_531 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 5))));
            MR_Integer Var_532 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 6))));
            MR_Integer Var_533 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 7))));
            MR_Integer Var_534 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 8))));
            MR_Integer Var_535 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 9))));
            MR_Integer Var_536 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 10))));
            MR_Integer Var_537 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 11))));
            MR_Integer Var_538 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 12))));
            MR_Integer Var_539 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 13))));
            MR_Integer Var_540 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 14))));
            MR_Integer Var_541 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 15))));
            MR_Integer Var_542 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 16))));
            MR_Integer Var_543 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 17))));
            MR_Integer Var_544 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 19))));
            MR_Integer Var_545 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 20))));
            MR_Integer Var_546 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 21))));

            Var_51 = (MR_Integer) ((MR_Unsigned) Var_52 + (MR_Unsigned) (MR_Integer) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_35 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_526));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_527));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_528));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_529));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_530));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_531));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_532));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_533));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_534));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_535));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_536));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_537));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_538));
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_539));
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_540));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_541));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_542));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_543));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_51));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_544));
              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_545));
              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_546));
            }
            *STATE_VARIABLE_GoalStats_37 = STATE_VARIABLE_GoalStats_0_36;
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Integer Var_47;
            MR_Integer Var_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 19))));
            MR_Integer Var_569 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 0))));
            MR_Integer Var_570 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 1))));
            MR_Integer Var_571 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 2))));
            MR_Integer Var_572 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 3))));
            MR_Integer Var_573 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 4))));
            MR_Integer Var_574 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 5))));
            MR_Integer Var_575 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 6))));
            MR_Integer Var_576 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 7))));
            MR_Integer Var_577 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 8))));
            MR_Integer Var_578 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 9))));
            MR_Integer Var_579 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 10))));
            MR_Integer Var_580 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 11))));
            MR_Integer Var_581 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 12))));
            MR_Integer Var_582 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 13))));
            MR_Integer Var_583 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 14))));
            MR_Integer Var_584 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 15))));
            MR_Integer Var_585 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 16))));
            MR_Integer Var_586 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 17))));
            MR_Integer Var_587 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 18))));
            MR_Integer Var_588 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 20))));
            MR_Integer Var_589 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 21))));

            Var_47 = (MR_Integer) ((MR_Unsigned) Var_48 + (MR_Unsigned) (MR_Integer) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_35 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_569));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_570));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_571));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_572));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_573));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_574));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_575));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_576));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_577));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_578));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_579));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_580));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_581));
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_582));
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_583));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_584));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_585));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_586));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_587));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_47));
              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_588));
              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_589));
            }
            *STATE_VARIABLE_GoalStats_37 = STATE_VARIABLE_GoalStats_0_36;
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Integer Var_43;
            MR_Integer Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 20))));
            MR_Integer Var_612 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 0))));
            MR_Integer Var_613 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 1))));
            MR_Integer Var_614 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 2))));
            MR_Integer Var_615 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 3))));
            MR_Integer Var_616 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 4))));
            MR_Integer Var_617 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 5))));
            MR_Integer Var_618 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 6))));
            MR_Integer Var_619 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 7))));
            MR_Integer Var_620 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 8))));
            MR_Integer Var_621 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 9))));
            MR_Integer Var_622 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 10))));
            MR_Integer Var_623 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 11))));
            MR_Integer Var_624 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 12))));
            MR_Integer Var_625 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 13))));
            MR_Integer Var_626 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 14))));
            MR_Integer Var_627 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 15))));
            MR_Integer Var_628 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 16))));
            MR_Integer Var_629 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 17))));
            MR_Integer Var_630 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 18))));
            MR_Integer Var_631 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 19))));
            MR_Integer Var_632 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 21))));

            Var_43 = (MR_Integer) ((MR_Unsigned) Var_44 + (MR_Unsigned) (MR_Integer) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_35 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_612));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_613));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_614));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_615));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_616));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_617));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_618));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_619));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_620));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_621));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_622));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_623));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_624));
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_625));
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_626));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_627));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_628));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_629));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_630));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_631));
              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_43));
              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_632));
            }
            *STATE_VARIABLE_GoalStats_37 = STATE_VARIABLE_GoalStats_0_36;
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Integer Var_39;
            MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 21))));
            MR_Integer Var_655 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 0))));
            MR_Integer Var_656 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 1))));
            MR_Integer Var_657 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 2))));
            MR_Integer Var_658 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 3))));
            MR_Integer Var_659 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 4))));
            MR_Integer Var_660 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 5))));
            MR_Integer Var_661 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 6))));
            MR_Integer Var_662 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 7))));
            MR_Integer Var_663 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 8))));
            MR_Integer Var_664 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 9))));
            MR_Integer Var_665 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 10))));
            MR_Integer Var_666 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 11))));
            MR_Integer Var_667 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 12))));
            MR_Integer Var_668 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 13))));
            MR_Integer Var_669 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 14))));
            MR_Integer Var_670 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 15))));
            MR_Integer Var_671 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 16))));
            MR_Integer Var_672 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 17))));
            MR_Integer Var_673 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 18))));
            MR_Integer Var_674 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 19))));
            MR_Integer Var_675 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_34, (MR_Integer) 20))));

            Var_39 = (MR_Integer) ((MR_Unsigned) Var_40 + (MR_Unsigned) (MR_Integer) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_35 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_655));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_656));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_657));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_658));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_659));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_660));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_661));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_662));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_663));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_664));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_665));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_666));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_667));
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_668));
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_669));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_670));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_671));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_672));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_673));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_674));
              MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_675));
              MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_39));
            }
            *STATE_VARIABLE_GoalStats_37 = STATE_VARIABLE_GoalStats_0_36;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_GoalStats_0_83,
  MR_Word * STATE_VARIABLE_GoalStats_84)
{
  while (MR_TRUE)
  {
    MR_Integer Var_1758 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 26))));
    MR_Integer Var_1759 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 25))));
    MR_Integer Var_1760 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 24))));
    MR_Integer Var_1761 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 23))));
    MR_Integer Var_1762 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 22))));
    MR_Integer Var_1763 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 21))));
    MR_Integer Var_1764 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 20))));
    MR_Integer Var_1765 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 19))));
    MR_Integer Var_1766 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 18))));
    MR_Integer Var_1767 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 17))));
    MR_Integer Var_1768 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 16))));
    MR_Integer Var_1769 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 15))));
    MR_Integer Var_1770 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 14))));
    MR_Integer Var_1771 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 13))));
    MR_Integer Var_1772 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 12))));
    MR_Integer Var_1773 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 11))));
    MR_Integer Var_1774 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 10))));
    MR_Integer Var_1775 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 9))));
    MR_Integer Var_1776 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 8))));
    MR_Integer Var_1777 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 7))));
    MR_Integer Var_1778 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 6))));
    MR_Integer Var_1779 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 5))));
    MR_Integer Var_1780 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 4))));
    MR_Integer Var_1781 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 3))));
    MR_Integer Var_1782 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 2))));
    MR_Integer Var_1783 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 1))));
    MR_Integer Var_1784 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Goal_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Var_86 = (MR_Integer) ((MR_Unsigned) Var_1758 + (MR_Unsigned) (MR_Integer) 1);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_GoalStats_84 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1784));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_1783));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_1782));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_1781));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_1780));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_1779));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_1778));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_1777));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_1776));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_1775));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_1774));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_1773));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_1772));
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_1771));
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_1770));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_1769));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_1768));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_1767));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_1766));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_1765));
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_1764));
            MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_1763));
            MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_1762));
            MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_1761));
            MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_1760));
            MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_1759));
            MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_86));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_90 = (MR_Integer) ((MR_Unsigned) Var_1759 + (MR_Unsigned) (MR_Integer) 1);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_GoalStats_84 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1784));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_1783));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_1782));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_1781));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_1780));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_1779));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_1778));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_1777));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_1776));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_1775));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_1774));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_1773));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_1772));
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_1771));
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_1770));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_1769));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_1768));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_1767));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_1766));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_1765));
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_1764));
            MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_1763));
            MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_1762));
            MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_1761));
            MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_1760));
            MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_90));
            MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_1758));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubGoalA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_4, (MR_Integer) 1))));
          MR_Word SubGoalB_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_4, (MR_Integer) 2))));
          MR_Word STATE_VARIABLE_GoalStats_219_219;
          MR_Integer Var_220 = (MR_Integer) ((MR_Unsigned) Var_1784 + (MR_Unsigned) (MR_Integer) 1);
          MR_Word STATE_VARIABLE_GoalStats_223_223;
          MR_Word next_value_of_Goal_4;
          MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_83;

          {
            STATE_VARIABLE_GoalStats_219_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 0) = ((MR_Box) (Var_220));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 1) = ((MR_Box) (Var_1783));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 2) = ((MR_Box) (Var_1782));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 3) = ((MR_Box) (Var_1781));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 4) = ((MR_Box) (Var_1780));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 5) = ((MR_Box) (Var_1779));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 6) = ((MR_Box) (Var_1778));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 7) = ((MR_Box) (Var_1777));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 8) = ((MR_Box) (Var_1776));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 9) = ((MR_Box) (Var_1775));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 10) = ((MR_Box) (Var_1774));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 11) = ((MR_Box) (Var_1773));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 12) = ((MR_Box) (Var_1772));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 13) = ((MR_Box) (Var_1771));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 14) = ((MR_Box) (Var_1770));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 15) = ((MR_Box) (Var_1769));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 16) = ((MR_Box) (Var_1768));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 17) = ((MR_Box) (Var_1767));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 18) = ((MR_Box) (Var_1766));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 19) = ((MR_Box) (Var_1765));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 20) = ((MR_Box) (Var_1764));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 21) = ((MR_Box) (Var_1763));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 22) = ((MR_Box) (Var_1762));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 23) = ((MR_Box) (Var_1761));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 24) = ((MR_Box) (Var_1760));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 25) = ((MR_Box) (Var_1759));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_219_219, 26) = ((MR_Box) (Var_1758));
          }
          parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(SubGoalA_7, STATE_VARIABLE_GoalStats_219_219, &STATE_VARIABLE_GoalStats_223_223);
          // direct tailcall eliminated
          ;
          next_value_of_Goal_4 = SubGoalB_8;
          next_value_of_STATE_VARIABLE_GoalStats_0_83 = STATE_VARIABLE_GoalStats_223_223;
          Goal_4 = next_value_of_Goal_4;
          STATE_VARIABLE_GoalStats_0_83 = next_value_of_STATE_VARIABLE_GoalStats_0_83;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_210 = (MR_Integer) ((MR_Unsigned) Var_1782 + (MR_Unsigned) (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_GoalStats_84 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1784));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_1783));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_210));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_1781));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_1780));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_1779));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_1778));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_1777));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_1776));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_1775));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_1774));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_1773));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_1772));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_1771));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_1770));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_1769));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_1768));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_1767));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_1766));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_1765));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_1764));
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_1763));
                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_1762));
                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_1761));
                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_1760));
                MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_1759));
                MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_1758));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word CondGoal_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_GoalStats_97_97;
              MR_Integer Var_98 = (MR_Integer) ((MR_Unsigned) Var_1761 + (MR_Unsigned) (MR_Integer) 1);
              MR_Word STATE_VARIABLE_GoalStats_101_101;
              MR_Word STATE_VARIABLE_GoalStats_102_102;
              MR_Word ThenGoal_244 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 5))));
              MR_Word ElseGoal_245 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_83;

              {
                STATE_VARIABLE_GoalStats_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 0) = ((MR_Box) (Var_1784));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 1) = ((MR_Box) (Var_1783));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 2) = ((MR_Box) (Var_1782));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 3) = ((MR_Box) (Var_1781));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 4) = ((MR_Box) (Var_1780));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 5) = ((MR_Box) (Var_1779));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 6) = ((MR_Box) (Var_1778));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 7) = ((MR_Box) (Var_1777));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 8) = ((MR_Box) (Var_1776));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 9) = ((MR_Box) (Var_1775));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 10) = ((MR_Box) (Var_1774));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 11) = ((MR_Box) (Var_1773));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 12) = ((MR_Box) (Var_1772));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 13) = ((MR_Box) (Var_1771));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 14) = ((MR_Box) (Var_1770));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 15) = ((MR_Box) (Var_1769));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 16) = ((MR_Box) (Var_1768));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 17) = ((MR_Box) (Var_1767));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 18) = ((MR_Box) (Var_1766));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 19) = ((MR_Box) (Var_1765));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 20) = ((MR_Box) (Var_1764));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 21) = ((MR_Box) (Var_1763));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 22) = ((MR_Box) (Var_1762));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 23) = ((MR_Box) (Var_98));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 24) = ((MR_Box) (Var_1760));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 25) = ((MR_Box) (Var_1759));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_97_97, 26) = ((MR_Box) (Var_1758));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(CondGoal_71, STATE_VARIABLE_GoalStats_97_97, &STATE_VARIABLE_GoalStats_101_101);
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(ThenGoal_244, STATE_VARIABLE_GoalStats_101_101, &STATE_VARIABLE_GoalStats_102_102);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = ElseGoal_245;
              next_value_of_STATE_VARIABLE_GoalStats_0_83 = STATE_VARIABLE_GoalStats_102_102;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_83 = next_value_of_STATE_VARIABLE_GoalStats_0_83;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_GoalStats_203_203;
              MR_Integer Var_204 = (MR_Integer) ((MR_Unsigned) Var_1781 + (MR_Unsigned) (MR_Integer) 1);
              MR_Word STATE_VARIABLE_GoalStats_207_207;
              MR_Word SubGoalA_227 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
              MR_Word SubGoalB_228 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_83;

              {
                STATE_VARIABLE_GoalStats_203_203 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 0) = ((MR_Box) (Var_1784));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 1) = ((MR_Box) (Var_1783));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 2) = ((MR_Box) (Var_1782));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 3) = ((MR_Box) (Var_204));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 4) = ((MR_Box) (Var_1780));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 5) = ((MR_Box) (Var_1779));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 6) = ((MR_Box) (Var_1778));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 7) = ((MR_Box) (Var_1777));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 8) = ((MR_Box) (Var_1776));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 9) = ((MR_Box) (Var_1775));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 10) = ((MR_Box) (Var_1774));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 11) = ((MR_Box) (Var_1773));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 12) = ((MR_Box) (Var_1772));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 13) = ((MR_Box) (Var_1771));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 14) = ((MR_Box) (Var_1770));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 15) = ((MR_Box) (Var_1769));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 16) = ((MR_Box) (Var_1768));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 17) = ((MR_Box) (Var_1767));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 18) = ((MR_Box) (Var_1766));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 19) = ((MR_Box) (Var_1765));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 20) = ((MR_Box) (Var_1764));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 21) = ((MR_Box) (Var_1763));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 22) = ((MR_Box) (Var_1762));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 23) = ((MR_Box) (Var_1761));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 24) = ((MR_Box) (Var_1760));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 25) = ((MR_Box) (Var_1759));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_203_203, 26) = ((MR_Box) (Var_1758));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(SubGoalA_227, STATE_VARIABLE_GoalStats_203_203, &STATE_VARIABLE_GoalStats_207_207);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoalB_228;
              next_value_of_STATE_VARIABLE_GoalStats_0_83 = STATE_VARIABLE_GoalStats_207_207;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_83 = next_value_of_STATE_VARIABLE_GoalStats_0_83;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word STATE_VARIABLE_GoalStats_104_104;
              MR_Integer Var_105 = (MR_Integer) ((MR_Unsigned) Var_1762 + (MR_Unsigned) (MR_Integer) 1);
              MR_Word SubGoal_243 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_83;

              {
                STATE_VARIABLE_GoalStats_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 0) = ((MR_Box) (Var_1784));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 1) = ((MR_Box) (Var_1783));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 2) = ((MR_Box) (Var_1782));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 3) = ((MR_Box) (Var_1781));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 4) = ((MR_Box) (Var_1780));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 5) = ((MR_Box) (Var_1779));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 6) = ((MR_Box) (Var_1778));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 7) = ((MR_Box) (Var_1777));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 8) = ((MR_Box) (Var_1776));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 9) = ((MR_Box) (Var_1775));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 10) = ((MR_Box) (Var_1774));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 11) = ((MR_Box) (Var_1773));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 12) = ((MR_Box) (Var_1772));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 13) = ((MR_Box) (Var_1771));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 14) = ((MR_Box) (Var_1770));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 15) = ((MR_Box) (Var_1769));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 16) = ((MR_Box) (Var_1768));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 17) = ((MR_Box) (Var_1767));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 18) = ((MR_Box) (Var_1766));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 19) = ((MR_Box) (Var_1765));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 20) = ((MR_Box) (Var_1764));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 21) = ((MR_Box) (Var_1763));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 22) = ((MR_Box) (Var_105));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 23) = ((MR_Box) (Var_1761));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 24) = ((MR_Box) (Var_1760));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 25) = ((MR_Box) (Var_1759));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_104_104, 26) = ((MR_Box) (Var_1758));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_243;
              next_value_of_STATE_VARIABLE_GoalStats_0_83 = STATE_VARIABLE_GoalStats_104_104;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_83 = next_value_of_STATE_VARIABLE_GoalStats_0_83;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer Var_200 = (MR_Integer) ((MR_Unsigned) Var_1780 + (MR_Unsigned) (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_GoalStats_84 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1784));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_1783));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_1782));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_1781));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_200));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_1779));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_1778));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_1777));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_1776));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_1775));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_1774));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_1773));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_1772));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_1771));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_1770));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_1769));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_1768));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_1767));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_1766));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_1765));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_1764));
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_1763));
                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_1762));
                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_1761));
                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_1760));
                MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_1759));
                MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_1758));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word STATE_VARIABLE_GoalStats_213_213;
              MR_Integer Var_214 = (MR_Integer) ((MR_Unsigned) Var_1783 + (MR_Unsigned) (MR_Integer) 1);
              MR_Word STATE_VARIABLE_GoalStats_217_217;
              MR_Word SubGoalA_225 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
              MR_Word SubGoalB_226 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_83;

              {
                STATE_VARIABLE_GoalStats_213_213 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 0) = ((MR_Box) (Var_1784));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 1) = ((MR_Box) (Var_214));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 2) = ((MR_Box) (Var_1782));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 3) = ((MR_Box) (Var_1781));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 4) = ((MR_Box) (Var_1780));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 5) = ((MR_Box) (Var_1779));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 6) = ((MR_Box) (Var_1778));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 7) = ((MR_Box) (Var_1777));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 8) = ((MR_Box) (Var_1776));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 9) = ((MR_Box) (Var_1775));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 10) = ((MR_Box) (Var_1774));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 11) = ((MR_Box) (Var_1773));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 12) = ((MR_Box) (Var_1772));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 13) = ((MR_Box) (Var_1771));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 14) = ((MR_Box) (Var_1770));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 15) = ((MR_Box) (Var_1769));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 16) = ((MR_Box) (Var_1768));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 17) = ((MR_Box) (Var_1767));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 18) = ((MR_Box) (Var_1766));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 19) = ((MR_Box) (Var_1765));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 20) = ((MR_Box) (Var_1764));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 21) = ((MR_Box) (Var_1763));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 22) = ((MR_Box) (Var_1762));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 23) = ((MR_Box) (Var_1761));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 24) = ((MR_Box) (Var_1760));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 25) = ((MR_Box) (Var_1759));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_213_213, 26) = ((MR_Box) (Var_1758));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(SubGoalA_225, STATE_VARIABLE_GoalStats_213_213, &STATE_VARIABLE_GoalStats_217_217);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoalB_226;
              next_value_of_STATE_VARIABLE_GoalStats_0_83 = STATE_VARIABLE_GoalStats_217_217;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_83 = next_value_of_STATE_VARIABLE_GoalStats_0_83;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word QuantVarsKind_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word SubGoal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_GoalStats_194_194;
              MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 1)));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_83;

              switch (QuantType_13) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  switch (QuantVarsKind_14) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer Var_187 = (MR_Integer) ((MR_Unsigned) Var_1778 + (MR_Unsigned) (MR_Integer) 1);

                        {
                          STATE_VARIABLE_GoalStats_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 0) = ((MR_Box) (Var_1784));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 1) = ((MR_Box) (Var_1783));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 2) = ((MR_Box) (Var_1782));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 3) = ((MR_Box) (Var_1781));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 4) = ((MR_Box) (Var_1780));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 5) = ((MR_Box) (Var_1779));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 6) = ((MR_Box) (Var_187));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 7) = ((MR_Box) (Var_1777));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 8) = ((MR_Box) (Var_1776));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 9) = ((MR_Box) (Var_1775));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 10) = ((MR_Box) (Var_1774));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 11) = ((MR_Box) (Var_1773));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 12) = ((MR_Box) (Var_1772));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 13) = ((MR_Box) (Var_1771));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 14) = ((MR_Box) (Var_1770));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 15) = ((MR_Box) (Var_1769));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 16) = ((MR_Box) (Var_1768));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 17) = ((MR_Box) (Var_1767));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 18) = ((MR_Box) (Var_1766));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 19) = ((MR_Box) (Var_1765));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 20) = ((MR_Box) (Var_1764));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 21) = ((MR_Box) (Var_1763));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 22) = ((MR_Box) (Var_1762));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 23) = ((MR_Box) (Var_1761));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 24) = ((MR_Box) (Var_1760));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 25) = ((MR_Box) (Var_1759));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 26) = ((MR_Box) (Var_1758));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer Var_183 = (MR_Integer) ((MR_Unsigned) Var_1776 + (MR_Unsigned) (MR_Integer) 1);

                        {
                          STATE_VARIABLE_GoalStats_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 0) = ((MR_Box) (Var_1784));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 1) = ((MR_Box) (Var_1783));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 2) = ((MR_Box) (Var_1782));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 3) = ((MR_Box) (Var_1781));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 4) = ((MR_Box) (Var_1780));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 5) = ((MR_Box) (Var_1779));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 6) = ((MR_Box) (Var_1778));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 7) = ((MR_Box) (Var_1777));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 8) = ((MR_Box) (Var_183));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 9) = ((MR_Box) (Var_1775));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 10) = ((MR_Box) (Var_1774));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 11) = ((MR_Box) (Var_1773));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 12) = ((MR_Box) (Var_1772));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 13) = ((MR_Box) (Var_1771));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 14) = ((MR_Box) (Var_1770));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 15) = ((MR_Box) (Var_1769));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 16) = ((MR_Box) (Var_1768));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 17) = ((MR_Box) (Var_1767));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 18) = ((MR_Box) (Var_1766));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 19) = ((MR_Box) (Var_1765));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 20) = ((MR_Box) (Var_1764));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 21) = ((MR_Box) (Var_1763));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 22) = ((MR_Box) (Var_1762));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 23) = ((MR_Box) (Var_1761));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 24) = ((MR_Box) (Var_1760));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 25) = ((MR_Box) (Var_1759));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 26) = ((MR_Box) (Var_1758));
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 0:
                  switch (QuantVarsKind_14) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer Var_195 = (MR_Integer) ((MR_Unsigned) Var_1779 + (MR_Unsigned) (MR_Integer) 1);

                        {
                          STATE_VARIABLE_GoalStats_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 0) = ((MR_Box) (Var_1784));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 1) = ((MR_Box) (Var_1783));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 2) = ((MR_Box) (Var_1782));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 3) = ((MR_Box) (Var_1781));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 4) = ((MR_Box) (Var_1780));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 5) = ((MR_Box) (Var_195));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 6) = ((MR_Box) (Var_1778));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 7) = ((MR_Box) (Var_1777));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 8) = ((MR_Box) (Var_1776));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 9) = ((MR_Box) (Var_1775));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 10) = ((MR_Box) (Var_1774));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 11) = ((MR_Box) (Var_1773));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 12) = ((MR_Box) (Var_1772));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 13) = ((MR_Box) (Var_1771));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 14) = ((MR_Box) (Var_1770));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 15) = ((MR_Box) (Var_1769));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 16) = ((MR_Box) (Var_1768));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 17) = ((MR_Box) (Var_1767));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 18) = ((MR_Box) (Var_1766));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 19) = ((MR_Box) (Var_1765));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 20) = ((MR_Box) (Var_1764));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 21) = ((MR_Box) (Var_1763));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 22) = ((MR_Box) (Var_1762));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 23) = ((MR_Box) (Var_1761));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 24) = ((MR_Box) (Var_1760));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 25) = ((MR_Box) (Var_1759));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 26) = ((MR_Box) (Var_1758));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer Var_191 = (MR_Integer) ((MR_Unsigned) Var_1777 + (MR_Unsigned) (MR_Integer) 1);

                        {
                          STATE_VARIABLE_GoalStats_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 0) = ((MR_Box) (Var_1784));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 1) = ((MR_Box) (Var_1783));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 2) = ((MR_Box) (Var_1782));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 3) = ((MR_Box) (Var_1781));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 4) = ((MR_Box) (Var_1780));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 5) = ((MR_Box) (Var_1779));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 6) = ((MR_Box) (Var_1778));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 7) = ((MR_Box) (Var_191));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 8) = ((MR_Box) (Var_1776));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 9) = ((MR_Box) (Var_1775));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 10) = ((MR_Box) (Var_1774));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 11) = ((MR_Box) (Var_1773));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 12) = ((MR_Box) (Var_1772));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 13) = ((MR_Box) (Var_1771));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 14) = ((MR_Box) (Var_1770));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 15) = ((MR_Box) (Var_1769));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 16) = ((MR_Box) (Var_1768));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 17) = ((MR_Box) (Var_1767));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 18) = ((MR_Box) (Var_1766));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 19) = ((MR_Box) (Var_1765));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 20) = ((MR_Box) (Var_1764));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 21) = ((MR_Box) (Var_1763));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 22) = ((MR_Box) (Var_1762));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 23) = ((MR_Box) (Var_1761));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 24) = ((MR_Box) (Var_1760));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 25) = ((MR_Box) (Var_1759));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_194_194, 26) = ((MR_Box) (Var_1758));
                        }
                      }
                      break;
                  }
                  break;
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_17;
              next_value_of_STATE_VARIABLE_GoalStats_0_83 = STATE_VARIABLE_GoalStats_194_194;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_83 = next_value_of_STATE_VARIABLE_GoalStats_0_83;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word STATE_VARIABLE_GoalStats_177_177;
              MR_Integer Var_178 = (MR_Integer) ((MR_Unsigned) Var_1775 + (MR_Unsigned) (MR_Integer) 1);
              MR_Word SubGoal_229 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_83;

              {
                STATE_VARIABLE_GoalStats_177_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 0) = ((MR_Box) (Var_1784));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 1) = ((MR_Box) (Var_1783));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 2) = ((MR_Box) (Var_1782));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 3) = ((MR_Box) (Var_1781));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 4) = ((MR_Box) (Var_1780));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 5) = ((MR_Box) (Var_1779));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 6) = ((MR_Box) (Var_1778));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 7) = ((MR_Box) (Var_1777));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 8) = ((MR_Box) (Var_1776));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 9) = ((MR_Box) (Var_178));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 10) = ((MR_Box) (Var_1774));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 11) = ((MR_Box) (Var_1773));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 12) = ((MR_Box) (Var_1772));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 13) = ((MR_Box) (Var_1771));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 14) = ((MR_Box) (Var_1770));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 15) = ((MR_Box) (Var_1769));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 16) = ((MR_Box) (Var_1768));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 17) = ((MR_Box) (Var_1767));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 18) = ((MR_Box) (Var_1766));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 19) = ((MR_Box) (Var_1765));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 20) = ((MR_Box) (Var_1764));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 21) = ((MR_Box) (Var_1763));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 22) = ((MR_Box) (Var_1762));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 23) = ((MR_Box) (Var_1761));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 24) = ((MR_Box) (Var_1760));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 25) = ((MR_Box) (Var_1759));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_177_177, 26) = ((MR_Box) (Var_1758));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_229;
              next_value_of_STATE_VARIABLE_GoalStats_0_83 = STATE_VARIABLE_GoalStats_177_177;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_83 = next_value_of_STATE_VARIABLE_GoalStats_0_83;
              continue;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word STATE_VARIABLE_GoalStats_172_172;
              MR_Integer Var_173 = (MR_Integer) ((MR_Unsigned) Var_1774 + (MR_Unsigned) (MR_Integer) 1);
              MR_Word SubGoal_230 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_83;

              {
                STATE_VARIABLE_GoalStats_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 0) = ((MR_Box) (Var_1784));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 1) = ((MR_Box) (Var_1783));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 2) = ((MR_Box) (Var_1782));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 3) = ((MR_Box) (Var_1781));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 4) = ((MR_Box) (Var_1780));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 5) = ((MR_Box) (Var_1779));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 6) = ((MR_Box) (Var_1778));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 7) = ((MR_Box) (Var_1777));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 8) = ((MR_Box) (Var_1776));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 9) = ((MR_Box) (Var_1775));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 10) = ((MR_Box) (Var_173));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 11) = ((MR_Box) (Var_1773));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 12) = ((MR_Box) (Var_1772));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 13) = ((MR_Box) (Var_1771));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 14) = ((MR_Box) (Var_1770));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 15) = ((MR_Box) (Var_1769));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 16) = ((MR_Box) (Var_1768));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 17) = ((MR_Box) (Var_1767));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 18) = ((MR_Box) (Var_1766));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 19) = ((MR_Box) (Var_1765));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 20) = ((MR_Box) (Var_1764));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 21) = ((MR_Box) (Var_1763));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 22) = ((MR_Box) (Var_1762));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 23) = ((MR_Box) (Var_1761));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 24) = ((MR_Box) (Var_1760));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 25) = ((MR_Box) (Var_1759));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_172_172, 26) = ((MR_Box) (Var_1758));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_230;
              next_value_of_STATE_VARIABLE_GoalStats_0_83 = STATE_VARIABLE_GoalStats_172_172;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_83 = next_value_of_STATE_VARIABLE_GoalStats_0_83;
              continue;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word STATE_VARIABLE_GoalStats_167_167;
              MR_Integer Var_168 = (MR_Integer) ((MR_Unsigned) Var_1773 + (MR_Unsigned) (MR_Integer) 1);
              MR_Word SubGoal_231 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_83;

              {
                STATE_VARIABLE_GoalStats_167_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 0) = ((MR_Box) (Var_1784));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 1) = ((MR_Box) (Var_1783));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 2) = ((MR_Box) (Var_1782));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 3) = ((MR_Box) (Var_1781));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 4) = ((MR_Box) (Var_1780));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 5) = ((MR_Box) (Var_1779));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 6) = ((MR_Box) (Var_1778));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 7) = ((MR_Box) (Var_1777));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 8) = ((MR_Box) (Var_1776));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 9) = ((MR_Box) (Var_1775));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 10) = ((MR_Box) (Var_1774));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 11) = ((MR_Box) (Var_168));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 12) = ((MR_Box) (Var_1772));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 13) = ((MR_Box) (Var_1771));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 14) = ((MR_Box) (Var_1770));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 15) = ((MR_Box) (Var_1769));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 16) = ((MR_Box) (Var_1768));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 17) = ((MR_Box) (Var_1767));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 18) = ((MR_Box) (Var_1766));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 19) = ((MR_Box) (Var_1765));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 20) = ((MR_Box) (Var_1764));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 21) = ((MR_Box) (Var_1763));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 22) = ((MR_Box) (Var_1762));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 23) = ((MR_Box) (Var_1761));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 24) = ((MR_Box) (Var_1760));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 25) = ((MR_Box) (Var_1759));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_167_167, 26) = ((MR_Box) (Var_1758));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_231;
              next_value_of_STATE_VARIABLE_GoalStats_0_83 = STATE_VARIABLE_GoalStats_167_167;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_83 = next_value_of_STATE_VARIABLE_GoalStats_0_83;
              continue;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word STATE_VARIABLE_GoalStats_162_162;
              MR_Integer Var_163 = (MR_Integer) ((MR_Unsigned) Var_1772 + (MR_Unsigned) (MR_Integer) 1);
              MR_Word SubGoal_232 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_83;

              {
                STATE_VARIABLE_GoalStats_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 0) = ((MR_Box) (Var_1784));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 1) = ((MR_Box) (Var_1783));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 2) = ((MR_Box) (Var_1782));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 3) = ((MR_Box) (Var_1781));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 4) = ((MR_Box) (Var_1780));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 5) = ((MR_Box) (Var_1779));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 6) = ((MR_Box) (Var_1778));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 7) = ((MR_Box) (Var_1777));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 8) = ((MR_Box) (Var_1776));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 9) = ((MR_Box) (Var_1775));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 10) = ((MR_Box) (Var_1774));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 11) = ((MR_Box) (Var_1773));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 12) = ((MR_Box) (Var_163));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 13) = ((MR_Box) (Var_1771));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 14) = ((MR_Box) (Var_1770));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 15) = ((MR_Box) (Var_1769));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 16) = ((MR_Box) (Var_1768));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 17) = ((MR_Box) (Var_1767));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 18) = ((MR_Box) (Var_1766));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 19) = ((MR_Box) (Var_1765));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 20) = ((MR_Box) (Var_1764));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 21) = ((MR_Box) (Var_1763));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 22) = ((MR_Box) (Var_1762));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 23) = ((MR_Box) (Var_1761));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 24) = ((MR_Box) (Var_1760));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 25) = ((MR_Box) (Var_1759));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_162_162, 26) = ((MR_Box) (Var_1758));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_232;
              next_value_of_STATE_VARIABLE_GoalStats_0_83 = STATE_VARIABLE_GoalStats_162_162;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_83 = next_value_of_STATE_VARIABLE_GoalStats_0_83;
              continue;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word STATE_VARIABLE_GoalStats_157_157;
              MR_Integer Var_158 = (MR_Integer) ((MR_Unsigned) Var_1771 + (MR_Unsigned) (MR_Integer) 1);
              MR_Word SubGoal_233 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_83;

              {
                STATE_VARIABLE_GoalStats_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 0) = ((MR_Box) (Var_1784));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 1) = ((MR_Box) (Var_1783));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 2) = ((MR_Box) (Var_1782));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 3) = ((MR_Box) (Var_1781));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 4) = ((MR_Box) (Var_1780));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 5) = ((MR_Box) (Var_1779));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 6) = ((MR_Box) (Var_1778));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 7) = ((MR_Box) (Var_1777));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 8) = ((MR_Box) (Var_1776));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 9) = ((MR_Box) (Var_1775));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 10) = ((MR_Box) (Var_1774));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 11) = ((MR_Box) (Var_1773));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 12) = ((MR_Box) (Var_1772));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 13) = ((MR_Box) (Var_158));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 14) = ((MR_Box) (Var_1770));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 15) = ((MR_Box) (Var_1769));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 16) = ((MR_Box) (Var_1768));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 17) = ((MR_Box) (Var_1767));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 18) = ((MR_Box) (Var_1766));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 19) = ((MR_Box) (Var_1765));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 20) = ((MR_Box) (Var_1764));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 21) = ((MR_Box) (Var_1763));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 22) = ((MR_Box) (Var_1762));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 23) = ((MR_Box) (Var_1761));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 24) = ((MR_Box) (Var_1760));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 25) = ((MR_Box) (Var_1759));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_157_157, 26) = ((MR_Box) (Var_1758));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_233;
              next_value_of_STATE_VARIABLE_GoalStats_0_83 = STATE_VARIABLE_GoalStats_157_157;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_83 = next_value_of_STATE_VARIABLE_GoalStats_0_83;
              continue;
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word STATE_VARIABLE_GoalStats_152_152;
              MR_Integer Var_153 = (MR_Integer) ((MR_Unsigned) Var_1770 + (MR_Unsigned) (MR_Integer) 1);
              MR_Word SubGoal_234 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_83;

              {
                STATE_VARIABLE_GoalStats_152_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 0) = ((MR_Box) (Var_1784));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 1) = ((MR_Box) (Var_1783));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 2) = ((MR_Box) (Var_1782));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 3) = ((MR_Box) (Var_1781));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 4) = ((MR_Box) (Var_1780));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 5) = ((MR_Box) (Var_1779));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 6) = ((MR_Box) (Var_1778));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 7) = ((MR_Box) (Var_1777));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 8) = ((MR_Box) (Var_1776));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 9) = ((MR_Box) (Var_1775));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 10) = ((MR_Box) (Var_1774));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 11) = ((MR_Box) (Var_1773));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 12) = ((MR_Box) (Var_1772));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 13) = ((MR_Box) (Var_1771));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 14) = ((MR_Box) (Var_153));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 15) = ((MR_Box) (Var_1769));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 16) = ((MR_Box) (Var_1768));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 17) = ((MR_Box) (Var_1767));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 18) = ((MR_Box) (Var_1766));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 19) = ((MR_Box) (Var_1765));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 20) = ((MR_Box) (Var_1764));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 21) = ((MR_Box) (Var_1763));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 22) = ((MR_Box) (Var_1762));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 23) = ((MR_Box) (Var_1761));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 24) = ((MR_Box) (Var_1760));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 25) = ((MR_Box) (Var_1759));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_152_152, 26) = ((MR_Box) (Var_1758));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_234;
              next_value_of_STATE_VARIABLE_GoalStats_0_83 = STATE_VARIABLE_GoalStats_152_152;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_83 = next_value_of_STATE_VARIABLE_GoalStats_0_83;
              continue;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word STATE_VARIABLE_GoalStats_147_147;
              MR_Integer Var_148 = (MR_Integer) ((MR_Unsigned) Var_1769 + (MR_Unsigned) (MR_Integer) 1);
              MR_Word SubGoal_235 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_83;

              {
                STATE_VARIABLE_GoalStats_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 0) = ((MR_Box) (Var_1784));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 1) = ((MR_Box) (Var_1783));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 2) = ((MR_Box) (Var_1782));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 3) = ((MR_Box) (Var_1781));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 4) = ((MR_Box) (Var_1780));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 5) = ((MR_Box) (Var_1779));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 6) = ((MR_Box) (Var_1778));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 7) = ((MR_Box) (Var_1777));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 8) = ((MR_Box) (Var_1776));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 9) = ((MR_Box) (Var_1775));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 10) = ((MR_Box) (Var_1774));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 11) = ((MR_Box) (Var_1773));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 12) = ((MR_Box) (Var_1772));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 13) = ((MR_Box) (Var_1771));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 14) = ((MR_Box) (Var_1770));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 15) = ((MR_Box) (Var_148));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 16) = ((MR_Box) (Var_1768));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 17) = ((MR_Box) (Var_1767));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 18) = ((MR_Box) (Var_1766));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 19) = ((MR_Box) (Var_1765));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 20) = ((MR_Box) (Var_1764));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 21) = ((MR_Box) (Var_1763));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 22) = ((MR_Box) (Var_1762));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 23) = ((MR_Box) (Var_1761));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 24) = ((MR_Box) (Var_1760));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 25) = ((MR_Box) (Var_1759));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_147_147, 26) = ((MR_Box) (Var_1758));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_235;
              next_value_of_STATE_VARIABLE_GoalStats_0_83 = STATE_VARIABLE_GoalStats_147_147;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_83 = next_value_of_STATE_VARIABLE_GoalStats_0_83;
              continue;
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word STATE_VARIABLE_GoalStats_142_142;
              MR_Integer Var_143 = (MR_Integer) ((MR_Unsigned) Var_1768 + (MR_Unsigned) (MR_Integer) 1);
              MR_Word SubGoal_236 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_83;

              {
                STATE_VARIABLE_GoalStats_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 0) = ((MR_Box) (Var_1784));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 1) = ((MR_Box) (Var_1783));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 2) = ((MR_Box) (Var_1782));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 3) = ((MR_Box) (Var_1781));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 4) = ((MR_Box) (Var_1780));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 5) = ((MR_Box) (Var_1779));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 6) = ((MR_Box) (Var_1778));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 7) = ((MR_Box) (Var_1777));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 8) = ((MR_Box) (Var_1776));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 9) = ((MR_Box) (Var_1775));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 10) = ((MR_Box) (Var_1774));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 11) = ((MR_Box) (Var_1773));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 12) = ((MR_Box) (Var_1772));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 13) = ((MR_Box) (Var_1771));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 14) = ((MR_Box) (Var_1770));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 15) = ((MR_Box) (Var_1769));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 16) = ((MR_Box) (Var_143));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 17) = ((MR_Box) (Var_1767));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 18) = ((MR_Box) (Var_1766));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 19) = ((MR_Box) (Var_1765));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 20) = ((MR_Box) (Var_1764));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 21) = ((MR_Box) (Var_1763));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 22) = ((MR_Box) (Var_1762));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 23) = ((MR_Box) (Var_1761));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 24) = ((MR_Box) (Var_1760));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 25) = ((MR_Box) (Var_1759));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_142_142, 26) = ((MR_Box) (Var_1758));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_236;
              next_value_of_STATE_VARIABLE_GoalStats_0_83 = STATE_VARIABLE_GoalStats_142_142;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_83 = next_value_of_STATE_VARIABLE_GoalStats_0_83;
              continue;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word STATE_VARIABLE_GoalStats_137_137;
              MR_Integer Var_138 = (MR_Integer) ((MR_Unsigned) Var_1767 + (MR_Unsigned) (MR_Integer) 1);
              MR_Word SubGoal_237 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_83;

              {
                STATE_VARIABLE_GoalStats_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 0) = ((MR_Box) (Var_1784));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 1) = ((MR_Box) (Var_1783));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 2) = ((MR_Box) (Var_1782));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 3) = ((MR_Box) (Var_1781));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 4) = ((MR_Box) (Var_1780));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 5) = ((MR_Box) (Var_1779));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 6) = ((MR_Box) (Var_1778));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 7) = ((MR_Box) (Var_1777));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 8) = ((MR_Box) (Var_1776));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 9) = ((MR_Box) (Var_1775));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 10) = ((MR_Box) (Var_1774));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 11) = ((MR_Box) (Var_1773));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 12) = ((MR_Box) (Var_1772));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 13) = ((MR_Box) (Var_1771));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 14) = ((MR_Box) (Var_1770));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 15) = ((MR_Box) (Var_1769));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 16) = ((MR_Box) (Var_1768));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 17) = ((MR_Box) (Var_138));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 18) = ((MR_Box) (Var_1766));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 19) = ((MR_Box) (Var_1765));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 20) = ((MR_Box) (Var_1764));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 21) = ((MR_Box) (Var_1763));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 22) = ((MR_Box) (Var_1762));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 23) = ((MR_Box) (Var_1761));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 24) = ((MR_Box) (Var_1760));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 25) = ((MR_Box) (Var_1759));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_137_137, 26) = ((MR_Box) (Var_1758));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_237;
              next_value_of_STATE_VARIABLE_GoalStats_0_83 = STATE_VARIABLE_GoalStats_137_137;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_83 = next_value_of_STATE_VARIABLE_GoalStats_0_83;
              continue;
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word MainGoal_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 5))));
              MR_Word OrElseGoals_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
              MR_Word STATE_VARIABLE_GoalStats_131_131;
              MR_Integer Var_132 = (MR_Integer) ((MR_Unsigned) Var_1766 + (MR_Unsigned) (MR_Integer) 1);
              MR_Word STATE_VARIABLE_GoalStats_135_135;

              {
                STATE_VARIABLE_GoalStats_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 0) = ((MR_Box) (Var_1784));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 1) = ((MR_Box) (Var_1783));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 2) = ((MR_Box) (Var_1782));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 3) = ((MR_Box) (Var_1781));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 4) = ((MR_Box) (Var_1780));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 5) = ((MR_Box) (Var_1779));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 6) = ((MR_Box) (Var_1778));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 7) = ((MR_Box) (Var_1777));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 8) = ((MR_Box) (Var_1776));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 9) = ((MR_Box) (Var_1775));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 10) = ((MR_Box) (Var_1774));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 11) = ((MR_Box) (Var_1773));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 12) = ((MR_Box) (Var_1772));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 13) = ((MR_Box) (Var_1771));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 14) = ((MR_Box) (Var_1770));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 15) = ((MR_Box) (Var_1769));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 16) = ((MR_Box) (Var_1768));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 17) = ((MR_Box) (Var_1767));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 18) = ((MR_Box) (Var_132));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 19) = ((MR_Box) (Var_1765));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 20) = ((MR_Box) (Var_1764));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 21) = ((MR_Box) (Var_1763));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 22) = ((MR_Box) (Var_1762));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 23) = ((MR_Box) (Var_1761));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 24) = ((MR_Box) (Var_1760));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 25) = ((MR_Box) (Var_1759));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_131_131, 26) = ((MR_Box) (Var_1758));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(MainGoal_54, STATE_VARIABLE_GoalStats_131_131, &STATE_VARIABLE_GoalStats_135_135);
              parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(OrElseGoals_55, STATE_VARIABLE_GoalStats_135_135, STATE_VARIABLE_GoalStats_84);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ThenGoal_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 4))));
              MR_Word MaybeElseGoal_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 5))));
              MR_Word Catches_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 6))));
              MR_Word MaybeCatchAny_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 7))));
              MR_Word STATE_VARIABLE_GoalStats_121_121;
              MR_Integer Var_122 = (MR_Integer) ((MR_Unsigned) Var_1765 + (MR_Unsigned) (MR_Integer) 1);
              MR_Word STATE_VARIABLE_GoalStats_125_125;
              MR_Word STATE_VARIABLE_GoalStats_126_126;
              MR_Word STATE_VARIABLE_GoalStats_127_127;
              MR_Word STATE_VARIABLE_GoalStats_128_128;
              MR_Word MainGoal_238 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));

              {
                STATE_VARIABLE_GoalStats_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 0) = ((MR_Box) (Var_1784));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 1) = ((MR_Box) (Var_1783));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 2) = ((MR_Box) (Var_1782));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 3) = ((MR_Box) (Var_1781));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 4) = ((MR_Box) (Var_1780));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 5) = ((MR_Box) (Var_1779));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 6) = ((MR_Box) (Var_1778));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 7) = ((MR_Box) (Var_1777));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 8) = ((MR_Box) (Var_1776));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 9) = ((MR_Box) (Var_1775));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 10) = ((MR_Box) (Var_1774));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 11) = ((MR_Box) (Var_1773));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 12) = ((MR_Box) (Var_1772));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 13) = ((MR_Box) (Var_1771));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 14) = ((MR_Box) (Var_1770));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 15) = ((MR_Box) (Var_1769));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 16) = ((MR_Box) (Var_1768));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 17) = ((MR_Box) (Var_1767));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 18) = ((MR_Box) (Var_1766));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 19) = ((MR_Box) (Var_122));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 20) = ((MR_Box) (Var_1764));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 21) = ((MR_Box) (Var_1763));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 22) = ((MR_Box) (Var_1762));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 23) = ((MR_Box) (Var_1761));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 24) = ((MR_Box) (Var_1760));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 25) = ((MR_Box) (Var_1759));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_121_121, 26) = ((MR_Box) (Var_1758));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(MainGoal_238, STATE_VARIABLE_GoalStats_121_121, &STATE_VARIABLE_GoalStats_125_125);
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(ThenGoal_58, STATE_VARIABLE_GoalStats_125_125, &STATE_VARIABLE_GoalStats_126_126);
              if ((MaybeElseGoal_59 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_GoalStats_127_127 = STATE_VARIABLE_GoalStats_126_126;
              else
              {
                MR_Word ElseGoal_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElseGoal_59, (MR_Integer) 0))));

                parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(ElseGoal_62, STATE_VARIABLE_GoalStats_126_126, &STATE_VARIABLE_GoalStats_127_127);
              }
              parse_tree__prog_item_stats__gather_stats_in_catch_exprs_3_p_0(Catches_60, STATE_VARIABLE_GoalStats_127_127, &STATE_VARIABLE_GoalStats_128_128);
              if ((MaybeCatchAny_61 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_GoalStats_84 = STATE_VARIABLE_GoalStats_128_128;
              else
              {
                MR_Word CatchAnyGoal_64;
                MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatchAny_61, (MR_Integer) 0))));
                MR_Word next_value_of_Goal_4;
                MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_83;

                CatchAnyGoal_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_129, (MR_Integer) 1))));
                // direct tailcall eliminated
                ;
                next_value_of_Goal_4 = CatchAnyGoal_64;
                next_value_of_STATE_VARIABLE_GoalStats_0_83 = STATE_VARIABLE_GoalStats_128_128;
                Goal_4 = next_value_of_Goal_4;
                STATE_VARIABLE_GoalStats_0_83 = next_value_of_STATE_VARIABLE_GoalStats_0_83;
                continue;
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word STATE_VARIABLE_GoalStats_115_115;
              MR_Integer Var_116 = (MR_Integer) ((MR_Unsigned) Var_1764 + (MR_Unsigned) (MR_Integer) 1);
              MR_Word STATE_VARIABLE_GoalStats_119_119;
              MR_Word SubGoalA_239 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
              MR_Word SubGoalB_240 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_83;

              {
                STATE_VARIABLE_GoalStats_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 0) = ((MR_Box) (Var_1784));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 1) = ((MR_Box) (Var_1783));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 2) = ((MR_Box) (Var_1782));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 3) = ((MR_Box) (Var_1781));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 4) = ((MR_Box) (Var_1780));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 5) = ((MR_Box) (Var_1779));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 6) = ((MR_Box) (Var_1778));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 7) = ((MR_Box) (Var_1777));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 8) = ((MR_Box) (Var_1776));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 9) = ((MR_Box) (Var_1775));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 10) = ((MR_Box) (Var_1774));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 11) = ((MR_Box) (Var_1773));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 12) = ((MR_Box) (Var_1772));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 13) = ((MR_Box) (Var_1771));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 14) = ((MR_Box) (Var_1770));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 15) = ((MR_Box) (Var_1769));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 16) = ((MR_Box) (Var_1768));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 17) = ((MR_Box) (Var_1767));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 18) = ((MR_Box) (Var_1766));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 19) = ((MR_Box) (Var_1765));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 20) = ((MR_Box) (Var_116));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 21) = ((MR_Box) (Var_1763));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 22) = ((MR_Box) (Var_1762));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 23) = ((MR_Box) (Var_1761));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 24) = ((MR_Box) (Var_1760));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 25) = ((MR_Box) (Var_1759));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_115_115, 26) = ((MR_Box) (Var_1758));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(SubGoalA_239, STATE_VARIABLE_GoalStats_115_115, &STATE_VARIABLE_GoalStats_119_119);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoalB_240;
              next_value_of_STATE_VARIABLE_GoalStats_0_83 = STATE_VARIABLE_GoalStats_119_119;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_83 = next_value_of_STATE_VARIABLE_GoalStats_0_83;
              continue;
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word STATE_VARIABLE_GoalStats_109_109;
              MR_Integer Var_110 = (MR_Integer) ((MR_Unsigned) Var_1763 + (MR_Unsigned) (MR_Integer) 1);
              MR_Word STATE_VARIABLE_GoalStats_113_113;
              MR_Word SubGoalA_241 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 2))));
              MR_Word SubGoalB_242 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_4, (MR_Integer) 3))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_83;

              {
                STATE_VARIABLE_GoalStats_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 0) = ((MR_Box) (Var_1784));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 1) = ((MR_Box) (Var_1783));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 2) = ((MR_Box) (Var_1782));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 3) = ((MR_Box) (Var_1781));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 4) = ((MR_Box) (Var_1780));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 5) = ((MR_Box) (Var_1779));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 6) = ((MR_Box) (Var_1778));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 7) = ((MR_Box) (Var_1777));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 8) = ((MR_Box) (Var_1776));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 9) = ((MR_Box) (Var_1775));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 10) = ((MR_Box) (Var_1774));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 11) = ((MR_Box) (Var_1773));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 12) = ((MR_Box) (Var_1772));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 13) = ((MR_Box) (Var_1771));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 14) = ((MR_Box) (Var_1770));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 15) = ((MR_Box) (Var_1769));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 16) = ((MR_Box) (Var_1768));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 17) = ((MR_Box) (Var_1767));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 18) = ((MR_Box) (Var_1766));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 19) = ((MR_Box) (Var_1765));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 20) = ((MR_Box) (Var_1764));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 21) = ((MR_Box) (Var_110));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 22) = ((MR_Box) (Var_1762));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 23) = ((MR_Box) (Var_1761));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 24) = ((MR_Box) (Var_1760));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 25) = ((MR_Box) (Var_1759));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_GoalStats_109_109, 26) = ((MR_Box) (Var_1758));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(SubGoalA_241, STATE_VARIABLE_GoalStats_109_109, &STATE_VARIABLE_GoalStats_113_113);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoalB_242;
              next_value_of_STATE_VARIABLE_GoalStats_0_83 = STATE_VARIABLE_GoalStats_113_113;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_83 = next_value_of_STATE_VARIABLE_GoalStats_0_83;
              continue;
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Integer Var_94 = (MR_Integer) ((MR_Unsigned) Var_1760 + (MR_Unsigned) (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_GoalStats_84 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_1784));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_1783));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_1782));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_1781));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_1780));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_1779));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_1778));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_1777));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_1776));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_1775));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_1774));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_1773));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_1772));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_1771));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_1770));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_1769));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_1768));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_1767));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_1766));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_1765));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_1764));
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_1763));
                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_1762));
                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_1761));
                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_94));
                MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_1759));
                MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_1758));
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_catch_exprs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalStats_0_2,
  MR_Word * STATE_VARIABLE_GoalStats_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_GoalStats_3 = STATE_VARIABLE_GoalStats_0_2;
    else
    {
      MR_Word CatchExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word CatchExprs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CatchExpr_7, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_GoalStats_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_2;

      parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(Goal_11, STATE_VARIABLE_GoalStats_0_2, &STATE_VARIABLE_GoalStats_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = CatchExprs_8;
      next_value_of_STATE_VARIABLE_GoalStats_0_2 = STATE_VARIABLE_GoalStats_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_GoalStats_0_2 = next_value_of_STATE_VARIABLE_GoalStats_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalStats_0_2,
  MR_Word * STATE_VARIABLE_GoalStats_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_GoalStats_3 = STATE_VARIABLE_GoalStats_0_2;
    else
    {
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_GoalStats_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_2;

      parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(Goal_7, STATE_VARIABLE_GoalStats_0_2, &STATE_VARIABLE_GoalStats_12_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_8;
      next_value_of_STATE_VARIABLE_GoalStats_0_2 = STATE_VARIABLE_GoalStats_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_GoalStats_0_2 = next_value_of_STATE_VARIABLE_GoalStats_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_pragma_3_p_0(
  MR_Word ItemPragmaInfo_4,
  MR_Word STATE_VARIABLE_ItemStats_0_44,
  MR_Word * STATE_VARIABLE_ItemStats_45)
{
  {
    MR_Word PragmaType_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragmaInfo_4, (MR_Integer) 0))));
    MR_Integer Var_422 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 21))));
    MR_Integer Var_423 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 20))));
    MR_Integer Var_424 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 19))));
    MR_Integer Var_425 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 18))));
    MR_Integer Var_426 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 17))));
    MR_Integer Var_427 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 16))));
    MR_Integer Var_428 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 15))));
    MR_Integer Var_429 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 14))));
    MR_Integer Var_430 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 13))));
    MR_Integer Var_431 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 12))));
    MR_Integer Var_432 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 11))));
    MR_Integer Var_433 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 10))));
    MR_Integer Var_434 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 9))));
    MR_Integer Var_435 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 8))));
    MR_Integer Var_436 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 7))));
    MR_Integer Var_437 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 6))));
    MR_Integer Var_438 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 5))));
    MR_Integer Var_439 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 4))));
    MR_Integer Var_440 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 3))));
    MR_Integer Var_441 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 2))));
    MR_Integer Var_442 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 1))));
    MR_Integer Var_443 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemStats_0_44, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) PragmaType_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Integer Var_51 = (MR_Integer) ((MR_Unsigned) Var_431 + (MR_Unsigned) (MR_Integer) 1);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_ItemStats_45 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_443));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_442));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_441));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_440));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_439));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_438));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_437));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_436));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_435));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_434));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_433));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_432));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_430));
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_429));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_428));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_427));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_426));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_425));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_424));
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_423));
            MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_422));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_47 = (MR_Integer) ((MR_Unsigned) Var_430 + (MR_Unsigned) (MR_Integer) 1);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_ItemStats_45 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_443));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_442));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_441));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_440));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_439));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_438));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_437));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_436));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_435));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_434));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_433));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_432));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_431));
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_429));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_428));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_427));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_426));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_425));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_424));
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_423));
            MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_422));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PragmaType_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 4:
          case (MR_Integer) 15:
          case (MR_Integer) 16:
          case (MR_Integer) 17:
          case (MR_Integer) 27:
          case (MR_Integer) 28:
            {
              MR_Integer Var_47 = (MR_Integer) ((MR_Unsigned) Var_430 + (MR_Unsigned) (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_ItemStats_45 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_443));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_442));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_441));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_440));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_439));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_438));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_437));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_436));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_435));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_434));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_433));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_432));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_431));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_47));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_429));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_428));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_427));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_426));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_425));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_424));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_423));
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_422));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
          case (MR_Integer) 18:
          case (MR_Integer) 19:
          case (MR_Integer) 20:
          case (MR_Integer) 23:
          case (MR_Integer) 24:
          case (MR_Integer) 25:
          case (MR_Integer) 26:
          case (MR_Integer) 30:
            {
              MR_Integer Var_51 = (MR_Integer) ((MR_Unsigned) Var_431 + (MR_Unsigned) (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_ItemStats_45 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_443));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_442));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_441));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_440));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_439));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_438));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_437));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_436));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_435));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_434));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_433));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_432));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_51));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_430));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_429));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_428));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_427));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_426));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_425));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_424));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_423));
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_422));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Integer Var_63 = (MR_Integer) ((MR_Unsigned) Var_434 + (MR_Unsigned) (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_ItemStats_45 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_443));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_442));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_441));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_440));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_439));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_438));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_437));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_436));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_435));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_63));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_433));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_432));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_431));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_430));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_429));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_428));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_427));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_426));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_425));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_424));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_423));
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_422));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer Var_59 = (MR_Integer) ((MR_Unsigned) Var_433 + (MR_Unsigned) (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_ItemStats_45 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_443));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_442));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_441));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_440));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_439));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_438));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_437));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_436));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_435));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_434));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_59));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_432));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_431));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_430));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_429));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_428));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_427));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_426));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_425));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_424));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_423));
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_422));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer Var_55 = (MR_Integer) ((MR_Unsigned) Var_432 + (MR_Unsigned) (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_ItemStats_45 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_443));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_442));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_441));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_440));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_439));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_438));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_437));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_436));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_435));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_434));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_433));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_55));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_431));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_430));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_429));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_428));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_427));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_426));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_425));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_424));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_423));
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_422));
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Integer Var_71 = (MR_Integer) ((MR_Unsigned) Var_436 + (MR_Unsigned) (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_ItemStats_45 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_443));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_442));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_441));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_440));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_439));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_438));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_437));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_71));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_435));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_434));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_433));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_432));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_431));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_430));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_429));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_428));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_427));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_426));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_425));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_424));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_423));
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_422));
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Integer Var_67 = (MR_Integer) ((MR_Unsigned) Var_435 + (MR_Unsigned) (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_ItemStats_45 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_443));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_442));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_441));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_440));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_439));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_438));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_437));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_436));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_67));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_434));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_433));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_432));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_431));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_430));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_429));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_428));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_427));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_426));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_425));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_424));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_423));
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_422));
              }
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Integer Var_75 = (MR_Integer) ((MR_Unsigned) Var_437 + (MR_Unsigned) (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_ItemStats_45 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_443));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_442));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_441));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_440));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_439));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_438));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_75));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_436));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_435));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_434));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_433));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_432));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_431));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_430));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_429));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_428));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_427));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_426));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_425));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_424));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_423));
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_422));
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____goal_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_item_stats____Unify____goal_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats____Compare____goal_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_item_stats____Compare____goal_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____item_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_item_stats____Unify____item_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats____Compare____item_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_item_stats____Compare____item_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____section_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_item_stats____Unify____section_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats____Compare____section_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_item_stats____Compare____section_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__prog_item_stats__init(void)
{
}

void mercury__parse_tree__prog_item_stats__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_comp_unit_stats_0);
	MR_register_type_ctor_info(&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_goal_stats_0);
	MR_register_type_ctor_info(&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_item_stats_0);
	MR_register_type_ctor_info(&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0);
}

void mercury__parse_tree__prog_item_stats__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_item_stats__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_item_stats.
