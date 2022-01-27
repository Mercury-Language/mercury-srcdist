/*
** Automatically generated from `prog_item_stats.m'
** by the Mercury compiler,
** version rotd-2017-01-16
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


/* :- module parse_tree.prog_item_stats. */
/* :- implementation. */

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

static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_item_stats_0_0[21];

static const MR_ConstString parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_item_stats_0_0[21];

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

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0_10001(
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0_10001(
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____goal_stats_0_0_10001(
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_stats____Compare____goal_stats_0_0_10001(
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____item_stats_0_0_10001(
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_stats____Compare____item_stats_0_0_10001(
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____section_stats_0_0_10001(
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_stats____Compare____section_stats_0_0_10001(
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho4_4_p_0(
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho3_4_p_0(
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho2_4_p_0(
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho1_4_p_0(
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4);

static void MR_CALL 
parse_tree__prog_item_stats____Compare____section_stats_0_0(
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____section_stats_0_0(
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_item_stats____Compare____item_stats_0_0(
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____item_stats_0_0(
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_item_stats____Compare____goal_stats_0_0(
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____goal_stats_0_0(
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0(
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0(
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_item_stats__write_one_stat_6_p_0(
  MR_Word parse_tree__prog_item_stats__Stream_7,
  MR_String parse_tree__prog_item_stats__SectionName_8,
  MR_String parse_tree__prog_item_stats__StatName_9,
  MR_Integer parse_tree__prog_item_stats__StatNum_10);

static void MR_CALL 
parse_tree__prog_item_stats__write_goal_stats_5_p_0(
  MR_Word parse_tree__prog_item_stats__Stream_6,
  MR_String parse_tree__prog_item_stats__SectionName_7,
  MR_Word parse_tree__prog_item_stats__GoalStats_8);

static void MR_CALL 
parse_tree__prog_item_stats__write_section_stats_4_p_0(
  MR_Word parse_tree__prog_item_stats__Stream_5,
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_catch_exprs_3_p_0(
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(
  MR_Word parse_tree__prog_item_stats__Goal_4,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_84);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_pragma_3_p_0(
  MR_Word parse_tree__prog_item_stats__ItemPragmaInfo_4,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_5_p_0(
  MR_Word parse_tree__prog_item_stats__Item_6,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36);

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_2,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_3,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_4,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_5);

static MR_Word MR_CALL 
parse_tree__prog_item_stats__init_goal_stats_0_f_0(void);

static void MR_CALL 
parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0_1(
  MR_Box parse_tree__prog_item_stats__closure_arg,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_2[1][21];

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

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_2[1][21] = {
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
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_item_stats__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_item_stats__type_ctor_info_section_stats_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_comp_unit_stats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0_10001)),
  (MR_String) "parse_tree.prog_item_stats",
  (MR_String) "comp_unit_stats",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_item_stats__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_item_stats__type_ctor_info_section_stats_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_goal_stats_0_0[27] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_goal_stats_0_0,
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_goal_stats_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_goal_stats_0_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_goal_stats_0_0
};

static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_goal_stats_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_goal_stats_0_0
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_item_stats_0_0[21] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_item_stats_0_0[21] = {
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
  (MR_String) "item_num_nothing"
};

static const MR_DuFunctorDesc parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_item_stats_0_0 = {
  (MR_String) "item_stats",
  (MR_Integer) 21,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_item_stats_0_0,
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_item_stats_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_item_stats_0_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_item_stats_0_0
};

static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_item_stats_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_item_stats_0_0
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  (MR_PseudoTypeInfo) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_item_stats_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_goal_stats_0
};

static const MR_DuFunctorDesc parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_section_stats_0_0 = {
  (MR_String) "section_stats",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_section_stats_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_section_stats_0_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_section_stats_0_0
};

static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_section_stats_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_section_stats_0_0
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0_10001(
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_item_stats__succeeded;

    {
      parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0(((MR_Word) parse_tree__prog_item_stats__wrapper_arg_1), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2));
    }
    return parse_tree__prog_item_stats__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0_10001(
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_item_stats__conv0_HeadVar__1_1;

    {
      parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0(&parse_tree__prog_item_stats__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_3));
    }
    *parse_tree__prog_item_stats__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_item_stats__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____goal_stats_0_0_10001(
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_item_stats__succeeded;

    {
      parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____goal_stats_0_0(((MR_Word) parse_tree__prog_item_stats__wrapper_arg_1), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2));
    }
    return parse_tree__prog_item_stats__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats____Compare____goal_stats_0_0_10001(
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_item_stats__conv0_HeadVar__1_1;

    {
      parse_tree__prog_item_stats____Compare____goal_stats_0_0(&parse_tree__prog_item_stats__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_3));
    }
    *parse_tree__prog_item_stats__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_item_stats__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____item_stats_0_0_10001(
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_item_stats__succeeded;

    {
      parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____item_stats_0_0(((MR_Word) parse_tree__prog_item_stats__wrapper_arg_1), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2));
    }
    return parse_tree__prog_item_stats__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats____Compare____item_stats_0_0_10001(
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_item_stats__conv0_HeadVar__1_1;

    {
      parse_tree__prog_item_stats____Compare____item_stats_0_0(&parse_tree__prog_item_stats__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_3));
    }
    *parse_tree__prog_item_stats__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_item_stats__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____section_stats_0_0_10001(
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_item_stats__succeeded;

    {
      parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____section_stats_0_0(((MR_Word) parse_tree__prog_item_stats__wrapper_arg_1), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2));
    }
    return parse_tree__prog_item_stats__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats____Compare____section_stats_0_0_10001(
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_item_stats__conv0_HeadVar__1_1;

    {
      parse_tree__prog_item_stats____Compare____section_stats_0_0(&parse_tree__prog_item_stats__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_3));
    }
    *parse_tree__prog_item_stats__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_item_stats__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho4_4_p_0(
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_item_stats__succeeded;

        if ((parse_tree__prog_item_stats__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3;
        else
          {
            MR_Word parse_tree__prog_item_stats__ItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word parse_tree__prog_item_stats__ItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word parse_tree__prog_item_stats__Section_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 0)));
            MR_Word parse_tree__prog_item_stats__Items_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 4)));
            MR_String parse_tree__prog_item_stats__SectionName_18;
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;
            MR_Word parse_tree__prog_item_stats__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 1)));
            MR_Word parse_tree__prog_item_stats__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 2)));
            MR_Word parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 3)));
            MR_Word parse_tree__prog_item_stats__SectionStats0_19;
            MR_Box parse_tree__prog_item_stats__conv0_SectionStats0_19;

            switch (parse_tree__prog_item_stats__Section_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                parse_tree__prog_item_stats__SectionName_18 = (MR_String) "src_impl_sub";
                break;
              case (MR_Integer) 1:
                parse_tree__prog_item_stats__SectionName_18 = (MR_String) "src_impl";
                break;
              case (MR_Integer) 0:
                parse_tree__prog_item_stats__SectionName_18 = (MR_String) "src_int";
                break;
            }
            {
              parse_tree__prog_item_stats__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, ((MR_Box) (parse_tree__prog_item_stats__SectionName_18)), &parse_tree__prog_item_stats__conv0_SectionStats0_19);
            }
            if (parse_tree__prog_item_stats__succeeded)
              {
                parse_tree__prog_item_stats__SectionStats0_19 = ((MR_Word) parse_tree__prog_item_stats__conv0_SectionStats0_19);
                parse_tree__prog_item_stats__succeeded = MR_TRUE;
              }
            if (parse_tree__prog_item_stats__succeeded)
              {
                MR_Word parse_tree__prog_item_stats__ItemStats0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 0)));
                MR_Word parse_tree__prog_item_stats__GoalStats0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 1)));
                MR_Word parse_tree__prog_item_stats__ItemStats_22;
                MR_Word parse_tree__prog_item_stats__GoalStats_23;
                MR_Word parse_tree__prog_item_stats__SectionStats_24;

                {
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, parse_tree__prog_item_stats__ItemStats0_20, &parse_tree__prog_item_stats__ItemStats_22, parse_tree__prog_item_stats__GoalStats0_21, &parse_tree__prog_item_stats__GoalStats_23);
                }
                {
                  parse_tree__prog_item_stats__SectionStats_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_22));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_23));
                }
                {
                  mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) (parse_tree__prog_item_stats__SectionName_18)), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_24)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
              }
            else
              {
                MR_Word parse_tree__prog_item_stats__ItemStats_32;
                MR_Word parse_tree__prog_item_stats__GoalStats_33;
                MR_Word parse_tree__prog_item_stats__SectionStats_34;

                {
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, (MR_Word) &parse_tree__prog_item_stats_scalar_common_2[0], &parse_tree__prog_item_stats__ItemStats_32, (MR_Word) &parse_tree__prog_item_stats_scalar_common_3[0], &parse_tree__prog_item_stats__GoalStats_33);
                }
                {
                  parse_tree__prog_item_stats__SectionStats_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_32));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_33));
                }
                {
                  mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) (parse_tree__prog_item_stats__SectionName_18)), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_34)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2 = parse_tree__prog_item_stats__ItemBlocks_11;
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;

              parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3;
              parse_tree__prog_item_stats__HeadVar__2_2 = parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho3_4_p_0(
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_item_stats__succeeded;

        if ((parse_tree__prog_item_stats__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3;
        else
          {
            MR_Word parse_tree__prog_item_stats__ItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word parse_tree__prog_item_stats__ItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word parse_tree__prog_item_stats__Section_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 0)));
            MR_Word parse_tree__prog_item_stats__Items_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 4)));
            MR_String parse_tree__prog_item_stats__SectionName_18;
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;
            MR_Word parse_tree__prog_item_stats__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 1)));
            MR_Word parse_tree__prog_item_stats__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 2)));
            MR_Word parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 3)));
            MR_Word parse_tree__prog_item_stats__SectionStats0_19;
            MR_Box parse_tree__prog_item_stats__conv0_SectionStats0_19;

            if (((MR_tag((MR_Word) parse_tree__prog_item_stats__Section_13)) == (MR_mktag((MR_Integer) 1))))
              parse_tree__prog_item_stats__SectionName_18 = (MR_String) "int_abstract_imported";
            else
              {
                MR_Word parse_tree__prog_item_stats__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__Section_13, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
                MR_Word parse_tree__prog_item_stats__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__Section_13, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
                MR_Word parse_tree__prog_item_stats__V_58_58 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__Section_13, (MR_Integer) 1)))) & (MR_Integer) 3);
                MR_Word parse_tree__prog_item_stats__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__Section_13, (MR_Integer) 0)));

                switch (parse_tree__prog_item_stats__V_56_56) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    parse_tree__prog_item_stats__SectionName_18 = (MR_String) "int_imported";
                    break;
                  case (MR_Integer) 1:
                    parse_tree__prog_item_stats__SectionName_18 = (MR_String) "int_used";
                    break;
                  case (MR_Integer) 2:
                    parse_tree__prog_item_stats__SectionName_18 = (MR_String) "int_used_and_imported";
                    break;
                }
              }
            {
              parse_tree__prog_item_stats__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, ((MR_Box) (parse_tree__prog_item_stats__SectionName_18)), &parse_tree__prog_item_stats__conv0_SectionStats0_19);
            }
            if (parse_tree__prog_item_stats__succeeded)
              {
                parse_tree__prog_item_stats__SectionStats0_19 = ((MR_Word) parse_tree__prog_item_stats__conv0_SectionStats0_19);
                parse_tree__prog_item_stats__succeeded = MR_TRUE;
              }
            if (parse_tree__prog_item_stats__succeeded)
              {
                MR_Word parse_tree__prog_item_stats__ItemStats0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 0)));
                MR_Word parse_tree__prog_item_stats__GoalStats0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 1)));
                MR_Word parse_tree__prog_item_stats__ItemStats_22;
                MR_Word parse_tree__prog_item_stats__GoalStats_23;
                MR_Word parse_tree__prog_item_stats__SectionStats_24;

                {
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, parse_tree__prog_item_stats__ItemStats0_20, &parse_tree__prog_item_stats__ItemStats_22, parse_tree__prog_item_stats__GoalStats0_21, &parse_tree__prog_item_stats__GoalStats_23);
                }
                {
                  parse_tree__prog_item_stats__SectionStats_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_22));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_23));
                }
                {
                  mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) (parse_tree__prog_item_stats__SectionName_18)), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_24)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
              }
            else
              {
                MR_Word parse_tree__prog_item_stats__V_29_29;
                MR_Word parse_tree__prog_item_stats__ItemStats_32;
                MR_Word parse_tree__prog_item_stats__GoalStats_33;
                MR_Word parse_tree__prog_item_stats__SectionStats_34;

                {
                  parse_tree__prog_item_stats__V_29_29 = parse_tree__prog_item_stats__init_goal_stats_0_f_0();
                }
                {
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, (MR_Word) &parse_tree__prog_item_stats_scalar_common_2[0], &parse_tree__prog_item_stats__ItemStats_32, parse_tree__prog_item_stats__V_29_29, &parse_tree__prog_item_stats__GoalStats_33);
                }
                {
                  parse_tree__prog_item_stats__SectionStats_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_32));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_33));
                }
                {
                  mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) (parse_tree__prog_item_stats__SectionName_18)), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_34)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2 = parse_tree__prog_item_stats__ItemBlocks_11;
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;

              parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3;
              parse_tree__prog_item_stats__HeadVar__2_2 = parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho2_4_p_0(
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_item_stats__succeeded;

        if ((parse_tree__prog_item_stats__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3;
        else
          {
            MR_Word parse_tree__prog_item_stats__ItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word parse_tree__prog_item_stats__ItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word parse_tree__prog_item_stats__Items_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 4)));
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;
            MR_Word parse_tree__prog_item_stats__Section_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 0)));
            MR_Word parse_tree__prog_item_stats__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 1)));
            MR_Word parse_tree__prog_item_stats__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 2)));
            MR_Word parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 3)));
            MR_Word parse_tree__prog_item_stats__SectionStats0_19;
            MR_Box parse_tree__prog_item_stats__conv0_SectionStats0_19;

            {
              parse_tree__prog_item_stats__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, ((MR_Box) ((MR_String) "int_for_opt_imported")), &parse_tree__prog_item_stats__conv0_SectionStats0_19);
            }
            if (parse_tree__prog_item_stats__succeeded)
              {
                parse_tree__prog_item_stats__SectionStats0_19 = ((MR_Word) parse_tree__prog_item_stats__conv0_SectionStats0_19);
                parse_tree__prog_item_stats__succeeded = MR_TRUE;
              }
            if (parse_tree__prog_item_stats__succeeded)
              {
                MR_Word parse_tree__prog_item_stats__ItemStats0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 0)));
                MR_Word parse_tree__prog_item_stats__GoalStats0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 1)));
                MR_Word parse_tree__prog_item_stats__ItemStats_22;
                MR_Word parse_tree__prog_item_stats__GoalStats_23;
                MR_Word parse_tree__prog_item_stats__SectionStats_24;

                {
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, parse_tree__prog_item_stats__ItemStats0_20, &parse_tree__prog_item_stats__ItemStats_22, parse_tree__prog_item_stats__GoalStats0_21, &parse_tree__prog_item_stats__GoalStats_23);
                }
                {
                  parse_tree__prog_item_stats__SectionStats_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_22));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_23));
                }
                {
                  mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) ((MR_String) "int_for_opt_imported")), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_24)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
              }
            else
              {
                MR_Word parse_tree__prog_item_stats__ItemStats_32;
                MR_Word parse_tree__prog_item_stats__GoalStats_33;
                MR_Word parse_tree__prog_item_stats__SectionStats_34;

                {
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, (MR_Word) &parse_tree__prog_item_stats_scalar_common_2[0], &parse_tree__prog_item_stats__ItemStats_32, (MR_Word) &parse_tree__prog_item_stats_scalar_common_3[0], &parse_tree__prog_item_stats__GoalStats_33);
                }
                {
                  parse_tree__prog_item_stats__SectionStats_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_32));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_33));
                }
                {
                  mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) ((MR_String) "int_for_opt_imported")), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_34)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2 = parse_tree__prog_item_stats__ItemBlocks_11;
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;

              parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3;
              parse_tree__prog_item_stats__HeadVar__2_2 = parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho1_4_p_0(
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_item_stats__succeeded;

        if ((parse_tree__prog_item_stats__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3;
        else
          {
            MR_Word parse_tree__prog_item_stats__ItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word parse_tree__prog_item_stats__ItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word parse_tree__prog_item_stats__Items_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 4)));
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;
            MR_Word parse_tree__prog_item_stats__Section_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 0)));
            MR_Word parse_tree__prog_item_stats__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 1)));
            MR_Word parse_tree__prog_item_stats__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 2)));
            MR_Word parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 3)));
            MR_Word parse_tree__prog_item_stats__SectionStats0_19;
            MR_Box parse_tree__prog_item_stats__conv0_SectionStats0_19;

            {
              parse_tree__prog_item_stats__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, ((MR_Box) ((MR_String) "opt_imported")), &parse_tree__prog_item_stats__conv0_SectionStats0_19);
            }
            if (parse_tree__prog_item_stats__succeeded)
              {
                parse_tree__prog_item_stats__SectionStats0_19 = ((MR_Word) parse_tree__prog_item_stats__conv0_SectionStats0_19);
                parse_tree__prog_item_stats__succeeded = MR_TRUE;
              }
            if (parse_tree__prog_item_stats__succeeded)
              {
                MR_Word parse_tree__prog_item_stats__ItemStats0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 0)));
                MR_Word parse_tree__prog_item_stats__GoalStats0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 1)));
                MR_Word parse_tree__prog_item_stats__ItemStats_22;
                MR_Word parse_tree__prog_item_stats__GoalStats_23;
                MR_Word parse_tree__prog_item_stats__SectionStats_24;

                {
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, parse_tree__prog_item_stats__ItemStats0_20, &parse_tree__prog_item_stats__ItemStats_22, parse_tree__prog_item_stats__GoalStats0_21, &parse_tree__prog_item_stats__GoalStats_23);
                }
                {
                  parse_tree__prog_item_stats__SectionStats_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_22));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_23));
                }
                {
                  mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) ((MR_String) "opt_imported")), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_24)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
              }
            else
              {
                MR_Word parse_tree__prog_item_stats__ItemStats_32;
                MR_Word parse_tree__prog_item_stats__GoalStats_33;
                MR_Word parse_tree__prog_item_stats__SectionStats_34;

                {
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, (MR_Word) &parse_tree__prog_item_stats_scalar_common_2[0], &parse_tree__prog_item_stats__ItemStats_32, (MR_Word) &parse_tree__prog_item_stats_scalar_common_3[0], &parse_tree__prog_item_stats__GoalStats_33);
                }
                {
                  parse_tree__prog_item_stats__SectionStats_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_32));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_33));
                }
                {
                  mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) ((MR_String) "opt_imported")), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_34)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2 = parse_tree__prog_item_stats__ItemBlocks_11;
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;

              parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3;
              parse_tree__prog_item_stats__HeadVar__2_2 = parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__prog_item_stats____Compare____section_stats_0_0(
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_item_stats__succeeded;
    MR_Integer parse_tree__prog_item_stats__CastX_9 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__2_2;
    MR_Integer parse_tree__prog_item_stats__CastY_10 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__3_3;

    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__CastX_9 == parse_tree__prog_item_stats__CastY_10);
    if (parse_tree__prog_item_stats__succeeded)
      *parse_tree__prog_item_stats__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__prog_item_stats__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_item_stats__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_item_stats__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_item_stats__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_item_stats__V_8_8;

        {
          parse_tree__prog_item_stats____Compare____item_stats_0_0(&parse_tree__prog_item_stats__V_8_8, parse_tree__prog_item_stats__V_4_4, parse_tree__prog_item_stats__V_6_6);
        }
        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_8_8 == (MR_Integer) 0);
        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
        if (parse_tree__prog_item_stats__succeeded)
          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_8_8;
        else
          {
            parse_tree__prog_item_stats____Compare____goal_stats_0_0(parse_tree__prog_item_stats__HeadVar__1_1, parse_tree__prog_item_stats__V_5_5, parse_tree__prog_item_stats__V_7_7);
          }
      }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____section_stats_0_0(
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_item_stats__succeeded;
    MR_Integer parse_tree__prog_item_stats__CastX_7 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__1_1;
    MR_Integer parse_tree__prog_item_stats__CastY_8 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__2_2;

    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__CastX_7 == parse_tree__prog_item_stats__CastY_8);
    if (parse_tree__prog_item_stats__succeeded)
      parse_tree__prog_item_stats__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__prog_item_stats__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_item_stats__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__prog_item_stats__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_item_stats__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));

        {
          parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____item_stats_0_0(parse_tree__prog_item_stats__V_3_3, parse_tree__prog_item_stats__V_5_5);
        }
        if (parse_tree__prog_item_stats__succeeded)
          {
            parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____goal_stats_0_0(parse_tree__prog_item_stats__V_4_4, parse_tree__prog_item_stats__V_6_6);
          }
      }
    return parse_tree__prog_item_stats__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats____Compare____item_stats_0_0(
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_item_stats__succeeded;
    MR_Integer parse_tree__prog_item_stats__CastX_66 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__2_2;
    MR_Integer parse_tree__prog_item_stats__CastY_67 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__3_3;

    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__CastX_66 == parse_tree__prog_item_stats__CastY_67);
    if (parse_tree__prog_item_stats__succeeded)
      *parse_tree__prog_item_stats__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer parse_tree__prog_item_stats__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_item_stats__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 20)));
        MR_Integer parse_tree__prog_item_stats__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_item_stats__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 20)));
        MR_Word parse_tree__prog_item_stats__V_46_46;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_46_46, parse_tree__prog_item_stats__V_4_4, parse_tree__prog_item_stats__V_25_25);
        }
        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_46_46 == (MR_Integer) 0);
        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
        if (parse_tree__prog_item_stats__succeeded)
          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_46_46;
        else
          {
            MR_Word parse_tree__prog_item_stats__V_47_47;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_47_47, parse_tree__prog_item_stats__V_5_5, parse_tree__prog_item_stats__V_26_26);
            }
            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_47_47 == (MR_Integer) 0);
            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
            if (parse_tree__prog_item_stats__succeeded)
              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_47_47;
            else
              {
                MR_Word parse_tree__prog_item_stats__V_48_48;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_48_48, parse_tree__prog_item_stats__V_6_6, parse_tree__prog_item_stats__V_27_27);
                }
                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_48_48 == (MR_Integer) 0);
                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                if (parse_tree__prog_item_stats__succeeded)
                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_48_48;
                else
                  {
                    MR_Word parse_tree__prog_item_stats__V_49_49;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_49_49, parse_tree__prog_item_stats__V_7_7, parse_tree__prog_item_stats__V_28_28);
                    }
                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_49_49 == (MR_Integer) 0);
                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                    if (parse_tree__prog_item_stats__succeeded)
                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_49_49;
                    else
                      {
                        MR_Word parse_tree__prog_item_stats__V_50_50;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_50_50, parse_tree__prog_item_stats__V_8_8, parse_tree__prog_item_stats__V_29_29);
                        }
                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_50_50 == (MR_Integer) 0);
                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                        if (parse_tree__prog_item_stats__succeeded)
                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_50_50;
                        else
                          {
                            MR_Word parse_tree__prog_item_stats__V_51_51;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_51_51, parse_tree__prog_item_stats__V_9_9, parse_tree__prog_item_stats__V_30_30);
                            }
                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_51_51 == (MR_Integer) 0);
                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                            if (parse_tree__prog_item_stats__succeeded)
                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_51_51;
                            else
                              {
                                MR_Word parse_tree__prog_item_stats__V_52_52;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_52_52, parse_tree__prog_item_stats__V_10_10, parse_tree__prog_item_stats__V_31_31);
                                }
                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_52_52 == (MR_Integer) 0);
                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                if (parse_tree__prog_item_stats__succeeded)
                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_52_52;
                                else
                                  {
                                    MR_Word parse_tree__prog_item_stats__V_53_53;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_53_53, parse_tree__prog_item_stats__V_11_11, parse_tree__prog_item_stats__V_32_32);
                                    }
                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_53_53 == (MR_Integer) 0);
                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                    if (parse_tree__prog_item_stats__succeeded)
                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_53_53;
                                    else
                                      {
                                        MR_Word parse_tree__prog_item_stats__V_54_54;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_54_54, parse_tree__prog_item_stats__V_12_12, parse_tree__prog_item_stats__V_33_33);
                                        }
                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_54_54 == (MR_Integer) 0);
                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                        if (parse_tree__prog_item_stats__succeeded)
                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_54_54;
                                        else
                                          {
                                            MR_Word parse_tree__prog_item_stats__V_55_55;

                                            {
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_55_55, parse_tree__prog_item_stats__V_13_13, parse_tree__prog_item_stats__V_34_34);
                                            }
                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_55_55 == (MR_Integer) 0);
                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                            if (parse_tree__prog_item_stats__succeeded)
                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_55_55;
                                            else
                                              {
                                                MR_Word parse_tree__prog_item_stats__V_56_56;

                                                {
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_56_56, parse_tree__prog_item_stats__V_14_14, parse_tree__prog_item_stats__V_35_35);
                                                }
                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_56_56 == (MR_Integer) 0);
                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                if (parse_tree__prog_item_stats__succeeded)
                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_56_56;
                                                else
                                                  {
                                                    MR_Word parse_tree__prog_item_stats__V_57_57;

                                                    {
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_57_57, parse_tree__prog_item_stats__V_15_15, parse_tree__prog_item_stats__V_36_36);
                                                    }
                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_57_57 == (MR_Integer) 0);
                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                    if (parse_tree__prog_item_stats__succeeded)
                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_57_57;
                                                    else
                                                      {
                                                        MR_Word parse_tree__prog_item_stats__V_58_58;

                                                        {
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_58_58, parse_tree__prog_item_stats__V_16_16, parse_tree__prog_item_stats__V_37_37);
                                                        }
                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_58_58 == (MR_Integer) 0);
                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                        if (parse_tree__prog_item_stats__succeeded)
                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_58_58;
                                                        else
                                                          {
                                                            MR_Word parse_tree__prog_item_stats__V_59_59;

                                                            {
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_59_59, parse_tree__prog_item_stats__V_17_17, parse_tree__prog_item_stats__V_38_38);
                                                            }
                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_59_59 == (MR_Integer) 0);
                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                            if (parse_tree__prog_item_stats__succeeded)
                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_59_59;
                                                            else
                                                              {
                                                                MR_Word parse_tree__prog_item_stats__V_60_60;

                                                                {
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_60_60, parse_tree__prog_item_stats__V_18_18, parse_tree__prog_item_stats__V_39_39);
                                                                }
                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_60_60 == (MR_Integer) 0);
                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_60_60;
                                                                else
                                                                  {
                                                                    MR_Word parse_tree__prog_item_stats__V_61_61;

                                                                    {
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_61_61, parse_tree__prog_item_stats__V_19_19, parse_tree__prog_item_stats__V_40_40);
                                                                    }
                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_61_61 == (MR_Integer) 0);
                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_61_61;
                                                                    else
                                                                      {
                                                                        MR_Word parse_tree__prog_item_stats__V_62_62;

                                                                        {
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_62_62, parse_tree__prog_item_stats__V_20_20, parse_tree__prog_item_stats__V_41_41);
                                                                        }
                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_62_62 == (MR_Integer) 0);
                                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_62_62;
                                                                        else
                                                                          {
                                                                            MR_Word parse_tree__prog_item_stats__V_63_63;

                                                                            {
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_63_63, parse_tree__prog_item_stats__V_21_21, parse_tree__prog_item_stats__V_42_42);
                                                                            }
                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_63_63 == (MR_Integer) 0);
                                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                            if (parse_tree__prog_item_stats__succeeded)
                                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_63_63;
                                                                            else
                                                                              {
                                                                                MR_Word parse_tree__prog_item_stats__V_64_64;

                                                                                {
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_64_64, parse_tree__prog_item_stats__V_22_22, parse_tree__prog_item_stats__V_43_43);
                                                                                }
                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_64_64 == (MR_Integer) 0);
                                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_64_64;
                                                                                else
                                                                                  {
                                                                                    MR_Word parse_tree__prog_item_stats__V_65_65;

                                                                                    {
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_65_65, parse_tree__prog_item_stats__V_23_23, parse_tree__prog_item_stats__V_44_44);
                                                                                    }
                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_65_65 == (MR_Integer) 0);
                                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_65_65;
                                                                                    else
                                                                                      {
                                                                                        mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_item_stats__HeadVar__1_1, parse_tree__prog_item_stats__V_24_24, parse_tree__prog_item_stats__V_45_45);
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
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_item_stats__succeeded;
    MR_Integer parse_tree__prog_item_stats__CastX_45 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__1_1;
    MR_Integer parse_tree__prog_item_stats__CastY_46 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__2_2;

    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__CastX_45 == parse_tree__prog_item_stats__CastY_46);
    if (parse_tree__prog_item_stats__succeeded)
      parse_tree__prog_item_stats__succeeded = MR_TRUE;
    else
      {
        MR_Integer parse_tree__prog_item_stats__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_item_stats__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 20)));
        MR_Integer parse_tree__prog_item_stats__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_item_stats__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 20)));

        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_3_3 == parse_tree__prog_item_stats__V_24_24);
        if (parse_tree__prog_item_stats__succeeded)
          {
            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_4_4 == parse_tree__prog_item_stats__V_25_25);
            if (parse_tree__prog_item_stats__succeeded)
              {
                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_5_5 == parse_tree__prog_item_stats__V_26_26);
                if (parse_tree__prog_item_stats__succeeded)
                  {
                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_6_6 == parse_tree__prog_item_stats__V_27_27);
                    if (parse_tree__prog_item_stats__succeeded)
                      {
                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_7_7 == parse_tree__prog_item_stats__V_28_28);
                        if (parse_tree__prog_item_stats__succeeded)
                          {
                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_8_8 == parse_tree__prog_item_stats__V_29_29);
                            if (parse_tree__prog_item_stats__succeeded)
                              {
                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_9_9 == parse_tree__prog_item_stats__V_30_30);
                                if (parse_tree__prog_item_stats__succeeded)
                                  {
                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_10_10 == parse_tree__prog_item_stats__V_31_31);
                                    if (parse_tree__prog_item_stats__succeeded)
                                      {
                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_11_11 == parse_tree__prog_item_stats__V_32_32);
                                        if (parse_tree__prog_item_stats__succeeded)
                                          {
                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_12_12 == parse_tree__prog_item_stats__V_33_33);
                                            if (parse_tree__prog_item_stats__succeeded)
                                              {
                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_13_13 == parse_tree__prog_item_stats__V_34_34);
                                                if (parse_tree__prog_item_stats__succeeded)
                                                  {
                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_14_14 == parse_tree__prog_item_stats__V_35_35);
                                                    if (parse_tree__prog_item_stats__succeeded)
                                                      {
                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_15_15 == parse_tree__prog_item_stats__V_36_36);
                                                        if (parse_tree__prog_item_stats__succeeded)
                                                          {
                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_16_16 == parse_tree__prog_item_stats__V_37_37);
                                                            if (parse_tree__prog_item_stats__succeeded)
                                                              {
                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_17_17 == parse_tree__prog_item_stats__V_38_38);
                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                  {
                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_18_18 == parse_tree__prog_item_stats__V_39_39);
                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                      {
                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_19_19 == parse_tree__prog_item_stats__V_40_40);
                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                          {
                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_20_20 == parse_tree__prog_item_stats__V_41_41);
                                                                            if (parse_tree__prog_item_stats__succeeded)
                                                                              {
                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_21_21 == parse_tree__prog_item_stats__V_42_42);
                                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                                  {
                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_22_22 == parse_tree__prog_item_stats__V_43_43);
                                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                                      parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_23_23 == parse_tree__prog_item_stats__V_44_44);
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
    return parse_tree__prog_item_stats__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats____Compare____goal_stats_0_0(
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_item_stats__succeeded;
    MR_Integer parse_tree__prog_item_stats__CastX_84 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__2_2;
    MR_Integer parse_tree__prog_item_stats__CastY_85 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__3_3;

    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__CastX_84 == parse_tree__prog_item_stats__CastY_85);
    if (parse_tree__prog_item_stats__succeeded)
      *parse_tree__prog_item_stats__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer parse_tree__prog_item_stats__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_item_stats__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 20)));
        MR_Integer parse_tree__prog_item_stats__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 21)));
        MR_Integer parse_tree__prog_item_stats__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 22)));
        MR_Integer parse_tree__prog_item_stats__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 23)));
        MR_Integer parse_tree__prog_item_stats__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 24)));
        MR_Integer parse_tree__prog_item_stats__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 25)));
        MR_Integer parse_tree__prog_item_stats__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 26)));
        MR_Integer parse_tree__prog_item_stats__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_item_stats__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 20)));
        MR_Integer parse_tree__prog_item_stats__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 21)));
        MR_Integer parse_tree__prog_item_stats__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 22)));
        MR_Integer parse_tree__prog_item_stats__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 23)));
        MR_Integer parse_tree__prog_item_stats__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 24)));
        MR_Integer parse_tree__prog_item_stats__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 25)));
        MR_Integer parse_tree__prog_item_stats__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 26)));
        MR_Word parse_tree__prog_item_stats__V_58_58;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_58_58, parse_tree__prog_item_stats__V_4_4, parse_tree__prog_item_stats__V_31_31);
        }
        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_58_58 == (MR_Integer) 0);
        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
        if (parse_tree__prog_item_stats__succeeded)
          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_58_58;
        else
          {
            MR_Word parse_tree__prog_item_stats__V_59_59;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_59_59, parse_tree__prog_item_stats__V_5_5, parse_tree__prog_item_stats__V_32_32);
            }
            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_59_59 == (MR_Integer) 0);
            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
            if (parse_tree__prog_item_stats__succeeded)
              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_59_59;
            else
              {
                MR_Word parse_tree__prog_item_stats__V_60_60;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_60_60, parse_tree__prog_item_stats__V_6_6, parse_tree__prog_item_stats__V_33_33);
                }
                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_60_60 == (MR_Integer) 0);
                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                if (parse_tree__prog_item_stats__succeeded)
                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_60_60;
                else
                  {
                    MR_Word parse_tree__prog_item_stats__V_61_61;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_61_61, parse_tree__prog_item_stats__V_7_7, parse_tree__prog_item_stats__V_34_34);
                    }
                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_61_61 == (MR_Integer) 0);
                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                    if (parse_tree__prog_item_stats__succeeded)
                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_61_61;
                    else
                      {
                        MR_Word parse_tree__prog_item_stats__V_62_62;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_62_62, parse_tree__prog_item_stats__V_8_8, parse_tree__prog_item_stats__V_35_35);
                        }
                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_62_62 == (MR_Integer) 0);
                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                        if (parse_tree__prog_item_stats__succeeded)
                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_62_62;
                        else
                          {
                            MR_Word parse_tree__prog_item_stats__V_63_63;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_63_63, parse_tree__prog_item_stats__V_9_9, parse_tree__prog_item_stats__V_36_36);
                            }
                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_63_63 == (MR_Integer) 0);
                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                            if (parse_tree__prog_item_stats__succeeded)
                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_63_63;
                            else
                              {
                                MR_Word parse_tree__prog_item_stats__V_64_64;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_64_64, parse_tree__prog_item_stats__V_10_10, parse_tree__prog_item_stats__V_37_37);
                                }
                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_64_64 == (MR_Integer) 0);
                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                if (parse_tree__prog_item_stats__succeeded)
                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_64_64;
                                else
                                  {
                                    MR_Word parse_tree__prog_item_stats__V_65_65;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_65_65, parse_tree__prog_item_stats__V_11_11, parse_tree__prog_item_stats__V_38_38);
                                    }
                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_65_65 == (MR_Integer) 0);
                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                    if (parse_tree__prog_item_stats__succeeded)
                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_65_65;
                                    else
                                      {
                                        MR_Word parse_tree__prog_item_stats__V_66_66;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_66_66, parse_tree__prog_item_stats__V_12_12, parse_tree__prog_item_stats__V_39_39);
                                        }
                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_66_66 == (MR_Integer) 0);
                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                        if (parse_tree__prog_item_stats__succeeded)
                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_66_66;
                                        else
                                          {
                                            MR_Word parse_tree__prog_item_stats__V_67_67;

                                            {
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_67_67, parse_tree__prog_item_stats__V_13_13, parse_tree__prog_item_stats__V_40_40);
                                            }
                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_67_67 == (MR_Integer) 0);
                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                            if (parse_tree__prog_item_stats__succeeded)
                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_67_67;
                                            else
                                              {
                                                MR_Word parse_tree__prog_item_stats__V_68_68;

                                                {
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_68_68, parse_tree__prog_item_stats__V_14_14, parse_tree__prog_item_stats__V_41_41);
                                                }
                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_68_68 == (MR_Integer) 0);
                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                if (parse_tree__prog_item_stats__succeeded)
                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_68_68;
                                                else
                                                  {
                                                    MR_Word parse_tree__prog_item_stats__V_69_69;

                                                    {
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_69_69, parse_tree__prog_item_stats__V_15_15, parse_tree__prog_item_stats__V_42_42);
                                                    }
                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_69_69 == (MR_Integer) 0);
                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                    if (parse_tree__prog_item_stats__succeeded)
                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_69_69;
                                                    else
                                                      {
                                                        MR_Word parse_tree__prog_item_stats__V_70_70;

                                                        {
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_70_70, parse_tree__prog_item_stats__V_16_16, parse_tree__prog_item_stats__V_43_43);
                                                        }
                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_70_70 == (MR_Integer) 0);
                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                        if (parse_tree__prog_item_stats__succeeded)
                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_70_70;
                                                        else
                                                          {
                                                            MR_Word parse_tree__prog_item_stats__V_71_71;

                                                            {
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_71_71, parse_tree__prog_item_stats__V_17_17, parse_tree__prog_item_stats__V_44_44);
                                                            }
                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_71_71 == (MR_Integer) 0);
                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                            if (parse_tree__prog_item_stats__succeeded)
                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_71_71;
                                                            else
                                                              {
                                                                MR_Word parse_tree__prog_item_stats__V_72_72;

                                                                {
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_72_72, parse_tree__prog_item_stats__V_18_18, parse_tree__prog_item_stats__V_45_45);
                                                                }
                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_72_72 == (MR_Integer) 0);
                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_72_72;
                                                                else
                                                                  {
                                                                    MR_Word parse_tree__prog_item_stats__V_73_73;

                                                                    {
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_73_73, parse_tree__prog_item_stats__V_19_19, parse_tree__prog_item_stats__V_46_46);
                                                                    }
                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_73_73 == (MR_Integer) 0);
                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_73_73;
                                                                    else
                                                                      {
                                                                        MR_Word parse_tree__prog_item_stats__V_74_74;

                                                                        {
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_74_74, parse_tree__prog_item_stats__V_20_20, parse_tree__prog_item_stats__V_47_47);
                                                                        }
                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_74_74 == (MR_Integer) 0);
                                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_74_74;
                                                                        else
                                                                          {
                                                                            MR_Word parse_tree__prog_item_stats__V_75_75;

                                                                            {
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_75_75, parse_tree__prog_item_stats__V_21_21, parse_tree__prog_item_stats__V_48_48);
                                                                            }
                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_75_75 == (MR_Integer) 0);
                                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                            if (parse_tree__prog_item_stats__succeeded)
                                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_75_75;
                                                                            else
                                                                              {
                                                                                MR_Word parse_tree__prog_item_stats__V_76_76;

                                                                                {
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_76_76, parse_tree__prog_item_stats__V_22_22, parse_tree__prog_item_stats__V_49_49);
                                                                                }
                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_76_76 == (MR_Integer) 0);
                                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_76_76;
                                                                                else
                                                                                  {
                                                                                    MR_Word parse_tree__prog_item_stats__V_77_77;

                                                                                    {
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_77_77, parse_tree__prog_item_stats__V_23_23, parse_tree__prog_item_stats__V_50_50);
                                                                                    }
                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_77_77 == (MR_Integer) 0);
                                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_77_77;
                                                                                    else
                                                                                      {
                                                                                        MR_Word parse_tree__prog_item_stats__V_78_78;

                                                                                        {
                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_78_78, parse_tree__prog_item_stats__V_24_24, parse_tree__prog_item_stats__V_51_51);
                                                                                        }
                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_78_78 == (MR_Integer) 0);
                                                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_78_78;
                                                                                        else
                                                                                          {
                                                                                            MR_Word parse_tree__prog_item_stats__V_79_79;

                                                                                            {
                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_79_79, parse_tree__prog_item_stats__V_25_25, parse_tree__prog_item_stats__V_52_52);
                                                                                            }
                                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_79_79 == (MR_Integer) 0);
                                                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                            if (parse_tree__prog_item_stats__succeeded)
                                                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_79_79;
                                                                                            else
                                                                                              {
                                                                                                MR_Word parse_tree__prog_item_stats__V_80_80;

                                                                                                {
                                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_80_80, parse_tree__prog_item_stats__V_26_26, parse_tree__prog_item_stats__V_53_53);
                                                                                                }
                                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_80_80 == (MR_Integer) 0);
                                                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_80_80;
                                                                                                else
                                                                                                  {
                                                                                                    MR_Word parse_tree__prog_item_stats__V_81_81;

                                                                                                    {
                                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_81_81, parse_tree__prog_item_stats__V_27_27, parse_tree__prog_item_stats__V_54_54);
                                                                                                    }
                                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_81_81 == (MR_Integer) 0);
                                                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_81_81;
                                                                                                    else
                                                                                                      {
                                                                                                        MR_Word parse_tree__prog_item_stats__V_82_82;

                                                                                                        {
                                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_82_82, parse_tree__prog_item_stats__V_28_28, parse_tree__prog_item_stats__V_55_55);
                                                                                                        }
                                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_82_82 == (MR_Integer) 0);
                                                                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_82_82;
                                                                                                        else
                                                                                                          {
                                                                                                            MR_Word parse_tree__prog_item_stats__V_83_83;

                                                                                                            {
                                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_83_83, parse_tree__prog_item_stats__V_29_29, parse_tree__prog_item_stats__V_56_56);
                                                                                                            }
                                                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_83_83 == (MR_Integer) 0);
                                                                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                                            if (parse_tree__prog_item_stats__succeeded)
                                                                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_83_83;
                                                                                                            else
                                                                                                              {
                                                                                                                mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_item_stats__HeadVar__1_1, parse_tree__prog_item_stats__V_30_30, parse_tree__prog_item_stats__V_57_57);
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
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_item_stats__succeeded;
    MR_Integer parse_tree__prog_item_stats__CastX_57 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__1_1;
    MR_Integer parse_tree__prog_item_stats__CastY_58 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__2_2;

    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__CastX_57 == parse_tree__prog_item_stats__CastY_58);
    if (parse_tree__prog_item_stats__succeeded)
      parse_tree__prog_item_stats__succeeded = MR_TRUE;
    else
      {
        MR_Integer parse_tree__prog_item_stats__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_item_stats__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 20)));
        MR_Integer parse_tree__prog_item_stats__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 21)));
        MR_Integer parse_tree__prog_item_stats__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 22)));
        MR_Integer parse_tree__prog_item_stats__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 23)));
        MR_Integer parse_tree__prog_item_stats__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 24)));
        MR_Integer parse_tree__prog_item_stats__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 25)));
        MR_Integer parse_tree__prog_item_stats__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 26)));
        MR_Integer parse_tree__prog_item_stats__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_item_stats__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 20)));
        MR_Integer parse_tree__prog_item_stats__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 21)));
        MR_Integer parse_tree__prog_item_stats__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 22)));
        MR_Integer parse_tree__prog_item_stats__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 23)));
        MR_Integer parse_tree__prog_item_stats__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 24)));
        MR_Integer parse_tree__prog_item_stats__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 25)));
        MR_Integer parse_tree__prog_item_stats__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 26)));

        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_3_3 == parse_tree__prog_item_stats__V_30_30);
        if (parse_tree__prog_item_stats__succeeded)
          {
            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_4_4 == parse_tree__prog_item_stats__V_31_31);
            if (parse_tree__prog_item_stats__succeeded)
              {
                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_5_5 == parse_tree__prog_item_stats__V_32_32);
                if (parse_tree__prog_item_stats__succeeded)
                  {
                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_6_6 == parse_tree__prog_item_stats__V_33_33);
                    if (parse_tree__prog_item_stats__succeeded)
                      {
                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_7_7 == parse_tree__prog_item_stats__V_34_34);
                        if (parse_tree__prog_item_stats__succeeded)
                          {
                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_8_8 == parse_tree__prog_item_stats__V_35_35);
                            if (parse_tree__prog_item_stats__succeeded)
                              {
                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_9_9 == parse_tree__prog_item_stats__V_36_36);
                                if (parse_tree__prog_item_stats__succeeded)
                                  {
                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_10_10 == parse_tree__prog_item_stats__V_37_37);
                                    if (parse_tree__prog_item_stats__succeeded)
                                      {
                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_11_11 == parse_tree__prog_item_stats__V_38_38);
                                        if (parse_tree__prog_item_stats__succeeded)
                                          {
                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_12_12 == parse_tree__prog_item_stats__V_39_39);
                                            if (parse_tree__prog_item_stats__succeeded)
                                              {
                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_13_13 == parse_tree__prog_item_stats__V_40_40);
                                                if (parse_tree__prog_item_stats__succeeded)
                                                  {
                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_14_14 == parse_tree__prog_item_stats__V_41_41);
                                                    if (parse_tree__prog_item_stats__succeeded)
                                                      {
                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_15_15 == parse_tree__prog_item_stats__V_42_42);
                                                        if (parse_tree__prog_item_stats__succeeded)
                                                          {
                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_16_16 == parse_tree__prog_item_stats__V_43_43);
                                                            if (parse_tree__prog_item_stats__succeeded)
                                                              {
                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_17_17 == parse_tree__prog_item_stats__V_44_44);
                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                  {
                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_18_18 == parse_tree__prog_item_stats__V_45_45);
                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                      {
                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_19_19 == parse_tree__prog_item_stats__V_46_46);
                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                          {
                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_20_20 == parse_tree__prog_item_stats__V_47_47);
                                                                            if (parse_tree__prog_item_stats__succeeded)
                                                                              {
                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_21_21 == parse_tree__prog_item_stats__V_48_48);
                                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                                  {
                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_22_22 == parse_tree__prog_item_stats__V_49_49);
                                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                                      {
                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_23_23 == parse_tree__prog_item_stats__V_50_50);
                                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                                          {
                                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_24_24 == parse_tree__prog_item_stats__V_51_51);
                                                                                            if (parse_tree__prog_item_stats__succeeded)
                                                                                              {
                                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_25_25 == parse_tree__prog_item_stats__V_52_52);
                                                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                                                  {
                                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_26_26 == parse_tree__prog_item_stats__V_53_53);
                                                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                                                      {
                                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_27_27 == parse_tree__prog_item_stats__V_54_54);
                                                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                                                          {
                                                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_28_28 == parse_tree__prog_item_stats__V_55_55);
                                                                                                            if (parse_tree__prog_item_stats__succeeded)
                                                                                                              parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_29_29 == parse_tree__prog_item_stats__V_56_56);
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
    return parse_tree__prog_item_stats__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0(
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_item_stats__succeeded;
    MR_Word parse_tree__prog_item_stats__Cast_HeadVar1_4 = parse_tree__prog_item_stats__HeadVar__2_2;
    MR_Word parse_tree__prog_item_stats__Cast_HeadVar2_5 = parse_tree__prog_item_stats__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_item_stats_scalar_common_1[1], parse_tree__prog_item_stats__HeadVar__1_1, ((MR_Box) (parse_tree__prog_item_stats__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_item_stats__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0(
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_item_stats__succeeded;
    MR_Word parse_tree__prog_item_stats__Cast_HeadVar1_3 = parse_tree__prog_item_stats__HeadVar__1_1;
    MR_Word parse_tree__prog_item_stats__Cast_HeadVar2_4 = parse_tree__prog_item_stats__HeadVar__2_2;

    {
      parse_tree__prog_item_stats__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_item_stats_scalar_common_1[1], ((MR_Box) (parse_tree__prog_item_stats__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_item_stats__Cast_HeadVar2_4)));
    }
    return parse_tree__prog_item_stats__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__write_one_stat_6_p_0(
  MR_Word parse_tree__prog_item_stats__Stream_7,
  MR_String parse_tree__prog_item_stats__SectionName_8,
  MR_String parse_tree__prog_item_stats__StatName_9,
  MR_Integer parse_tree__prog_item_stats__StatNum_10)
{
  {
    MR_bool parse_tree__prog_item_stats__succeeded;

    {
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_7, parse_tree__prog_item_stats__SectionName_8);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_7, (MR_String) " ");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_7, parse_tree__prog_item_stats__StatName_9);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_7, (MR_String) " ");
    }
    {
      mercury__io__write_int_4_p_0(parse_tree__prog_item_stats__Stream_7, parse_tree__prog_item_stats__StatNum_10);
    }
    {
      mercury__io__nl_3_p_0(parse_tree__prog_item_stats__Stream_7);
    }
    {
      mercury__io__flush_output_3_p_0(parse_tree__prog_item_stats__Stream_7);
    }
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__write_goal_stats_5_p_0(
  MR_Word parse_tree__prog_item_stats__Stream_6,
  MR_String parse_tree__prog_item_stats__SectionName_7,
  MR_Word parse_tree__prog_item_stats__GoalStats_8)
{
  {
    MR_bool parse_tree__prog_item_stats__succeeded;
    MR_Integer parse_tree__prog_item_stats__Conj_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 0)));
    MR_Integer parse_tree__prog_item_stats__ParConj_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 1)));
    MR_Integer parse_tree__prog_item_stats__True_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 2)));
    MR_Integer parse_tree__prog_item_stats__Disj_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 3)));
    MR_Integer parse_tree__prog_item_stats__Fail_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 4)));
    MR_Integer parse_tree__prog_item_stats__Some_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 5)));
    MR_Integer parse_tree__prog_item_stats__All_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 6)));
    MR_Integer parse_tree__prog_item_stats__SomeStateVars_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 7)));
    MR_Integer parse_tree__prog_item_stats__AllStateVars_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 8)));
    MR_Integer parse_tree__prog_item_stats__PromisePurity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 9)));
    MR_Integer parse_tree__prog_item_stats__PromiseEqvSolns_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 10)));
    MR_Integer parse_tree__prog_item_stats__PromiseEqvSolnSets_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 11)));
    MR_Integer parse_tree__prog_item_stats__PromiseArbitrary_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 12)));
    MR_Integer parse_tree__prog_item_stats__ReqDetism_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 13)));
    MR_Integer parse_tree__prog_item_stats__ReqComplSwitch_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 14)));
    MR_Integer parse_tree__prog_item_stats__ReqSwitchArmDetism_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 15)));
    MR_Integer parse_tree__prog_item_stats__DisableWarnings_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 16)));
    MR_Integer parse_tree__prog_item_stats__Trace_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 17)));
    MR_Integer parse_tree__prog_item_stats__Atomic_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 18)));
    MR_Integer parse_tree__prog_item_stats__Try_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 19)));
    MR_Integer parse_tree__prog_item_stats__Implies_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 20)));
    MR_Integer parse_tree__prog_item_stats__Equivalent_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 21)));
    MR_Integer parse_tree__prog_item_stats__Not_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 22)));
    MR_Integer parse_tree__prog_item_stats__IfThenElse_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 23)));
    MR_Integer parse_tree__prog_item_stats__Event_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 24)));
    MR_Integer parse_tree__prog_item_stats__Call_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 25)));
    MR_Integer parse_tree__prog_item_stats__Unify_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 26)));

    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_conj", parse_tree__prog_item_stats__Conj_10);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_par_conj", parse_tree__prog_item_stats__ParConj_11);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_true", parse_tree__prog_item_stats__True_12);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_disj", parse_tree__prog_item_stats__Disj_13);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_fail", parse_tree__prog_item_stats__Fail_14);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_some", parse_tree__prog_item_stats__Some_15);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_all", parse_tree__prog_item_stats__All_16);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_some_state_vars", parse_tree__prog_item_stats__SomeStateVars_17);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_all_state_vars", parse_tree__prog_item_stats__AllStateVars_18);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_pro_purity", parse_tree__prog_item_stats__PromisePurity_19);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_pro_eqv_solns", parse_tree__prog_item_stats__PromiseEqvSolns_20);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_pro_eqv_soln_sets", parse_tree__prog_item_stats__PromiseEqvSolnSets_21);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_pro_arbitrary", parse_tree__prog_item_stats__PromiseArbitrary_22);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_req_detism", parse_tree__prog_item_stats__ReqDetism_23);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_req_compl_switch", parse_tree__prog_item_stats__ReqComplSwitch_24);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_req_arm_detism", parse_tree__prog_item_stats__ReqSwitchArmDetism_25);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_disable_warnings", parse_tree__prog_item_stats__DisableWarnings_26);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_trace", parse_tree__prog_item_stats__Trace_27);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_atomic", parse_tree__prog_item_stats__Atomic_28);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_try", parse_tree__prog_item_stats__Try_29);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_implies", parse_tree__prog_item_stats__Implies_30);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_equivalent", parse_tree__prog_item_stats__Equivalent_31);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_not", parse_tree__prog_item_stats__Not_32);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_if_then_else", parse_tree__prog_item_stats__IfThenElse_33);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_event", parse_tree__prog_item_stats__Event_34);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_call", parse_tree__prog_item_stats__Call_35);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_unify", parse_tree__prog_item_stats__Unify_36);
    }
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__write_section_stats_4_p_0(
  MR_Word parse_tree__prog_item_stats__Stream_5,
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_item_stats__succeeded;
    MR_String parse_tree__prog_item_stats__SectionName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word parse_tree__prog_item_stats__SectionStats_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word parse_tree__prog_item_stats__ItemStats_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_7, (MR_Integer) 0)));
    MR_Word parse_tree__prog_item_stats__GoalStats_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_7, (MR_Integer) 1)));
    MR_Integer parse_tree__prog_item_stats__Clause_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 0)));
    MR_Integer parse_tree__prog_item_stats__TypeDefn_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 1)));
    MR_Integer parse_tree__prog_item_stats__InstDefn_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 2)));
    MR_Integer parse_tree__prog_item_stats__ModeDefn_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 3)));
    MR_Integer parse_tree__prog_item_stats__PredDecl_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 4)));
    MR_Integer parse_tree__prog_item_stats__ModeDecl_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 5)));
    MR_Integer parse_tree__prog_item_stats__PragmaFIM_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 6)));
    MR_Integer parse_tree__prog_item_stats__PragmaTerm_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 7)));
    MR_Integer parse_tree__prog_item_stats__PragmaTerm2_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 8)));
    MR_Integer parse_tree__prog_item_stats__PragmaExcp_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 9)));
    MR_Integer parse_tree__prog_item_stats__PragmaTrail_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 10)));
    MR_Integer parse_tree__prog_item_stats__PragmaMM_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 11)));
    MR_Integer parse_tree__prog_item_stats__PragmaPass2_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 12)));
    MR_Integer parse_tree__prog_item_stats__PragmaPass3_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 13)));
    MR_Integer parse_tree__prog_item_stats__Promise_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 14)));
    MR_Integer parse_tree__prog_item_stats__Typeclasse_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 15)));
    MR_Integer parse_tree__prog_item_stats__Instance_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 16)));
    MR_Integer parse_tree__prog_item_stats__Initialise_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 17)));
    MR_Integer parse_tree__prog_item_stats__Finalise_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 18)));
    MR_Integer parse_tree__prog_item_stats__Mutable_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 19)));
    MR_Integer parse_tree__prog_item_stats__Nothing_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 20)));

    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_clause", parse_tree__prog_item_stats__Clause_21);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_type_defn", parse_tree__prog_item_stats__TypeDefn_22);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_inst_defn", parse_tree__prog_item_stats__InstDefn_23);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_mode_defn", parse_tree__prog_item_stats__ModeDefn_24);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pred_decl", parse_tree__prog_item_stats__PredDecl_25);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_mode_decl", parse_tree__prog_item_stats__ModeDecl_26);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_fim", parse_tree__prog_item_stats__PragmaFIM_27);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_term", parse_tree__prog_item_stats__PragmaTerm_28);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_term2", parse_tree__prog_item_stats__PragmaTerm2_29);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_excp", parse_tree__prog_item_stats__PragmaExcp_30);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_trail", parse_tree__prog_item_stats__PragmaTrail_31);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_mm", parse_tree__prog_item_stats__PragmaMM_32);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_pass2", parse_tree__prog_item_stats__PragmaPass2_33);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_pass3", parse_tree__prog_item_stats__PragmaPass3_34);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_promise", parse_tree__prog_item_stats__Promise_35);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_typeclass", parse_tree__prog_item_stats__Typeclasse_36);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_instance", parse_tree__prog_item_stats__Instance_37);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_promise", parse_tree__prog_item_stats__Promise_35);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_initialise", parse_tree__prog_item_stats__Initialise_38);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_finalise", parse_tree__prog_item_stats__Finalise_39);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_mutable", parse_tree__prog_item_stats__Mutable_40);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_nothing", parse_tree__prog_item_stats__Nothing_41);
    }
    {
      parse_tree__prog_item_stats__write_goal_stats_5_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, parse_tree__prog_item_stats__GoalStats_10);
    }
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_catch_exprs_3_p_0(
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_item_stats__succeeded;

        if ((parse_tree__prog_item_stats__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2;
        else
          {
            MR_Word parse_tree__prog_item_stats__CatchExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_item_stats__CatchExprs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__prog_item_stats__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__CatchExpr_7, (MR_Integer) 1)));
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_14_14;
            MR_Word parse_tree__prog_item_stats__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__CatchExpr_7, (MR_Integer) 0)));

            {
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__Goal_11, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_14_14);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1 = parse_tree__prog_item_stats__CatchExprs_8;
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_2 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_14_14;

              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_2;
              parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(
  MR_Word parse_tree__prog_item_stats__Goal_4,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_84)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_item_stats__succeeded;
        MR_Integer parse_tree__prog_item_stats__V_1758_1758 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 26)));
        MR_Integer parse_tree__prog_item_stats__V_1759_1759 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 25)));
        MR_Integer parse_tree__prog_item_stats__V_1760_1760 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 24)));
        MR_Integer parse_tree__prog_item_stats__V_1761_1761 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 23)));
        MR_Integer parse_tree__prog_item_stats__V_1762_1762 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 22)));
        MR_Integer parse_tree__prog_item_stats__V_1763_1763 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 21)));
        MR_Integer parse_tree__prog_item_stats__V_1764_1764 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 20)));
        MR_Integer parse_tree__prog_item_stats__V_1765_1765 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__V_1766_1766 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__V_1767_1767 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__V_1768_1768 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__V_1769_1769 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__V_1770_1770 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__V_1771_1771 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__V_1772_1772 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__V_1773_1773 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__V_1774_1774 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__V_1775_1775 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__V_1776_1776 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__V_1777_1777 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__V_1778_1778 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__V_1779_1779 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__V_1780_1780 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__V_1781_1781 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__V_1782_1782 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__V_1783_1783 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__V_1784_1784 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 0)));

        switch (MR_tag((MR_Word) parse_tree__prog_item_stats__Goal_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer parse_tree__prog_item_stats__V_86_86 = (parse_tree__prog_item_stats__V_1758_1758 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_84 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_86_86));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer parse_tree__prog_item_stats__V_90_90 = (parse_tree__prog_item_stats__V_1759_1759 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_84 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_90_90));
                MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__prog_item_stats__SubGoalA_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
              MR_Word parse_tree__prog_item_stats__SubGoalB_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219;
              MR_Integer parse_tree__prog_item_stats__V_220_220 = (parse_tree__prog_item_stats__V_1784_1784 + (MR_Integer) 1);
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_223_223;
              MR_Word parse_tree__prog_item_stats__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 0)));

              {
                parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_220_220));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
              }
              {
                parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_7, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_223_223);
              }
              /* direct tailcall eliminated */
              {
                MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_8;
                MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_223_223;

                parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83;
                parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer parse_tree__prog_item_stats__V_210_210 = (parse_tree__prog_item_stats__V_1782_1782 + (MR_Integer) 1);

                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_84 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_210_210));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                    MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_item_stats__CondGoal_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97;
                  MR_Integer parse_tree__prog_item_stats__V_98_98 = (parse_tree__prog_item_stats__V_1761_1761 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101;
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_102_102;
                  MR_Word parse_tree__prog_item_stats__ThenGoal_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));
                  MR_Word parse_tree__prog_item_stats__ElseGoal_245 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__prog_item_stats__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_98_98));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__CondGoal_71, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101);
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__ThenGoal_244, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_102_102);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__ElseGoal_245;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_102_102;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203;
                  MR_Integer parse_tree__prog_item_stats__V_204_204 = (parse_tree__prog_item_stats__V_1781_1781 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_207_207;
                  MR_Word parse_tree__prog_item_stats__SubGoalA_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__SubGoalB_228 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_204_204));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_227, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_207_207);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_228;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_207_207;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104;
                  MR_Integer parse_tree__prog_item_stats__V_105_105 = (parse_tree__prog_item_stats__V_1762_1762 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_105_105));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_243;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Integer parse_tree__prog_item_stats__V_200_200 = (parse_tree__prog_item_stats__V_1780_1780 + (MR_Integer) 1);

                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_84 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_200_200));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                    MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213;
                  MR_Integer parse_tree__prog_item_stats__V_214_214 = (parse_tree__prog_item_stats__V_1783_1783 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_217_217;
                  MR_Word parse_tree__prog_item_stats__SubGoalA_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__SubGoalB_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_214_214));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_225, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_217_217);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_226;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_217_217;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word parse_tree__prog_item_stats__QuantType_13 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)))) & (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__QuantVarsKind_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194;
                  MR_Word parse_tree__prog_item_stats__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));

                  switch (parse_tree__prog_item_stats__QuantType_13) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      switch (parse_tree__prog_item_stats__QuantVarsKind_14) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Integer parse_tree__prog_item_stats__V_187_187 = (parse_tree__prog_item_stats__V_1778_1778 + (MR_Integer) 1);

                            {
                              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_187_187));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Integer parse_tree__prog_item_stats__V_183_183 = (parse_tree__prog_item_stats__V_1776_1776 + (MR_Integer) 1);

                            {
                              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_183_183));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                            }
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 0:
                      switch (parse_tree__prog_item_stats__QuantVarsKind_14) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Integer parse_tree__prog_item_stats__V_195_195 = (parse_tree__prog_item_stats__V_1779_1779 + (MR_Integer) 1);

                            {
                              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_195_195));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Integer parse_tree__prog_item_stats__V_191_191 = (parse_tree__prog_item_stats__V_1777_1777 + (MR_Integer) 1);

                            {
                              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_191_191));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                            }
                          }
                          break;
                      }
                      break;
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_17;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177;
                  MR_Integer parse_tree__prog_item_stats__V_178_178 = (parse_tree__prog_item_stats__V_1775_1775 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_229 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_178_178));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_229;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172;
                  MR_Integer parse_tree__prog_item_stats__V_173_173 = (parse_tree__prog_item_stats__V_1774_1774 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__prog_item_stats__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_173_173));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_230;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167;
                  MR_Integer parse_tree__prog_item_stats__V_168_168 = (parse_tree__prog_item_stats__V_1773_1773 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_231 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__prog_item_stats__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_168_168));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_231;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162;
                  MR_Integer parse_tree__prog_item_stats__V_163_163 = (parse_tree__prog_item_stats__V_1772_1772 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_232 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__prog_item_stats__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_163_163));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_232;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157;
                  MR_Integer parse_tree__prog_item_stats__V_158_158 = (parse_tree__prog_item_stats__V_1771_1771 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_158_158));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_233;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152;
                  MR_Integer parse_tree__prog_item_stats__V_153_153 = (parse_tree__prog_item_stats__V_1770_1770 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_234 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_153_153));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_234;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147;
                  MR_Integer parse_tree__prog_item_stats__V_148_148 = (parse_tree__prog_item_stats__V_1769_1769 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_235 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_148_148));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_235;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142;
                  MR_Integer parse_tree__prog_item_stats__V_143_143 = (parse_tree__prog_item_stats__V_1768_1768 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_143_143));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_236;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137;
                  MR_Integer parse_tree__prog_item_stats__V_138_138 = (parse_tree__prog_item_stats__V_1767_1767 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_237 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__prog_item_stats__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_138_138));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_237;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word parse_tree__prog_item_stats__MainGoal_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));
                  MR_Word parse_tree__prog_item_stats__OrElseGoals_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131;
                  MR_Integer parse_tree__prog_item_stats__V_132_132 = (parse_tree__prog_item_stats__V_1766_1766 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_135_135;
                  MR_Word parse_tree__prog_item_stats__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_132_132));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__MainGoal_54, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_135_135);
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(parse_tree__prog_item_stats__OrElseGoals_55, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_135_135, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_84);
                  }
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word parse_tree__prog_item_stats__ThenGoal_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__MaybeElseGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));
                  MR_Word parse_tree__prog_item_stats__Catches_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__prog_item_stats__MaybeCatchAny_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 7)));
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121;
                  MR_Integer parse_tree__prog_item_stats__V_122_122 = (parse_tree__prog_item_stats__V_1765_1765 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_125_125;
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_126_126;
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_127_127;
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128;
                  MR_Word parse_tree__prog_item_stats__MainGoal_238 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_122_122));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__MainGoal_238, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_125_125);
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__ThenGoal_58, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_125_125, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_126_126);
                  }
                  if ((parse_tree__prog_item_stats__MaybeElseGoal_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_127_127 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_126_126;
                  else
                    {
                      MR_Word parse_tree__prog_item_stats__ElseGoal_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__MaybeElseGoal_59, (MR_Integer) 0)));

                      {
                        parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__ElseGoal_62, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_126_126, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_127_127);
                      }
                    }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_catch_exprs_3_p_0(parse_tree__prog_item_stats__Catches_60, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_127_127, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128);
                  }
                  if ((parse_tree__prog_item_stats__MaybeCatchAny_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128;
                  else
                    {
                      MR_Word parse_tree__prog_item_stats__CatchAnyGoal_64;
                      MR_Word parse_tree__prog_item_stats__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__MaybeCatchAny_61, (MR_Integer) 0)));
                      MR_Word parse_tree__prog_item_stats__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_129_129, (MR_Integer) 0)));

                      parse_tree__prog_item_stats__CatchAnyGoal_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_129_129, (MR_Integer) 1)));
                      /* direct tailcall eliminated */
                      {
                        MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__CatchAnyGoal_64;
                        MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128;

                        parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83;
                        parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 18:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115;
                  MR_Integer parse_tree__prog_item_stats__V_116_116 = (parse_tree__prog_item_stats__V_1764_1764 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_119_119;
                  MR_Word parse_tree__prog_item_stats__SubGoalA_239 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__SubGoalB_240 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_116_116));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_239, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_119_119);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_240;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_119_119;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 19:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109;
                  MR_Integer parse_tree__prog_item_stats__V_110_110 = (parse_tree__prog_item_stats__V_1763_1763 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_113_113;
                  MR_Word parse_tree__prog_item_stats__SubGoalA_241 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__SubGoalB_242 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_110_110));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1760_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_241, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_113_113);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_242;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_113_113;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 20:
                {
                  MR_Integer parse_tree__prog_item_stats__V_94_94 = (parse_tree__prog_item_stats__V_1760_1760 + (MR_Integer) 1);

                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_84 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1784_1784));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1783_1783));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1782_1782));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1781_1781));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1780_1780));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1779_1779));
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1778_1778));
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1777_1777));
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1776_1776));
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1775_1775));
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1774_1774));
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1773_1773));
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1772_1772));
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1771_1771));
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1770_1770));
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1769_1769));
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1768_1768));
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1767_1767));
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1766_1766));
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1765_1765));
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1764_1764));
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1763_1763));
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1762_1762));
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1761_1761));
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_94_94));
                    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1759_1759));
                    MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__prog_item_stats__V_1758_1758));
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_item_stats__succeeded;

        if ((parse_tree__prog_item_stats__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2;
        else
          {
            MR_Word parse_tree__prog_item_stats__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_item_stats__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_12_12;

            {
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__Goal_7, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_12_12);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1 = parse_tree__prog_item_stats__Goals_8;
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_2 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_12_12;

              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_2;
              parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_pragma_3_p_0(
  MR_Word parse_tree__prog_item_stats__ItemPragmaInfo_4,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46)
{
  {
    MR_bool parse_tree__prog_item_stats__succeeded;
    MR_Word parse_tree__prog_item_stats__PragmaType_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemPragmaInfo_4, (MR_Integer) 0)));
    MR_Integer parse_tree__prog_item_stats__V_407_407 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 20)));
    MR_Integer parse_tree__prog_item_stats__V_408_408 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 19)));
    MR_Integer parse_tree__prog_item_stats__V_409_409 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 18)));
    MR_Integer parse_tree__prog_item_stats__V_410_410 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 17)));
    MR_Integer parse_tree__prog_item_stats__V_411_411 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 16)));
    MR_Integer parse_tree__prog_item_stats__V_412_412 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 15)));
    MR_Integer parse_tree__prog_item_stats__V_413_413 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 14)));
    MR_Integer parse_tree__prog_item_stats__V_414_414 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 13)));
    MR_Integer parse_tree__prog_item_stats__V_415_415 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 12)));
    MR_Integer parse_tree__prog_item_stats__V_416_416 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 11)));
    MR_Integer parse_tree__prog_item_stats__V_417_417 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 10)));
    MR_Integer parse_tree__prog_item_stats__V_418_418 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 9)));
    MR_Integer parse_tree__prog_item_stats__V_419_419 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 8)));
    MR_Integer parse_tree__prog_item_stats__V_420_420 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 7)));
    MR_Integer parse_tree__prog_item_stats__V_421_421 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 6)));
    MR_Integer parse_tree__prog_item_stats__V_422_422 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 5)));
    MR_Integer parse_tree__prog_item_stats__V_423_423 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 4)));
    MR_Integer parse_tree__prog_item_stats__V_424_424 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 3)));
    MR_Integer parse_tree__prog_item_stats__V_425_425 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 2)));
    MR_Integer parse_tree__prog_item_stats__V_426_426 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 1)));
    MR_Integer parse_tree__prog_item_stats__V_427_427 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 0)));
    MR_Word parse_tree__prog_item_stats__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemPragmaInfo_4, (MR_Integer) 1)));
    MR_Word parse_tree__prog_item_stats__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemPragmaInfo_4, (MR_Integer) 2)));
    MR_Integer parse_tree__prog_item_stats__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemPragmaInfo_4, (MR_Integer) 3)));

    switch (MR_tag((MR_Word) parse_tree__prog_item_stats__PragmaType_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Integer parse_tree__prog_item_stats__V_52_52 = (parse_tree__prog_item_stats__V_415_415 + (MR_Integer) 1);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_427_427));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_426_426));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_52_52));
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer parse_tree__prog_item_stats__V_48_48 = (parse_tree__prog_item_stats__V_414_414 + (MR_Integer) 1);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_427_427));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_426_426));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_48_48));
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__PragmaType_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 4:
          case (MR_Integer) 15:
          case (MR_Integer) 16:
          case (MR_Integer) 17:
          case (MR_Integer) 27:
          case (MR_Integer) 28:
          case (MR_Integer) 30:
            {
              MR_Integer parse_tree__prog_item_stats__V_48_48 = (parse_tree__prog_item_stats__V_414_414 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_427_427));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_426_426));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_48_48));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
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
          case (MR_Integer) 31:
            {
              MR_Integer parse_tree__prog_item_stats__V_52_52 = (parse_tree__prog_item_stats__V_415_415 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_427_427));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_426_426));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_52_52));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Integer parse_tree__prog_item_stats__V_64_64 = (parse_tree__prog_item_stats__V_418_418 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_427_427));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_426_426));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_64_64));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer parse_tree__prog_item_stats__V_60_60 = (parse_tree__prog_item_stats__V_417_417 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_427_427));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_426_426));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_60_60));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer parse_tree__prog_item_stats__V_56_56 = (parse_tree__prog_item_stats__V_416_416 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_427_427));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_426_426));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_56_56));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Integer parse_tree__prog_item_stats__V_72_72 = (parse_tree__prog_item_stats__V_420_420 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_427_427));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_426_426));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_72_72));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Integer parse_tree__prog_item_stats__V_68_68 = (parse_tree__prog_item_stats__V_419_419 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_427_427));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_426_426));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_68_68));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
              }
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Integer parse_tree__prog_item_stats__V_76_76 = (parse_tree__prog_item_stats__V_421_421 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_427_427));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_426_426));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_76_76));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_5_p_0(
  MR_Word parse_tree__prog_item_stats__Item_6,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36)
{
  {
    MR_bool parse_tree__prog_item_stats__succeeded;

    switch (MR_tag((MR_Word) parse_tree__prog_item_stats__Item_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__prog_item_stats__ItemClauseInfo_9 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_item_stats__Item_6), (MR_Integer) 0);
          MR_Word parse_tree__prog_item_stats__MaybeGoal_15;
          MR_Integer parse_tree__prog_item_stats__V_87_87;
          MR_Integer parse_tree__prog_item_stats__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
          MR_Integer parse_tree__prog_item_stats__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
          MR_Integer parse_tree__prog_item_stats__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
          MR_Integer parse_tree__prog_item_stats__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
          MR_Integer parse_tree__prog_item_stats__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
          MR_Integer parse_tree__prog_item_stats__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
          MR_Integer parse_tree__prog_item_stats__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
          MR_Integer parse_tree__prog_item_stats__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
          MR_Integer parse_tree__prog_item_stats__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
          MR_Integer parse_tree__prog_item_stats__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
          MR_Integer parse_tree__prog_item_stats__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
          MR_Integer parse_tree__prog_item_stats__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
          MR_Integer parse_tree__prog_item_stats__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
          MR_Integer parse_tree__prog_item_stats__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
          MR_Integer parse_tree__prog_item_stats__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
          MR_Integer parse_tree__prog_item_stats__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
          MR_Integer parse_tree__prog_item_stats__V_106_106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
          MR_Integer parse_tree__prog_item_stats__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
          MR_Integer parse_tree__prog_item_stats__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
          MR_Integer parse_tree__prog_item_stats__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
          MR_Integer parse_tree__prog_item_stats__V_110_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));
          MR_Word parse_tree__prog_item_stats__V_10_10;
          MR_Word parse_tree__prog_item_stats__V_11_11;
          MR_Word parse_tree__prog_item_stats__V_12_12;
          MR_Word parse_tree__prog_item_stats__V_13_13;
          MR_Word parse_tree__prog_item_stats__V_14_14;
          MR_Word parse_tree__prog_item_stats__V_16_16;
          MR_Integer parse_tree__prog_item_stats__V_17_17;

          parse_tree__prog_item_stats__V_87_87 = (parse_tree__prog_item_stats__V_88_88 + (MR_Integer) 1);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_87_87));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_91_91));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_92_92));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_93_93));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_94_94));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_95_95));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_96_96));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_97_97));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_98_98));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_99_99));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_100_100));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_101_101));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_102_102));
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_103_103));
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_104_104));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_105_105));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_106_106));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_107_107));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_108_108));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_109_109));
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_110_110));
          }
          parse_tree__prog_item_stats__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 0)));
          parse_tree__prog_item_stats__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 1)));
          parse_tree__prog_item_stats__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 2)));
          parse_tree__prog_item_stats__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 3)));
          parse_tree__prog_item_stats__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 4)));
          parse_tree__prog_item_stats__MaybeGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 5)));
          parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 6)));
          parse_tree__prog_item_stats__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 7)));
          if (((MR_tag((MR_Word) parse_tree__prog_item_stats__MaybeGoal_15)) == (MR_mktag((MR_Integer) 0))))
            *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
          else
            {
              MR_Word parse_tree__prog_item_stats__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__MaybeGoal_15, (MR_Integer) 0)));

              {
                parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__Goal_18, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36);
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer parse_tree__prog_item_stats__V_83_83;
          MR_Integer parse_tree__prog_item_stats__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
          MR_Integer parse_tree__prog_item_stats__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
          MR_Integer parse_tree__prog_item_stats__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
          MR_Integer parse_tree__prog_item_stats__V_134_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
          MR_Integer parse_tree__prog_item_stats__V_135_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
          MR_Integer parse_tree__prog_item_stats__V_136_136 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
          MR_Integer parse_tree__prog_item_stats__V_137_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
          MR_Integer parse_tree__prog_item_stats__V_138_138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
          MR_Integer parse_tree__prog_item_stats__V_139_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
          MR_Integer parse_tree__prog_item_stats__V_140_140 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
          MR_Integer parse_tree__prog_item_stats__V_141_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
          MR_Integer parse_tree__prog_item_stats__V_142_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
          MR_Integer parse_tree__prog_item_stats__V_143_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
          MR_Integer parse_tree__prog_item_stats__V_144_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
          MR_Integer parse_tree__prog_item_stats__V_145_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
          MR_Integer parse_tree__prog_item_stats__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
          MR_Integer parse_tree__prog_item_stats__V_147_147 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
          MR_Integer parse_tree__prog_item_stats__V_148_148 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
          MR_Integer parse_tree__prog_item_stats__V_149_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
          MR_Integer parse_tree__prog_item_stats__V_150_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
          MR_Integer parse_tree__prog_item_stats__V_151_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

          parse_tree__prog_item_stats__V_83_83 = (parse_tree__prog_item_stats__V_84_84 + (MR_Integer) 1);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_132_132));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_83_83));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_133_133));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_134_134));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_135_135));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_136_136));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_137_137));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_138_138));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_139_139));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_140_140));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_141_141));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_142_142));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_143_143));
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_144_144));
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_145_145));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_146_146));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_147_147));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_148_148));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_149_149));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_150_150));
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_151_151));
          }
          *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer parse_tree__prog_item_stats__V_79_79;
          MR_Integer parse_tree__prog_item_stats__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
          MR_Integer parse_tree__prog_item_stats__V_173_173 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
          MR_Integer parse_tree__prog_item_stats__V_174_174 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
          MR_Integer parse_tree__prog_item_stats__V_175_175 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
          MR_Integer parse_tree__prog_item_stats__V_176_176 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
          MR_Integer parse_tree__prog_item_stats__V_177_177 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
          MR_Integer parse_tree__prog_item_stats__V_178_178 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
          MR_Integer parse_tree__prog_item_stats__V_179_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
          MR_Integer parse_tree__prog_item_stats__V_180_180 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
          MR_Integer parse_tree__prog_item_stats__V_181_181 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
          MR_Integer parse_tree__prog_item_stats__V_182_182 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
          MR_Integer parse_tree__prog_item_stats__V_183_183 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
          MR_Integer parse_tree__prog_item_stats__V_184_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
          MR_Integer parse_tree__prog_item_stats__V_185_185 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
          MR_Integer parse_tree__prog_item_stats__V_186_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
          MR_Integer parse_tree__prog_item_stats__V_187_187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
          MR_Integer parse_tree__prog_item_stats__V_188_188 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
          MR_Integer parse_tree__prog_item_stats__V_189_189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
          MR_Integer parse_tree__prog_item_stats__V_190_190 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
          MR_Integer parse_tree__prog_item_stats__V_191_191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
          MR_Integer parse_tree__prog_item_stats__V_192_192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

          parse_tree__prog_item_stats__V_79_79 = (parse_tree__prog_item_stats__V_80_80 + (MR_Integer) 1);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_173_173));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_174_174));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_79_79));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_175_175));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_176_176));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_177_177));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_178_178));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_179_179));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_180_180));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_181_181));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_182_182));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_183_183));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_184_184));
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_185_185));
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_186_186));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_187_187));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_188_188));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_189_189));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_190_190));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_191_191));
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_192_192));
          }
          *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Item_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer parse_tree__prog_item_stats__V_75_75;
              MR_Integer parse_tree__prog_item_stats__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
              MR_Integer parse_tree__prog_item_stats__V_214_214 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_item_stats__V_215_215 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_item_stats__V_216_216 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
              MR_Integer parse_tree__prog_item_stats__V_217_217 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
              MR_Integer parse_tree__prog_item_stats__V_218_218 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
              MR_Integer parse_tree__prog_item_stats__V_219_219 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
              MR_Integer parse_tree__prog_item_stats__V_220_220 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
              MR_Integer parse_tree__prog_item_stats__V_221_221 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
              MR_Integer parse_tree__prog_item_stats__V_222_222 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
              MR_Integer parse_tree__prog_item_stats__V_223_223 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
              MR_Integer parse_tree__prog_item_stats__V_224_224 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
              MR_Integer parse_tree__prog_item_stats__V_225_225 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
              MR_Integer parse_tree__prog_item_stats__V_226_226 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
              MR_Integer parse_tree__prog_item_stats__V_227_227 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
              MR_Integer parse_tree__prog_item_stats__V_228_228 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
              MR_Integer parse_tree__prog_item_stats__V_229_229 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
              MR_Integer parse_tree__prog_item_stats__V_230_230 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
              MR_Integer parse_tree__prog_item_stats__V_231_231 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
              MR_Integer parse_tree__prog_item_stats__V_232_232 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
              MR_Integer parse_tree__prog_item_stats__V_233_233 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

              parse_tree__prog_item_stats__V_75_75 = (parse_tree__prog_item_stats__V_76_76 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_214_214));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_215_215));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_216_216));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_75_75));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_217_217));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_218_218));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_219_219));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_220_220));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_221_221));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_222_222));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_223_223));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_224_224));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_225_225));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_226_226));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_227_227));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_228_228));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_229_229));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_230_230));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_231_231));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_232_232));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_233_233));
              }
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer parse_tree__prog_item_stats__V_71_71;
              MR_Integer parse_tree__prog_item_stats__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
              MR_Integer parse_tree__prog_item_stats__V_255_255 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_item_stats__V_256_256 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_item_stats__V_257_257 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
              MR_Integer parse_tree__prog_item_stats__V_258_258 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
              MR_Integer parse_tree__prog_item_stats__V_259_259 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
              MR_Integer parse_tree__prog_item_stats__V_260_260 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
              MR_Integer parse_tree__prog_item_stats__V_261_261 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
              MR_Integer parse_tree__prog_item_stats__V_262_262 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
              MR_Integer parse_tree__prog_item_stats__V_263_263 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
              MR_Integer parse_tree__prog_item_stats__V_264_264 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
              MR_Integer parse_tree__prog_item_stats__V_265_265 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
              MR_Integer parse_tree__prog_item_stats__V_266_266 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
              MR_Integer parse_tree__prog_item_stats__V_267_267 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
              MR_Integer parse_tree__prog_item_stats__V_268_268 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
              MR_Integer parse_tree__prog_item_stats__V_269_269 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
              MR_Integer parse_tree__prog_item_stats__V_270_270 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
              MR_Integer parse_tree__prog_item_stats__V_271_271 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
              MR_Integer parse_tree__prog_item_stats__V_272_272 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
              MR_Integer parse_tree__prog_item_stats__V_273_273 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
              MR_Integer parse_tree__prog_item_stats__V_274_274 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

              parse_tree__prog_item_stats__V_71_71 = (parse_tree__prog_item_stats__V_72_72 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_255_255));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_256_256));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_257_257));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_258_258));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_71_71));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_259_259));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_260_260));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_261_261));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_262_262));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_263_263));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_264_264));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_265_265));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_266_266));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_267_267));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_268_268));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_269_269));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_270_270));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_271_271));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_272_272));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_273_273));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_274_274));
              }
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer parse_tree__prog_item_stats__V_67_67;
              MR_Integer parse_tree__prog_item_stats__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
              MR_Integer parse_tree__prog_item_stats__V_296_296 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_item_stats__V_297_297 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_item_stats__V_298_298 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
              MR_Integer parse_tree__prog_item_stats__V_299_299 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
              MR_Integer parse_tree__prog_item_stats__V_300_300 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
              MR_Integer parse_tree__prog_item_stats__V_301_301 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
              MR_Integer parse_tree__prog_item_stats__V_302_302 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
              MR_Integer parse_tree__prog_item_stats__V_303_303 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
              MR_Integer parse_tree__prog_item_stats__V_304_304 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
              MR_Integer parse_tree__prog_item_stats__V_305_305 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
              MR_Integer parse_tree__prog_item_stats__V_306_306 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
              MR_Integer parse_tree__prog_item_stats__V_307_307 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
              MR_Integer parse_tree__prog_item_stats__V_308_308 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
              MR_Integer parse_tree__prog_item_stats__V_309_309 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
              MR_Integer parse_tree__prog_item_stats__V_310_310 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
              MR_Integer parse_tree__prog_item_stats__V_311_311 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
              MR_Integer parse_tree__prog_item_stats__V_312_312 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
              MR_Integer parse_tree__prog_item_stats__V_313_313 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
              MR_Integer parse_tree__prog_item_stats__V_314_314 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
              MR_Integer parse_tree__prog_item_stats__V_315_315 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

              parse_tree__prog_item_stats__V_67_67 = (parse_tree__prog_item_stats__V_68_68 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_296_296));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_297_297));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_298_298));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_299_299));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_300_300));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_67_67));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_301_301));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_302_302));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_303_303));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_304_304));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_305_305));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_306_306));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_307_307));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_308_308));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_309_309));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_310_310));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_311_311));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_312_312));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_313_313));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_314_314));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_315_315));
              }
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__prog_item_stats__ItemPragmaInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Item_6, (MR_Integer) 1)));

              {
                parse_tree__prog_item_stats__gather_stats_in_item_pragma_3_p_0(parse_tree__prog_item_stats__ItemPragmaInfo_25, parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34);
              }
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer parse_tree__prog_item_stats__V_62_62;
              MR_Integer parse_tree__prog_item_stats__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
              MR_Integer parse_tree__prog_item_stats__V_337_337 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_item_stats__V_338_338 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_item_stats__V_339_339 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
              MR_Integer parse_tree__prog_item_stats__V_340_340 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
              MR_Integer parse_tree__prog_item_stats__V_341_341 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
              MR_Integer parse_tree__prog_item_stats__V_342_342 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
              MR_Integer parse_tree__prog_item_stats__V_343_343 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
              MR_Integer parse_tree__prog_item_stats__V_344_344 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
              MR_Integer parse_tree__prog_item_stats__V_345_345 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
              MR_Integer parse_tree__prog_item_stats__V_346_346 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
              MR_Integer parse_tree__prog_item_stats__V_347_347 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
              MR_Integer parse_tree__prog_item_stats__V_348_348 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
              MR_Integer parse_tree__prog_item_stats__V_349_349 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
              MR_Integer parse_tree__prog_item_stats__V_350_350 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
              MR_Integer parse_tree__prog_item_stats__V_351_351 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
              MR_Integer parse_tree__prog_item_stats__V_352_352 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
              MR_Integer parse_tree__prog_item_stats__V_353_353 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
              MR_Integer parse_tree__prog_item_stats__V_354_354 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
              MR_Integer parse_tree__prog_item_stats__V_355_355 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
              MR_Integer parse_tree__prog_item_stats__V_356_356 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

              parse_tree__prog_item_stats__V_62_62 = (parse_tree__prog_item_stats__V_63_63 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_337_337));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_338_338));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_339_339));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_340_340));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_341_341));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_342_342));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_343_343));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_344_344));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_345_345));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_346_346));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_347_347));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_348_348));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_349_349));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_350_350));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_62_62));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_351_351));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_352_352));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_353_353));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_354_354));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_355_355));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_356_356));
              }
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer parse_tree__prog_item_stats__V_58_58;
              MR_Integer parse_tree__prog_item_stats__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
              MR_Integer parse_tree__prog_item_stats__V_378_378 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_item_stats__V_379_379 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_item_stats__V_380_380 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
              MR_Integer parse_tree__prog_item_stats__V_381_381 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
              MR_Integer parse_tree__prog_item_stats__V_382_382 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
              MR_Integer parse_tree__prog_item_stats__V_383_383 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
              MR_Integer parse_tree__prog_item_stats__V_384_384 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
              MR_Integer parse_tree__prog_item_stats__V_385_385 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
              MR_Integer parse_tree__prog_item_stats__V_386_386 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
              MR_Integer parse_tree__prog_item_stats__V_387_387 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
              MR_Integer parse_tree__prog_item_stats__V_388_388 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
              MR_Integer parse_tree__prog_item_stats__V_389_389 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
              MR_Integer parse_tree__prog_item_stats__V_390_390 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
              MR_Integer parse_tree__prog_item_stats__V_391_391 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
              MR_Integer parse_tree__prog_item_stats__V_392_392 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
              MR_Integer parse_tree__prog_item_stats__V_393_393 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
              MR_Integer parse_tree__prog_item_stats__V_394_394 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
              MR_Integer parse_tree__prog_item_stats__V_395_395 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
              MR_Integer parse_tree__prog_item_stats__V_396_396 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
              MR_Integer parse_tree__prog_item_stats__V_397_397 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

              parse_tree__prog_item_stats__V_58_58 = (parse_tree__prog_item_stats__V_59_59 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_378_378));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_379_379));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_380_380));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_381_381));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_382_382));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_383_383));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_384_384));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_385_385));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_386_386));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_387_387));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_388_388));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_389_389));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_390_390));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_391_391));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_392_392));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_58_58));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_393_393));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_394_394));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_395_395));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_396_396));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_397_397));
              }
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer parse_tree__prog_item_stats__V_54_54;
              MR_Integer parse_tree__prog_item_stats__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
              MR_Integer parse_tree__prog_item_stats__V_419_419 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_item_stats__V_420_420 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_item_stats__V_421_421 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
              MR_Integer parse_tree__prog_item_stats__V_422_422 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
              MR_Integer parse_tree__prog_item_stats__V_423_423 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
              MR_Integer parse_tree__prog_item_stats__V_424_424 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
              MR_Integer parse_tree__prog_item_stats__V_425_425 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
              MR_Integer parse_tree__prog_item_stats__V_426_426 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
              MR_Integer parse_tree__prog_item_stats__V_427_427 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
              MR_Integer parse_tree__prog_item_stats__V_428_428 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
              MR_Integer parse_tree__prog_item_stats__V_429_429 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
              MR_Integer parse_tree__prog_item_stats__V_430_430 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
              MR_Integer parse_tree__prog_item_stats__V_431_431 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
              MR_Integer parse_tree__prog_item_stats__V_432_432 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
              MR_Integer parse_tree__prog_item_stats__V_433_433 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
              MR_Integer parse_tree__prog_item_stats__V_434_434 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
              MR_Integer parse_tree__prog_item_stats__V_435_435 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
              MR_Integer parse_tree__prog_item_stats__V_436_436 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
              MR_Integer parse_tree__prog_item_stats__V_437_437 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
              MR_Integer parse_tree__prog_item_stats__V_438_438 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

              parse_tree__prog_item_stats__V_54_54 = (parse_tree__prog_item_stats__V_55_55 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_426_426));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_427_427));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_428_428));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_429_429));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_430_430));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_431_431));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_432_432));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_433_433));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_434_434));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_54_54));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_435_435));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_436_436));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_437_437));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_438_438));
              }
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer parse_tree__prog_item_stats__V_50_50;
              MR_Integer parse_tree__prog_item_stats__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
              MR_Integer parse_tree__prog_item_stats__V_460_460 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_item_stats__V_461_461 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_item_stats__V_462_462 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
              MR_Integer parse_tree__prog_item_stats__V_463_463 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
              MR_Integer parse_tree__prog_item_stats__V_464_464 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
              MR_Integer parse_tree__prog_item_stats__V_465_465 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
              MR_Integer parse_tree__prog_item_stats__V_466_466 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
              MR_Integer parse_tree__prog_item_stats__V_467_467 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
              MR_Integer parse_tree__prog_item_stats__V_468_468 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
              MR_Integer parse_tree__prog_item_stats__V_469_469 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
              MR_Integer parse_tree__prog_item_stats__V_470_470 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
              MR_Integer parse_tree__prog_item_stats__V_471_471 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
              MR_Integer parse_tree__prog_item_stats__V_472_472 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
              MR_Integer parse_tree__prog_item_stats__V_473_473 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
              MR_Integer parse_tree__prog_item_stats__V_474_474 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
              MR_Integer parse_tree__prog_item_stats__V_475_475 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
              MR_Integer parse_tree__prog_item_stats__V_476_476 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
              MR_Integer parse_tree__prog_item_stats__V_477_477 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
              MR_Integer parse_tree__prog_item_stats__V_478_478 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
              MR_Integer parse_tree__prog_item_stats__V_479_479 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

              parse_tree__prog_item_stats__V_50_50 = (parse_tree__prog_item_stats__V_51_51 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_460_460));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_461_461));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_462_462));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_463_463));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_464_464));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_465_465));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_466_466));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_467_467));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_468_468));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_469_469));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_470_470));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_471_471));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_472_472));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_473_473));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_474_474));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_475_475));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_476_476));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_50_50));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_477_477));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_478_478));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_479_479));
              }
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Integer parse_tree__prog_item_stats__V_46_46;
              MR_Integer parse_tree__prog_item_stats__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
              MR_Integer parse_tree__prog_item_stats__V_501_501 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_item_stats__V_502_502 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_item_stats__V_503_503 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
              MR_Integer parse_tree__prog_item_stats__V_504_504 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
              MR_Integer parse_tree__prog_item_stats__V_505_505 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
              MR_Integer parse_tree__prog_item_stats__V_506_506 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
              MR_Integer parse_tree__prog_item_stats__V_507_507 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
              MR_Integer parse_tree__prog_item_stats__V_508_508 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
              MR_Integer parse_tree__prog_item_stats__V_509_509 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
              MR_Integer parse_tree__prog_item_stats__V_510_510 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
              MR_Integer parse_tree__prog_item_stats__V_511_511 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
              MR_Integer parse_tree__prog_item_stats__V_512_512 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
              MR_Integer parse_tree__prog_item_stats__V_513_513 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
              MR_Integer parse_tree__prog_item_stats__V_514_514 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
              MR_Integer parse_tree__prog_item_stats__V_515_515 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
              MR_Integer parse_tree__prog_item_stats__V_516_516 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
              MR_Integer parse_tree__prog_item_stats__V_517_517 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
              MR_Integer parse_tree__prog_item_stats__V_518_518 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
              MR_Integer parse_tree__prog_item_stats__V_519_519 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
              MR_Integer parse_tree__prog_item_stats__V_520_520 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

              parse_tree__prog_item_stats__V_46_46 = (parse_tree__prog_item_stats__V_47_47 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_501_501));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_502_502));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_503_503));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_504_504));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_505_505));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_506_506));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_507_507));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_508_508));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_509_509));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_510_510));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_511_511));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_512_512));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_513_513));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_514_514));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_515_515));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_516_516));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_517_517));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_518_518));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_46_46));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_519_519));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_520_520));
              }
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Integer parse_tree__prog_item_stats__V_42_42;
              MR_Integer parse_tree__prog_item_stats__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
              MR_Integer parse_tree__prog_item_stats__V_542_542 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_item_stats__V_543_543 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_item_stats__V_544_544 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
              MR_Integer parse_tree__prog_item_stats__V_545_545 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
              MR_Integer parse_tree__prog_item_stats__V_546_546 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
              MR_Integer parse_tree__prog_item_stats__V_547_547 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
              MR_Integer parse_tree__prog_item_stats__V_548_548 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
              MR_Integer parse_tree__prog_item_stats__V_549_549 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
              MR_Integer parse_tree__prog_item_stats__V_550_550 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
              MR_Integer parse_tree__prog_item_stats__V_551_551 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
              MR_Integer parse_tree__prog_item_stats__V_552_552 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
              MR_Integer parse_tree__prog_item_stats__V_553_553 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
              MR_Integer parse_tree__prog_item_stats__V_554_554 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
              MR_Integer parse_tree__prog_item_stats__V_555_555 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
              MR_Integer parse_tree__prog_item_stats__V_556_556 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
              MR_Integer parse_tree__prog_item_stats__V_557_557 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
              MR_Integer parse_tree__prog_item_stats__V_558_558 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
              MR_Integer parse_tree__prog_item_stats__V_559_559 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
              MR_Integer parse_tree__prog_item_stats__V_560_560 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
              MR_Integer parse_tree__prog_item_stats__V_561_561 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

              parse_tree__prog_item_stats__V_42_42 = (parse_tree__prog_item_stats__V_43_43 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_542_542));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_543_543));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_544_544));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_545_545));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_546_546));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_547_547));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_548_548));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_549_549));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_550_550));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_551_551));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_552_552));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_553_553));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_554_554));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_555_555));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_556_556));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_557_557));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_558_558));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_559_559));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_560_560));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_42_42));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_561_561));
              }
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer parse_tree__prog_item_stats__V_38_38;
              MR_Integer parse_tree__prog_item_stats__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));
              MR_Integer parse_tree__prog_item_stats__V_583_583 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_item_stats__V_584_584 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_item_stats__V_585_585 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
              MR_Integer parse_tree__prog_item_stats__V_586_586 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
              MR_Integer parse_tree__prog_item_stats__V_587_587 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
              MR_Integer parse_tree__prog_item_stats__V_588_588 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
              MR_Integer parse_tree__prog_item_stats__V_589_589 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
              MR_Integer parse_tree__prog_item_stats__V_590_590 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
              MR_Integer parse_tree__prog_item_stats__V_591_591 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
              MR_Integer parse_tree__prog_item_stats__V_592_592 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
              MR_Integer parse_tree__prog_item_stats__V_593_593 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
              MR_Integer parse_tree__prog_item_stats__V_594_594 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
              MR_Integer parse_tree__prog_item_stats__V_595_595 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
              MR_Integer parse_tree__prog_item_stats__V_596_596 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
              MR_Integer parse_tree__prog_item_stats__V_597_597 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
              MR_Integer parse_tree__prog_item_stats__V_598_598 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
              MR_Integer parse_tree__prog_item_stats__V_599_599 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
              MR_Integer parse_tree__prog_item_stats__V_600_600 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
              MR_Integer parse_tree__prog_item_stats__V_601_601 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
              MR_Integer parse_tree__prog_item_stats__V_602_602 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));

              parse_tree__prog_item_stats__V_38_38 = (parse_tree__prog_item_stats__V_39_39 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_583_583));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_584_584));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_585_585));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_586_586));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_587_587));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_588_588));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_589_589));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_590_590));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_591_591));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_592_592));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_593_593));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_594_594));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_595_595));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_596_596));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_597_597));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_598_598));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_599_599));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_600_600));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_601_601));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_602_602));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_38_38));
              }
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_2,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_3,
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_4,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_item_stats__succeeded;

        if ((parse_tree__prog_item_stats__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_5 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_4;
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_3 = parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_2;
          }
        else
          {
            MR_Word parse_tree__prog_item_stats__Item_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_item_stats__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_20_20;
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_21_21;

            {
              parse_tree__prog_item_stats__gather_stats_in_item_5_p_0(parse_tree__prog_item_stats__Item_12, parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_2, &parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_20_20, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_4, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_21_21);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1 = parse_tree__prog_item_stats__Items_13;
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0__tmp_copy_2 = parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_20_20;
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_4 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_21_21;

              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_4 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_4;
              parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_2 = parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0__tmp_copy_2;
              parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
parse_tree__prog_item_stats__init_goal_stats_0_f_0(void)
{
  {
    MR_bool parse_tree__prog_item_stats__succeeded;

    return (MR_Word) &parse_tree__prog_item_stats_scalar_common_3[0];
  }
}

static void MR_CALL 
parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0_1(
  MR_Box parse_tree__prog_item_stats__closure_arg,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_3)
{
  {
    MR_Box parse_tree__prog_item_stats__closure = parse_tree__prog_item_stats__closure_arg;

    {
      parse_tree__prog_item_stats__write_section_stats_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0(
  MR_Word parse_tree__prog_item_stats__Stream_5,
  MR_Word parse_tree__prog_item_stats__AugCompUnit_6)
{
  {
    MR_bool parse_tree__prog_item_stats__succeeded;
    MR_Word parse_tree__prog_item_stats__CompUnitStats_8;
    MR_Word parse_tree__prog_item_stats__V_11_11;
    MR_Word parse_tree__prog_item_stats__SrcItemBlocks_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 3)));
    MR_Word parse_tree__prog_item_stats__DirectIntItemBlocks_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 4)));
    MR_Word parse_tree__prog_item_stats__IndirectIntItemBlocks_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 5)));
    MR_Word parse_tree__prog_item_stats__OptItemBlocks_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 6)));
    MR_Word parse_tree__prog_item_stats__IntForOptItemBlocks_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 7)));
    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_14_31;
    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_16_33;
    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_18_35;
    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_20_37;
    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_22_39;
    MR_Word parse_tree__prog_item_stats__SectionStatPairs_64;
    MR_String parse_tree__prog_item_stats__V_69_69;
    MR_Word parse_tree__prog_item_stats__V_71_71;
    MR_Word parse_tree__prog_item_stats___ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 0)));
    MR_Word parse_tree__prog_item_stats___ModuleNameContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 1)));
    MR_Word parse_tree__prog_item_stats___ModuleVersionNumbers_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 2)));
    MR_Word parse_tree__prog_item_stats__V_13_13;
    MR_Word parse_tree__prog_item_stats__V_14_14;
    MR_Word parse_tree__prog_item_stats__V_15_15;
    MR_Word parse_tree__prog_item_stats__V_16_16;
    MR_Word parse_tree__prog_item_stats__V_17_17;
    MR_Word parse_tree__prog_item_stats__V_18_18;
    MR_Word parse_tree__prog_item_stats__V_19_19;
    MR_Box parse_tree__prog_item_stats__conv0_STATE_VARIABLE_IO_10;

    {
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_14_31);
    }
    {
      parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho4_4_p_0(parse_tree__prog_item_stats__SrcItemBlocks_26, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_14_31, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_16_33);
    }
    {
      parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho3_4_p_0(parse_tree__prog_item_stats__DirectIntItemBlocks_27, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_16_33, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_18_35);
    }
    {
      parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho3_4_p_0(parse_tree__prog_item_stats__IndirectIntItemBlocks_28, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_18_35, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_20_37);
    }
    {
      parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho2_4_p_0(parse_tree__prog_item_stats__IntForOptItemBlocks_30, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_20_37, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_22_39);
    }
    {
      parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho1_4_p_0(parse_tree__prog_item_stats__OptItemBlocks_29, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_22_39, &parse_tree__prog_item_stats__CompUnitStats_8);
    }
    parse_tree__prog_item_stats__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 0)));
    parse_tree__prog_item_stats__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 1)));
    parse_tree__prog_item_stats__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 2)));
    parse_tree__prog_item_stats__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 3)));
    parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 4)));
    parse_tree__prog_item_stats__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 5)));
    parse_tree__prog_item_stats__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 6)));
    parse_tree__prog_item_stats__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 7)));
    {
      parse_tree__prog_item_stats__V_69_69 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_item_stats__V_11_11);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_5, (MR_String) "MODULE ");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__V_69_69);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_5, (MR_String) "\n");
    }
    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, parse_tree__prog_item_stats__CompUnitStats_8, &parse_tree__prog_item_stats__SectionStatPairs_64);
    }
    {
      parse_tree__prog_item_stats__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_71_71, 0) = ((MR_Box) (&parse_tree__prog_item_stats_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_71_71, 1) = ((MR_Box) (parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_71_71, 3) = ((MR_Box) (parse_tree__prog_item_stats__Stream_5));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item_stats_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__prog_item_stats__V_71_71, parse_tree__prog_item_stats__SectionStatPairs_64, ((MR_Box) ((MR_Integer) 0)), &parse_tree__prog_item_stats__conv0_STATE_VARIABLE_IO_10);
    }
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

/* :- end_module parse_tree.prog_item_stats. */
