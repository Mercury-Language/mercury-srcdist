/*
** Automatically generated from `prog_item_stats.m'
** by the Mercury compiler,
** version rotd-2025-10-21
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


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.item_types.mih"
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

static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_item_stats_0_0[27];

static const MR_ConstString parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_item_stats_0_0[27];

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
parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ItemStats_0_2,
  MR_Word * STATE_VARIABLE_ItemStats_3,
  MR_Word STATE_VARIABLE_GoalStats_0_4,
  MR_Word * STATE_VARIABLE_GoalStats_5);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_5_p_0(
  MR_Word Item_6,
  MR_Word STATE_VARIABLE_ItemStats_0_40,
  MR_Word * STATE_VARIABLE_ItemStats_41,
  MR_Word STATE_VARIABLE_GoalStats_0_42,
  MR_Word * STATE_VARIABLE_GoalStats_43);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_GoalStats_0_87,
  MR_Word * STATE_VARIABLE_GoalStats_88);

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
parse_tree__prog_item_stats__gather_stats_in_item_gen_pragma_3_p_0(
  MR_Word GenPragma_4,
  MR_Word STATE_VARIABLE_ItemStats_0_10,
  MR_Word * STATE_VARIABLE_ItemStats_11);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_decl_pragma_3_p_0(
  MR_Word DeclPragma_4,
  MR_Word STATE_VARIABLE_ItemStats_0_16,
  MR_Word * STATE_VARIABLE_ItemStats_17);

static MR_Word MR_CALL 
parse_tree__prog_item_stats__init_goal_stats_0_f_0(void);

static MR_Word MR_CALL 
parse_tree__prog_item_stats__init_item_stats_0_f_0(void);

static void MR_CALL 
parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_2[1][27];

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_3[1][7];




static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_2[1][27] = {
  /* row   0 */
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

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_3[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_item_stats__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_item_stats__type_ctor_info_section_stats_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0_10001)),
  (MR_String) "parse_tree.prog_item_stats",
  (MR_String) "comp_unit_stats",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item_stats__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_item_stats__type_ctor_info_section_stats_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
  INT16_C(27),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_goal_stats_0_0,
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_goal_stats_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_goal_stats_0_0[1] = { &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_goal_stats_0_0 };

static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_goal_stats_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_goal_stats_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_goal_stats_0[1] = { &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_goal_stats_0_0 };

static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_goal_stats_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_goal_stats_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_stats____Unify____goal_stats_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_stats____Compare____goal_stats_0_0_10001)),
  (MR_String) "parse_tree.prog_item_stats",
  (MR_String) "goal_stats",
  { parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_goal_stats_0 },
  { parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_goal_stats_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_goal_stats_0,

};

static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_item_stats_0_0[27] = {
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

static const MR_ConstString parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_item_stats_0_0[27] = {
  (MR_String) "item_num_clauses",
  (MR_String) "item_num_type_defn",
  (MR_String) "item_num_inst_defn",
  (MR_String) "item_num_mode_defn",
  (MR_String) "item_num_pred_decl",
  (MR_String) "item_num_mode_decl",
  (MR_String) "item_num_fim",
  (MR_String) "item_num_foreign_proc",
  (MR_String) "item_num_foreign_enum",
  (MR_String) "item_num_foreign_export_enum",
  (MR_String) "item_num_pragma_decl_term",
  (MR_String) "item_num_pragma_decl_term2",
  (MR_String) "item_num_pragma_decl_other",
  (MR_String) "item_num_marker_decl",
  (MR_String) "item_num_pragma_impl",
  (MR_String) "item_num_marker_impl",
  (MR_String) "item_num_pragma_unused_args",
  (MR_String) "item_num_pragma_exceptions",
  (MR_String) "item_num_pragma_trailing",
  (MR_String) "item_num_pragma_mm_tabling",
  (MR_String) "item_num_promise",
  (MR_String) "item_num_typeclass",
  (MR_String) "item_num_instance",
  (MR_String) "item_num_initialise",
  (MR_String) "item_num_finalise",
  (MR_String) "item_num_mutable",
  (MR_String) "item_num_type_repn"
};

static const MR_DuFunctorDesc parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_item_stats_0_0 = {
  (MR_String) "item_stats",
  INT16_C(27),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_item_stats_0_0,
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_item_stats_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_item_stats_0_0[1] = { &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_item_stats_0_0 };

static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_item_stats_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_item_stats_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_item_stats_0[1] = { &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_item_stats_0_0 };

static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_item_stats_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_item_stats_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_stats____Unify____item_stats_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_stats____Compare____item_stats_0_0_10001)),
  (MR_String) "parse_tree.prog_item_stats",
  (MR_String) "item_stats",
  { parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_item_stats_0 },
  { parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_item_stats_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_item_stats_0,

};

static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_section_stats_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_item_stats_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_goal_stats_0)
};

static const MR_DuFunctorDesc parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_section_stats_0_0 = {
  (MR_String) "section_stats",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_section_stats_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_section_stats_0_0[1] = { &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_section_stats_0_0 };

static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_section_stats_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_section_stats_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_section_stats_0[1] = { &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_section_stats_0_0 };

static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_section_stats_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_stats____Unify____section_stats_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_stats____Compare____section_stats_0_0_10001)),
  (MR_String) "parse_tree.prog_item_stats",
  (MR_String) "section_stats",
  { parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_section_stats_0 },
  { parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_section_stats_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_section_stats_0,

};

static void MR_CALL 
parse_tree__prog_item_stats____Compare____section_stats_0_0(
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

    parse_tree__prog_item_stats____Compare____item_stats_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__prog_item_stats____Compare____goal_stats_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____section_stats_0_0(
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

    succeeded = parse_tree__prog_item_stats____Unify____item_stats_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = parse_tree__prog_item_stats____Unify____goal_stats_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_stats____Compare____item_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_84 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_85 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_84 == CastY_85);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Integer ArgX8_25 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Integer ArgY8_26 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Integer ArgX9_28 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Integer ArgY9_29 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Integer ArgX10_31 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Integer ArgY10_32 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 9))));
    MR_Integer ArgX11_34 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Integer ArgY11_35 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 10))));
    MR_Integer ArgX12_37 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Integer ArgY12_38 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 11))));
    MR_Integer ArgX13_40 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 12))));
    MR_Integer ArgY13_41 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 12))));
    MR_Integer ArgX14_43 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 13))));
    MR_Integer ArgY14_44 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 13))));
    MR_Integer ArgX15_46 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 14))));
    MR_Integer ArgY15_47 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 14))));
    MR_Integer ArgX16_49 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 15))));
    MR_Integer ArgY16_50 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 15))));
    MR_Integer ArgX17_52 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 16))));
    MR_Integer ArgY17_53 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 16))));
    MR_Integer ArgX18_55 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 17))));
    MR_Integer ArgY18_56 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 17))));
    MR_Integer ArgX19_58 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 18))));
    MR_Integer ArgY19_59 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 18))));
    MR_Integer ArgX20_61 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 19))));
    MR_Integer ArgY20_62 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 19))));
    MR_Integer ArgX21_64 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 20))));
    MR_Integer ArgY21_65 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 20))));
    MR_Integer ArgX22_67 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 21))));
    MR_Integer ArgY22_68 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 21))));
    MR_Integer ArgX23_70 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 22))));
    MR_Integer ArgY23_71 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 22))));
    MR_Integer ArgX24_73 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 23))));
    MR_Integer ArgY24_74 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 23))));
    MR_Integer ArgX25_76 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 24))));
    MR_Integer ArgY25_77 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 24))));
    MR_Integer ArgX26_79 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 25))));
    MR_Integer ArgY26_80 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 25))));
    MR_Integer ArgX27_82 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 26))));
    MR_Integer ArgY27_83 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 26))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
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

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ArgX6_19 > ArgY6_20);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
              }
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
                  {
                    MR_Word SubResult9_30;

                    succeeded = (ArgX9_28 < ArgY9_29);
                    if (succeeded)
                    {
                      SubResult9_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX9_28 > ArgY9_29);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      succeeded = (ArgX10_31 < ArgY10_32);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX10_31 > ArgY10_32);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        succeeded = (ArgX11_34 < ArgY11_35);
                        if (succeeded)
                        {
                          SubResult11_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (ArgX11_34 > ArgY11_35);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          succeeded = (ArgX12_37 < ArgY12_38);
                          if (succeeded)
                          {
                            SubResult12_39 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (ArgX12_37 > ArgY12_38);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;

                            succeeded = (ArgX13_40 < ArgY13_41);
                            if (succeeded)
                            {
                              SubResult13_42 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (ArgX13_40 > ArgY13_41);
                              if (succeeded)
                              {
                                SubResult13_42 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;

                              succeeded = (ArgX14_43 < ArgY14_44);
                              if (succeeded)
                              {
                                SubResult14_45 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (ArgX14_43 > ArgY14_44);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;

                                succeeded = (ArgX15_46 < ArgY15_47);
                                if (succeeded)
                                {
                                  SubResult15_48 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (ArgX15_46 > ArgY15_47);
                                  if (succeeded)
                                  {
                                    SubResult15_48 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                }
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                {
                                  MR_Word SubResult16_51;

                                  succeeded = (ArgX16_49 < ArgY16_50);
                                  if (succeeded)
                                  {
                                    SubResult16_51 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (ArgX16_49 > ArgY16_50);
                                    if (succeeded)
                                    {
                                      SubResult16_51 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult16_51;
                                  else
                                  {
                                    MR_Word SubResult17_54;

                                    succeeded = (ArgX17_52 < ArgY17_53);
                                    if (succeeded)
                                    {
                                      SubResult17_54 = (MR_Integer) 1;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = (ArgX17_52 > ArgY17_53);
                                      if (succeeded)
                                      {
                                        SubResult17_54 = (MR_Integer) 2;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult17_54;
                                    else
                                    {
                                      MR_Word SubResult18_57;

                                      succeeded = (ArgX18_55 < ArgY18_56);
                                      if (succeeded)
                                      {
                                        SubResult18_57 = (MR_Integer) 1;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = (ArgX18_55 > ArgY18_56);
                                        if (succeeded)
                                        {
                                          SubResult18_57 = (MR_Integer) 2;
                                          succeeded = MR_TRUE;
                                        }
                                      }
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult18_57;
                                      else
                                      {
                                        MR_Word SubResult19_60;

                                        succeeded = (ArgX19_58 < ArgY19_59);
                                        if (succeeded)
                                        {
                                          SubResult19_60 = (MR_Integer) 1;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = (ArgX19_58 > ArgY19_59);
                                          if (succeeded)
                                          {
                                            SubResult19_60 = (MR_Integer) 2;
                                            succeeded = MR_TRUE;
                                          }
                                        }
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult19_60;
                                        else
                                        {
                                          MR_Word SubResult20_63;

                                          succeeded = (ArgX20_61 < ArgY20_62);
                                          if (succeeded)
                                          {
                                            SubResult20_63 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            succeeded = (ArgX20_61 > ArgY20_62);
                                            if (succeeded)
                                            {
                                              SubResult20_63 = (MR_Integer) 2;
                                              succeeded = MR_TRUE;
                                            }
                                          }
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult20_63;
                                          else
                                          {
                                            MR_Word SubResult21_66;

                                            succeeded = (ArgX21_64 < ArgY21_65);
                                            if (succeeded)
                                            {
                                              SubResult21_66 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              succeeded = (ArgX21_64 > ArgY21_65);
                                              if (succeeded)
                                              {
                                                SubResult21_66 = (MR_Integer) 2;
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult21_66;
                                            else
                                            {
                                              MR_Word SubResult22_69;

                                              succeeded = (ArgX22_67 < ArgY22_68);
                                              if (succeeded)
                                              {
                                                SubResult22_69 = (MR_Integer) 1;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              {
                                                succeeded = (ArgX22_67 > ArgY22_68);
                                                if (succeeded)
                                                {
                                                  SubResult22_69 = (MR_Integer) 2;
                                                  succeeded = MR_TRUE;
                                                }
                                              }
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult22_69;
                                              else
                                              {
                                                MR_Word SubResult23_72;

                                                succeeded = (ArgX23_70 < ArgY23_71);
                                                if (succeeded)
                                                {
                                                  SubResult23_72 = (MR_Integer) 1;
                                                  succeeded = MR_TRUE;
                                                }
                                                else
                                                {
                                                  succeeded = (ArgX23_70 > ArgY23_71);
                                                  if (succeeded)
                                                  {
                                                    SubResult23_72 = (MR_Integer) 2;
                                                    succeeded = MR_TRUE;
                                                  }
                                                }
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult23_72;
                                                else
                                                {
                                                  MR_Word SubResult24_75;

                                                  succeeded = (ArgX24_73 < ArgY24_74);
                                                  if (succeeded)
                                                  {
                                                    SubResult24_75 = (MR_Integer) 1;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  else
                                                  {
                                                    succeeded = (ArgX24_73 > ArgY24_74);
                                                    if (succeeded)
                                                    {
                                                      SubResult24_75 = (MR_Integer) 2;
                                                      succeeded = MR_TRUE;
                                                    }
                                                  }
                                                  if (succeeded)
                                                    *HeadVar__1_1 = SubResult24_75;
                                                  else
                                                  {
                                                    MR_Word SubResult25_78;

                                                    succeeded = (ArgX25_76 < ArgY25_77);
                                                    if (succeeded)
                                                    {
                                                      SubResult25_78 = (MR_Integer) 1;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    else
                                                    {
                                                      succeeded = (ArgX25_76 > ArgY25_77);
                                                      if (succeeded)
                                                      {
                                                        SubResult25_78 = (MR_Integer) 2;
                                                        succeeded = MR_TRUE;
                                                      }
                                                    }
                                                    if (succeeded)
                                                      *HeadVar__1_1 = SubResult25_78;
                                                    else
                                                    {
                                                      MR_Word SubResult26_81;

                                                      succeeded = (ArgX26_79 < ArgY26_80);
                                                      if (succeeded)
                                                      {
                                                        SubResult26_81 = (MR_Integer) 1;
                                                        succeeded = MR_TRUE;
                                                      }
                                                      else
                                                      {
                                                        succeeded = (ArgX26_79 > ArgY26_80);
                                                        if (succeeded)
                                                        {
                                                          SubResult26_81 = (MR_Integer) 2;
                                                          succeeded = MR_TRUE;
                                                        }
                                                      }
                                                      if (succeeded)
                                                        *HeadVar__1_1 = SubResult26_81;
                                                      else
                                                      {
                                                        succeeded = (ArgX27_82 < ArgY27_83);
                                                        if (succeeded)
                                                          *HeadVar__1_1 = (MR_Integer) 1;
                                                        else
                                                        {
                                                          succeeded = (ArgX27_82 > ArgY27_83);
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
  MR_bool succeeded;
  MR_Integer CastX_57 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_58 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_57 == CastY_58);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Integer ArgY8_18 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Integer ArgX9_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Integer ArgY9_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Integer ArgX10_21 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 9))));
    MR_Integer ArgY10_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Integer ArgX11_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 10))));
    MR_Integer ArgY11_24 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Integer ArgX12_25 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 11))));
    MR_Integer ArgY12_26 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Integer ArgX13_27 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 12))));
    MR_Integer ArgY13_28 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 12))));
    MR_Integer ArgX14_29 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 13))));
    MR_Integer ArgY14_30 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 13))));
    MR_Integer ArgX15_31 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 14))));
    MR_Integer ArgY15_32 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 14))));
    MR_Integer ArgX16_33 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 15))));
    MR_Integer ArgY16_34 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 15))));
    MR_Integer ArgX17_35 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 16))));
    MR_Integer ArgY17_36 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 16))));
    MR_Integer ArgX18_37 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 17))));
    MR_Integer ArgY18_38 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 17))));
    MR_Integer ArgX19_39 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 18))));
    MR_Integer ArgY19_40 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 18))));
    MR_Integer ArgX20_41 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 19))));
    MR_Integer ArgY20_42 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 19))));
    MR_Integer ArgX21_43 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 20))));
    MR_Integer ArgY21_44 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 20))));
    MR_Integer ArgX22_45 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 21))));
    MR_Integer ArgY22_46 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 21))));
    MR_Integer ArgX23_47 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 22))));
    MR_Integer ArgY23_48 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 22))));
    MR_Integer ArgX24_49 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 23))));
    MR_Integer ArgY24_50 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 23))));
    MR_Integer ArgX25_51 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 24))));
    MR_Integer ArgY25_52 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 24))));
    MR_Integer ArgX26_53 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 25))));
    MR_Integer ArgY26_54 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 25))));
    MR_Integer ArgX27_55 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 26))));
    MR_Integer ArgY27_56 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 26))));

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

static void MR_CALL 
parse_tree__prog_item_stats____Compare____goal_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_84 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_85 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_84 == CastY_85);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Integer ArgX8_25 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Integer ArgY8_26 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Integer ArgX9_28 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Integer ArgY9_29 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Integer ArgX10_31 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Integer ArgY10_32 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 9))));
    MR_Integer ArgX11_34 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Integer ArgY11_35 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 10))));
    MR_Integer ArgX12_37 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Integer ArgY12_38 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 11))));
    MR_Integer ArgX13_40 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 12))));
    MR_Integer ArgY13_41 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 12))));
    MR_Integer ArgX14_43 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 13))));
    MR_Integer ArgY14_44 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 13))));
    MR_Integer ArgX15_46 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 14))));
    MR_Integer ArgY15_47 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 14))));
    MR_Integer ArgX16_49 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 15))));
    MR_Integer ArgY16_50 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 15))));
    MR_Integer ArgX17_52 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 16))));
    MR_Integer ArgY17_53 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 16))));
    MR_Integer ArgX18_55 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 17))));
    MR_Integer ArgY18_56 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 17))));
    MR_Integer ArgX19_58 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 18))));
    MR_Integer ArgY19_59 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 18))));
    MR_Integer ArgX20_61 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 19))));
    MR_Integer ArgY20_62 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 19))));
    MR_Integer ArgX21_64 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 20))));
    MR_Integer ArgY21_65 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 20))));
    MR_Integer ArgX22_67 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 21))));
    MR_Integer ArgY22_68 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 21))));
    MR_Integer ArgX23_70 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 22))));
    MR_Integer ArgY23_71 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 22))));
    MR_Integer ArgX24_73 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 23))));
    MR_Integer ArgY24_74 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 23))));
    MR_Integer ArgX25_76 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 24))));
    MR_Integer ArgY25_77 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 24))));
    MR_Integer ArgX26_79 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 25))));
    MR_Integer ArgY26_80 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 25))));
    MR_Integer ArgX27_82 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 26))));
    MR_Integer ArgY27_83 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 26))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
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

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ArgX6_19 > ArgY6_20);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
              }
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
                  {
                    MR_Word SubResult9_30;

                    succeeded = (ArgX9_28 < ArgY9_29);
                    if (succeeded)
                    {
                      SubResult9_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX9_28 > ArgY9_29);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      succeeded = (ArgX10_31 < ArgY10_32);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX10_31 > ArgY10_32);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        succeeded = (ArgX11_34 < ArgY11_35);
                        if (succeeded)
                        {
                          SubResult11_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (ArgX11_34 > ArgY11_35);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          succeeded = (ArgX12_37 < ArgY12_38);
                          if (succeeded)
                          {
                            SubResult12_39 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (ArgX12_37 > ArgY12_38);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;

                            succeeded = (ArgX13_40 < ArgY13_41);
                            if (succeeded)
                            {
                              SubResult13_42 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (ArgX13_40 > ArgY13_41);
                              if (succeeded)
                              {
                                SubResult13_42 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;

                              succeeded = (ArgX14_43 < ArgY14_44);
                              if (succeeded)
                              {
                                SubResult14_45 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (ArgX14_43 > ArgY14_44);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;

                                succeeded = (ArgX15_46 < ArgY15_47);
                                if (succeeded)
                                {
                                  SubResult15_48 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (ArgX15_46 > ArgY15_47);
                                  if (succeeded)
                                  {
                                    SubResult15_48 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                }
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                {
                                  MR_Word SubResult16_51;

                                  succeeded = (ArgX16_49 < ArgY16_50);
                                  if (succeeded)
                                  {
                                    SubResult16_51 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (ArgX16_49 > ArgY16_50);
                                    if (succeeded)
                                    {
                                      SubResult16_51 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult16_51;
                                  else
                                  {
                                    MR_Word SubResult17_54;

                                    succeeded = (ArgX17_52 < ArgY17_53);
                                    if (succeeded)
                                    {
                                      SubResult17_54 = (MR_Integer) 1;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = (ArgX17_52 > ArgY17_53);
                                      if (succeeded)
                                      {
                                        SubResult17_54 = (MR_Integer) 2;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult17_54;
                                    else
                                    {
                                      MR_Word SubResult18_57;

                                      succeeded = (ArgX18_55 < ArgY18_56);
                                      if (succeeded)
                                      {
                                        SubResult18_57 = (MR_Integer) 1;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = (ArgX18_55 > ArgY18_56);
                                        if (succeeded)
                                        {
                                          SubResult18_57 = (MR_Integer) 2;
                                          succeeded = MR_TRUE;
                                        }
                                      }
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult18_57;
                                      else
                                      {
                                        MR_Word SubResult19_60;

                                        succeeded = (ArgX19_58 < ArgY19_59);
                                        if (succeeded)
                                        {
                                          SubResult19_60 = (MR_Integer) 1;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = (ArgX19_58 > ArgY19_59);
                                          if (succeeded)
                                          {
                                            SubResult19_60 = (MR_Integer) 2;
                                            succeeded = MR_TRUE;
                                          }
                                        }
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult19_60;
                                        else
                                        {
                                          MR_Word SubResult20_63;

                                          succeeded = (ArgX20_61 < ArgY20_62);
                                          if (succeeded)
                                          {
                                            SubResult20_63 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            succeeded = (ArgX20_61 > ArgY20_62);
                                            if (succeeded)
                                            {
                                              SubResult20_63 = (MR_Integer) 2;
                                              succeeded = MR_TRUE;
                                            }
                                          }
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult20_63;
                                          else
                                          {
                                            MR_Word SubResult21_66;

                                            succeeded = (ArgX21_64 < ArgY21_65);
                                            if (succeeded)
                                            {
                                              SubResult21_66 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              succeeded = (ArgX21_64 > ArgY21_65);
                                              if (succeeded)
                                              {
                                                SubResult21_66 = (MR_Integer) 2;
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult21_66;
                                            else
                                            {
                                              MR_Word SubResult22_69;

                                              succeeded = (ArgX22_67 < ArgY22_68);
                                              if (succeeded)
                                              {
                                                SubResult22_69 = (MR_Integer) 1;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              {
                                                succeeded = (ArgX22_67 > ArgY22_68);
                                                if (succeeded)
                                                {
                                                  SubResult22_69 = (MR_Integer) 2;
                                                  succeeded = MR_TRUE;
                                                }
                                              }
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult22_69;
                                              else
                                              {
                                                MR_Word SubResult23_72;

                                                succeeded = (ArgX23_70 < ArgY23_71);
                                                if (succeeded)
                                                {
                                                  SubResult23_72 = (MR_Integer) 1;
                                                  succeeded = MR_TRUE;
                                                }
                                                else
                                                {
                                                  succeeded = (ArgX23_70 > ArgY23_71);
                                                  if (succeeded)
                                                  {
                                                    SubResult23_72 = (MR_Integer) 2;
                                                    succeeded = MR_TRUE;
                                                  }
                                                }
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult23_72;
                                                else
                                                {
                                                  MR_Word SubResult24_75;

                                                  succeeded = (ArgX24_73 < ArgY24_74);
                                                  if (succeeded)
                                                  {
                                                    SubResult24_75 = (MR_Integer) 1;
                                                    succeeded = MR_TRUE;
                                                  }
                                                  else
                                                  {
                                                    succeeded = (ArgX24_73 > ArgY24_74);
                                                    if (succeeded)
                                                    {
                                                      SubResult24_75 = (MR_Integer) 2;
                                                      succeeded = MR_TRUE;
                                                    }
                                                  }
                                                  if (succeeded)
                                                    *HeadVar__1_1 = SubResult24_75;
                                                  else
                                                  {
                                                    MR_Word SubResult25_78;

                                                    succeeded = (ArgX25_76 < ArgY25_77);
                                                    if (succeeded)
                                                    {
                                                      SubResult25_78 = (MR_Integer) 1;
                                                      succeeded = MR_TRUE;
                                                    }
                                                    else
                                                    {
                                                      succeeded = (ArgX25_76 > ArgY25_77);
                                                      if (succeeded)
                                                      {
                                                        SubResult25_78 = (MR_Integer) 2;
                                                        succeeded = MR_TRUE;
                                                      }
                                                    }
                                                    if (succeeded)
                                                      *HeadVar__1_1 = SubResult25_78;
                                                    else
                                                    {
                                                      MR_Word SubResult26_81;

                                                      succeeded = (ArgX26_79 < ArgY26_80);
                                                      if (succeeded)
                                                      {
                                                        SubResult26_81 = (MR_Integer) 1;
                                                        succeeded = MR_TRUE;
                                                      }
                                                      else
                                                      {
                                                        succeeded = (ArgX26_79 > ArgY26_80);
                                                        if (succeeded)
                                                        {
                                                          SubResult26_81 = (MR_Integer) 2;
                                                          succeeded = MR_TRUE;
                                                        }
                                                      }
                                                      if (succeeded)
                                                        *HeadVar__1_1 = SubResult26_81;
                                                      else
                                                      {
                                                        succeeded = (ArgX27_82 < ArgY27_83);
                                                        if (succeeded)
                                                          *HeadVar__1_1 = (MR_Integer) 1;
                                                        else
                                                        {
                                                          succeeded = (ArgX27_82 > ArgY27_83);
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
  MR_bool succeeded;
  MR_Integer CastX_57 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_58 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_57 == CastY_58);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Integer ArgY8_18 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Integer ArgX9_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Integer ArgY9_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Integer ArgX10_21 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 9))));
    MR_Integer ArgY10_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Integer ArgX11_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 10))));
    MR_Integer ArgY11_24 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Integer ArgX12_25 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 11))));
    MR_Integer ArgY12_26 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Integer ArgX13_27 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 12))));
    MR_Integer ArgY13_28 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 12))));
    MR_Integer ArgX14_29 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 13))));
    MR_Integer ArgY14_30 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 13))));
    MR_Integer ArgX15_31 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 14))));
    MR_Integer ArgY15_32 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 14))));
    MR_Integer ArgX16_33 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 15))));
    MR_Integer ArgY16_34 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 15))));
    MR_Integer ArgX17_35 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 16))));
    MR_Integer ArgY17_36 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 16))));
    MR_Integer ArgX18_37 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 17))));
    MR_Integer ArgY18_38 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 17))));
    MR_Integer ArgX19_39 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 18))));
    MR_Integer ArgY19_40 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 18))));
    MR_Integer ArgX20_41 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 19))));
    MR_Integer ArgY20_42 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 19))));
    MR_Integer ArgX21_43 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 20))));
    MR_Integer ArgY21_44 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 20))));
    MR_Integer ArgX22_45 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 21))));
    MR_Integer ArgY22_46 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 21))));
    MR_Integer ArgX23_47 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 22))));
    MR_Integer ArgY23_48 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 22))));
    MR_Integer ArgX24_49 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 23))));
    MR_Integer ArgY24_50 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 23))));
    MR_Integer ArgX25_51 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 24))));
    MR_Integer ArgY25_52 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 24))));
    MR_Integer ArgX26_53 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 25))));
    MR_Integer ArgY26_54 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 25))));
    MR_Integer ArgX27_55 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 26))));
    MR_Integer ArgY27_56 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 26))));

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

static void MR_CALL 
parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_stats_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_item_stats_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_stats__write_section_stats_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2)
{
  MR_String SectionName_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word SectionStats_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word ItemStats_9 = ((MR_Word) ((MR_hl_field(0, SectionStats_7, 0))));
  MR_Word GoalStats_10 = ((MR_Word) ((MR_hl_field(0, SectionStats_7, 1))));
  MR_Integer Clause_14 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 0))));
  MR_Integer TypeDefn_15 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 1))));
  MR_Integer InstDefn_16 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 2))));
  MR_Integer ModeDefn_17 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 3))));
  MR_Integer PredDecl_18 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 4))));
  MR_Integer ModeDecl_19 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 5))));
  MR_Integer FIM_20 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 6))));
  MR_Integer ForeignProc_21 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 7))));
  MR_Integer ForeignEnum_22 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 8))));
  MR_Integer ForeignExportEnum_23 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 9))));
  MR_Integer PragmaDeclTerm_24 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 10))));
  MR_Integer PragmaDeclTerm2_25 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 11))));
  MR_Integer PragmaDeclOther_26 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 12))));
  MR_Integer MarkerDecl_27 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 13))));
  MR_Integer PragmaImpl_28 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 14))));
  MR_Integer MarkerImpl_29 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 15))));
  MR_Integer PragmaUArgs_30 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 16))));
  MR_Integer PragmaExcp_31 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 17))));
  MR_Integer PragmaTrail_32 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 18))));
  MR_Integer PragmaMM_33 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 19))));
  MR_Integer Promise_34 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 20))));
  MR_Integer Typeclass_35 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 21))));
  MR_Integer Instance_36 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 22))));
  MR_Integer Initialise_37 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 23))));
  MR_Integer Finalise_38 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 24))));
  MR_Integer Mutable_39 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 25))));
  MR_Integer TypeRepn_40 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, 26))));

  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_clause", Clause_14);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_type_defn", TypeDefn_15);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_inst_defn", InstDefn_16);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_mode_defn", ModeDefn_17);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pred_decl", PredDecl_18);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_mode_decl", ModeDecl_19);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_fim", FIM_20);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_foreign_proc", ForeignProc_21);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_foreign_enum", ForeignEnum_22);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_foreign_export_enum", ForeignExportEnum_23);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_decl_term", PragmaDeclTerm_24);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_decl_term2", PragmaDeclTerm2_25);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_decl_other", PragmaDeclOther_26);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_marker_decl", MarkerDecl_27);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_impl", PragmaImpl_28);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_marker_impl", MarkerImpl_29);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_uargs", PragmaUArgs_30);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_excp", PragmaExcp_31);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_trail", PragmaTrail_32);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_mm", PragmaMM_33);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_promise", Promise_34);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_typeclass", Typeclass_35);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_instance", Instance_36);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_promise", Promise_34);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_initialise", Initialise_37);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_finalise", Finalise_38);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_mutable", Mutable_39);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_type_repn", TypeRepn_40);
  parse_tree__prog_item_stats__write_goal_stats_5_p_0(Stream_5, SectionName_6, GoalStats_10);
}

static void MR_CALL 
parse_tree__prog_item_stats__write_goal_stats_5_p_0(
  MR_Word Stream_6,
  MR_String SectionName_7,
  MR_Word GoalStats_8)
{
  MR_Integer Conj_10 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 0))));
  MR_Integer ParConj_11 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 1))));
  MR_Integer True_12 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 2))));
  MR_Integer Disj_13 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 3))));
  MR_Integer Fail_14 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 4))));
  MR_Integer Some_15 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 5))));
  MR_Integer All_16 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 6))));
  MR_Integer SomeStateVars_17 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 7))));
  MR_Integer AllStateVars_18 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 8))));
  MR_Integer PromisePurity_19 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 9))));
  MR_Integer PromiseEqvSolns_20 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 10))));
  MR_Integer PromiseEqvSolnSets_21 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 11))));
  MR_Integer PromiseArbitrary_22 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 12))));
  MR_Integer ReqDetism_23 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 13))));
  MR_Integer ReqComplSwitch_24 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 14))));
  MR_Integer ReqSwitchArmDetism_25 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 15))));
  MR_Integer DisableWarnings_26 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 16))));
  MR_Integer Trace_27 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 17))));
  MR_Integer Atomic_28 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 18))));
  MR_Integer Try_29 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 19))));
  MR_Integer Implies_30 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 20))));
  MR_Integer Equivalent_31 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 21))));
  MR_Integer Not_32 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 22))));
  MR_Integer IfThenElse_33 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 23))));
  MR_Integer Event_34 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 24))));
  MR_Integer Call_35 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 25))));
  MR_Integer Unify_36 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, 26))));

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

static void MR_CALL 
parse_tree__prog_item_stats__write_one_stat_6_p_0(
  MR_Word Stream_7,
  MR_String SectionName_8,
  MR_String StatName_9,
  MR_Integer StatNum_10)
{
  mercury__io__write_string_4_p_0(Stream_7, SectionName_8);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_7, StatName_9);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ");
  mercury__io__write_int_4_p_0(Stream_7, StatNum_10);
  mercury__io__nl_3_p_0(Stream_7);
  mercury__io__flush_output_3_p_0(Stream_7);
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
      MR_Word Item_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Items_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_ItemStats_1_20;
      MR_Word STATE_VARIABLE_GoalStats_1_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ItemStats_0_2;
      MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_4;

      parse_tree__prog_item_stats__gather_stats_in_item_5_p_0(Item_12, STATE_VARIABLE_ItemStats_0_2, &STATE_VARIABLE_ItemStats_1_20, STATE_VARIABLE_GoalStats_0_4, &STATE_VARIABLE_GoalStats_1_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_13;
      next_value_of_STATE_VARIABLE_ItemStats_0_2 = STATE_VARIABLE_ItemStats_1_20;
      next_value_of_STATE_VARIABLE_GoalStats_0_4 = STATE_VARIABLE_GoalStats_1_21;
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
  MR_Word STATE_VARIABLE_ItemStats_0_40,
  MR_Word * STATE_VARIABLE_ItemStats_41,
  MR_Word STATE_VARIABLE_GoalStats_0_42,
  MR_Word * STATE_VARIABLE_GoalStats_43)
{
  switch (MR_tag((MR_Word) Item_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ItemClauseInfo_9 = (MR_Word) ((MR_Word) (Item_6));
        MR_Word MaybeGoal_14;
        MR_Integer Var_45;
        MR_Integer Var_46 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 0))));
        MR_Integer Var_123 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 1))));
        MR_Integer Var_124 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 2))));
        MR_Integer Var_125 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 3))));
        MR_Integer Var_126 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 4))));
        MR_Integer Var_127 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 5))));
        MR_Integer Var_128 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 6))));
        MR_Integer Var_129 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 7))));
        MR_Integer Var_130 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 8))));
        MR_Integer Var_131 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 9))));
        MR_Integer Var_132 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 10))));
        MR_Integer Var_133 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 11))));
        MR_Integer Var_134 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 12))));
        MR_Integer Var_135 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 13))));
        MR_Integer Var_136 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 14))));
        MR_Integer Var_137 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 15))));
        MR_Integer Var_138 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 16))));
        MR_Integer Var_139 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 17))));
        MR_Integer Var_140 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 18))));
        MR_Integer Var_141 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 19))));
        MR_Integer Var_142 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 20))));
        MR_Integer Var_143 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 21))));
        MR_Integer Var_144 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 22))));
        MR_Integer Var_145 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 23))));
        MR_Integer Var_146 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 24))));
        MR_Integer Var_147 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 25))));
        MR_Integer Var_148 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 26))));

        Var_45 = (MR_Integer) ((MR_Unsigned) Var_46 + (MR_Unsigned) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemStats_41 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_45));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_123));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_124));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_125));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_126));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_127));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_128));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_129));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_130));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_131));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_132));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_133));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_134));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_135));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_136));
          MR_hl_field(0, base, 15) = ((MR_Box) (Var_137));
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_138));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_139));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_140));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_141));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_142));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_143));
          MR_hl_field(0, base, 22) = ((MR_Box) (Var_144));
          MR_hl_field(0, base, 23) = ((MR_Box) (Var_145));
          MR_hl_field(0, base, 24) = ((MR_Box) (Var_146));
          MR_hl_field(0, base, 25) = ((MR_Box) (Var_147));
          MR_hl_field(0, base, 26) = ((MR_Box) (Var_148));
        }
        MaybeGoal_14 = ((MR_Word) ((MR_hl_field(0, ItemClauseInfo_9, 4))));
        if (((MR_tag((MR_Word) MaybeGoal_14)) == (MR_Integer) 0))
          *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
        else
        {
          MR_Word Goal_17 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_14, 0))));

          parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(Goal_17, STATE_VARIABLE_GoalStats_0_42, STATE_VARIABLE_GoalStats_43);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Var_62;
        MR_Integer Var_63 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 4))));
        MR_Integer Var_335 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 0))));
        MR_Integer Var_336 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 1))));
        MR_Integer Var_337 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 2))));
        MR_Integer Var_338 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 3))));
        MR_Integer Var_339 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 5))));
        MR_Integer Var_340 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 6))));
        MR_Integer Var_341 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 7))));
        MR_Integer Var_342 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 8))));
        MR_Integer Var_343 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 9))));
        MR_Integer Var_344 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 10))));
        MR_Integer Var_345 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 11))));
        MR_Integer Var_346 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 12))));
        MR_Integer Var_347 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 13))));
        MR_Integer Var_348 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 14))));
        MR_Integer Var_349 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 15))));
        MR_Integer Var_350 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 16))));
        MR_Integer Var_351 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 17))));
        MR_Integer Var_352 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 18))));
        MR_Integer Var_353 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 19))));
        MR_Integer Var_354 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 20))));
        MR_Integer Var_355 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 21))));
        MR_Integer Var_356 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 22))));
        MR_Integer Var_357 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 23))));
        MR_Integer Var_358 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 24))));
        MR_Integer Var_359 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 25))));
        MR_Integer Var_360 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 26))));

        Var_62 = (MR_Integer) ((MR_Unsigned) Var_63 + (MR_Unsigned) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemStats_41 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_335));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_336));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_337));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_338));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_62));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_339));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_340));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_341));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_342));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_343));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_344));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_345));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_346));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_347));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_348));
          MR_hl_field(0, base, 15) = ((MR_Box) (Var_349));
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_350));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_351));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_352));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_353));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_354));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_355));
          MR_hl_field(0, base, 22) = ((MR_Box) (Var_356));
          MR_hl_field(0, base, 23) = ((MR_Box) (Var_357));
          MR_hl_field(0, base, 24) = ((MR_Box) (Var_358));
          MR_hl_field(0, base, 25) = ((MR_Box) (Var_359));
          MR_hl_field(0, base, 26) = ((MR_Box) (Var_360));
        }
        *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Var_66;
        MR_Integer Var_67 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 5))));
        MR_Integer Var_388 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 0))));
        MR_Integer Var_389 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 1))));
        MR_Integer Var_390 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 2))));
        MR_Integer Var_391 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 3))));
        MR_Integer Var_392 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 4))));
        MR_Integer Var_393 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 6))));
        MR_Integer Var_394 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 7))));
        MR_Integer Var_395 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 8))));
        MR_Integer Var_396 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 9))));
        MR_Integer Var_397 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 10))));
        MR_Integer Var_398 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 11))));
        MR_Integer Var_399 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 12))));
        MR_Integer Var_400 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 13))));
        MR_Integer Var_401 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 14))));
        MR_Integer Var_402 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 15))));
        MR_Integer Var_403 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 16))));
        MR_Integer Var_404 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 17))));
        MR_Integer Var_405 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 18))));
        MR_Integer Var_406 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 19))));
        MR_Integer Var_407 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 20))));
        MR_Integer Var_408 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 21))));
        MR_Integer Var_409 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 22))));
        MR_Integer Var_410 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 23))));
        MR_Integer Var_411 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 24))));
        MR_Integer Var_412 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 25))));
        MR_Integer Var_413 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 26))));

        Var_66 = (MR_Integer) ((MR_Unsigned) Var_67 + (MR_Unsigned) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemStats_41 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_388));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_389));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_390));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_391));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_392));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_66));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_393));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_394));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_395));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_396));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_397));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_398));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_399));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_400));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_401));
          MR_hl_field(0, base, 15) = ((MR_Box) (Var_402));
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_403));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_404));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_405));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_406));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_407));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_408));
          MR_hl_field(0, base, 22) = ((MR_Box) (Var_409));
          MR_hl_field(0, base, 23) = ((MR_Box) (Var_410));
          MR_hl_field(0, base, 24) = ((MR_Box) (Var_411));
          MR_hl_field(0, base, 25) = ((MR_Box) (Var_412));
          MR_hl_field(0, base, 26) = ((MR_Box) (Var_413));
        }
        *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Item_6, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Var_70;
            MR_Integer Var_71 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 7))));
            MR_Integer Var_441 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 0))));
            MR_Integer Var_442 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 1))));
            MR_Integer Var_443 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 2))));
            MR_Integer Var_444 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 3))));
            MR_Integer Var_445 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 4))));
            MR_Integer Var_446 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 5))));
            MR_Integer Var_447 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 6))));
            MR_Integer Var_448 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 8))));
            MR_Integer Var_449 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 9))));
            MR_Integer Var_450 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 10))));
            MR_Integer Var_451 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 11))));
            MR_Integer Var_452 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 12))));
            MR_Integer Var_453 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 13))));
            MR_Integer Var_454 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 14))));
            MR_Integer Var_455 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 15))));
            MR_Integer Var_456 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 16))));
            MR_Integer Var_457 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 17))));
            MR_Integer Var_458 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 18))));
            MR_Integer Var_459 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 19))));
            MR_Integer Var_460 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 20))));
            MR_Integer Var_461 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 21))));
            MR_Integer Var_462 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 22))));
            MR_Integer Var_463 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 23))));
            MR_Integer Var_464 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 24))));
            MR_Integer Var_465 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 25))));
            MR_Integer Var_466 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 26))));

            Var_70 = (MR_Integer) ((MR_Unsigned) Var_71 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_41 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_441));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_442));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_443));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_444));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_445));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_446));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_447));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_70));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_448));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_449));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_450));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_451));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_452));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_453));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_454));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_455));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_456));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_457));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_458));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_459));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_460));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_461));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_462));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_463));
              MR_hl_field(0, base, 24) = ((MR_Box) (Var_464));
              MR_hl_field(0, base, 25) = ((MR_Box) (Var_465));
              MR_hl_field(0, base, 26) = ((MR_Box) (Var_466));
            }
            *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_74;
            MR_Integer Var_75 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 8))));
            MR_Integer Var_494 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 0))));
            MR_Integer Var_495 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 1))));
            MR_Integer Var_496 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 2))));
            MR_Integer Var_497 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 3))));
            MR_Integer Var_498 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 4))));
            MR_Integer Var_499 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 5))));
            MR_Integer Var_500 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 6))));
            MR_Integer Var_501 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 7))));
            MR_Integer Var_502 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 9))));
            MR_Integer Var_503 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 10))));
            MR_Integer Var_504 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 11))));
            MR_Integer Var_505 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 12))));
            MR_Integer Var_506 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 13))));
            MR_Integer Var_507 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 14))));
            MR_Integer Var_508 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 15))));
            MR_Integer Var_509 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 16))));
            MR_Integer Var_510 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 17))));
            MR_Integer Var_511 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 18))));
            MR_Integer Var_512 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 19))));
            MR_Integer Var_513 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 20))));
            MR_Integer Var_514 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 21))));
            MR_Integer Var_515 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 22))));
            MR_Integer Var_516 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 23))));
            MR_Integer Var_517 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 24))));
            MR_Integer Var_518 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 25))));
            MR_Integer Var_519 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 26))));

            Var_74 = (MR_Integer) ((MR_Unsigned) Var_75 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_41 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_494));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_495));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_496));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_497));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_498));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_499));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_500));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_501));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_74));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_502));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_503));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_504));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_505));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_506));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_507));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_508));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_509));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_510));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_511));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_512));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_513));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_514));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_515));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_516));
              MR_hl_field(0, base, 24) = ((MR_Box) (Var_517));
              MR_hl_field(0, base, 25) = ((MR_Box) (Var_518));
              MR_hl_field(0, base, 26) = ((MR_Box) (Var_519));
            }
            *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_78;
            MR_Integer Var_79 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 9))));
            MR_Integer Var_547 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 0))));
            MR_Integer Var_548 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 1))));
            MR_Integer Var_549 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 2))));
            MR_Integer Var_550 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 3))));
            MR_Integer Var_551 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 4))));
            MR_Integer Var_552 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 5))));
            MR_Integer Var_553 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 6))));
            MR_Integer Var_554 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 7))));
            MR_Integer Var_555 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 8))));
            MR_Integer Var_556 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 10))));
            MR_Integer Var_557 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 11))));
            MR_Integer Var_558 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 12))));
            MR_Integer Var_559 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 13))));
            MR_Integer Var_560 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 14))));
            MR_Integer Var_561 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 15))));
            MR_Integer Var_562 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 16))));
            MR_Integer Var_563 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 17))));
            MR_Integer Var_564 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 18))));
            MR_Integer Var_565 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 19))));
            MR_Integer Var_566 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 20))));
            MR_Integer Var_567 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 21))));
            MR_Integer Var_568 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 22))));
            MR_Integer Var_569 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 23))));
            MR_Integer Var_570 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 24))));
            MR_Integer Var_571 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 25))));
            MR_Integer Var_572 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 26))));

            Var_78 = (MR_Integer) ((MR_Unsigned) Var_79 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_41 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_547));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_548));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_549));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_550));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_551));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_552));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_553));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_554));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_555));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_78));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_556));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_557));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_558));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_559));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_560));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_561));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_562));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_563));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_564));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_565));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_566));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_567));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_568));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_569));
              MR_hl_field(0, base, 24) = ((MR_Box) (Var_570));
              MR_hl_field(0, base, 25) = ((MR_Box) (Var_571));
              MR_hl_field(0, base, 26) = ((MR_Box) (Var_572));
            }
            *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer Var_83;
            MR_Integer Var_84 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 13))));
            MR_Integer Var_600 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 0))));
            MR_Integer Var_601 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 1))));
            MR_Integer Var_602 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 2))));
            MR_Integer Var_603 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 3))));
            MR_Integer Var_604 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 4))));
            MR_Integer Var_605 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 5))));
            MR_Integer Var_606 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 6))));
            MR_Integer Var_607 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 7))));
            MR_Integer Var_608 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 8))));
            MR_Integer Var_609 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 9))));
            MR_Integer Var_610 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 10))));
            MR_Integer Var_611 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 11))));
            MR_Integer Var_612 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 12))));
            MR_Integer Var_613 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 14))));
            MR_Integer Var_614 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 15))));
            MR_Integer Var_615 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 16))));
            MR_Integer Var_616 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 17))));
            MR_Integer Var_617 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 18))));
            MR_Integer Var_618 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 19))));
            MR_Integer Var_619 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 20))));
            MR_Integer Var_620 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 21))));
            MR_Integer Var_621 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 22))));
            MR_Integer Var_622 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 23))));
            MR_Integer Var_623 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 24))));
            MR_Integer Var_624 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 25))));
            MR_Integer Var_625 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 26))));

            Var_83 = (MR_Integer) ((MR_Unsigned) Var_84 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_41 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_600));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_601));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_602));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_603));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_604));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_605));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_606));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_607));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_608));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_609));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_610));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_611));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_612));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_83));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_613));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_614));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_615));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_616));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_617));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_618));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_619));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_620));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_621));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_622));
              MR_hl_field(0, base, 24) = ((MR_Box) (Var_623));
              MR_hl_field(0, base, 25) = ((MR_Box) (Var_624));
              MR_hl_field(0, base, 26) = ((MR_Box) (Var_625));
            }
            *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Integer Var_91;
            MR_Integer Var_92 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 15))));
            MR_Integer Var_706 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 0))));
            MR_Integer Var_707 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 1))));
            MR_Integer Var_708 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 2))));
            MR_Integer Var_709 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 3))));
            MR_Integer Var_710 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 4))));
            MR_Integer Var_711 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 5))));
            MR_Integer Var_712 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 6))));
            MR_Integer Var_713 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 7))));
            MR_Integer Var_714 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 8))));
            MR_Integer Var_715 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 9))));
            MR_Integer Var_716 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 10))));
            MR_Integer Var_717 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 11))));
            MR_Integer Var_718 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 12))));
            MR_Integer Var_719 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 13))));
            MR_Integer Var_720 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 14))));
            MR_Integer Var_721 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 16))));
            MR_Integer Var_722 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 17))));
            MR_Integer Var_723 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 18))));
            MR_Integer Var_724 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 19))));
            MR_Integer Var_725 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 20))));
            MR_Integer Var_726 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 21))));
            MR_Integer Var_727 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 22))));
            MR_Integer Var_728 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 23))));
            MR_Integer Var_729 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 24))));
            MR_Integer Var_730 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 25))));
            MR_Integer Var_731 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 26))));

            Var_91 = (MR_Integer) ((MR_Unsigned) Var_92 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_41 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_706));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_707));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_708));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_709));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_710));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_711));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_712));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_713));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_714));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_715));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_716));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_717));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_718));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_719));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_720));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_91));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_721));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_722));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_723));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_724));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_725));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_726));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_727));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_728));
              MR_hl_field(0, base, 24) = ((MR_Box) (Var_729));
              MR_hl_field(0, base, 25) = ((MR_Box) (Var_730));
              MR_hl_field(0, base, 26) = ((MR_Box) (Var_731));
            }
            *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Integer Var_96;
            MR_Integer Var_97 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 20))));
            MR_Integer Var_759 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 0))));
            MR_Integer Var_760 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 1))));
            MR_Integer Var_761 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 2))));
            MR_Integer Var_762 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 3))));
            MR_Integer Var_763 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 4))));
            MR_Integer Var_764 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 5))));
            MR_Integer Var_765 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 6))));
            MR_Integer Var_766 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 7))));
            MR_Integer Var_767 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 8))));
            MR_Integer Var_768 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 9))));
            MR_Integer Var_769 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 10))));
            MR_Integer Var_770 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 11))));
            MR_Integer Var_771 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 12))));
            MR_Integer Var_772 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 13))));
            MR_Integer Var_773 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 14))));
            MR_Integer Var_774 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 15))));
            MR_Integer Var_775 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 16))));
            MR_Integer Var_776 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 17))));
            MR_Integer Var_777 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 18))));
            MR_Integer Var_778 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 19))));
            MR_Integer Var_779 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 21))));
            MR_Integer Var_780 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 22))));
            MR_Integer Var_781 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 23))));
            MR_Integer Var_782 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 24))));
            MR_Integer Var_783 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 25))));
            MR_Integer Var_784 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 26))));

            Var_96 = (MR_Integer) ((MR_Unsigned) Var_97 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_41 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_759));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_760));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_761));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_762));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_763));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_764));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_765));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_766));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_767));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_768));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_769));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_770));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_771));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_772));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_773));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_774));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_775));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_776));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_777));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_778));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_96));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_779));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_780));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_781));
              MR_hl_field(0, base, 24) = ((MR_Box) (Var_782));
              MR_hl_field(0, base, 25) = ((MR_Box) (Var_783));
              MR_hl_field(0, base, 26) = ((MR_Box) (Var_784));
            }
            *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Integer Var_100;
            MR_Integer Var_101 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 21))));
            MR_Integer Var_812 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 0))));
            MR_Integer Var_813 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 1))));
            MR_Integer Var_814 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 2))));
            MR_Integer Var_815 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 3))));
            MR_Integer Var_816 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 4))));
            MR_Integer Var_817 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 5))));
            MR_Integer Var_818 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 6))));
            MR_Integer Var_819 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 7))));
            MR_Integer Var_820 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 8))));
            MR_Integer Var_821 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 9))));
            MR_Integer Var_822 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 10))));
            MR_Integer Var_823 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 11))));
            MR_Integer Var_824 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 12))));
            MR_Integer Var_825 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 13))));
            MR_Integer Var_826 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 14))));
            MR_Integer Var_827 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 15))));
            MR_Integer Var_828 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 16))));
            MR_Integer Var_829 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 17))));
            MR_Integer Var_830 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 18))));
            MR_Integer Var_831 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 19))));
            MR_Integer Var_832 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 20))));
            MR_Integer Var_833 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 22))));
            MR_Integer Var_834 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 23))));
            MR_Integer Var_835 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 24))));
            MR_Integer Var_836 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 25))));
            MR_Integer Var_837 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 26))));

            Var_100 = (MR_Integer) ((MR_Unsigned) Var_101 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_41 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_812));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_813));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_814));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_815));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_816));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_817));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_818));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_819));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_820));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_821));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_822));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_823));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_824));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_825));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_826));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_827));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_828));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_829));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_830));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_831));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_832));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_100));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_833));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_834));
              MR_hl_field(0, base, 24) = ((MR_Box) (Var_835));
              MR_hl_field(0, base, 25) = ((MR_Box) (Var_836));
              MR_hl_field(0, base, 26) = ((MR_Box) (Var_837));
            }
            *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Integer Var_104;
            MR_Integer Var_105 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 22))));
            MR_Integer Var_865 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 0))));
            MR_Integer Var_866 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 1))));
            MR_Integer Var_867 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 2))));
            MR_Integer Var_868 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 3))));
            MR_Integer Var_869 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 4))));
            MR_Integer Var_870 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 5))));
            MR_Integer Var_871 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 6))));
            MR_Integer Var_872 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 7))));
            MR_Integer Var_873 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 8))));
            MR_Integer Var_874 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 9))));
            MR_Integer Var_875 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 10))));
            MR_Integer Var_876 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 11))));
            MR_Integer Var_877 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 12))));
            MR_Integer Var_878 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 13))));
            MR_Integer Var_879 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 14))));
            MR_Integer Var_880 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 15))));
            MR_Integer Var_881 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 16))));
            MR_Integer Var_882 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 17))));
            MR_Integer Var_883 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 18))));
            MR_Integer Var_884 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 19))));
            MR_Integer Var_885 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 20))));
            MR_Integer Var_886 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 21))));
            MR_Integer Var_887 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 23))));
            MR_Integer Var_888 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 24))));
            MR_Integer Var_889 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 25))));
            MR_Integer Var_890 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 26))));

            Var_104 = (MR_Integer) ((MR_Unsigned) Var_105 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_41 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_865));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_866));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_867));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_868));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_869));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_870));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_871));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_872));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_873));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_874));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_875));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_876));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_877));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_878));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_879));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_880));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_881));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_882));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_883));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_884));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_885));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_886));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_104));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_887));
              MR_hl_field(0, base, 24) = ((MR_Box) (Var_888));
              MR_hl_field(0, base, 25) = ((MR_Box) (Var_889));
              MR_hl_field(0, base, 26) = ((MR_Box) (Var_890));
            }
            *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Integer Var_108;
            MR_Integer Var_109 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 23))));
            MR_Integer Var_918 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 0))));
            MR_Integer Var_919 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 1))));
            MR_Integer Var_920 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 2))));
            MR_Integer Var_921 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 3))));
            MR_Integer Var_922 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 4))));
            MR_Integer Var_923 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 5))));
            MR_Integer Var_924 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 6))));
            MR_Integer Var_925 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 7))));
            MR_Integer Var_926 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 8))));
            MR_Integer Var_927 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 9))));
            MR_Integer Var_928 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 10))));
            MR_Integer Var_929 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 11))));
            MR_Integer Var_930 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 12))));
            MR_Integer Var_931 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 13))));
            MR_Integer Var_932 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 14))));
            MR_Integer Var_933 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 15))));
            MR_Integer Var_934 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 16))));
            MR_Integer Var_935 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 17))));
            MR_Integer Var_936 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 18))));
            MR_Integer Var_937 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 19))));
            MR_Integer Var_938 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 20))));
            MR_Integer Var_939 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 21))));
            MR_Integer Var_940 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 22))));
            MR_Integer Var_941 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 24))));
            MR_Integer Var_942 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 25))));
            MR_Integer Var_943 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 26))));

            Var_108 = (MR_Integer) ((MR_Unsigned) Var_109 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_41 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_918));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_919));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_920));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_921));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_922));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_923));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_924));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_925));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_926));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_927));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_928));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_929));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_930));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_931));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_932));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_933));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_934));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_935));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_936));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_937));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_938));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_939));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_940));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_108));
              MR_hl_field(0, base, 24) = ((MR_Box) (Var_941));
              MR_hl_field(0, base, 25) = ((MR_Box) (Var_942));
              MR_hl_field(0, base, 26) = ((MR_Box) (Var_943));
            }
            *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Integer Var_112;
            MR_Integer Var_113 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 24))));
            MR_Integer Var_971 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 0))));
            MR_Integer Var_972 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 1))));
            MR_Integer Var_973 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 2))));
            MR_Integer Var_974 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 3))));
            MR_Integer Var_975 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 4))));
            MR_Integer Var_976 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 5))));
            MR_Integer Var_977 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 6))));
            MR_Integer Var_978 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 7))));
            MR_Integer Var_979 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 8))));
            MR_Integer Var_980 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 9))));
            MR_Integer Var_981 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 10))));
            MR_Integer Var_982 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 11))));
            MR_Integer Var_983 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 12))));
            MR_Integer Var_984 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 13))));
            MR_Integer Var_985 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 14))));
            MR_Integer Var_986 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 15))));
            MR_Integer Var_987 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 16))));
            MR_Integer Var_988 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 17))));
            MR_Integer Var_989 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 18))));
            MR_Integer Var_990 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 19))));
            MR_Integer Var_991 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 20))));
            MR_Integer Var_992 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 21))));
            MR_Integer Var_993 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 22))));
            MR_Integer Var_994 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 23))));
            MR_Integer Var_995 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 25))));
            MR_Integer Var_996 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 26))));

            Var_112 = (MR_Integer) ((MR_Unsigned) Var_113 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_41 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_971));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_972));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_973));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_974));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_975));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_976));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_977));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_978));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_979));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_980));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_981));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_982));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_983));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_984));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_985));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_986));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_987));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_988));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_989));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_990));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_991));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_992));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_993));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_994));
              MR_hl_field(0, base, 24) = ((MR_Box) (Var_112));
              MR_hl_field(0, base, 25) = ((MR_Box) (Var_995));
              MR_hl_field(0, base, 26) = ((MR_Box) (Var_996));
            }
            *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Integer Var_116;
            MR_Integer Var_117 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 25))));
            MR_Integer Var_1024 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 0))));
            MR_Integer Var_1025 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 1))));
            MR_Integer Var_1026 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 2))));
            MR_Integer Var_1027 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 3))));
            MR_Integer Var_1028 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 4))));
            MR_Integer Var_1029 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 5))));
            MR_Integer Var_1030 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 6))));
            MR_Integer Var_1031 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 7))));
            MR_Integer Var_1032 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 8))));
            MR_Integer Var_1033 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 9))));
            MR_Integer Var_1034 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 10))));
            MR_Integer Var_1035 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 11))));
            MR_Integer Var_1036 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 12))));
            MR_Integer Var_1037 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 13))));
            MR_Integer Var_1038 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 14))));
            MR_Integer Var_1039 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 15))));
            MR_Integer Var_1040 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 16))));
            MR_Integer Var_1041 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 17))));
            MR_Integer Var_1042 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 18))));
            MR_Integer Var_1043 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 19))));
            MR_Integer Var_1044 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 20))));
            MR_Integer Var_1045 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 21))));
            MR_Integer Var_1046 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 22))));
            MR_Integer Var_1047 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 23))));
            MR_Integer Var_1048 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 24))));
            MR_Integer Var_1049 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 26))));

            Var_116 = (MR_Integer) ((MR_Unsigned) Var_117 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_41 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_1024));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_1025));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_1026));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_1027));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_1028));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_1029));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_1030));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_1031));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_1032));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_1033));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_1034));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_1035));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_1036));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_1037));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_1038));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_1039));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_1040));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_1041));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_1042));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_1043));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_1044));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_1045));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_1046));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_1047));
              MR_hl_field(0, base, 24) = ((MR_Box) (Var_1048));
              MR_hl_field(0, base, 25) = ((MR_Box) (Var_116));
              MR_hl_field(0, base, 26) = ((MR_Box) (Var_1049));
            }
            *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Integer Var_50;
            MR_Integer Var_51 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 1))));
            MR_Integer Var_176 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 0))));
            MR_Integer Var_177 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 2))));
            MR_Integer Var_178 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 3))));
            MR_Integer Var_179 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 4))));
            MR_Integer Var_180 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 5))));
            MR_Integer Var_181 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 6))));
            MR_Integer Var_182 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 7))));
            MR_Integer Var_183 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 8))));
            MR_Integer Var_184 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 9))));
            MR_Integer Var_185 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 10))));
            MR_Integer Var_186 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 11))));
            MR_Integer Var_187 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 12))));
            MR_Integer Var_188 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 13))));
            MR_Integer Var_189 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 14))));
            MR_Integer Var_190 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 15))));
            MR_Integer Var_191 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 16))));
            MR_Integer Var_192 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 17))));
            MR_Integer Var_193 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 18))));
            MR_Integer Var_194 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 19))));
            MR_Integer Var_195 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 20))));
            MR_Integer Var_196 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 21))));
            MR_Integer Var_197 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 22))));
            MR_Integer Var_198 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 23))));
            MR_Integer Var_199 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 24))));
            MR_Integer Var_200 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 25))));
            MR_Integer Var_201 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 26))));

            Var_50 = (MR_Integer) ((MR_Unsigned) Var_51 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_41 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_176));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_50));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_177));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_178));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_179));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_180));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_181));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_182));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_183));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_184));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_185));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_186));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_187));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_188));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_189));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_190));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_191));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_192));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_193));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_194));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_195));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_196));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_197));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_198));
              MR_hl_field(0, base, 24) = ((MR_Box) (Var_199));
              MR_hl_field(0, base, 25) = ((MR_Box) (Var_200));
              MR_hl_field(0, base, 26) = ((MR_Box) (Var_201));
            }
            *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Integer Var_54;
            MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 2))));
            MR_Integer Var_229 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 0))));
            MR_Integer Var_230 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 1))));
            MR_Integer Var_231 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 3))));
            MR_Integer Var_232 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 4))));
            MR_Integer Var_233 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 5))));
            MR_Integer Var_234 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 6))));
            MR_Integer Var_235 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 7))));
            MR_Integer Var_236 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 8))));
            MR_Integer Var_237 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 9))));
            MR_Integer Var_238 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 10))));
            MR_Integer Var_239 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 11))));
            MR_Integer Var_240 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 12))));
            MR_Integer Var_241 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 13))));
            MR_Integer Var_242 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 14))));
            MR_Integer Var_243 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 15))));
            MR_Integer Var_244 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 16))));
            MR_Integer Var_245 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 17))));
            MR_Integer Var_246 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 18))));
            MR_Integer Var_247 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 19))));
            MR_Integer Var_248 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 20))));
            MR_Integer Var_249 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 21))));
            MR_Integer Var_250 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 22))));
            MR_Integer Var_251 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 23))));
            MR_Integer Var_252 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 24))));
            MR_Integer Var_253 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 25))));
            MR_Integer Var_254 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 26))));

            Var_54 = (MR_Integer) ((MR_Unsigned) Var_55 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_41 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_229));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_230));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_54));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_231));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_232));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_233));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_234));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_235));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_236));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_237));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_238));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_239));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_240));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_241));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_242));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_243));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_244));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_245));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_246));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_247));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_248));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_249));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_250));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_251));
              MR_hl_field(0, base, 24) = ((MR_Box) (Var_252));
              MR_hl_field(0, base, 25) = ((MR_Box) (Var_253));
              MR_hl_field(0, base, 26) = ((MR_Box) (Var_254));
            }
            *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Integer Var_58;
            MR_Integer Var_59 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 3))));
            MR_Integer Var_282 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 0))));
            MR_Integer Var_283 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 1))));
            MR_Integer Var_284 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 2))));
            MR_Integer Var_285 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 4))));
            MR_Integer Var_286 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 5))));
            MR_Integer Var_287 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 6))));
            MR_Integer Var_288 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 7))));
            MR_Integer Var_289 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 8))));
            MR_Integer Var_290 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 9))));
            MR_Integer Var_291 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 10))));
            MR_Integer Var_292 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 11))));
            MR_Integer Var_293 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 12))));
            MR_Integer Var_294 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 13))));
            MR_Integer Var_295 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 14))));
            MR_Integer Var_296 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 15))));
            MR_Integer Var_297 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 16))));
            MR_Integer Var_298 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 17))));
            MR_Integer Var_299 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 18))));
            MR_Integer Var_300 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 19))));
            MR_Integer Var_301 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 20))));
            MR_Integer Var_302 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 21))));
            MR_Integer Var_303 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 22))));
            MR_Integer Var_304 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 23))));
            MR_Integer Var_305 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 24))));
            MR_Integer Var_306 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 25))));
            MR_Integer Var_307 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 26))));

            Var_58 = (MR_Integer) ((MR_Unsigned) Var_59 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_41 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_282));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_283));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_284));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_58));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_285));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_286));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_287));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_288));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_289));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_290));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_291));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_292));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_293));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_294));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_295));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_296));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_297));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_298));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_299));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_300));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_301));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_302));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_303));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_304));
              MR_hl_field(0, base, 24) = ((MR_Box) (Var_305));
              MR_hl_field(0, base, 25) = ((MR_Box) (Var_306));
              MR_hl_field(0, base, 26) = ((MR_Box) (Var_307));
            }
            *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word ItemDeclPragmaInfo_28 = ((MR_Word) ((MR_hl_field(3, Item_6, 1))));

            parse_tree__prog_item_stats__gather_stats_in_item_decl_pragma_3_p_0(ItemDeclPragmaInfo_28, STATE_VARIABLE_ItemStats_0_40, STATE_VARIABLE_ItemStats_41);
            *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Integer Var_87;
            MR_Integer Var_88 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 14))));
            MR_Integer Var_653 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 0))));
            MR_Integer Var_654 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 1))));
            MR_Integer Var_655 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 2))));
            MR_Integer Var_656 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 3))));
            MR_Integer Var_657 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 4))));
            MR_Integer Var_658 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 5))));
            MR_Integer Var_659 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 6))));
            MR_Integer Var_660 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 7))));
            MR_Integer Var_661 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 8))));
            MR_Integer Var_662 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 9))));
            MR_Integer Var_663 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 10))));
            MR_Integer Var_664 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 11))));
            MR_Integer Var_665 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 12))));
            MR_Integer Var_666 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 13))));
            MR_Integer Var_667 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 15))));
            MR_Integer Var_668 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 16))));
            MR_Integer Var_669 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 17))));
            MR_Integer Var_670 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 18))));
            MR_Integer Var_671 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 19))));
            MR_Integer Var_672 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 20))));
            MR_Integer Var_673 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 21))));
            MR_Integer Var_674 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 22))));
            MR_Integer Var_675 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 23))));
            MR_Integer Var_676 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 24))));
            MR_Integer Var_677 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 25))));
            MR_Integer Var_678 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 26))));

            Var_87 = (MR_Integer) ((MR_Unsigned) Var_88 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_41 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_653));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_654));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_655));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_656));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_657));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_658));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_659));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_660));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_661));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_662));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_663));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_664));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_665));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_666));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_87));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_667));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_668));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_669));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_670));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_671));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_672));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_673));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_674));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_675));
              MR_hl_field(0, base, 24) = ((MR_Box) (Var_676));
              MR_hl_field(0, base, 25) = ((MR_Box) (Var_677));
              MR_hl_field(0, base, 26) = ((MR_Box) (Var_678));
            }
            *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word ItemGenPragmaInfo_32 = ((MR_Word) ((MR_hl_field(3, Item_6, 1))));

            parse_tree__prog_item_stats__gather_stats_in_item_gen_pragma_3_p_0(ItemGenPragmaInfo_32, STATE_VARIABLE_ItemStats_0_40, STATE_VARIABLE_ItemStats_41);
            *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Integer Var_120;
            MR_Integer Var_121 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 26))));
            MR_Integer Var_1077 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 0))));
            MR_Integer Var_1078 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 1))));
            MR_Integer Var_1079 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 2))));
            MR_Integer Var_1080 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 3))));
            MR_Integer Var_1081 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 4))));
            MR_Integer Var_1082 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 5))));
            MR_Integer Var_1083 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 6))));
            MR_Integer Var_1084 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 7))));
            MR_Integer Var_1085 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 8))));
            MR_Integer Var_1086 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 9))));
            MR_Integer Var_1087 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 10))));
            MR_Integer Var_1088 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 11))));
            MR_Integer Var_1089 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 12))));
            MR_Integer Var_1090 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 13))));
            MR_Integer Var_1091 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 14))));
            MR_Integer Var_1092 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 15))));
            MR_Integer Var_1093 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 16))));
            MR_Integer Var_1094 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 17))));
            MR_Integer Var_1095 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 18))));
            MR_Integer Var_1096 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 19))));
            MR_Integer Var_1097 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 20))));
            MR_Integer Var_1098 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 21))));
            MR_Integer Var_1099 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 22))));
            MR_Integer Var_1100 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 23))));
            MR_Integer Var_1101 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 24))));
            MR_Integer Var_1102 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_40, 25))));

            Var_120 = (MR_Integer) ((MR_Unsigned) Var_121 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_41 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_1077));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_1078));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_1079));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_1080));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_1081));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_1082));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_1083));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_1084));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_1085));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_1086));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_1087));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_1088));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_1089));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_1090));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_1091));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_1092));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_1093));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_1094));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_1095));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_1096));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_1097));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_1098));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_1099));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_1100));
              MR_hl_field(0, base, 24) = ((MR_Box) (Var_1101));
              MR_hl_field(0, base, 25) = ((MR_Box) (Var_1102));
              MR_hl_field(0, base, 26) = ((MR_Box) (Var_120));
            }
            *STATE_VARIABLE_GoalStats_43 = STATE_VARIABLE_GoalStats_0_42;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_GoalStats_0_87,
  MR_Word * STATE_VARIABLE_GoalStats_88)
{
  while (MR_TRUE)
  {
    MR_Integer Var_1760 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 26))));
    MR_Integer Var_1761 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 25))));
    MR_Integer Var_1762 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 24))));
    MR_Integer Var_1763 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 23))));
    MR_Integer Var_1764 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 22))));
    MR_Integer Var_1765 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 21))));
    MR_Integer Var_1766 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 20))));
    MR_Integer Var_1767 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 19))));
    MR_Integer Var_1768 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 18))));
    MR_Integer Var_1769 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 17))));
    MR_Integer Var_1770 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 16))));
    MR_Integer Var_1771 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 15))));
    MR_Integer Var_1772 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 14))));
    MR_Integer Var_1773 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 13))));
    MR_Integer Var_1774 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 12))));
    MR_Integer Var_1775 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 11))));
    MR_Integer Var_1776 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 10))));
    MR_Integer Var_1777 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 9))));
    MR_Integer Var_1778 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 8))));
    MR_Integer Var_1779 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 7))));
    MR_Integer Var_1780 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 6))));
    MR_Integer Var_1781 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 5))));
    MR_Integer Var_1782 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 4))));
    MR_Integer Var_1783 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 3))));
    MR_Integer Var_1784 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 2))));
    MR_Integer Var_1785 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 1))));
    MR_Integer Var_1786 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Goal_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Var_227 = (MR_Integer) ((MR_Unsigned) Var_1760 + (MR_Unsigned) 1);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_GoalStats_88 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_1786));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_1785));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_1784));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_1783));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_1782));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_1781));
            MR_hl_field(0, base, 6) = ((MR_Box) (Var_1780));
            MR_hl_field(0, base, 7) = ((MR_Box) (Var_1779));
            MR_hl_field(0, base, 8) = ((MR_Box) (Var_1778));
            MR_hl_field(0, base, 9) = ((MR_Box) (Var_1777));
            MR_hl_field(0, base, 10) = ((MR_Box) (Var_1776));
            MR_hl_field(0, base, 11) = ((MR_Box) (Var_1775));
            MR_hl_field(0, base, 12) = ((MR_Box) (Var_1774));
            MR_hl_field(0, base, 13) = ((MR_Box) (Var_1773));
            MR_hl_field(0, base, 14) = ((MR_Box) (Var_1772));
            MR_hl_field(0, base, 15) = ((MR_Box) (Var_1771));
            MR_hl_field(0, base, 16) = ((MR_Box) (Var_1770));
            MR_hl_field(0, base, 17) = ((MR_Box) (Var_1769));
            MR_hl_field(0, base, 18) = ((MR_Box) (Var_1768));
            MR_hl_field(0, base, 19) = ((MR_Box) (Var_1767));
            MR_hl_field(0, base, 20) = ((MR_Box) (Var_1766));
            MR_hl_field(0, base, 21) = ((MR_Box) (Var_1765));
            MR_hl_field(0, base, 22) = ((MR_Box) (Var_1764));
            MR_hl_field(0, base, 23) = ((MR_Box) (Var_1763));
            MR_hl_field(0, base, 24) = ((MR_Box) (Var_1762));
            MR_hl_field(0, base, 25) = ((MR_Box) (Var_1761));
            MR_hl_field(0, base, 26) = ((MR_Box) (Var_227));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_223 = (MR_Integer) ((MR_Unsigned) Var_1761 + (MR_Unsigned) 1);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_GoalStats_88 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_1786));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_1785));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_1784));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_1783));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_1782));
            MR_hl_field(0, base, 5) = ((MR_Box) (Var_1781));
            MR_hl_field(0, base, 6) = ((MR_Box) (Var_1780));
            MR_hl_field(0, base, 7) = ((MR_Box) (Var_1779));
            MR_hl_field(0, base, 8) = ((MR_Box) (Var_1778));
            MR_hl_field(0, base, 9) = ((MR_Box) (Var_1777));
            MR_hl_field(0, base, 10) = ((MR_Box) (Var_1776));
            MR_hl_field(0, base, 11) = ((MR_Box) (Var_1775));
            MR_hl_field(0, base, 12) = ((MR_Box) (Var_1774));
            MR_hl_field(0, base, 13) = ((MR_Box) (Var_1773));
            MR_hl_field(0, base, 14) = ((MR_Box) (Var_1772));
            MR_hl_field(0, base, 15) = ((MR_Box) (Var_1771));
            MR_hl_field(0, base, 16) = ((MR_Box) (Var_1770));
            MR_hl_field(0, base, 17) = ((MR_Box) (Var_1769));
            MR_hl_field(0, base, 18) = ((MR_Box) (Var_1768));
            MR_hl_field(0, base, 19) = ((MR_Box) (Var_1767));
            MR_hl_field(0, base, 20) = ((MR_Box) (Var_1766));
            MR_hl_field(0, base, 21) = ((MR_Box) (Var_1765));
            MR_hl_field(0, base, 22) = ((MR_Box) (Var_1764));
            MR_hl_field(0, base, 23) = ((MR_Box) (Var_1763));
            MR_hl_field(0, base, 24) = ((MR_Box) (Var_1762));
            MR_hl_field(0, base, 25) = ((MR_Box) (Var_223));
            MR_hl_field(0, base, 26) = ((MR_Box) (Var_1760));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubGoalA_7 = ((MR_Word) ((MR_hl_field(2, Goal_4, 1))));
          MR_Word SubGoalsB_8 = ((MR_Word) ((MR_hl_field(2, Goal_4, 2))));
          MR_Word STATE_VARIABLE_GoalStats_1_89;
          MR_Integer Var_90 = (MR_Integer) ((MR_Unsigned) Var_1786 + (MR_Unsigned) 1);
          MR_Word STATE_VARIABLE_GoalStats_2_93;

          {
            STATE_VARIABLE_GoalStats_1_89 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 0) = ((MR_Box) (Var_90));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 1) = ((MR_Box) (Var_1785));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 2) = ((MR_Box) (Var_1784));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 3) = ((MR_Box) (Var_1783));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 4) = ((MR_Box) (Var_1782));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 5) = ((MR_Box) (Var_1781));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 6) = ((MR_Box) (Var_1780));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 7) = ((MR_Box) (Var_1779));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 8) = ((MR_Box) (Var_1778));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 9) = ((MR_Box) (Var_1777));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 10) = ((MR_Box) (Var_1776));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 11) = ((MR_Box) (Var_1775));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 12) = ((MR_Box) (Var_1774));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 13) = ((MR_Box) (Var_1773));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 14) = ((MR_Box) (Var_1772));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 15) = ((MR_Box) (Var_1771));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 16) = ((MR_Box) (Var_1770));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 17) = ((MR_Box) (Var_1769));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 18) = ((MR_Box) (Var_1768));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 19) = ((MR_Box) (Var_1767));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 20) = ((MR_Box) (Var_1766));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 21) = ((MR_Box) (Var_1765));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 22) = ((MR_Box) (Var_1764));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 23) = ((MR_Box) (Var_1763));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 24) = ((MR_Box) (Var_1762));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 25) = ((MR_Box) (Var_1761));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_1_89, 26) = ((MR_Box) (Var_1760));
          }
          parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(SubGoalA_7, STATE_VARIABLE_GoalStats_1_89, &STATE_VARIABLE_GoalStats_2_93);
          parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(SubGoalsB_8, STATE_VARIABLE_GoalStats_2_93, STATE_VARIABLE_GoalStats_88);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Goal_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_102 = (MR_Integer) ((MR_Unsigned) Var_1784 + (MR_Unsigned) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_GoalStats_88 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, base, 2) = ((MR_Box) (Var_102));
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, base, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, base, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, base, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, base, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, base, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, base, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, base, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, base, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, base, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, base, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, base, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, base, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, base, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, base, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, base, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, base, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, base, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, base, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, base, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, base, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, base, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, base, 26) = ((MR_Box) (Var_1760));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word CondGoal_75 = ((MR_Word) ((MR_hl_field(3, Goal_4, 4))));
              MR_Word STATE_VARIABLE_GoalStats_53_211;
              MR_Integer Var_212 = (MR_Integer) ((MR_Unsigned) Var_1763 + (MR_Unsigned) 1);
              MR_Word STATE_VARIABLE_GoalStats_54_215;
              MR_Word STATE_VARIABLE_GoalStats_55_216;
              MR_Word ThenGoal_246 = ((MR_Word) ((MR_hl_field(3, Goal_4, 5))));
              MR_Word ElseGoal_247 = ((MR_Word) ((MR_hl_field(3, Goal_4, 6))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_53_211 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 23) = ((MR_Box) (Var_212));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_53_211, 26) = ((MR_Box) (Var_1760));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(CondGoal_75, STATE_VARIABLE_GoalStats_53_211, &STATE_VARIABLE_GoalStats_54_215);
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(ThenGoal_246, STATE_VARIABLE_GoalStats_54_215, &STATE_VARIABLE_GoalStats_55_216);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = ElseGoal_247;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_55_216;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoal1_12 = ((MR_Word) ((MR_hl_field(3, Goal_4, 2))));
              MR_Word SubGoal2_13 = ((MR_Word) ((MR_hl_field(3, Goal_4, 3))));
              MR_Word SubGoals_14 = ((MR_Word) ((MR_hl_field(3, Goal_4, 4))));
              MR_Word STATE_VARIABLE_GoalStats_8_105;
              MR_Integer Var_106 = (MR_Integer) ((MR_Unsigned) Var_1783 + (MR_Unsigned) 1);
              MR_Word STATE_VARIABLE_GoalStats_9_109;
              MR_Word STATE_VARIABLE_GoalStats_10_110;

              {
                STATE_VARIABLE_GoalStats_8_105 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 3) = ((MR_Box) (Var_106));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_8_105, 26) = ((MR_Box) (Var_1760));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(SubGoal1_12, STATE_VARIABLE_GoalStats_8_105, &STATE_VARIABLE_GoalStats_9_109);
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(SubGoal2_13, STATE_VARIABLE_GoalStats_9_109, &STATE_VARIABLE_GoalStats_10_110);
              parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(SubGoals_14, STATE_VARIABLE_GoalStats_10_110, STATE_VARIABLE_GoalStats_88);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word STATE_VARIABLE_GoalStats_51_206;
              MR_Integer Var_207 = (MR_Integer) ((MR_Unsigned) Var_1764 + (MR_Unsigned) 1);
              MR_Word SubGoal_245 = ((MR_Word) ((MR_hl_field(3, Goal_4, 2))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_51_206 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 22) = ((MR_Box) (Var_207));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_51_206, 26) = ((MR_Box) (Var_1760));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_245;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_51_206;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer Var_113 = (MR_Integer) ((MR_Unsigned) Var_1782 + (MR_Unsigned) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_GoalStats_88 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, base, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_113));
                MR_hl_field(0, base, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, base, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, base, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, base, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, base, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, base, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, base, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, base, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, base, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, base, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, base, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, base, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, base, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, base, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, base, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, base, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, base, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, base, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, base, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, base, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, base, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, base, 26) = ((MR_Box) (Var_1760));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word STATE_VARIABLE_GoalStats_4_95;
              MR_Integer Var_96 = (MR_Integer) ((MR_Unsigned) Var_1785 + (MR_Unsigned) 1);
              MR_Word STATE_VARIABLE_GoalStats_5_99;
              MR_Word SubGoalA_230 = ((MR_Word) ((MR_hl_field(3, Goal_4, 2))));
              MR_Word SubGoalsB_231 = ((MR_Word) ((MR_hl_field(3, Goal_4, 3))));

              {
                STATE_VARIABLE_GoalStats_4_95 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 1) = ((MR_Box) (Var_96));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_4_95, 26) = ((MR_Box) (Var_1760));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(SubGoalA_230, STATE_VARIABLE_GoalStats_4_95, &STATE_VARIABLE_GoalStats_5_99);
              parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(SubGoalsB_231, STATE_VARIABLE_GoalStats_5_99, STATE_VARIABLE_GoalStats_88);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_16 = ((((MR_Unsigned) ((MR_hl_field(3, Goal_4, 1))) >> 1)) & (MR_Integer) 1);
              MR_Word QuantVarsKind_17 = ((MR_Unsigned) ((MR_hl_field(3, Goal_4, 1))) & (MR_Integer) 1);
              MR_Word SubGoal_20 = ((MR_Word) ((MR_hl_field(3, Goal_4, 4))));
              MR_Word STATE_VARIABLE_GoalStats_13_116;
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              switch (QuantType_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  switch (QuantVarsKind_17) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer Var_125 = (MR_Integer) ((MR_Unsigned) Var_1780 + (MR_Unsigned) 1);

                        {
                          STATE_VARIABLE_GoalStats_13_116 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 0) = ((MR_Box) (Var_1786));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 1) = ((MR_Box) (Var_1785));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 2) = ((MR_Box) (Var_1784));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 3) = ((MR_Box) (Var_1783));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 4) = ((MR_Box) (Var_1782));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 5) = ((MR_Box) (Var_1781));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 6) = ((MR_Box) (Var_125));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 7) = ((MR_Box) (Var_1779));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 8) = ((MR_Box) (Var_1778));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 9) = ((MR_Box) (Var_1777));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 10) = ((MR_Box) (Var_1776));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 11) = ((MR_Box) (Var_1775));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 12) = ((MR_Box) (Var_1774));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 13) = ((MR_Box) (Var_1773));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 14) = ((MR_Box) (Var_1772));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 15) = ((MR_Box) (Var_1771));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 16) = ((MR_Box) (Var_1770));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 17) = ((MR_Box) (Var_1769));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 18) = ((MR_Box) (Var_1768));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 19) = ((MR_Box) (Var_1767));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 20) = ((MR_Box) (Var_1766));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 21) = ((MR_Box) (Var_1765));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 22) = ((MR_Box) (Var_1764));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 23) = ((MR_Box) (Var_1763));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 24) = ((MR_Box) (Var_1762));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 25) = ((MR_Box) (Var_1761));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 26) = ((MR_Box) (Var_1760));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer Var_129 = (MR_Integer) ((MR_Unsigned) Var_1778 + (MR_Unsigned) 1);

                        {
                          STATE_VARIABLE_GoalStats_13_116 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 0) = ((MR_Box) (Var_1786));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 1) = ((MR_Box) (Var_1785));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 2) = ((MR_Box) (Var_1784));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 3) = ((MR_Box) (Var_1783));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 4) = ((MR_Box) (Var_1782));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 5) = ((MR_Box) (Var_1781));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 6) = ((MR_Box) (Var_1780));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 7) = ((MR_Box) (Var_1779));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 8) = ((MR_Box) (Var_129));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 9) = ((MR_Box) (Var_1777));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 10) = ((MR_Box) (Var_1776));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 11) = ((MR_Box) (Var_1775));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 12) = ((MR_Box) (Var_1774));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 13) = ((MR_Box) (Var_1773));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 14) = ((MR_Box) (Var_1772));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 15) = ((MR_Box) (Var_1771));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 16) = ((MR_Box) (Var_1770));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 17) = ((MR_Box) (Var_1769));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 18) = ((MR_Box) (Var_1768));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 19) = ((MR_Box) (Var_1767));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 20) = ((MR_Box) (Var_1766));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 21) = ((MR_Box) (Var_1765));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 22) = ((MR_Box) (Var_1764));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 23) = ((MR_Box) (Var_1763));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 24) = ((MR_Box) (Var_1762));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 25) = ((MR_Box) (Var_1761));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 26) = ((MR_Box) (Var_1760));
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 0:
                  switch (QuantVarsKind_17) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer Var_117 = (MR_Integer) ((MR_Unsigned) Var_1781 + (MR_Unsigned) 1);

                        {
                          STATE_VARIABLE_GoalStats_13_116 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 0) = ((MR_Box) (Var_1786));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 1) = ((MR_Box) (Var_1785));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 2) = ((MR_Box) (Var_1784));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 3) = ((MR_Box) (Var_1783));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 4) = ((MR_Box) (Var_1782));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 5) = ((MR_Box) (Var_117));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 6) = ((MR_Box) (Var_1780));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 7) = ((MR_Box) (Var_1779));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 8) = ((MR_Box) (Var_1778));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 9) = ((MR_Box) (Var_1777));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 10) = ((MR_Box) (Var_1776));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 11) = ((MR_Box) (Var_1775));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 12) = ((MR_Box) (Var_1774));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 13) = ((MR_Box) (Var_1773));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 14) = ((MR_Box) (Var_1772));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 15) = ((MR_Box) (Var_1771));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 16) = ((MR_Box) (Var_1770));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 17) = ((MR_Box) (Var_1769));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 18) = ((MR_Box) (Var_1768));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 19) = ((MR_Box) (Var_1767));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 20) = ((MR_Box) (Var_1766));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 21) = ((MR_Box) (Var_1765));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 22) = ((MR_Box) (Var_1764));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 23) = ((MR_Box) (Var_1763));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 24) = ((MR_Box) (Var_1762));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 25) = ((MR_Box) (Var_1761));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 26) = ((MR_Box) (Var_1760));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer Var_121 = (MR_Integer) ((MR_Unsigned) Var_1779 + (MR_Unsigned) 1);

                        {
                          STATE_VARIABLE_GoalStats_13_116 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 0) = ((MR_Box) (Var_1786));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 1) = ((MR_Box) (Var_1785));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 2) = ((MR_Box) (Var_1784));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 3) = ((MR_Box) (Var_1783));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 4) = ((MR_Box) (Var_1782));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 5) = ((MR_Box) (Var_1781));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 6) = ((MR_Box) (Var_1780));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 7) = ((MR_Box) (Var_121));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 8) = ((MR_Box) (Var_1778));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 9) = ((MR_Box) (Var_1777));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 10) = ((MR_Box) (Var_1776));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 11) = ((MR_Box) (Var_1775));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 12) = ((MR_Box) (Var_1774));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 13) = ((MR_Box) (Var_1773));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 14) = ((MR_Box) (Var_1772));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 15) = ((MR_Box) (Var_1771));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 16) = ((MR_Box) (Var_1770));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 17) = ((MR_Box) (Var_1769));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 18) = ((MR_Box) (Var_1768));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 19) = ((MR_Box) (Var_1767));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 20) = ((MR_Box) (Var_1766));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 21) = ((MR_Box) (Var_1765));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 22) = ((MR_Box) (Var_1764));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 23) = ((MR_Box) (Var_1763));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 24) = ((MR_Box) (Var_1762));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 25) = ((MR_Box) (Var_1761));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_13_116, 26) = ((MR_Box) (Var_1760));
                        }
                      }
                      break;
                  }
                  break;
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_20;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_13_116;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word STATE_VARIABLE_GoalStats_18_133;
              MR_Integer Var_134 = (MR_Integer) ((MR_Unsigned) Var_1777 + (MR_Unsigned) 1);
              MR_Word SubGoal_232 = ((MR_Word) ((MR_hl_field(3, Goal_4, 3))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_18_133 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 9) = ((MR_Box) (Var_134));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_18_133, 26) = ((MR_Box) (Var_1760));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_232;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_18_133;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word STATE_VARIABLE_GoalStats_20_138;
              MR_Integer Var_139 = (MR_Integer) ((MR_Unsigned) Var_1776 + (MR_Unsigned) 1);
              MR_Word SubGoal_233 = ((MR_Word) ((MR_hl_field(3, Goal_4, 6))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_20_138 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 10) = ((MR_Box) (Var_139));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_20_138, 26) = ((MR_Box) (Var_1760));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_233;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_20_138;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word STATE_VARIABLE_GoalStats_22_143;
              MR_Integer Var_144 = (MR_Integer) ((MR_Unsigned) Var_1775 + (MR_Unsigned) 1);
              MR_Word SubGoal_234 = ((MR_Word) ((MR_hl_field(3, Goal_4, 6))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_22_143 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 11) = ((MR_Box) (Var_144));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_22_143, 26) = ((MR_Box) (Var_1760));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_234;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_22_143;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word STATE_VARIABLE_GoalStats_24_148;
              MR_Integer Var_149 = (MR_Integer) ((MR_Unsigned) Var_1774 + (MR_Unsigned) 1);
              MR_Word SubGoal_235 = ((MR_Word) ((MR_hl_field(3, Goal_4, 6))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_24_148 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 12) = ((MR_Box) (Var_149));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_24_148, 26) = ((MR_Box) (Var_1760));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_235;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_24_148;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word STATE_VARIABLE_GoalStats_26_153;
              MR_Integer Var_154 = (MR_Integer) ((MR_Unsigned) Var_1773 + (MR_Unsigned) 1);
              MR_Word SubGoal_236 = ((MR_Word) ((MR_hl_field(3, Goal_4, 3))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_26_153 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 13) = ((MR_Box) (Var_154));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_26_153, 26) = ((MR_Box) (Var_1760));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_236;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_26_153;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word STATE_VARIABLE_GoalStats_28_158;
              MR_Integer Var_159 = (MR_Integer) ((MR_Unsigned) Var_1772 + (MR_Unsigned) 1);
              MR_Word SubGoal_237 = ((MR_Word) ((MR_hl_field(3, Goal_4, 3))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_28_158 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 14) = ((MR_Box) (Var_159));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_28_158, 26) = ((MR_Box) (Var_1760));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_237;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_28_158;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word STATE_VARIABLE_GoalStats_30_163;
              MR_Integer Var_164 = (MR_Integer) ((MR_Unsigned) Var_1771 + (MR_Unsigned) 1);
              MR_Word SubGoal_238 = ((MR_Word) ((MR_hl_field(3, Goal_4, 4))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_30_163 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 15) = ((MR_Box) (Var_164));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_30_163, 26) = ((MR_Box) (Var_1760));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_238;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_30_163;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word STATE_VARIABLE_GoalStats_32_168;
              MR_Integer Var_169 = (MR_Integer) ((MR_Unsigned) Var_1770 + (MR_Unsigned) 1);
              MR_Word SubGoal_239 = ((MR_Word) ((MR_hl_field(3, Goal_4, 4))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_32_168 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 16) = ((MR_Box) (Var_169));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_32_168, 26) = ((MR_Box) (Var_1760));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_239;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_32_168;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word STATE_VARIABLE_GoalStats_34_173;
              MR_Integer Var_174 = (MR_Integer) ((MR_Unsigned) Var_1769 + (MR_Unsigned) 1);
              MR_Word SubGoal_240 = ((MR_Word) ((MR_hl_field(3, Goal_4, 6))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_34_173 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 17) = ((MR_Box) (Var_174));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_34_173, 26) = ((MR_Box) (Var_1760));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_240;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_34_173;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word MainGoal_57 = ((MR_Word) ((MR_hl_field(3, Goal_4, 5))));
              MR_Word OrElseGoals_58 = ((MR_Word) ((MR_hl_field(3, Goal_4, 6))));
              MR_Word STATE_VARIABLE_GoalStats_36_178;
              MR_Integer Var_179 = (MR_Integer) ((MR_Unsigned) Var_1768 + (MR_Unsigned) 1);
              MR_Word STATE_VARIABLE_GoalStats_37_182;

              {
                STATE_VARIABLE_GoalStats_36_178 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 18) = ((MR_Box) (Var_179));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_36_178, 26) = ((MR_Box) (Var_1760));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(MainGoal_57, STATE_VARIABLE_GoalStats_36_178, &STATE_VARIABLE_GoalStats_37_182);
              parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(OrElseGoals_58, STATE_VARIABLE_GoalStats_37_182, STATE_VARIABLE_GoalStats_88);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ThenGoal_61 = ((MR_Word) ((MR_hl_field(3, Goal_4, 4))));
              MR_Word MaybeElseGoal_62 = ((MR_Word) ((MR_hl_field(3, Goal_4, 5))));
              MR_Word Catches_63 = ((MR_Word) ((MR_hl_field(3, Goal_4, 6))));
              MR_Word MaybeCatchAny_64 = ((MR_Word) ((MR_hl_field(3, Goal_4, 7))));
              MR_Word STATE_VARIABLE_GoalStats_39_184;
              MR_Integer Var_185 = (MR_Integer) ((MR_Unsigned) Var_1767 + (MR_Unsigned) 1);
              MR_Word STATE_VARIABLE_GoalStats_40_188;
              MR_Word STATE_VARIABLE_GoalStats_41_189;
              MR_Word STATE_VARIABLE_GoalStats_42_190;
              MR_Word STATE_VARIABLE_GoalStats_43_191;
              MR_Word MainGoal_241 = ((MR_Word) ((MR_hl_field(3, Goal_4, 3))));

              {
                STATE_VARIABLE_GoalStats_39_184 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 19) = ((MR_Box) (Var_185));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_39_184, 26) = ((MR_Box) (Var_1760));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(MainGoal_241, STATE_VARIABLE_GoalStats_39_184, &STATE_VARIABLE_GoalStats_40_188);
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(ThenGoal_61, STATE_VARIABLE_GoalStats_40_188, &STATE_VARIABLE_GoalStats_41_189);
              if ((MaybeElseGoal_62 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_GoalStats_42_190 = STATE_VARIABLE_GoalStats_41_189;
              else
              {
                MR_Word ElseGoal_65 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal_62, 0))));

                parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(ElseGoal_65, STATE_VARIABLE_GoalStats_41_189, &STATE_VARIABLE_GoalStats_42_190);
              }
              parse_tree__prog_item_stats__gather_stats_in_catch_exprs_3_p_0(Catches_63, STATE_VARIABLE_GoalStats_42_190, &STATE_VARIABLE_GoalStats_43_191);
              if ((MaybeCatchAny_64 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_GoalStats_88 = STATE_VARIABLE_GoalStats_43_191;
              else
              {
                MR_Word CatchAnyGoal_67;
                MR_Word Var_192 = ((MR_Word) ((MR_hl_field(1, MaybeCatchAny_64, 0))));
                MR_Word next_value_of_Goal_4;
                MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

                CatchAnyGoal_67 = ((MR_Word) ((MR_hl_field(0, Var_192, 1))));
                // direct tailcall eliminated
                ;
                next_value_of_Goal_4 = CatchAnyGoal_67;
                next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_43_191;
                Goal_4 = next_value_of_Goal_4;
                STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
                continue;
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SubGoalB_69 = ((MR_Word) ((MR_hl_field(3, Goal_4, 3))));
              MR_Word STATE_VARIABLE_GoalStats_45_194;
              MR_Integer Var_195 = (MR_Integer) ((MR_Unsigned) Var_1766 + (MR_Unsigned) 1);
              MR_Word STATE_VARIABLE_GoalStats_46_198;
              MR_Word SubGoalA_242 = ((MR_Word) ((MR_hl_field(3, Goal_4, 2))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_45_194 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 20) = ((MR_Box) (Var_195));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_45_194, 26) = ((MR_Box) (Var_1760));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(SubGoalA_242, STATE_VARIABLE_GoalStats_45_194, &STATE_VARIABLE_GoalStats_46_198);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoalB_69;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_46_198;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word STATE_VARIABLE_GoalStats_48_200;
              MR_Integer Var_201 = (MR_Integer) ((MR_Unsigned) Var_1765 + (MR_Unsigned) 1);
              MR_Word STATE_VARIABLE_GoalStats_49_204;
              MR_Word SubGoalA_243 = ((MR_Word) ((MR_hl_field(3, Goal_4, 2))));
              MR_Word SubGoalB_244 = ((MR_Word) ((MR_hl_field(3, Goal_4, 3))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_48_200 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 21) = ((MR_Box) (Var_201));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_48_200, 26) = ((MR_Box) (Var_1760));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(SubGoalA_243, STATE_VARIABLE_GoalStats_48_200, &STATE_VARIABLE_GoalStats_49_204);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoalB_244;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_49_204;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Integer Var_219 = (MR_Integer) ((MR_Unsigned) Var_1762 + (MR_Unsigned) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_GoalStats_88 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, base, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, base, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, base, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, base, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, base, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, base, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, base, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, base, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, base, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, base, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, base, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, base, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, base, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, base, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, base, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, base, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, base, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, base, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, base, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, base, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, base, 24) = ((MR_Box) (Var_219));
                MR_hl_field(0, base, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, base, 26) = ((MR_Box) (Var_1760));
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
      MR_Word CatchExpr_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word CatchExprs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(0, CatchExpr_7, 1))));
      MR_Word STATE_VARIABLE_GoalStats_1_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_2;

      parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(Goal_11, STATE_VARIABLE_GoalStats_0_2, &STATE_VARIABLE_GoalStats_1_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = CatchExprs_8;
      next_value_of_STATE_VARIABLE_GoalStats_0_2 = STATE_VARIABLE_GoalStats_1_14;
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
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_GoalStats_1_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_2;

      parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(Goal_7, STATE_VARIABLE_GoalStats_0_2, &STATE_VARIABLE_GoalStats_1_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_8;
      next_value_of_STATE_VARIABLE_GoalStats_0_2 = STATE_VARIABLE_GoalStats_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_GoalStats_0_2 = next_value_of_STATE_VARIABLE_GoalStats_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_gen_pragma_3_p_0(
  MR_Word GenPragma_4,
  MR_Word STATE_VARIABLE_ItemStats_0_10,
  MR_Word * STATE_VARIABLE_ItemStats_11)
{
  MR_Integer Var_240 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 26))));
  MR_Integer Var_241 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 25))));
  MR_Integer Var_242 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 24))));
  MR_Integer Var_243 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 23))));
  MR_Integer Var_244 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 22))));
  MR_Integer Var_245 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 21))));
  MR_Integer Var_246 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 20))));
  MR_Integer Var_247 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 19))));
  MR_Integer Var_248 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 18))));
  MR_Integer Var_249 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 17))));
  MR_Integer Var_250 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 16))));
  MR_Integer Var_251 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 15))));
  MR_Integer Var_252 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 14))));
  MR_Integer Var_253 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 13))));
  MR_Integer Var_254 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 12))));
  MR_Integer Var_255 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 11))));
  MR_Integer Var_256 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 10))));
  MR_Integer Var_257 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 9))));
  MR_Integer Var_258 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 8))));
  MR_Integer Var_259 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 7))));
  MR_Integer Var_260 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 6))));
  MR_Integer Var_261 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 5))));
  MR_Integer Var_262 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 4))));
  MR_Integer Var_263 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 3))));
  MR_Integer Var_264 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 2))));
  MR_Integer Var_265 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 1))));
  MR_Integer Var_266 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_10, 0))));

  switch (MR_tag((MR_Word) GenPragma_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) Var_250 + (MR_Unsigned) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemStats_11 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_266));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_265));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_264));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_263));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_262));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_261));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_260));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_259));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_258));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_257));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_256));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_255));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_254));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_253));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_252));
          MR_hl_field(0, base, 15) = ((MR_Box) (Var_251));
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_13));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_249));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_248));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_247));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_246));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_245));
          MR_hl_field(0, base, 22) = ((MR_Box) (Var_244));
          MR_hl_field(0, base, 23) = ((MR_Box) (Var_243));
          MR_hl_field(0, base, 24) = ((MR_Box) (Var_242));
          MR_hl_field(0, base, 25) = ((MR_Box) (Var_241));
          MR_hl_field(0, base, 26) = ((MR_Box) (Var_240));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) Var_249 + (MR_Unsigned) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemStats_11 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_266));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_265));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_264));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_263));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_262));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_261));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_260));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_259));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_258));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_257));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_256));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_255));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_254));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_253));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_252));
          MR_hl_field(0, base, 15) = ((MR_Box) (Var_251));
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_250));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_17));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_248));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_247));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_246));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_245));
          MR_hl_field(0, base, 22) = ((MR_Box) (Var_244));
          MR_hl_field(0, base, 23) = ((MR_Box) (Var_243));
          MR_hl_field(0, base, 24) = ((MR_Box) (Var_242));
          MR_hl_field(0, base, 25) = ((MR_Box) (Var_241));
          MR_hl_field(0, base, 26) = ((MR_Box) (Var_240));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) Var_248 + (MR_Unsigned) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemStats_11 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_266));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_265));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_264));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_263));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_262));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_261));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_260));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_259));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_258));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_257));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_256));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_255));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_254));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_253));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_252));
          MR_hl_field(0, base, 15) = ((MR_Box) (Var_251));
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_250));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_249));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_21));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_247));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_246));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_245));
          MR_hl_field(0, base, 22) = ((MR_Box) (Var_244));
          MR_hl_field(0, base, 23) = ((MR_Box) (Var_243));
          MR_hl_field(0, base, 24) = ((MR_Box) (Var_242));
          MR_hl_field(0, base, 25) = ((MR_Box) (Var_241));
          MR_hl_field(0, base, 26) = ((MR_Box) (Var_240));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) Var_247 + (MR_Unsigned) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemStats_11 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_266));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_265));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_264));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_263));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_262));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_261));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_260));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_259));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_258));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_257));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_256));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_255));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_254));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_253));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_252));
          MR_hl_field(0, base, 15) = ((MR_Box) (Var_251));
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_250));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_249));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_248));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_25));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_246));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_245));
          MR_hl_field(0, base, 22) = ((MR_Box) (Var_244));
          MR_hl_field(0, base, 23) = ((MR_Box) (Var_243));
          MR_hl_field(0, base, 24) = ((MR_Box) (Var_242));
          MR_hl_field(0, base, 25) = ((MR_Box) (Var_241));
          MR_hl_field(0, base, 26) = ((MR_Box) (Var_240));
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_decl_pragma_3_p_0(
  MR_Word DeclPragma_4,
  MR_Word STATE_VARIABLE_ItemStats_0_16,
  MR_Word * STATE_VARIABLE_ItemStats_17)
{
  MR_Integer Var_189 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 26))));
  MR_Integer Var_190 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 25))));
  MR_Integer Var_191 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 24))));
  MR_Integer Var_192 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 23))));
  MR_Integer Var_193 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 22))));
  MR_Integer Var_194 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 21))));
  MR_Integer Var_195 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 20))));
  MR_Integer Var_196 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 19))));
  MR_Integer Var_197 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 18))));
  MR_Integer Var_198 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 17))));
  MR_Integer Var_199 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 16))));
  MR_Integer Var_200 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 15))));
  MR_Integer Var_201 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 14))));
  MR_Integer Var_202 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 13))));
  MR_Integer Var_203 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 12))));
  MR_Integer Var_204 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 11))));
  MR_Integer Var_205 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 10))));
  MR_Integer Var_206 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 9))));
  MR_Integer Var_207 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 8))));
  MR_Integer Var_208 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 7))));
  MR_Integer Var_209 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 6))));
  MR_Integer Var_210 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 5))));
  MR_Integer Var_211 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 4))));
  MR_Integer Var_212 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 3))));
  MR_Integer Var_213 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 2))));
  MR_Integer Var_214 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 1))));
  MR_Integer Var_215 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_16, 0))));

  switch (MR_tag((MR_Word) DeclPragma_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) Var_203 + (MR_Unsigned) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemStats_17 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_215));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_214));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_213));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_212));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_211));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_210));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_209));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_208));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_207));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_206));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_205));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_204));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_27));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_202));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_201));
          MR_hl_field(0, base, 15) = ((MR_Box) (Var_200));
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_199));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_198));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_197));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_196));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_195));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_194));
          MR_hl_field(0, base, 22) = ((MR_Box) (Var_193));
          MR_hl_field(0, base, 23) = ((MR_Box) (Var_192));
          MR_hl_field(0, base, 24) = ((MR_Box) (Var_191));
          MR_hl_field(0, base, 25) = ((MR_Box) (Var_190));
          MR_hl_field(0, base, 26) = ((MR_Box) (Var_189));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, DeclPragma_4, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
          {
            MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) Var_203 + (MR_Unsigned) 1);

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_17 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_215));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_214));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_213));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_212));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_211));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_210));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_209));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_208));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_207));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_206));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_205));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_204));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_27));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_202));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_201));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_200));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_199));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_198));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_197));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_196));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_195));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_194));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_193));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_192));
              MR_hl_field(0, base, 24) = ((MR_Box) (Var_191));
              MR_hl_field(0, base, 25) = ((MR_Box) (Var_190));
              MR_hl_field(0, base, 26) = ((MR_Box) (Var_189));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) Var_205 + (MR_Unsigned) 1);

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_17 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_215));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_214));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_213));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_212));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_211));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_210));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_209));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_208));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_207));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_206));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_19));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_204));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_203));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_202));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_201));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_200));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_199));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_198));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_197));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_196));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_195));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_194));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_193));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_192));
              MR_hl_field(0, base, 24) = ((MR_Box) (Var_191));
              MR_hl_field(0, base, 25) = ((MR_Box) (Var_190));
              MR_hl_field(0, base, 26) = ((MR_Box) (Var_189));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) Var_204 + (MR_Unsigned) 1);

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_17 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_215));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_214));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_213));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_212));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_211));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_210));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_209));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_208));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_207));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_206));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_205));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_23));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_203));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_202));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_201));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_200));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_199));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_198));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_197));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_196));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_195));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_194));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_193));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_192));
              MR_hl_field(0, base, 24) = ((MR_Box) (Var_191));
              MR_hl_field(0, base, 25) = ((MR_Box) (Var_190));
              MR_hl_field(0, base, 26) = ((MR_Box) (Var_189));
            }
          }
          break;
      }
      break;
  }
}

static MR_Word MR_CALL 
parse_tree__prog_item_stats__init_goal_stats_0_f_0(void)
{
  return (MR_Word) (&parse_tree__prog_item_stats_scalar_common_2[0]);
}

static MR_Word MR_CALL 
parse_tree__prog_item_stats__init_item_stats_0_f_0(void)
{
  return (MR_Word) (&parse_tree__prog_item_stats_scalar_common_2[0]);
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__prog_item_stats__write_section_stats_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0(
  MR_Word Stream_5,
  MR_Word AugCompUnit_6)
{
  MR_Word CompUnitStats_8;
  MR_Word ParseTreeModuleSrc_9;
  MR_Word ModuleName_10;
  MR_Word SectionStatPairs_67;
  MR_String Var_69;
  MR_Word Var_70;
  MR_Box conv0_STATE_VARIABLE_IO_12;

  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0), &CompUnitStats_8);
  ParseTreeModuleSrc_9 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_6, 0))));
  ModuleName_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_9, 0))));
  Var_69 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_10);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "MODULE ");
  mercury__io__write_string_4_p_0(Stream_5, Var_69);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0), CompUnitStats_8, &SectionStatPairs_67);
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (&parse_tree__prog_item_stats_scalar_common_3[0]));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) (parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0_1));
    MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_70, 3) = ((MR_Box) (Stream_5));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item_stats_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, SectionStatPairs_67, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12);
}

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____goal_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_stats____Unify____goal_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_stats____Compare____goal_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_stats____Compare____goal_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____item_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_stats____Unify____item_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_stats____Compare____item_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_stats____Compare____item_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____section_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_stats____Unify____section_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_stats____Compare____section_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_stats____Compare____section_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
