/*
** Automatically generated from `prog_item_stats.m'
** by the Mercury compiler,
** version rotd-2022-11-02
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
#include "bimap.mih"
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
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
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

static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_item_stats_0_0[24];

static const MR_ConstString parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_item_stats_0_0[24];

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
  MR_Word STATE_VARIABLE_ItemStats_0_37,
  MR_Word * STATE_VARIABLE_ItemStats_38,
  MR_Word STATE_VARIABLE_GoalStats_0_39,
  MR_Word * STATE_VARIABLE_GoalStats_40);

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
  MR_Word ItemGenPragmaInfo_4,
  MR_Word STATE_VARIABLE_ItemStats_0_13,
  MR_Word * STATE_VARIABLE_ItemStats_14);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_decl_pragma_3_p_0(
  MR_Word ItemDeclPragmaInfo_4,
  MR_Word STATE_VARIABLE_ItemStats_0_21,
  MR_Word * STATE_VARIABLE_ItemStats_22);

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

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_2[1][24];

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_3[1][27];

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_4[1][7];




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

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_2[1][24] = {
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
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_3[1][27] = {
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

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
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

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_goal_stats_0_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_goal_stats_0_0
};

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

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_goal_stats_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_goal_stats_0_0
};

static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_goal_stats_0[1] = {
  (MR_Integer) 0
};

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

static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_item_stats_0_0[24] = {
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

static const MR_ConstString parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_item_stats_0_0[24] = {
  (MR_String) "item_num_clauses",
  (MR_String) "item_num_type_defn",
  (MR_String) "item_num_inst_defn",
  (MR_String) "item_num_mode_defn",
  (MR_String) "item_num_pred_decl",
  (MR_String) "item_num_mode_decl",
  (MR_String) "item_num_fim",
  (MR_String) "item_num_foreign_enum",
  (MR_String) "item_num_foreign_export_enum",
  (MR_String) "item_num_pragma_term",
  (MR_String) "item_num_pragma_term2",
  (MR_String) "item_num_pragma_other_decl",
  (MR_String) "item_num_pragma_impl",
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
  INT16_C(24),
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

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_item_stats_0_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_item_stats_0_0
};

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

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_item_stats_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_item_stats_0_0
};

static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_item_stats_0[1] = {
  (MR_Integer) 0
};

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

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_section_stats_0_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_section_stats_0_0
};

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

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_section_stats_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_section_stats_0_0
};

static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_section_stats_0[1] = {
  (MR_Integer) 0
};

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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

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
  MR_Integer CastX_75 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_76 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_75 == CastY_76);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Integer ArgX8_25 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Integer ArgY8_26 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Integer ArgX9_28 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Integer ArgY9_29 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Integer ArgX10_31 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Integer ArgY10_32 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Integer ArgX11_34 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Integer ArgY11_35 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 10))));
    MR_Integer ArgX12_37 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Integer ArgY12_38 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 11))));
    MR_Integer ArgX13_40 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Integer ArgY13_41 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))));
    MR_Integer ArgX14_43 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))));
    MR_Integer ArgY14_44 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13))));
    MR_Integer ArgX15_46 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))));
    MR_Integer ArgY15_47 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 14))));
    MR_Integer ArgX16_49 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 15))));
    MR_Integer ArgY16_50 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 15))));
    MR_Integer ArgX17_52 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 16))));
    MR_Integer ArgY17_53 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 16))));
    MR_Integer ArgX18_55 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 17))));
    MR_Integer ArgY18_56 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 17))));
    MR_Integer ArgX19_58 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 18))));
    MR_Integer ArgY19_59 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 18))));
    MR_Integer ArgX20_61 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 19))));
    MR_Integer ArgY20_62 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 19))));
    MR_Integer ArgX21_64 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 20))));
    MR_Integer ArgY21_65 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 20))));
    MR_Integer ArgX22_67 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 21))));
    MR_Integer ArgY22_68 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 21))));
    MR_Integer ArgX23_70 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 22))));
    MR_Integer ArgY23_71 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 22))));
    MR_Integer ArgX24_73 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 23))));
    MR_Integer ArgY24_74 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 23))));
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
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
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
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
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
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
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
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
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
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
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
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
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
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
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
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
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
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult9_30 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
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
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult10_33 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
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
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult11_36 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
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
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult12_39 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
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
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult13_42 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
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
                                else
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    SubResult14_45 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
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
                                  else
                                  {
                                    succeeded = MR_TRUE;
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      SubResult15_48 = (MR_Integer) 0;
                                      succeeded = MR_TRUE;
                                    }
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
                                    else
                                    {
                                      succeeded = MR_TRUE;
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        SubResult16_51 = (MR_Integer) 0;
                                        succeeded = MR_TRUE;
                                      }
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
                                      else
                                      {
                                        succeeded = MR_TRUE;
                                        succeeded = !(succeeded);
                                        if (succeeded)
                                        {
                                          SubResult17_54 = (MR_Integer) 0;
                                          succeeded = MR_TRUE;
                                        }
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
                                        else
                                        {
                                          succeeded = MR_TRUE;
                                          succeeded = !(succeeded);
                                          if (succeeded)
                                          {
                                            SubResult18_57 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
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
                                          else
                                          {
                                            succeeded = MR_TRUE;
                                            succeeded = !(succeeded);
                                            if (succeeded)
                                            {
                                              SubResult19_60 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
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
                                            else
                                            {
                                              succeeded = MR_TRUE;
                                              succeeded = !(succeeded);
                                              if (succeeded)
                                              {
                                                SubResult20_63 = (MR_Integer) 0;
                                                succeeded = MR_TRUE;
                                              }
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
                                              else
                                              {
                                                succeeded = MR_TRUE;
                                                succeeded = !(succeeded);
                                                if (succeeded)
                                                {
                                                  SubResult21_66 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
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
                                                else
                                                {
                                                  succeeded = MR_TRUE;
                                                  succeeded = !(succeeded);
                                                  if (succeeded)
                                                  {
                                                    SubResult22_69 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
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
                                                  else
                                                  {
                                                    succeeded = MR_TRUE;
                                                    succeeded = !(succeeded);
                                                    if (succeeded)
                                                    {
                                                      SubResult23_72 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
                                                  }
                                                }
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult23_72;
                                                else
                                                {
                                                  succeeded = (ArgX24_73 < ArgY24_74);
                                                  if (succeeded)
                                                    *HeadVar__1_1 = (MR_Integer) 1;
                                                  else
                                                  {
                                                    succeeded = (ArgX24_73 > ArgY24_74);
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

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____item_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_51 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_52 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_51 == CastY_52);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Integer ArgY8_18 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Integer ArgX9_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Integer ArgY9_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Integer ArgX10_21 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Integer ArgY10_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Integer ArgX11_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
    MR_Integer ArgY11_24 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Integer ArgX12_25 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 11))));
    MR_Integer ArgY12_26 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Integer ArgX13_27 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))));
    MR_Integer ArgY13_28 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Integer ArgX14_29 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13))));
    MR_Integer ArgY14_30 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))));
    MR_Integer ArgX15_31 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 14))));
    MR_Integer ArgY15_32 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))));
    MR_Integer ArgX16_33 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 15))));
    MR_Integer ArgY16_34 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 15))));
    MR_Integer ArgX17_35 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 16))));
    MR_Integer ArgY17_36 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 16))));
    MR_Integer ArgX18_37 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 17))));
    MR_Integer ArgY18_38 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 17))));
    MR_Integer ArgX19_39 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 18))));
    MR_Integer ArgY19_40 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 18))));
    MR_Integer ArgX20_41 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 19))));
    MR_Integer ArgY20_42 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 19))));
    MR_Integer ArgX21_43 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 20))));
    MR_Integer ArgY21_44 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 20))));
    MR_Integer ArgX22_45 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 21))));
    MR_Integer ArgY22_46 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 21))));
    MR_Integer ArgX23_47 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 22))));
    MR_Integer ArgY23_48 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 22))));
    MR_Integer ArgX24_49 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 23))));
    MR_Integer ArgY24_50 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 23))));

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
                                                  succeeded = (ArgX24_49 == ArgY24_50);
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Integer ArgX8_25 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Integer ArgY8_26 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Integer ArgX9_28 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Integer ArgY9_29 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Integer ArgX10_31 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Integer ArgY10_32 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Integer ArgX11_34 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Integer ArgY11_35 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 10))));
    MR_Integer ArgX12_37 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Integer ArgY12_38 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 11))));
    MR_Integer ArgX13_40 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Integer ArgY13_41 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))));
    MR_Integer ArgX14_43 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))));
    MR_Integer ArgY14_44 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13))));
    MR_Integer ArgX15_46 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))));
    MR_Integer ArgY15_47 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 14))));
    MR_Integer ArgX16_49 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 15))));
    MR_Integer ArgY16_50 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 15))));
    MR_Integer ArgX17_52 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 16))));
    MR_Integer ArgY17_53 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 16))));
    MR_Integer ArgX18_55 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 17))));
    MR_Integer ArgY18_56 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 17))));
    MR_Integer ArgX19_58 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 18))));
    MR_Integer ArgY19_59 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 18))));
    MR_Integer ArgX20_61 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 19))));
    MR_Integer ArgY20_62 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 19))));
    MR_Integer ArgX21_64 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 20))));
    MR_Integer ArgY21_65 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 20))));
    MR_Integer ArgX22_67 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 21))));
    MR_Integer ArgY22_68 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 21))));
    MR_Integer ArgX23_70 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 22))));
    MR_Integer ArgY23_71 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 22))));
    MR_Integer ArgX24_73 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 23))));
    MR_Integer ArgY24_74 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 23))));
    MR_Integer ArgX25_76 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 24))));
    MR_Integer ArgY25_77 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 24))));
    MR_Integer ArgX26_79 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 25))));
    MR_Integer ArgY26_80 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 25))));
    MR_Integer ArgX27_82 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 26))));
    MR_Integer ArgY27_83 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 26))));
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
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
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
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
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
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
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
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
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
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
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
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
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
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
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
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
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
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult9_30 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
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
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult10_33 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
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
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult11_36 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
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
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult12_39 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
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
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult13_42 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
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
                                else
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    SubResult14_45 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
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
                                  else
                                  {
                                    succeeded = MR_TRUE;
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      SubResult15_48 = (MR_Integer) 0;
                                      succeeded = MR_TRUE;
                                    }
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
                                    else
                                    {
                                      succeeded = MR_TRUE;
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        SubResult16_51 = (MR_Integer) 0;
                                        succeeded = MR_TRUE;
                                      }
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
                                      else
                                      {
                                        succeeded = MR_TRUE;
                                        succeeded = !(succeeded);
                                        if (succeeded)
                                        {
                                          SubResult17_54 = (MR_Integer) 0;
                                          succeeded = MR_TRUE;
                                        }
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
                                        else
                                        {
                                          succeeded = MR_TRUE;
                                          succeeded = !(succeeded);
                                          if (succeeded)
                                          {
                                            SubResult18_57 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
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
                                          else
                                          {
                                            succeeded = MR_TRUE;
                                            succeeded = !(succeeded);
                                            if (succeeded)
                                            {
                                              SubResult19_60 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
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
                                            else
                                            {
                                              succeeded = MR_TRUE;
                                              succeeded = !(succeeded);
                                              if (succeeded)
                                              {
                                                SubResult20_63 = (MR_Integer) 0;
                                                succeeded = MR_TRUE;
                                              }
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
                                              else
                                              {
                                                succeeded = MR_TRUE;
                                                succeeded = !(succeeded);
                                                if (succeeded)
                                                {
                                                  SubResult21_66 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
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
                                                else
                                                {
                                                  succeeded = MR_TRUE;
                                                  succeeded = !(succeeded);
                                                  if (succeeded)
                                                  {
                                                    SubResult22_69 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
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
                                                  else
                                                  {
                                                    succeeded = MR_TRUE;
                                                    succeeded = !(succeeded);
                                                    if (succeeded)
                                                    {
                                                      SubResult23_72 = (MR_Integer) 0;
                                                      succeeded = MR_TRUE;
                                                    }
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
                                                    else
                                                    {
                                                      succeeded = MR_TRUE;
                                                      succeeded = !(succeeded);
                                                      if (succeeded)
                                                      {
                                                        SubResult24_75 = (MR_Integer) 0;
                                                        succeeded = MR_TRUE;
                                                      }
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
                                                      else
                                                      {
                                                        succeeded = MR_TRUE;
                                                        succeeded = !(succeeded);
                                                        if (succeeded)
                                                        {
                                                          SubResult25_78 = (MR_Integer) 0;
                                                          succeeded = MR_TRUE;
                                                        }
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
                                                        else
                                                        {
                                                          succeeded = MR_TRUE;
                                                          succeeded = !(succeeded);
                                                          if (succeeded)
                                                          {
                                                            SubResult26_81 = (MR_Integer) 0;
                                                            succeeded = MR_TRUE;
                                                          }
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Integer ArgY8_18 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Integer ArgX9_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Integer ArgY9_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Integer ArgX10_21 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Integer ArgY10_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Integer ArgX11_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
    MR_Integer ArgY11_24 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Integer ArgX12_25 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 11))));
    MR_Integer ArgY12_26 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Integer ArgX13_27 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))));
    MR_Integer ArgY13_28 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Integer ArgX14_29 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13))));
    MR_Integer ArgY14_30 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))));
    MR_Integer ArgX15_31 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 14))));
    MR_Integer ArgY15_32 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))));
    MR_Integer ArgX16_33 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 15))));
    MR_Integer ArgY16_34 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 15))));
    MR_Integer ArgX17_35 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 16))));
    MR_Integer ArgY17_36 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 16))));
    MR_Integer ArgX18_37 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 17))));
    MR_Integer ArgY18_38 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 17))));
    MR_Integer ArgX19_39 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 18))));
    MR_Integer ArgY19_40 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 18))));
    MR_Integer ArgX20_41 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 19))));
    MR_Integer ArgY20_42 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 19))));
    MR_Integer ArgX21_43 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 20))));
    MR_Integer ArgY21_44 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 20))));
    MR_Integer ArgX22_45 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 21))));
    MR_Integer ArgY22_46 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 21))));
    MR_Integer ArgX23_47 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 22))));
    MR_Integer ArgY23_48 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 22))));
    MR_Integer ArgX24_49 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 23))));
    MR_Integer ArgY24_50 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 23))));
    MR_Integer ArgX25_51 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 24))));
    MR_Integer ArgY25_52 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 24))));
    MR_Integer ArgX26_53 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 25))));
    MR_Integer ArgY26_54 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 25))));
    MR_Integer ArgX27_55 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 26))));
    MR_Integer ArgY27_56 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 26))));

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
  MR_String SectionName_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SectionStats_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word ItemStats_9 = ((MR_Word) ((MR_hl_field(0, SectionStats_7, (MR_Integer) 0))));
  MR_Word GoalStats_10 = ((MR_Word) ((MR_hl_field(0, SectionStats_7, (MR_Integer) 1))));
  MR_Integer Clause_14 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 0))));
  MR_Integer TypeDefn_15 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 1))));
  MR_Integer InstDefn_16 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 2))));
  MR_Integer ModeDefn_17 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 3))));
  MR_Integer PredDecl_18 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 4))));
  MR_Integer ModeDecl_19 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 5))));
  MR_Integer FIM_20 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 6))));
  MR_Integer ForeignEnum_21 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 7))));
  MR_Integer ForeignExportEnum_22 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 8))));
  MR_Integer PragmaTerm_23 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 9))));
  MR_Integer PragmaTerm2_24 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 10))));
  MR_Integer PragmaDecl_25 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 11))));
  MR_Integer PragmaImpl_26 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 12))));
  MR_Integer PragmaUArgs_27 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 13))));
  MR_Integer PragmaExcp_28 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 14))));
  MR_Integer PragmaTrail_29 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 15))));
  MR_Integer PragmaMM_30 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 16))));
  MR_Integer Promise_31 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 17))));
  MR_Integer Typeclass_32 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 18))));
  MR_Integer Instance_33 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 19))));
  MR_Integer Initialise_34 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 20))));
  MR_Integer Finalise_35 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 21))));
  MR_Integer Mutable_36 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 22))));
  MR_Integer TypeRepn_37 = ((MR_Integer) ((MR_hl_field(0, ItemStats_9, (MR_Integer) 23))));

  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_clause", Clause_14);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_type_defn", TypeDefn_15);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_inst_defn", InstDefn_16);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_mode_defn", ModeDefn_17);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pred_decl", PredDecl_18);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_mode_decl", ModeDecl_19);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_fim", FIM_20);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_foreign_enum", ForeignEnum_21);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_foreign_export_enum", ForeignExportEnum_22);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_term", PragmaTerm_23);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_term2", PragmaTerm2_24);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_decl", PragmaDecl_25);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_impl", PragmaImpl_26);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_uargs", PragmaUArgs_27);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_excp", PragmaExcp_28);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_trail", PragmaTrail_29);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_pragma_mm", PragmaMM_30);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_promise", Promise_31);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_typeclass", Typeclass_32);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_instance", Instance_33);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_promise", Promise_31);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_initialise", Initialise_34);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_finalise", Finalise_35);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_mutable", Mutable_36);
  parse_tree__prog_item_stats__write_one_stat_6_p_0(Stream_5, SectionName_6, (MR_String) "item_type_repn", TypeRepn_37);
  parse_tree__prog_item_stats__write_goal_stats_5_p_0(Stream_5, SectionName_6, GoalStats_10);
}

static void MR_CALL 
parse_tree__prog_item_stats__write_goal_stats_5_p_0(
  MR_Word Stream_6,
  MR_String SectionName_7,
  MR_Word GoalStats_8)
{
  MR_Integer Conj_10 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 0))));
  MR_Integer ParConj_11 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 1))));
  MR_Integer True_12 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 2))));
  MR_Integer Disj_13 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 3))));
  MR_Integer Fail_14 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 4))));
  MR_Integer Some_15 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 5))));
  MR_Integer All_16 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 6))));
  MR_Integer SomeStateVars_17 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 7))));
  MR_Integer AllStateVars_18 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 8))));
  MR_Integer PromisePurity_19 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 9))));
  MR_Integer PromiseEqvSolns_20 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 10))));
  MR_Integer PromiseEqvSolnSets_21 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 11))));
  MR_Integer PromiseArbitrary_22 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 12))));
  MR_Integer ReqDetism_23 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 13))));
  MR_Integer ReqComplSwitch_24 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 14))));
  MR_Integer ReqSwitchArmDetism_25 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 15))));
  MR_Integer DisableWarnings_26 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 16))));
  MR_Integer Trace_27 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 17))));
  MR_Integer Atomic_28 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 18))));
  MR_Integer Try_29 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 19))));
  MR_Integer Implies_30 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 20))));
  MR_Integer Equivalent_31 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 21))));
  MR_Integer Not_32 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 22))));
  MR_Integer IfThenElse_33 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 23))));
  MR_Integer Event_34 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 24))));
  MR_Integer Call_35 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 25))));
  MR_Integer Unify_36 = ((MR_Integer) ((MR_hl_field(0, GoalStats_8, (MR_Integer) 26))));

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
      MR_Word Item_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
  MR_Word STATE_VARIABLE_ItemStats_0_37,
  MR_Word * STATE_VARIABLE_ItemStats_38,
  MR_Word STATE_VARIABLE_GoalStats_0_39,
  MR_Word * STATE_VARIABLE_GoalStats_40)
{
  switch (MR_tag((MR_Word) Item_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ItemClauseInfo_9 = (MR_Word) ((MR_Word) (Item_6));
        MR_Word MaybeGoal_14;
        MR_Integer Var_42;
        MR_Integer Var_43 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 0))));
        MR_Integer Var_108 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 1))));
        MR_Integer Var_109 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 2))));
        MR_Integer Var_110 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 3))));
        MR_Integer Var_111 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 4))));
        MR_Integer Var_112 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 5))));
        MR_Integer Var_113 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 6))));
        MR_Integer Var_114 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 7))));
        MR_Integer Var_115 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 8))));
        MR_Integer Var_116 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 9))));
        MR_Integer Var_117 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 10))));
        MR_Integer Var_118 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 11))));
        MR_Integer Var_119 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 12))));
        MR_Integer Var_120 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 13))));
        MR_Integer Var_121 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 14))));
        MR_Integer Var_122 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 15))));
        MR_Integer Var_123 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 16))));
        MR_Integer Var_124 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 17))));
        MR_Integer Var_125 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 18))));
        MR_Integer Var_126 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 19))));
        MR_Integer Var_127 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 20))));
        MR_Integer Var_128 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 21))));
        MR_Integer Var_129 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 22))));
        MR_Integer Var_130 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 23))));

        Var_42 = (MR_Integer) ((MR_Unsigned) Var_43 + (MR_Unsigned) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemStats_38 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_42));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_108));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_109));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_110));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_111));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_112));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_113));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_114));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_115));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_116));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_117));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_118));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_119));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_120));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_121));
          MR_hl_field(0, base, 15) = ((MR_Box) (Var_122));
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_123));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_124));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_125));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_126));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_127));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_128));
          MR_hl_field(0, base, 22) = ((MR_Box) (Var_129));
          MR_hl_field(0, base, 23) = ((MR_Box) (Var_130));
        }
        MaybeGoal_14 = ((MR_Word) ((MR_hl_field(0, ItemClauseInfo_9, (MR_Integer) 4))));
        if (((MR_tag((MR_Word) MaybeGoal_14)) == (MR_Integer) 0))
          *STATE_VARIABLE_GoalStats_40 = STATE_VARIABLE_GoalStats_0_39;
        else
        {
          MR_Word Goal_17 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_14, (MR_Integer) 0))));

          parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(Goal_17, STATE_VARIABLE_GoalStats_0_39, STATE_VARIABLE_GoalStats_40);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Var_59;
        MR_Integer Var_60 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 4))));
        MR_Integer Var_296 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 0))));
        MR_Integer Var_297 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 1))));
        MR_Integer Var_298 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 2))));
        MR_Integer Var_299 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 3))));
        MR_Integer Var_300 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 5))));
        MR_Integer Var_301 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 6))));
        MR_Integer Var_302 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 7))));
        MR_Integer Var_303 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 8))));
        MR_Integer Var_304 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 9))));
        MR_Integer Var_305 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 10))));
        MR_Integer Var_306 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 11))));
        MR_Integer Var_307 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 12))));
        MR_Integer Var_308 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 13))));
        MR_Integer Var_309 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 14))));
        MR_Integer Var_310 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 15))));
        MR_Integer Var_311 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 16))));
        MR_Integer Var_312 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 17))));
        MR_Integer Var_313 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 18))));
        MR_Integer Var_314 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 19))));
        MR_Integer Var_315 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 20))));
        MR_Integer Var_316 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 21))));
        MR_Integer Var_317 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 22))));
        MR_Integer Var_318 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 23))));

        Var_59 = (MR_Integer) ((MR_Unsigned) Var_60 + (MR_Unsigned) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemStats_38 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_296));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_297));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_298));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_299));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_59));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_300));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_301));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_302));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_303));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_304));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_305));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_306));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_307));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_308));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_309));
          MR_hl_field(0, base, 15) = ((MR_Box) (Var_310));
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_311));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_312));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_313));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_314));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_315));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_316));
          MR_hl_field(0, base, 22) = ((MR_Box) (Var_317));
          MR_hl_field(0, base, 23) = ((MR_Box) (Var_318));
        }
        *STATE_VARIABLE_GoalStats_40 = STATE_VARIABLE_GoalStats_0_39;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Var_63;
        MR_Integer Var_64 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 5))));
        MR_Integer Var_343 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 0))));
        MR_Integer Var_344 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 1))));
        MR_Integer Var_345 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 2))));
        MR_Integer Var_346 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 3))));
        MR_Integer Var_347 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 4))));
        MR_Integer Var_348 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 6))));
        MR_Integer Var_349 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 7))));
        MR_Integer Var_350 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 8))));
        MR_Integer Var_351 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 9))));
        MR_Integer Var_352 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 10))));
        MR_Integer Var_353 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 11))));
        MR_Integer Var_354 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 12))));
        MR_Integer Var_355 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 13))));
        MR_Integer Var_356 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 14))));
        MR_Integer Var_357 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 15))));
        MR_Integer Var_358 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 16))));
        MR_Integer Var_359 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 17))));
        MR_Integer Var_360 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 18))));
        MR_Integer Var_361 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 19))));
        MR_Integer Var_362 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 20))));
        MR_Integer Var_363 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 21))));
        MR_Integer Var_364 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 22))));
        MR_Integer Var_365 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 23))));

        Var_63 = (MR_Integer) ((MR_Unsigned) Var_64 + (MR_Unsigned) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemStats_38 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_343));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_344));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_345));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_346));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_347));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_63));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_348));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_349));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_350));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_351));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_352));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_353));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_354));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_355));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_356));
          MR_hl_field(0, base, 15) = ((MR_Box) (Var_357));
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_358));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_359));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_360));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_361));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_362));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_363));
          MR_hl_field(0, base, 22) = ((MR_Box) (Var_364));
          MR_hl_field(0, base, 23) = ((MR_Box) (Var_365));
        }
        *STATE_VARIABLE_GoalStats_40 = STATE_VARIABLE_GoalStats_0_39;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Item_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Var_67;
            MR_Integer Var_68 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 7))));
            MR_Integer Var_390 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 0))));
            MR_Integer Var_391 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 1))));
            MR_Integer Var_392 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 2))));
            MR_Integer Var_393 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 3))));
            MR_Integer Var_394 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 4))));
            MR_Integer Var_395 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 5))));
            MR_Integer Var_396 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 6))));
            MR_Integer Var_397 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 8))));
            MR_Integer Var_398 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 9))));
            MR_Integer Var_399 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 10))));
            MR_Integer Var_400 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 11))));
            MR_Integer Var_401 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 12))));
            MR_Integer Var_402 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 13))));
            MR_Integer Var_403 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 14))));
            MR_Integer Var_404 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 15))));
            MR_Integer Var_405 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 16))));
            MR_Integer Var_406 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 17))));
            MR_Integer Var_407 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 18))));
            MR_Integer Var_408 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 19))));
            MR_Integer Var_409 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 20))));
            MR_Integer Var_410 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 21))));
            MR_Integer Var_411 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 22))));
            MR_Integer Var_412 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 23))));

            Var_67 = (MR_Integer) ((MR_Unsigned) Var_68 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_38 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_390));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_391));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_392));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_393));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_394));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_395));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_396));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_67));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_397));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_398));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_399));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_400));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_401));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_402));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_403));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_404));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_405));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_406));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_407));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_408));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_409));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_410));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_411));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_412));
            }
            *STATE_VARIABLE_GoalStats_40 = STATE_VARIABLE_GoalStats_0_39;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_71;
            MR_Integer Var_72 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 8))));
            MR_Integer Var_437 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 0))));
            MR_Integer Var_438 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 1))));
            MR_Integer Var_439 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 2))));
            MR_Integer Var_440 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 3))));
            MR_Integer Var_441 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 4))));
            MR_Integer Var_442 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 5))));
            MR_Integer Var_443 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 6))));
            MR_Integer Var_444 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 7))));
            MR_Integer Var_445 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 9))));
            MR_Integer Var_446 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 10))));
            MR_Integer Var_447 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 11))));
            MR_Integer Var_448 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 12))));
            MR_Integer Var_449 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 13))));
            MR_Integer Var_450 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 14))));
            MR_Integer Var_451 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 15))));
            MR_Integer Var_452 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 16))));
            MR_Integer Var_453 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 17))));
            MR_Integer Var_454 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 18))));
            MR_Integer Var_455 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 19))));
            MR_Integer Var_456 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 20))));
            MR_Integer Var_457 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 21))));
            MR_Integer Var_458 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 22))));
            MR_Integer Var_459 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 23))));

            Var_71 = (MR_Integer) ((MR_Unsigned) Var_72 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_38 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_437));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_438));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_439));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_440));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_441));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_442));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_443));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_444));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_71));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_445));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_446));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_447));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_448));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_449));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_450));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_451));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_452));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_453));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_454));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_455));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_456));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_457));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_458));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_459));
            }
            *STATE_VARIABLE_GoalStats_40 = STATE_VARIABLE_GoalStats_0_39;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_81;
            MR_Integer Var_82 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 17))));
            MR_Integer Var_531 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 0))));
            MR_Integer Var_532 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 1))));
            MR_Integer Var_533 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 2))));
            MR_Integer Var_534 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 3))));
            MR_Integer Var_535 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 4))));
            MR_Integer Var_536 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 5))));
            MR_Integer Var_537 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 6))));
            MR_Integer Var_538 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 7))));
            MR_Integer Var_539 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 8))));
            MR_Integer Var_540 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 9))));
            MR_Integer Var_541 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 10))));
            MR_Integer Var_542 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 11))));
            MR_Integer Var_543 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 12))));
            MR_Integer Var_544 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 13))));
            MR_Integer Var_545 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 14))));
            MR_Integer Var_546 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 15))));
            MR_Integer Var_547 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 16))));
            MR_Integer Var_548 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 18))));
            MR_Integer Var_549 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 19))));
            MR_Integer Var_550 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 20))));
            MR_Integer Var_551 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 21))));
            MR_Integer Var_552 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 22))));
            MR_Integer Var_553 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 23))));

            Var_81 = (MR_Integer) ((MR_Unsigned) Var_82 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_38 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_531));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_532));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_533));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_534));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_535));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_536));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_537));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_538));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_539));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_540));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_541));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_542));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_543));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_544));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_545));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_546));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_547));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_81));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_548));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_549));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_550));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_551));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_552));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_553));
            }
            *STATE_VARIABLE_GoalStats_40 = STATE_VARIABLE_GoalStats_0_39;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer Var_85;
            MR_Integer Var_86 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 18))));
            MR_Integer Var_578 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 0))));
            MR_Integer Var_579 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 1))));
            MR_Integer Var_580 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 2))));
            MR_Integer Var_581 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 3))));
            MR_Integer Var_582 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 4))));
            MR_Integer Var_583 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 5))));
            MR_Integer Var_584 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 6))));
            MR_Integer Var_585 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 7))));
            MR_Integer Var_586 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 8))));
            MR_Integer Var_587 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 9))));
            MR_Integer Var_588 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 10))));
            MR_Integer Var_589 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 11))));
            MR_Integer Var_590 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 12))));
            MR_Integer Var_591 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 13))));
            MR_Integer Var_592 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 14))));
            MR_Integer Var_593 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 15))));
            MR_Integer Var_594 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 16))));
            MR_Integer Var_595 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 17))));
            MR_Integer Var_596 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 19))));
            MR_Integer Var_597 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 20))));
            MR_Integer Var_598 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 21))));
            MR_Integer Var_599 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 22))));
            MR_Integer Var_600 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 23))));

            Var_85 = (MR_Integer) ((MR_Unsigned) Var_86 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_38 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_578));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_579));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_580));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_581));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_582));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_583));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_584));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_585));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_586));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_587));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_588));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_589));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_590));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_591));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_592));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_593));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_594));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_595));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_85));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_596));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_597));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_598));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_599));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_600));
            }
            *STATE_VARIABLE_GoalStats_40 = STATE_VARIABLE_GoalStats_0_39;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Integer Var_89;
            MR_Integer Var_90 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 19))));
            MR_Integer Var_625 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 0))));
            MR_Integer Var_626 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 1))));
            MR_Integer Var_627 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 2))));
            MR_Integer Var_628 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 3))));
            MR_Integer Var_629 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 4))));
            MR_Integer Var_630 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 5))));
            MR_Integer Var_631 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 6))));
            MR_Integer Var_632 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 7))));
            MR_Integer Var_633 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 8))));
            MR_Integer Var_634 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 9))));
            MR_Integer Var_635 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 10))));
            MR_Integer Var_636 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 11))));
            MR_Integer Var_637 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 12))));
            MR_Integer Var_638 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 13))));
            MR_Integer Var_639 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 14))));
            MR_Integer Var_640 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 15))));
            MR_Integer Var_641 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 16))));
            MR_Integer Var_642 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 17))));
            MR_Integer Var_643 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 18))));
            MR_Integer Var_644 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 20))));
            MR_Integer Var_645 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 21))));
            MR_Integer Var_646 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 22))));
            MR_Integer Var_647 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 23))));

            Var_89 = (MR_Integer) ((MR_Unsigned) Var_90 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_38 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_625));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_626));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_627));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_628));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_629));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_630));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_631));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_632));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_633));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_634));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_635));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_636));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_637));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_638));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_639));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_640));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_641));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_642));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_643));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_89));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_644));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_645));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_646));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_647));
            }
            *STATE_VARIABLE_GoalStats_40 = STATE_VARIABLE_GoalStats_0_39;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Integer Var_93;
            MR_Integer Var_94 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 20))));
            MR_Integer Var_672 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 0))));
            MR_Integer Var_673 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 1))));
            MR_Integer Var_674 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 2))));
            MR_Integer Var_675 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 3))));
            MR_Integer Var_676 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 4))));
            MR_Integer Var_677 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 5))));
            MR_Integer Var_678 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 6))));
            MR_Integer Var_679 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 7))));
            MR_Integer Var_680 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 8))));
            MR_Integer Var_681 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 9))));
            MR_Integer Var_682 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 10))));
            MR_Integer Var_683 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 11))));
            MR_Integer Var_684 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 12))));
            MR_Integer Var_685 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 13))));
            MR_Integer Var_686 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 14))));
            MR_Integer Var_687 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 15))));
            MR_Integer Var_688 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 16))));
            MR_Integer Var_689 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 17))));
            MR_Integer Var_690 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 18))));
            MR_Integer Var_691 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 19))));
            MR_Integer Var_692 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 21))));
            MR_Integer Var_693 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 22))));
            MR_Integer Var_694 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 23))));

            Var_93 = (MR_Integer) ((MR_Unsigned) Var_94 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_38 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_672));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_673));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_674));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_675));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_676));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_677));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_678));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_679));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_680));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_681));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_682));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_683));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_684));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_685));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_686));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_687));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_688));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_689));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_690));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_691));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_93));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_692));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_693));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_694));
            }
            *STATE_VARIABLE_GoalStats_40 = STATE_VARIABLE_GoalStats_0_39;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Integer Var_97;
            MR_Integer Var_98 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 21))));
            MR_Integer Var_719 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 0))));
            MR_Integer Var_720 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 1))));
            MR_Integer Var_721 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 2))));
            MR_Integer Var_722 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 3))));
            MR_Integer Var_723 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 4))));
            MR_Integer Var_724 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 5))));
            MR_Integer Var_725 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 6))));
            MR_Integer Var_726 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 7))));
            MR_Integer Var_727 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 8))));
            MR_Integer Var_728 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 9))));
            MR_Integer Var_729 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 10))));
            MR_Integer Var_730 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 11))));
            MR_Integer Var_731 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 12))));
            MR_Integer Var_732 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 13))));
            MR_Integer Var_733 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 14))));
            MR_Integer Var_734 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 15))));
            MR_Integer Var_735 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 16))));
            MR_Integer Var_736 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 17))));
            MR_Integer Var_737 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 18))));
            MR_Integer Var_738 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 19))));
            MR_Integer Var_739 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 20))));
            MR_Integer Var_740 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 22))));
            MR_Integer Var_741 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 23))));

            Var_97 = (MR_Integer) ((MR_Unsigned) Var_98 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_38 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_719));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_720));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_721));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_722));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_723));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_724));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_725));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_726));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_727));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_728));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_729));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_730));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_731));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_732));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_733));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_734));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_735));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_736));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_737));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_738));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_739));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_97));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_740));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_741));
            }
            *STATE_VARIABLE_GoalStats_40 = STATE_VARIABLE_GoalStats_0_39;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Integer Var_101;
            MR_Integer Var_102 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 22))));
            MR_Integer Var_766 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 0))));
            MR_Integer Var_767 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 1))));
            MR_Integer Var_768 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 2))));
            MR_Integer Var_769 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 3))));
            MR_Integer Var_770 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 4))));
            MR_Integer Var_771 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 5))));
            MR_Integer Var_772 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 6))));
            MR_Integer Var_773 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 7))));
            MR_Integer Var_774 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 8))));
            MR_Integer Var_775 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 9))));
            MR_Integer Var_776 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 10))));
            MR_Integer Var_777 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 11))));
            MR_Integer Var_778 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 12))));
            MR_Integer Var_779 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 13))));
            MR_Integer Var_780 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 14))));
            MR_Integer Var_781 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 15))));
            MR_Integer Var_782 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 16))));
            MR_Integer Var_783 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 17))));
            MR_Integer Var_784 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 18))));
            MR_Integer Var_785 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 19))));
            MR_Integer Var_786 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 20))));
            MR_Integer Var_787 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 21))));
            MR_Integer Var_788 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 23))));

            Var_101 = (MR_Integer) ((MR_Unsigned) Var_102 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_38 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_766));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_767));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_768));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_769));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_770));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_771));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_772));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_773));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_774));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_775));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_776));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_777));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_778));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_779));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_780));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_781));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_782));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_783));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_784));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_785));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_786));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_787));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_101));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_788));
            }
            *STATE_VARIABLE_GoalStats_40 = STATE_VARIABLE_GoalStats_0_39;
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Integer Var_47;
            MR_Integer Var_48 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 1))));
            MR_Integer Var_155 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 0))));
            MR_Integer Var_156 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 2))));
            MR_Integer Var_157 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 3))));
            MR_Integer Var_158 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 4))));
            MR_Integer Var_159 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 5))));
            MR_Integer Var_160 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 6))));
            MR_Integer Var_161 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 7))));
            MR_Integer Var_162 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 8))));
            MR_Integer Var_163 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 9))));
            MR_Integer Var_164 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 10))));
            MR_Integer Var_165 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 11))));
            MR_Integer Var_166 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 12))));
            MR_Integer Var_167 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 13))));
            MR_Integer Var_168 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 14))));
            MR_Integer Var_169 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 15))));
            MR_Integer Var_170 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 16))));
            MR_Integer Var_171 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 17))));
            MR_Integer Var_172 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 18))));
            MR_Integer Var_173 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 19))));
            MR_Integer Var_174 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 20))));
            MR_Integer Var_175 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 21))));
            MR_Integer Var_176 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 22))));
            MR_Integer Var_177 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 23))));

            Var_47 = (MR_Integer) ((MR_Unsigned) Var_48 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_38 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_155));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_47));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_156));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_157));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_158));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_159));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_160));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_161));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_162));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_163));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_164));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_165));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_166));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_167));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_168));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_169));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_170));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_171));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_172));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_173));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_174));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_175));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_176));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_177));
            }
            *STATE_VARIABLE_GoalStats_40 = STATE_VARIABLE_GoalStats_0_39;
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Integer Var_51;
            MR_Integer Var_52 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 2))));
            MR_Integer Var_202 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 0))));
            MR_Integer Var_203 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 1))));
            MR_Integer Var_204 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 3))));
            MR_Integer Var_205 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 4))));
            MR_Integer Var_206 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 5))));
            MR_Integer Var_207 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 6))));
            MR_Integer Var_208 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 7))));
            MR_Integer Var_209 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 8))));
            MR_Integer Var_210 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 9))));
            MR_Integer Var_211 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 10))));
            MR_Integer Var_212 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 11))));
            MR_Integer Var_213 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 12))));
            MR_Integer Var_214 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 13))));
            MR_Integer Var_215 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 14))));
            MR_Integer Var_216 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 15))));
            MR_Integer Var_217 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 16))));
            MR_Integer Var_218 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 17))));
            MR_Integer Var_219 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 18))));
            MR_Integer Var_220 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 19))));
            MR_Integer Var_221 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 20))));
            MR_Integer Var_222 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 21))));
            MR_Integer Var_223 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 22))));
            MR_Integer Var_224 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 23))));

            Var_51 = (MR_Integer) ((MR_Unsigned) Var_52 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_38 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_202));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_203));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_51));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_204));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_205));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_206));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_207));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_208));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_209));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_210));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_211));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_212));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_213));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_214));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_215));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_216));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_217));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_218));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_219));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_220));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_221));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_222));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_223));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_224));
            }
            *STATE_VARIABLE_GoalStats_40 = STATE_VARIABLE_GoalStats_0_39;
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Integer Var_55;
            MR_Integer Var_56 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 3))));
            MR_Integer Var_249 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 0))));
            MR_Integer Var_250 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 1))));
            MR_Integer Var_251 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 2))));
            MR_Integer Var_252 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 4))));
            MR_Integer Var_253 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 5))));
            MR_Integer Var_254 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 6))));
            MR_Integer Var_255 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 7))));
            MR_Integer Var_256 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 8))));
            MR_Integer Var_257 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 9))));
            MR_Integer Var_258 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 10))));
            MR_Integer Var_259 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 11))));
            MR_Integer Var_260 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 12))));
            MR_Integer Var_261 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 13))));
            MR_Integer Var_262 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 14))));
            MR_Integer Var_263 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 15))));
            MR_Integer Var_264 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 16))));
            MR_Integer Var_265 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 17))));
            MR_Integer Var_266 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 18))));
            MR_Integer Var_267 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 19))));
            MR_Integer Var_268 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 20))));
            MR_Integer Var_269 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 21))));
            MR_Integer Var_270 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 22))));
            MR_Integer Var_271 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 23))));

            Var_55 = (MR_Integer) ((MR_Unsigned) Var_56 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_38 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_249));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_250));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_251));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_55));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_252));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_253));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_254));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_255));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_256));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_257));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_258));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_259));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_260));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_261));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_262));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_263));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_264));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_265));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_266));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_267));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_268));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_269));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_270));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_271));
            }
            *STATE_VARIABLE_GoalStats_40 = STATE_VARIABLE_GoalStats_0_39;
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word ItemDeclPragmaInfo_27 = ((MR_Word) ((MR_hl_field(3, Item_6, (MR_Integer) 1))));

            parse_tree__prog_item_stats__gather_stats_in_item_decl_pragma_3_p_0(ItemDeclPragmaInfo_27, STATE_VARIABLE_ItemStats_0_37, STATE_VARIABLE_ItemStats_38);
            *STATE_VARIABLE_GoalStats_40 = STATE_VARIABLE_GoalStats_0_39;
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Integer Var_76;
            MR_Integer Var_77 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 12))));
            MR_Integer Var_484 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 0))));
            MR_Integer Var_485 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 1))));
            MR_Integer Var_486 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 2))));
            MR_Integer Var_487 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 3))));
            MR_Integer Var_488 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 4))));
            MR_Integer Var_489 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 5))));
            MR_Integer Var_490 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 6))));
            MR_Integer Var_491 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 7))));
            MR_Integer Var_492 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 8))));
            MR_Integer Var_493 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 9))));
            MR_Integer Var_494 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 10))));
            MR_Integer Var_495 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 11))));
            MR_Integer Var_496 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 13))));
            MR_Integer Var_497 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 14))));
            MR_Integer Var_498 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 15))));
            MR_Integer Var_499 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 16))));
            MR_Integer Var_500 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 17))));
            MR_Integer Var_501 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 18))));
            MR_Integer Var_502 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 19))));
            MR_Integer Var_503 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 20))));
            MR_Integer Var_504 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 21))));
            MR_Integer Var_505 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 22))));
            MR_Integer Var_506 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 23))));

            Var_76 = (MR_Integer) ((MR_Unsigned) Var_77 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_38 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_484));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_485));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_486));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_487));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_488));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_489));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_490));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_491));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_492));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_493));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_494));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_495));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_76));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_496));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_497));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_498));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_499));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_500));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_501));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_502));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_503));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_504));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_505));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_506));
            }
            *STATE_VARIABLE_GoalStats_40 = STATE_VARIABLE_GoalStats_0_39;
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word ItemGenPragmaInfo_29 = ((MR_Word) ((MR_hl_field(3, Item_6, (MR_Integer) 1))));

            parse_tree__prog_item_stats__gather_stats_in_item_gen_pragma_3_p_0(ItemGenPragmaInfo_29, STATE_VARIABLE_ItemStats_0_37, STATE_VARIABLE_ItemStats_38);
            *STATE_VARIABLE_GoalStats_40 = STATE_VARIABLE_GoalStats_0_39;
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Integer Var_105;
            MR_Integer Var_106 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 23))));
            MR_Integer Var_813 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 0))));
            MR_Integer Var_814 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 1))));
            MR_Integer Var_815 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 2))));
            MR_Integer Var_816 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 3))));
            MR_Integer Var_817 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 4))));
            MR_Integer Var_818 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 5))));
            MR_Integer Var_819 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 6))));
            MR_Integer Var_820 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 7))));
            MR_Integer Var_821 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 8))));
            MR_Integer Var_822 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 9))));
            MR_Integer Var_823 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 10))));
            MR_Integer Var_824 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 11))));
            MR_Integer Var_825 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 12))));
            MR_Integer Var_826 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 13))));
            MR_Integer Var_827 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 14))));
            MR_Integer Var_828 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 15))));
            MR_Integer Var_829 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 16))));
            MR_Integer Var_830 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 17))));
            MR_Integer Var_831 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 18))));
            MR_Integer Var_832 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 19))));
            MR_Integer Var_833 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 20))));
            MR_Integer Var_834 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 21))));
            MR_Integer Var_835 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_37, (MR_Integer) 22))));

            Var_105 = (MR_Integer) ((MR_Unsigned) Var_106 + (MR_Unsigned) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_38 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_813));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_814));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_815));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_816));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_817));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_818));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_819));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_820));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_821));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_822));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_823));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_824));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_825));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_826));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_827));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_828));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_829));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_830));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_831));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_832));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_833));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_834));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_835));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_105));
            }
            *STATE_VARIABLE_GoalStats_40 = STATE_VARIABLE_GoalStats_0_39;
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
    MR_Integer Var_1760 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 26))));
    MR_Integer Var_1761 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 25))));
    MR_Integer Var_1762 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 24))));
    MR_Integer Var_1763 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 23))));
    MR_Integer Var_1764 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 22))));
    MR_Integer Var_1765 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 21))));
    MR_Integer Var_1766 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 20))));
    MR_Integer Var_1767 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 19))));
    MR_Integer Var_1768 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 18))));
    MR_Integer Var_1769 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 17))));
    MR_Integer Var_1770 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 16))));
    MR_Integer Var_1771 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 15))));
    MR_Integer Var_1772 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 14))));
    MR_Integer Var_1773 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 13))));
    MR_Integer Var_1774 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 12))));
    MR_Integer Var_1775 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 11))));
    MR_Integer Var_1776 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 10))));
    MR_Integer Var_1777 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 9))));
    MR_Integer Var_1778 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 8))));
    MR_Integer Var_1779 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 7))));
    MR_Integer Var_1780 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 6))));
    MR_Integer Var_1781 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 5))));
    MR_Integer Var_1782 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 4))));
    MR_Integer Var_1783 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 3))));
    MR_Integer Var_1784 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 2))));
    MR_Integer Var_1785 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 1))));
    MR_Integer Var_1786 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_GoalStats_0_87, (MR_Integer) 0))));

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
          MR_Word SubGoalA_7 = ((MR_Word) ((MR_hl_field(2, Goal_4, (MR_Integer) 1))));
          MR_Word SubGoalsB_8 = ((MR_Word) ((MR_hl_field(2, Goal_4, (MR_Integer) 2))));
          MR_Word STATE_VARIABLE_GoalStats_89_89;
          MR_Integer Var_90 = (MR_Integer) ((MR_Unsigned) Var_1786 + (MR_Unsigned) 1);
          MR_Word STATE_VARIABLE_GoalStats_93_93;

          {
            STATE_VARIABLE_GoalStats_89_89 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 0) = ((MR_Box) (Var_90));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 1) = ((MR_Box) (Var_1785));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 2) = ((MR_Box) (Var_1784));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 3) = ((MR_Box) (Var_1783));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 4) = ((MR_Box) (Var_1782));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 5) = ((MR_Box) (Var_1781));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 6) = ((MR_Box) (Var_1780));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 7) = ((MR_Box) (Var_1779));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 8) = ((MR_Box) (Var_1778));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 9) = ((MR_Box) (Var_1777));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 10) = ((MR_Box) (Var_1776));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 11) = ((MR_Box) (Var_1775));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 12) = ((MR_Box) (Var_1774));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 13) = ((MR_Box) (Var_1773));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 14) = ((MR_Box) (Var_1772));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 15) = ((MR_Box) (Var_1771));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 16) = ((MR_Box) (Var_1770));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 17) = ((MR_Box) (Var_1769));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 18) = ((MR_Box) (Var_1768));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 19) = ((MR_Box) (Var_1767));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 20) = ((MR_Box) (Var_1766));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 21) = ((MR_Box) (Var_1765));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 22) = ((MR_Box) (Var_1764));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 23) = ((MR_Box) (Var_1763));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 24) = ((MR_Box) (Var_1762));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 25) = ((MR_Box) (Var_1761));
            MR_hl_field(0, STATE_VARIABLE_GoalStats_89_89, 26) = ((MR_Box) (Var_1760));
          }
          parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(SubGoalA_7, STATE_VARIABLE_GoalStats_89_89, &STATE_VARIABLE_GoalStats_93_93);
          parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(SubGoalsB_8, STATE_VARIABLE_GoalStats_93_93, STATE_VARIABLE_GoalStats_88);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Goal_4, (MR_Integer) 0))))) {
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
              MR_Word CondGoal_75 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_GoalStats_211_211;
              MR_Integer Var_212 = (MR_Integer) ((MR_Unsigned) Var_1763 + (MR_Unsigned) 1);
              MR_Word STATE_VARIABLE_GoalStats_215_215;
              MR_Word STATE_VARIABLE_GoalStats_216_216;
              MR_Word ThenGoal_246 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 5))));
              MR_Word ElseGoal_247 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_211_211 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 23) = ((MR_Box) (Var_212));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_211_211, 26) = ((MR_Box) (Var_1760));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(CondGoal_75, STATE_VARIABLE_GoalStats_211_211, &STATE_VARIABLE_GoalStats_215_215);
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(ThenGoal_246, STATE_VARIABLE_GoalStats_215_215, &STATE_VARIABLE_GoalStats_216_216);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = ElseGoal_247;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_216_216;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoal1_12 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 2))));
              MR_Word SubGoal2_13 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Word SubGoals_14 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_GoalStats_105_105;
              MR_Integer Var_106 = (MR_Integer) ((MR_Unsigned) Var_1783 + (MR_Unsigned) 1);
              MR_Word STATE_VARIABLE_GoalStats_109_109;
              MR_Word STATE_VARIABLE_GoalStats_110_110;

              {
                STATE_VARIABLE_GoalStats_105_105 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 3) = ((MR_Box) (Var_106));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_105_105, 26) = ((MR_Box) (Var_1760));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(SubGoal1_12, STATE_VARIABLE_GoalStats_105_105, &STATE_VARIABLE_GoalStats_109_109);
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(SubGoal2_13, STATE_VARIABLE_GoalStats_109_109, &STATE_VARIABLE_GoalStats_110_110);
              parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(SubGoals_14, STATE_VARIABLE_GoalStats_110_110, STATE_VARIABLE_GoalStats_88);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word STATE_VARIABLE_GoalStats_206_206;
              MR_Integer Var_207 = (MR_Integer) ((MR_Unsigned) Var_1764 + (MR_Unsigned) 1);
              MR_Word SubGoal_245 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_206_206 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 22) = ((MR_Box) (Var_207));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_206_206, 26) = ((MR_Box) (Var_1760));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_245;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_206_206;
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
              MR_Word STATE_VARIABLE_GoalStats_95_95;
              MR_Integer Var_96 = (MR_Integer) ((MR_Unsigned) Var_1785 + (MR_Unsigned) 1);
              MR_Word STATE_VARIABLE_GoalStats_99_99;
              MR_Word SubGoalA_230 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 2))));
              MR_Word SubGoalsB_231 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));

              {
                STATE_VARIABLE_GoalStats_95_95 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 1) = ((MR_Box) (Var_96));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_95_95, 26) = ((MR_Box) (Var_1760));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(SubGoalA_230, STATE_VARIABLE_GoalStats_95_95, &STATE_VARIABLE_GoalStats_99_99);
              parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(SubGoalsB_231, STATE_VARIABLE_GoalStats_99_99, STATE_VARIABLE_GoalStats_88);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_16 = ((((MR_Unsigned) ((MR_hl_field(3, Goal_4, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word QuantVarsKind_17 = ((MR_Unsigned) ((MR_hl_field(3, Goal_4, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word SubGoal_20 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_GoalStats_116_116;
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
                          STATE_VARIABLE_GoalStats_116_116 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 0) = ((MR_Box) (Var_1786));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 1) = ((MR_Box) (Var_1785));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 2) = ((MR_Box) (Var_1784));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 3) = ((MR_Box) (Var_1783));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 4) = ((MR_Box) (Var_1782));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 5) = ((MR_Box) (Var_1781));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 6) = ((MR_Box) (Var_125));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 7) = ((MR_Box) (Var_1779));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 8) = ((MR_Box) (Var_1778));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 9) = ((MR_Box) (Var_1777));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 10) = ((MR_Box) (Var_1776));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 11) = ((MR_Box) (Var_1775));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 12) = ((MR_Box) (Var_1774));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 13) = ((MR_Box) (Var_1773));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 14) = ((MR_Box) (Var_1772));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 15) = ((MR_Box) (Var_1771));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 16) = ((MR_Box) (Var_1770));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 17) = ((MR_Box) (Var_1769));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 18) = ((MR_Box) (Var_1768));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 19) = ((MR_Box) (Var_1767));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 20) = ((MR_Box) (Var_1766));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 21) = ((MR_Box) (Var_1765));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 22) = ((MR_Box) (Var_1764));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 23) = ((MR_Box) (Var_1763));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 24) = ((MR_Box) (Var_1762));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 25) = ((MR_Box) (Var_1761));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 26) = ((MR_Box) (Var_1760));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer Var_129 = (MR_Integer) ((MR_Unsigned) Var_1778 + (MR_Unsigned) 1);

                        {
                          STATE_VARIABLE_GoalStats_116_116 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 0) = ((MR_Box) (Var_1786));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 1) = ((MR_Box) (Var_1785));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 2) = ((MR_Box) (Var_1784));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 3) = ((MR_Box) (Var_1783));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 4) = ((MR_Box) (Var_1782));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 5) = ((MR_Box) (Var_1781));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 6) = ((MR_Box) (Var_1780));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 7) = ((MR_Box) (Var_1779));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 8) = ((MR_Box) (Var_129));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 9) = ((MR_Box) (Var_1777));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 10) = ((MR_Box) (Var_1776));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 11) = ((MR_Box) (Var_1775));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 12) = ((MR_Box) (Var_1774));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 13) = ((MR_Box) (Var_1773));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 14) = ((MR_Box) (Var_1772));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 15) = ((MR_Box) (Var_1771));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 16) = ((MR_Box) (Var_1770));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 17) = ((MR_Box) (Var_1769));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 18) = ((MR_Box) (Var_1768));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 19) = ((MR_Box) (Var_1767));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 20) = ((MR_Box) (Var_1766));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 21) = ((MR_Box) (Var_1765));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 22) = ((MR_Box) (Var_1764));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 23) = ((MR_Box) (Var_1763));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 24) = ((MR_Box) (Var_1762));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 25) = ((MR_Box) (Var_1761));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 26) = ((MR_Box) (Var_1760));
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
                          STATE_VARIABLE_GoalStats_116_116 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 0) = ((MR_Box) (Var_1786));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 1) = ((MR_Box) (Var_1785));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 2) = ((MR_Box) (Var_1784));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 3) = ((MR_Box) (Var_1783));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 4) = ((MR_Box) (Var_1782));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 5) = ((MR_Box) (Var_117));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 6) = ((MR_Box) (Var_1780));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 7) = ((MR_Box) (Var_1779));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 8) = ((MR_Box) (Var_1778));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 9) = ((MR_Box) (Var_1777));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 10) = ((MR_Box) (Var_1776));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 11) = ((MR_Box) (Var_1775));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 12) = ((MR_Box) (Var_1774));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 13) = ((MR_Box) (Var_1773));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 14) = ((MR_Box) (Var_1772));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 15) = ((MR_Box) (Var_1771));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 16) = ((MR_Box) (Var_1770));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 17) = ((MR_Box) (Var_1769));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 18) = ((MR_Box) (Var_1768));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 19) = ((MR_Box) (Var_1767));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 20) = ((MR_Box) (Var_1766));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 21) = ((MR_Box) (Var_1765));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 22) = ((MR_Box) (Var_1764));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 23) = ((MR_Box) (Var_1763));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 24) = ((MR_Box) (Var_1762));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 25) = ((MR_Box) (Var_1761));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 26) = ((MR_Box) (Var_1760));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer Var_121 = (MR_Integer) ((MR_Unsigned) Var_1779 + (MR_Unsigned) 1);

                        {
                          STATE_VARIABLE_GoalStats_116_116 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 0) = ((MR_Box) (Var_1786));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 1) = ((MR_Box) (Var_1785));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 2) = ((MR_Box) (Var_1784));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 3) = ((MR_Box) (Var_1783));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 4) = ((MR_Box) (Var_1782));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 5) = ((MR_Box) (Var_1781));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 6) = ((MR_Box) (Var_1780));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 7) = ((MR_Box) (Var_121));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 8) = ((MR_Box) (Var_1778));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 9) = ((MR_Box) (Var_1777));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 10) = ((MR_Box) (Var_1776));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 11) = ((MR_Box) (Var_1775));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 12) = ((MR_Box) (Var_1774));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 13) = ((MR_Box) (Var_1773));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 14) = ((MR_Box) (Var_1772));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 15) = ((MR_Box) (Var_1771));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 16) = ((MR_Box) (Var_1770));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 17) = ((MR_Box) (Var_1769));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 18) = ((MR_Box) (Var_1768));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 19) = ((MR_Box) (Var_1767));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 20) = ((MR_Box) (Var_1766));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 21) = ((MR_Box) (Var_1765));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 22) = ((MR_Box) (Var_1764));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 23) = ((MR_Box) (Var_1763));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 24) = ((MR_Box) (Var_1762));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 25) = ((MR_Box) (Var_1761));
                          MR_hl_field(0, STATE_VARIABLE_GoalStats_116_116, 26) = ((MR_Box) (Var_1760));
                        }
                      }
                      break;
                  }
                  break;
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_20;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_116_116;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word STATE_VARIABLE_GoalStats_133_133;
              MR_Integer Var_134 = (MR_Integer) ((MR_Unsigned) Var_1777 + (MR_Unsigned) 1);
              MR_Word SubGoal_232 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_133_133 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 9) = ((MR_Box) (Var_134));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_133_133, 26) = ((MR_Box) (Var_1760));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_232;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_133_133;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word STATE_VARIABLE_GoalStats_138_138;
              MR_Integer Var_139 = (MR_Integer) ((MR_Unsigned) Var_1776 + (MR_Unsigned) 1);
              MR_Word SubGoal_233 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_138_138 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 10) = ((MR_Box) (Var_139));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_138_138, 26) = ((MR_Box) (Var_1760));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_233;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_138_138;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word STATE_VARIABLE_GoalStats_143_143;
              MR_Integer Var_144 = (MR_Integer) ((MR_Unsigned) Var_1775 + (MR_Unsigned) 1);
              MR_Word SubGoal_234 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_143_143 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 11) = ((MR_Box) (Var_144));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_143_143, 26) = ((MR_Box) (Var_1760));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_234;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_143_143;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word STATE_VARIABLE_GoalStats_148_148;
              MR_Integer Var_149 = (MR_Integer) ((MR_Unsigned) Var_1774 + (MR_Unsigned) 1);
              MR_Word SubGoal_235 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_148_148 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 12) = ((MR_Box) (Var_149));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_148_148, 26) = ((MR_Box) (Var_1760));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_235;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_148_148;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word STATE_VARIABLE_GoalStats_153_153;
              MR_Integer Var_154 = (MR_Integer) ((MR_Unsigned) Var_1773 + (MR_Unsigned) 1);
              MR_Word SubGoal_236 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_153_153 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 13) = ((MR_Box) (Var_154));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_153_153, 26) = ((MR_Box) (Var_1760));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_236;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_153_153;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word STATE_VARIABLE_GoalStats_158_158;
              MR_Integer Var_159 = (MR_Integer) ((MR_Unsigned) Var_1772 + (MR_Unsigned) 1);
              MR_Word SubGoal_237 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_158_158 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 14) = ((MR_Box) (Var_159));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_158_158, 26) = ((MR_Box) (Var_1760));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_237;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_158_158;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word STATE_VARIABLE_GoalStats_163_163;
              MR_Integer Var_164 = (MR_Integer) ((MR_Unsigned) Var_1771 + (MR_Unsigned) 1);
              MR_Word SubGoal_238 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_163_163 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 15) = ((MR_Box) (Var_164));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_163_163, 26) = ((MR_Box) (Var_1760));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_238;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_163_163;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word STATE_VARIABLE_GoalStats_168_168;
              MR_Integer Var_169 = (MR_Integer) ((MR_Unsigned) Var_1770 + (MR_Unsigned) 1);
              MR_Word SubGoal_239 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_168_168 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 16) = ((MR_Box) (Var_169));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_168_168, 26) = ((MR_Box) (Var_1760));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_239;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_168_168;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word STATE_VARIABLE_GoalStats_173_173;
              MR_Integer Var_174 = (MR_Integer) ((MR_Unsigned) Var_1769 + (MR_Unsigned) 1);
              MR_Word SubGoal_240 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_173_173 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 17) = ((MR_Box) (Var_174));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_173_173, 26) = ((MR_Box) (Var_1760));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_240;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_173_173;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word MainGoal_57 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 5))));
              MR_Word OrElseGoals_58 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word STATE_VARIABLE_GoalStats_178_178;
              MR_Integer Var_179 = (MR_Integer) ((MR_Unsigned) Var_1768 + (MR_Unsigned) 1);
              MR_Word STATE_VARIABLE_GoalStats_182_182;

              {
                STATE_VARIABLE_GoalStats_178_178 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 18) = ((MR_Box) (Var_179));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_178_178, 26) = ((MR_Box) (Var_1760));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(MainGoal_57, STATE_VARIABLE_GoalStats_178_178, &STATE_VARIABLE_GoalStats_182_182);
              parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(OrElseGoals_58, STATE_VARIABLE_GoalStats_182_182, STATE_VARIABLE_GoalStats_88);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ThenGoal_61 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 4))));
              MR_Word MaybeElseGoal_62 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 5))));
              MR_Word Catches_63 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 6))));
              MR_Word MaybeCatchAny_64 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 7))));
              MR_Word STATE_VARIABLE_GoalStats_184_184;
              MR_Integer Var_185 = (MR_Integer) ((MR_Unsigned) Var_1767 + (MR_Unsigned) 1);
              MR_Word STATE_VARIABLE_GoalStats_188_188;
              MR_Word STATE_VARIABLE_GoalStats_189_189;
              MR_Word STATE_VARIABLE_GoalStats_190_190;
              MR_Word STATE_VARIABLE_GoalStats_191_191;
              MR_Word MainGoal_241 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));

              {
                STATE_VARIABLE_GoalStats_184_184 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 19) = ((MR_Box) (Var_185));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_184_184, 26) = ((MR_Box) (Var_1760));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(MainGoal_241, STATE_VARIABLE_GoalStats_184_184, &STATE_VARIABLE_GoalStats_188_188);
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(ThenGoal_61, STATE_VARIABLE_GoalStats_188_188, &STATE_VARIABLE_GoalStats_189_189);
              if ((MaybeElseGoal_62 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_GoalStats_190_190 = STATE_VARIABLE_GoalStats_189_189;
              else
              {
                MR_Word ElseGoal_65 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal_62, (MR_Integer) 0))));

                parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(ElseGoal_65, STATE_VARIABLE_GoalStats_189_189, &STATE_VARIABLE_GoalStats_190_190);
              }
              parse_tree__prog_item_stats__gather_stats_in_catch_exprs_3_p_0(Catches_63, STATE_VARIABLE_GoalStats_190_190, &STATE_VARIABLE_GoalStats_191_191);
              if ((MaybeCatchAny_64 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_GoalStats_88 = STATE_VARIABLE_GoalStats_191_191;
              else
              {
                MR_Word CatchAnyGoal_67;
                MR_Word Var_192 = ((MR_Word) ((MR_hl_field(1, MaybeCatchAny_64, (MR_Integer) 0))));
                MR_Word next_value_of_Goal_4;
                MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

                CatchAnyGoal_67 = ((MR_Word) ((MR_hl_field(0, Var_192, (MR_Integer) 1))));
                // direct tailcall eliminated
                ;
                next_value_of_Goal_4 = CatchAnyGoal_67;
                next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_191_191;
                Goal_4 = next_value_of_Goal_4;
                STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
                continue;
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SubGoalB_69 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_GoalStats_194_194;
              MR_Integer Var_195 = (MR_Integer) ((MR_Unsigned) Var_1766 + (MR_Unsigned) 1);
              MR_Word STATE_VARIABLE_GoalStats_198_198;
              MR_Word SubGoalA_242 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_194_194 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 20) = ((MR_Box) (Var_195));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 21) = ((MR_Box) (Var_1765));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_194_194, 26) = ((MR_Box) (Var_1760));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(SubGoalA_242, STATE_VARIABLE_GoalStats_194_194, &STATE_VARIABLE_GoalStats_198_198);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoalB_69;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_198_198;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_GoalStats_0_87 = next_value_of_STATE_VARIABLE_GoalStats_0_87;
              continue;
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word STATE_VARIABLE_GoalStats_200_200;
              MR_Integer Var_201 = (MR_Integer) ((MR_Unsigned) Var_1765 + (MR_Unsigned) 1);
              MR_Word STATE_VARIABLE_GoalStats_204_204;
              MR_Word SubGoalA_243 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 2))));
              MR_Word SubGoalB_244 = ((MR_Word) ((MR_hl_field(3, Goal_4, (MR_Integer) 3))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_GoalStats_0_87;

              {
                STATE_VARIABLE_GoalStats_200_200 = (MR_Word) MR_new_object(MR_Word, (27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 0) = ((MR_Box) (Var_1786));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 1) = ((MR_Box) (Var_1785));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 2) = ((MR_Box) (Var_1784));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 3) = ((MR_Box) (Var_1783));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 4) = ((MR_Box) (Var_1782));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 5) = ((MR_Box) (Var_1781));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 6) = ((MR_Box) (Var_1780));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 7) = ((MR_Box) (Var_1779));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 8) = ((MR_Box) (Var_1778));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 9) = ((MR_Box) (Var_1777));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 10) = ((MR_Box) (Var_1776));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 11) = ((MR_Box) (Var_1775));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 12) = ((MR_Box) (Var_1774));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 13) = ((MR_Box) (Var_1773));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 14) = ((MR_Box) (Var_1772));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 15) = ((MR_Box) (Var_1771));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 16) = ((MR_Box) (Var_1770));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 17) = ((MR_Box) (Var_1769));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 18) = ((MR_Box) (Var_1768));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 19) = ((MR_Box) (Var_1767));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 20) = ((MR_Box) (Var_1766));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 21) = ((MR_Box) (Var_201));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 22) = ((MR_Box) (Var_1764));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 23) = ((MR_Box) (Var_1763));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 24) = ((MR_Box) (Var_1762));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 25) = ((MR_Box) (Var_1761));
                MR_hl_field(0, STATE_VARIABLE_GoalStats_200_200, 26) = ((MR_Box) (Var_1760));
              }
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(SubGoalA_243, STATE_VARIABLE_GoalStats_200_200, &STATE_VARIABLE_GoalStats_204_204);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoalB_244;
              next_value_of_STATE_VARIABLE_GoalStats_0_87 = STATE_VARIABLE_GoalStats_204_204;
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
      MR_Word CatchExpr_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word CatchExprs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(0, CatchExpr_7, (MR_Integer) 1))));
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
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
parse_tree__prog_item_stats__gather_stats_in_item_gen_pragma_3_p_0(
  MR_Word ItemGenPragmaInfo_4,
  MR_Word STATE_VARIABLE_ItemStats_0_13,
  MR_Word * STATE_VARIABLE_ItemStats_14)
{
  MR_Word Pragma_6 = ((MR_Word) ((MR_hl_field(0, ItemGenPragmaInfo_4, (MR_Integer) 0))));
  MR_Integer Var_219 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 23))));
  MR_Integer Var_220 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 22))));
  MR_Integer Var_221 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 21))));
  MR_Integer Var_222 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 20))));
  MR_Integer Var_223 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 19))));
  MR_Integer Var_224 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 18))));
  MR_Integer Var_225 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 17))));
  MR_Integer Var_226 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 16))));
  MR_Integer Var_227 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 15))));
  MR_Integer Var_228 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 14))));
  MR_Integer Var_229 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 13))));
  MR_Integer Var_230 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 12))));
  MR_Integer Var_231 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 11))));
  MR_Integer Var_232 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 10))));
  MR_Integer Var_233 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 9))));
  MR_Integer Var_234 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 8))));
  MR_Integer Var_235 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 7))));
  MR_Integer Var_236 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 6))));
  MR_Integer Var_237 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 5))));
  MR_Integer Var_238 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 4))));
  MR_Integer Var_239 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 3))));
  MR_Integer Var_240 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 2))));
  MR_Integer Var_241 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 1))));
  MR_Integer Var_242 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_13, (MR_Integer) 0))));

  switch (MR_tag((MR_Word) Pragma_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) Var_229 + (MR_Unsigned) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemStats_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_242));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_241));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_240));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_239));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_238));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_237));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_236));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_235));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_234));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_233));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_232));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_231));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_230));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_16));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_228));
          MR_hl_field(0, base, 15) = ((MR_Box) (Var_227));
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_226));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_225));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_224));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_223));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_222));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_221));
          MR_hl_field(0, base, 22) = ((MR_Box) (Var_220));
          MR_hl_field(0, base, 23) = ((MR_Box) (Var_219));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) Var_228 + (MR_Unsigned) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemStats_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_242));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_241));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_240));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_239));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_238));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_237));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_236));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_235));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_234));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_233));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_232));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_231));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_230));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_229));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_20));
          MR_hl_field(0, base, 15) = ((MR_Box) (Var_227));
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_226));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_225));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_224));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_223));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_222));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_221));
          MR_hl_field(0, base, 22) = ((MR_Box) (Var_220));
          MR_hl_field(0, base, 23) = ((MR_Box) (Var_219));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) Var_227 + (MR_Unsigned) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemStats_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_242));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_241));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_240));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_239));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_238));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_237));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_236));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_235));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_234));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_233));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_232));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_231));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_230));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_229));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_228));
          MR_hl_field(0, base, 15) = ((MR_Box) (Var_24));
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_226));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_225));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_224));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_223));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_222));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_221));
          MR_hl_field(0, base, 22) = ((MR_Box) (Var_220));
          MR_hl_field(0, base, 23) = ((MR_Box) (Var_219));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Integer Var_28 = (MR_Integer) ((MR_Unsigned) Var_226 + (MR_Unsigned) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemStats_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_242));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_241));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_240));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_239));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_238));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_237));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_236));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_235));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_234));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_233));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_232));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_231));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_230));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_229));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_228));
          MR_hl_field(0, base, 15) = ((MR_Box) (Var_227));
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_28));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_225));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_224));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_223));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_222));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_221));
          MR_hl_field(0, base, 22) = ((MR_Box) (Var_220));
          MR_hl_field(0, base, 23) = ((MR_Box) (Var_219));
        }
      }
      break;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_decl_pragma_3_p_0(
  MR_Word ItemDeclPragmaInfo_4,
  MR_Word STATE_VARIABLE_ItemStats_0_21,
  MR_Word * STATE_VARIABLE_ItemStats_22)
{
  MR_Word Pragma_6 = ((MR_Word) ((MR_hl_field(0, ItemDeclPragmaInfo_4, (MR_Integer) 0))));
  MR_Integer Var_176 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 23))));
  MR_Integer Var_177 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 22))));
  MR_Integer Var_178 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 21))));
  MR_Integer Var_179 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 20))));
  MR_Integer Var_180 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 19))));
  MR_Integer Var_181 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 18))));
  MR_Integer Var_182 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 17))));
  MR_Integer Var_183 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 16))));
  MR_Integer Var_184 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 15))));
  MR_Integer Var_185 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 14))));
  MR_Integer Var_186 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 13))));
  MR_Integer Var_187 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 12))));
  MR_Integer Var_188 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 11))));
  MR_Integer Var_189 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 10))));
  MR_Integer Var_190 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 9))));
  MR_Integer Var_191 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 8))));
  MR_Integer Var_192 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 7))));
  MR_Integer Var_193 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 6))));
  MR_Integer Var_194 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 5))));
  MR_Integer Var_195 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 4))));
  MR_Integer Var_196 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 3))));
  MR_Integer Var_197 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 2))));
  MR_Integer Var_198 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 1))));
  MR_Integer Var_199 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ItemStats_0_21, (MR_Integer) 0))));

  switch (MR_tag((MR_Word) Pragma_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) Var_188 + (MR_Unsigned) 1);

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemStats_22 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_199));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_198));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_197));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_196));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_195));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_194));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_193));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_192));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_191));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_190));
          MR_hl_field(0, base, 10) = ((MR_Box) (Var_189));
          MR_hl_field(0, base, 11) = ((MR_Box) (Var_32));
          MR_hl_field(0, base, 12) = ((MR_Box) (Var_187));
          MR_hl_field(0, base, 13) = ((MR_Box) (Var_186));
          MR_hl_field(0, base, 14) = ((MR_Box) (Var_185));
          MR_hl_field(0, base, 15) = ((MR_Box) (Var_184));
          MR_hl_field(0, base, 16) = ((MR_Box) (Var_183));
          MR_hl_field(0, base, 17) = ((MR_Box) (Var_182));
          MR_hl_field(0, base, 18) = ((MR_Box) (Var_181));
          MR_hl_field(0, base, 19) = ((MR_Box) (Var_180));
          MR_hl_field(0, base, 20) = ((MR_Box) (Var_179));
          MR_hl_field(0, base, 21) = ((MR_Box) (Var_178));
          MR_hl_field(0, base, 22) = ((MR_Box) (Var_177));
          MR_hl_field(0, base, 23) = ((MR_Box) (Var_176));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Pragma_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
          {
            MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) Var_188 + (MR_Unsigned) 1);

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_22 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_199));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_198));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_197));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_196));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_195));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_194));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_193));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_192));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_191));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_190));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_189));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_32));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_187));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_186));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_185));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_184));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_183));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_182));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_181));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_180));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_179));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_178));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_177));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_176));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) Var_190 + (MR_Unsigned) 1);

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_22 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_199));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_198));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_197));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_196));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_195));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_194));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_193));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_192));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_191));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_24));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_189));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_188));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_187));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_186));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_185));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_184));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_183));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_182));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_181));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_180));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_179));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_178));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_177));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_176));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Integer Var_28 = (MR_Integer) ((MR_Unsigned) Var_189 + (MR_Unsigned) 1);

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ItemStats_22 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_199));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_198));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_197));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_196));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_195));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_194));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_193));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_192));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_191));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_190));
              MR_hl_field(0, base, 10) = ((MR_Box) (Var_28));
              MR_hl_field(0, base, 11) = ((MR_Box) (Var_188));
              MR_hl_field(0, base, 12) = ((MR_Box) (Var_187));
              MR_hl_field(0, base, 13) = ((MR_Box) (Var_186));
              MR_hl_field(0, base, 14) = ((MR_Box) (Var_185));
              MR_hl_field(0, base, 15) = ((MR_Box) (Var_184));
              MR_hl_field(0, base, 16) = ((MR_Box) (Var_183));
              MR_hl_field(0, base, 17) = ((MR_Box) (Var_182));
              MR_hl_field(0, base, 18) = ((MR_Box) (Var_181));
              MR_hl_field(0, base, 19) = ((MR_Box) (Var_180));
              MR_hl_field(0, base, 20) = ((MR_Box) (Var_179));
              MR_hl_field(0, base, 21) = ((MR_Box) (Var_178));
              MR_hl_field(0, base, 22) = ((MR_Box) (Var_177));
              MR_hl_field(0, base, 23) = ((MR_Box) (Var_176));
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
  return (MR_Word) (&parse_tree__prog_item_stats_scalar_common_3[0]);
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

  parse_tree__prog_item_stats__write_section_stats_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0(
  MR_Word Stream_5,
  MR_Word AugCompUnit_6)
{
  MR_Word CompUnitStats_8;
  MR_Word ParseTreeModuleSrc_9;
  MR_Word ModuleName_10;
  MR_Word SectionStatPairs_69;
  MR_String Var_71;
  MR_Word Var_72;
  MR_Box conv0_STATE_VARIABLE_IO_12;

  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0), &CompUnitStats_8);
  ParseTreeModuleSrc_9 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_6, (MR_Integer) 0))));
  ModuleName_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_9, (MR_Integer) 0))));
  Var_71 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_10);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "MODULE ");
  mercury__io__write_string_4_p_0(Stream_5, Var_71);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0), CompUnitStats_8, &SectionStatPairs_69);
  {
    Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_72, 0) = ((MR_Box) (&parse_tree__prog_item_stats_scalar_common_4[0]));
    MR_hl_field(0, Var_72, 1) = ((MR_Box) (parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0_1));
    MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_72, 3) = ((MR_Box) (Stream_5));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item_stats_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_72, SectionStatPairs_69, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12);
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
