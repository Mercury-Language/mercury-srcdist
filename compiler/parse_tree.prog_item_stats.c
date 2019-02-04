/*
** Automatically generated from `prog_item_stats.m'
** by the Mercury compiler,
** version rotd-2017-06-22
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
            MR_Word parse_tree__prog_item_stats__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 1)));
            MR_Word parse_tree__prog_item_stats__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 2)));
            MR_Word parse_tree__prog_item_stats__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 3)));
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
              MR_Word parse_tree__prog_item_stats__next_value_of_HeadVar__2_2 = parse_tree__prog_item_stats__ItemBlocks_11;
              MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_CompUnitStats_0_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;

              parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_CompUnitStats_0_3;
              parse_tree__prog_item_stats__HeadVar__2_2 = parse_tree__prog_item_stats__next_value_of_HeadVar__2_2;
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
            MR_Word parse_tree__prog_item_stats__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 1)));
            MR_Word parse_tree__prog_item_stats__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 2)));
            MR_Word parse_tree__prog_item_stats__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 3)));
            MR_Word parse_tree__prog_item_stats__SectionStats0_19;
            MR_Box parse_tree__prog_item_stats__conv0_SectionStats0_19;

            if (((MR_tag((MR_Word) parse_tree__prog_item_stats__Section_13)) == (MR_mktag((MR_Integer) 1))))
              parse_tree__prog_item_stats__SectionName_18 = (MR_String) "int_abstract_imported";
            else
              {
                MR_Word parse_tree__prog_item_stats__Var_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__Section_13, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
                MR_Word parse_tree__prog_item_stats__Var_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__Section_13, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
                MR_Word parse_tree__prog_item_stats__Var_58 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__Section_13, (MR_Integer) 1)))) & (MR_Integer) 3);
                MR_Word parse_tree__prog_item_stats__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__Section_13, (MR_Integer) 0)));

                switch (parse_tree__prog_item_stats__Var_56) {
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
                MR_Word parse_tree__prog_item_stats__Var_29;
                MR_Word parse_tree__prog_item_stats__ItemStats_32;
                MR_Word parse_tree__prog_item_stats__GoalStats_33;
                MR_Word parse_tree__prog_item_stats__SectionStats_34;

                {
                  parse_tree__prog_item_stats__Var_29 = parse_tree__prog_item_stats__init_goal_stats_0_f_0();
                }
                {
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, (MR_Word) &parse_tree__prog_item_stats_scalar_common_2[0], &parse_tree__prog_item_stats__ItemStats_32, parse_tree__prog_item_stats__Var_29, &parse_tree__prog_item_stats__GoalStats_33);
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
              MR_Word parse_tree__prog_item_stats__next_value_of_HeadVar__2_2 = parse_tree__prog_item_stats__ItemBlocks_11;
              MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_CompUnitStats_0_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;

              parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_CompUnitStats_0_3;
              parse_tree__prog_item_stats__HeadVar__2_2 = parse_tree__prog_item_stats__next_value_of_HeadVar__2_2;
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
            MR_Word parse_tree__prog_item_stats__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 1)));
            MR_Word parse_tree__prog_item_stats__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 2)));
            MR_Word parse_tree__prog_item_stats__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 3)));
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
              MR_Word parse_tree__prog_item_stats__next_value_of_HeadVar__2_2 = parse_tree__prog_item_stats__ItemBlocks_11;
              MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_CompUnitStats_0_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;

              parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_CompUnitStats_0_3;
              parse_tree__prog_item_stats__HeadVar__2_2 = parse_tree__prog_item_stats__next_value_of_HeadVar__2_2;
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
            MR_Word parse_tree__prog_item_stats__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 1)));
            MR_Word parse_tree__prog_item_stats__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 2)));
            MR_Word parse_tree__prog_item_stats__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 3)));
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
              MR_Word parse_tree__prog_item_stats__next_value_of_HeadVar__2_2 = parse_tree__prog_item_stats__ItemBlocks_11;
              MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_CompUnitStats_0_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;

              parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_CompUnitStats_0_3;
              parse_tree__prog_item_stats__HeadVar__2_2 = parse_tree__prog_item_stats__next_value_of_HeadVar__2_2;
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
        MR_Word parse_tree__prog_item_stats__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_item_stats__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_item_stats__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_item_stats__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_item_stats__Var_8;

        {
          parse_tree__prog_item_stats____Compare____item_stats_0_0(&parse_tree__prog_item_stats__Var_8, parse_tree__prog_item_stats__ArgX1_4, parse_tree__prog_item_stats__ArgY1_5);
        }
        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_8 == (MR_Integer) 0);
        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
        if (parse_tree__prog_item_stats__succeeded)
          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_8;
        else
          {
            parse_tree__prog_item_stats____Compare____goal_stats_0_0(parse_tree__prog_item_stats__HeadVar__1_1, parse_tree__prog_item_stats__ArgX2_6, parse_tree__prog_item_stats__ArgY2_7);
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
        MR_Word parse_tree__prog_item_stats__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_item_stats__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_item_stats__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__prog_item_stats__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));

        {
          parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____item_stats_0_0(parse_tree__prog_item_stats__ArgX1_3, parse_tree__prog_item_stats__ArgY1_4);
        }
        if (parse_tree__prog_item_stats__succeeded)
          {
            parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____goal_stats_0_0(parse_tree__prog_item_stats__ArgX2_5, parse_tree__prog_item_stats__ArgY2_6);
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
        MR_Integer parse_tree__prog_item_stats__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_item_stats__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_item_stats__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__ArgX5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__ArgY5_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__ArgX6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__ArgY6_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__ArgX7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__ArgY7_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__ArgX8_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__ArgY8_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__ArgX9_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__ArgY9_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__ArgX10_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__ArgY10_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__ArgX11_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__ArgY11_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__ArgX12_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__ArgY12_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__ArgX13_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__ArgY13_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__ArgX14_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__ArgY14_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__ArgX15_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__ArgY15_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__ArgX16_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__ArgY16_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__ArgX17_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__ArgY17_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__ArgX18_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__ArgY18_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__ArgX19_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__ArgY19_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__ArgX20_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__ArgY20_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__ArgX21_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 20)));
        MR_Integer parse_tree__prog_item_stats__ArgY21_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 20)));
        MR_Word parse_tree__prog_item_stats__Var_46;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_46, parse_tree__prog_item_stats__ArgX1_4, parse_tree__prog_item_stats__ArgY1_5);
        }
        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_46 == (MR_Integer) 0);
        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
        if (parse_tree__prog_item_stats__succeeded)
          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_46;
        else
          {
            MR_Word parse_tree__prog_item_stats__Var_47;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_47, parse_tree__prog_item_stats__ArgX2_6, parse_tree__prog_item_stats__ArgY2_7);
            }
            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_47 == (MR_Integer) 0);
            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
            if (parse_tree__prog_item_stats__succeeded)
              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_47;
            else
              {
                MR_Word parse_tree__prog_item_stats__Var_48;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_48, parse_tree__prog_item_stats__ArgX3_8, parse_tree__prog_item_stats__ArgY3_9);
                }
                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_48 == (MR_Integer) 0);
                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                if (parse_tree__prog_item_stats__succeeded)
                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_48;
                else
                  {
                    MR_Word parse_tree__prog_item_stats__Var_49;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_49, parse_tree__prog_item_stats__ArgX4_10, parse_tree__prog_item_stats__ArgY4_11);
                    }
                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_49 == (MR_Integer) 0);
                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                    if (parse_tree__prog_item_stats__succeeded)
                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_49;
                    else
                      {
                        MR_Word parse_tree__prog_item_stats__Var_50;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_50, parse_tree__prog_item_stats__ArgX5_12, parse_tree__prog_item_stats__ArgY5_13);
                        }
                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_50 == (MR_Integer) 0);
                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                        if (parse_tree__prog_item_stats__succeeded)
                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_50;
                        else
                          {
                            MR_Word parse_tree__prog_item_stats__Var_51;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_51, parse_tree__prog_item_stats__ArgX6_14, parse_tree__prog_item_stats__ArgY6_15);
                            }
                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_51 == (MR_Integer) 0);
                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                            if (parse_tree__prog_item_stats__succeeded)
                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_51;
                            else
                              {
                                MR_Word parse_tree__prog_item_stats__Var_52;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_52, parse_tree__prog_item_stats__ArgX7_16, parse_tree__prog_item_stats__ArgY7_17);
                                }
                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_52 == (MR_Integer) 0);
                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                if (parse_tree__prog_item_stats__succeeded)
                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_52;
                                else
                                  {
                                    MR_Word parse_tree__prog_item_stats__Var_53;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_53, parse_tree__prog_item_stats__ArgX8_18, parse_tree__prog_item_stats__ArgY8_19);
                                    }
                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_53 == (MR_Integer) 0);
                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                    if (parse_tree__prog_item_stats__succeeded)
                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_53;
                                    else
                                      {
                                        MR_Word parse_tree__prog_item_stats__Var_54;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_54, parse_tree__prog_item_stats__ArgX9_20, parse_tree__prog_item_stats__ArgY9_21);
                                        }
                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_54 == (MR_Integer) 0);
                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                        if (parse_tree__prog_item_stats__succeeded)
                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_54;
                                        else
                                          {
                                            MR_Word parse_tree__prog_item_stats__Var_55;

                                            {
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_55, parse_tree__prog_item_stats__ArgX10_22, parse_tree__prog_item_stats__ArgY10_23);
                                            }
                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_55 == (MR_Integer) 0);
                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                            if (parse_tree__prog_item_stats__succeeded)
                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_55;
                                            else
                                              {
                                                MR_Word parse_tree__prog_item_stats__Var_56;

                                                {
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_56, parse_tree__prog_item_stats__ArgX11_24, parse_tree__prog_item_stats__ArgY11_25);
                                                }
                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_56 == (MR_Integer) 0);
                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                if (parse_tree__prog_item_stats__succeeded)
                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_56;
                                                else
                                                  {
                                                    MR_Word parse_tree__prog_item_stats__Var_57;

                                                    {
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_57, parse_tree__prog_item_stats__ArgX12_26, parse_tree__prog_item_stats__ArgY12_27);
                                                    }
                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_57 == (MR_Integer) 0);
                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                    if (parse_tree__prog_item_stats__succeeded)
                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_57;
                                                    else
                                                      {
                                                        MR_Word parse_tree__prog_item_stats__Var_58;

                                                        {
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_58, parse_tree__prog_item_stats__ArgX13_28, parse_tree__prog_item_stats__ArgY13_29);
                                                        }
                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_58 == (MR_Integer) 0);
                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                        if (parse_tree__prog_item_stats__succeeded)
                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_58;
                                                        else
                                                          {
                                                            MR_Word parse_tree__prog_item_stats__Var_59;

                                                            {
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_59, parse_tree__prog_item_stats__ArgX14_30, parse_tree__prog_item_stats__ArgY14_31);
                                                            }
                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_59 == (MR_Integer) 0);
                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                            if (parse_tree__prog_item_stats__succeeded)
                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_59;
                                                            else
                                                              {
                                                                MR_Word parse_tree__prog_item_stats__Var_60;

                                                                {
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_60, parse_tree__prog_item_stats__ArgX15_32, parse_tree__prog_item_stats__ArgY15_33);
                                                                }
                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_60 == (MR_Integer) 0);
                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_60;
                                                                else
                                                                  {
                                                                    MR_Word parse_tree__prog_item_stats__Var_61;

                                                                    {
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_61, parse_tree__prog_item_stats__ArgX16_34, parse_tree__prog_item_stats__ArgY16_35);
                                                                    }
                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_61 == (MR_Integer) 0);
                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_61;
                                                                    else
                                                                      {
                                                                        MR_Word parse_tree__prog_item_stats__Var_62;

                                                                        {
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_62, parse_tree__prog_item_stats__ArgX17_36, parse_tree__prog_item_stats__ArgY17_37);
                                                                        }
                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_62 == (MR_Integer) 0);
                                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_62;
                                                                        else
                                                                          {
                                                                            MR_Word parse_tree__prog_item_stats__Var_63;

                                                                            {
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_63, parse_tree__prog_item_stats__ArgX18_38, parse_tree__prog_item_stats__ArgY18_39);
                                                                            }
                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_63 == (MR_Integer) 0);
                                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                            if (parse_tree__prog_item_stats__succeeded)
                                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_63;
                                                                            else
                                                                              {
                                                                                MR_Word parse_tree__prog_item_stats__Var_64;

                                                                                {
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_64, parse_tree__prog_item_stats__ArgX19_40, parse_tree__prog_item_stats__ArgY19_41);
                                                                                }
                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_64 == (MR_Integer) 0);
                                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_64;
                                                                                else
                                                                                  {
                                                                                    MR_Word parse_tree__prog_item_stats__Var_65;

                                                                                    {
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_65, parse_tree__prog_item_stats__ArgX20_42, parse_tree__prog_item_stats__ArgY20_43);
                                                                                    }
                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_65 == (MR_Integer) 0);
                                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_65;
                                                                                    else
                                                                                      {
                                                                                        mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_item_stats__HeadVar__1_1, parse_tree__prog_item_stats__ArgX21_44, parse_tree__prog_item_stats__ArgY21_45);
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
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
        MR_Integer parse_tree__prog_item_stats__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_item_stats__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_item_stats__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__ArgX5_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__ArgY5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__ArgX6_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__ArgY6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__ArgX7_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__ArgY7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__ArgX8_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__ArgY8_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__ArgX9_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__ArgY9_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__ArgX10_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__ArgY10_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__ArgX11_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__ArgY11_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__ArgX12_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__ArgY12_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__ArgX13_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__ArgY13_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__ArgX14_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__ArgY14_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__ArgX15_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__ArgY15_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__ArgX16_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__ArgY16_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__ArgX17_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__ArgY17_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__ArgX18_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__ArgY18_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__ArgX19_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__ArgY19_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__ArgX20_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__ArgY20_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__ArgX21_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 20)));
        MR_Integer parse_tree__prog_item_stats__ArgY21_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 20)));

        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX1_3 == parse_tree__prog_item_stats__ArgY1_4);
        if (parse_tree__prog_item_stats__succeeded)
          {
            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX2_5 == parse_tree__prog_item_stats__ArgY2_6);
            if (parse_tree__prog_item_stats__succeeded)
              {
                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX3_7 == parse_tree__prog_item_stats__ArgY3_8);
                if (parse_tree__prog_item_stats__succeeded)
                  {
                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX4_9 == parse_tree__prog_item_stats__ArgY4_10);
                    if (parse_tree__prog_item_stats__succeeded)
                      {
                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX5_11 == parse_tree__prog_item_stats__ArgY5_12);
                        if (parse_tree__prog_item_stats__succeeded)
                          {
                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX6_13 == parse_tree__prog_item_stats__ArgY6_14);
                            if (parse_tree__prog_item_stats__succeeded)
                              {
                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX7_15 == parse_tree__prog_item_stats__ArgY7_16);
                                if (parse_tree__prog_item_stats__succeeded)
                                  {
                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX8_17 == parse_tree__prog_item_stats__ArgY8_18);
                                    if (parse_tree__prog_item_stats__succeeded)
                                      {
                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX9_19 == parse_tree__prog_item_stats__ArgY9_20);
                                        if (parse_tree__prog_item_stats__succeeded)
                                          {
                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX10_21 == parse_tree__prog_item_stats__ArgY10_22);
                                            if (parse_tree__prog_item_stats__succeeded)
                                              {
                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX11_23 == parse_tree__prog_item_stats__ArgY11_24);
                                                if (parse_tree__prog_item_stats__succeeded)
                                                  {
                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX12_25 == parse_tree__prog_item_stats__ArgY12_26);
                                                    if (parse_tree__prog_item_stats__succeeded)
                                                      {
                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX13_27 == parse_tree__prog_item_stats__ArgY13_28);
                                                        if (parse_tree__prog_item_stats__succeeded)
                                                          {
                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX14_29 == parse_tree__prog_item_stats__ArgY14_30);
                                                            if (parse_tree__prog_item_stats__succeeded)
                                                              {
                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX15_31 == parse_tree__prog_item_stats__ArgY15_32);
                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                  {
                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX16_33 == parse_tree__prog_item_stats__ArgY16_34);
                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                      {
                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX17_35 == parse_tree__prog_item_stats__ArgY17_36);
                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                          {
                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX18_37 == parse_tree__prog_item_stats__ArgY18_38);
                                                                            if (parse_tree__prog_item_stats__succeeded)
                                                                              {
                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX19_39 == parse_tree__prog_item_stats__ArgY19_40);
                                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                                  {
                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX20_41 == parse_tree__prog_item_stats__ArgY20_42);
                                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                                      parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX21_43 == parse_tree__prog_item_stats__ArgY21_44);
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
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
        MR_Integer parse_tree__prog_item_stats__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_item_stats__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_item_stats__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__ArgX5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__ArgY5_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__ArgX6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__ArgY6_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__ArgX7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__ArgY7_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__ArgX8_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__ArgY8_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__ArgX9_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__ArgY9_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__ArgX10_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__ArgY10_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__ArgX11_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__ArgY11_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__ArgX12_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__ArgY12_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__ArgX13_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__ArgY13_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__ArgX14_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__ArgY14_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__ArgX15_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__ArgY15_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__ArgX16_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__ArgY16_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__ArgX17_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__ArgY17_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__ArgX18_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__ArgY18_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__ArgX19_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__ArgY19_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__ArgX20_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__ArgY20_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__ArgX21_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 20)));
        MR_Integer parse_tree__prog_item_stats__ArgY21_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 20)));
        MR_Integer parse_tree__prog_item_stats__ArgX22_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 21)));
        MR_Integer parse_tree__prog_item_stats__ArgY22_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 21)));
        MR_Integer parse_tree__prog_item_stats__ArgX23_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 22)));
        MR_Integer parse_tree__prog_item_stats__ArgY23_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 22)));
        MR_Integer parse_tree__prog_item_stats__ArgX24_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 23)));
        MR_Integer parse_tree__prog_item_stats__ArgY24_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 23)));
        MR_Integer parse_tree__prog_item_stats__ArgX25_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 24)));
        MR_Integer parse_tree__prog_item_stats__ArgY25_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 24)));
        MR_Integer parse_tree__prog_item_stats__ArgX26_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 25)));
        MR_Integer parse_tree__prog_item_stats__ArgY26_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 25)));
        MR_Integer parse_tree__prog_item_stats__ArgX27_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 26)));
        MR_Integer parse_tree__prog_item_stats__ArgY27_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 26)));
        MR_Word parse_tree__prog_item_stats__Var_58;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_58, parse_tree__prog_item_stats__ArgX1_4, parse_tree__prog_item_stats__ArgY1_5);
        }
        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_58 == (MR_Integer) 0);
        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
        if (parse_tree__prog_item_stats__succeeded)
          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_58;
        else
          {
            MR_Word parse_tree__prog_item_stats__Var_59;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_59, parse_tree__prog_item_stats__ArgX2_6, parse_tree__prog_item_stats__ArgY2_7);
            }
            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_59 == (MR_Integer) 0);
            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
            if (parse_tree__prog_item_stats__succeeded)
              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_59;
            else
              {
                MR_Word parse_tree__prog_item_stats__Var_60;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_60, parse_tree__prog_item_stats__ArgX3_8, parse_tree__prog_item_stats__ArgY3_9);
                }
                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_60 == (MR_Integer) 0);
                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                if (parse_tree__prog_item_stats__succeeded)
                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_60;
                else
                  {
                    MR_Word parse_tree__prog_item_stats__Var_61;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_61, parse_tree__prog_item_stats__ArgX4_10, parse_tree__prog_item_stats__ArgY4_11);
                    }
                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_61 == (MR_Integer) 0);
                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                    if (parse_tree__prog_item_stats__succeeded)
                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_61;
                    else
                      {
                        MR_Word parse_tree__prog_item_stats__Var_62;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_62, parse_tree__prog_item_stats__ArgX5_12, parse_tree__prog_item_stats__ArgY5_13);
                        }
                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_62 == (MR_Integer) 0);
                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                        if (parse_tree__prog_item_stats__succeeded)
                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_62;
                        else
                          {
                            MR_Word parse_tree__prog_item_stats__Var_63;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_63, parse_tree__prog_item_stats__ArgX6_14, parse_tree__prog_item_stats__ArgY6_15);
                            }
                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_63 == (MR_Integer) 0);
                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                            if (parse_tree__prog_item_stats__succeeded)
                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_63;
                            else
                              {
                                MR_Word parse_tree__prog_item_stats__Var_64;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_64, parse_tree__prog_item_stats__ArgX7_16, parse_tree__prog_item_stats__ArgY7_17);
                                }
                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_64 == (MR_Integer) 0);
                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                if (parse_tree__prog_item_stats__succeeded)
                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_64;
                                else
                                  {
                                    MR_Word parse_tree__prog_item_stats__Var_65;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_65, parse_tree__prog_item_stats__ArgX8_18, parse_tree__prog_item_stats__ArgY8_19);
                                    }
                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_65 == (MR_Integer) 0);
                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                    if (parse_tree__prog_item_stats__succeeded)
                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_65;
                                    else
                                      {
                                        MR_Word parse_tree__prog_item_stats__Var_66;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_66, parse_tree__prog_item_stats__ArgX9_20, parse_tree__prog_item_stats__ArgY9_21);
                                        }
                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_66 == (MR_Integer) 0);
                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                        if (parse_tree__prog_item_stats__succeeded)
                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_66;
                                        else
                                          {
                                            MR_Word parse_tree__prog_item_stats__Var_67;

                                            {
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_67, parse_tree__prog_item_stats__ArgX10_22, parse_tree__prog_item_stats__ArgY10_23);
                                            }
                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_67 == (MR_Integer) 0);
                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                            if (parse_tree__prog_item_stats__succeeded)
                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_67;
                                            else
                                              {
                                                MR_Word parse_tree__prog_item_stats__Var_68;

                                                {
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_68, parse_tree__prog_item_stats__ArgX11_24, parse_tree__prog_item_stats__ArgY11_25);
                                                }
                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_68 == (MR_Integer) 0);
                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                if (parse_tree__prog_item_stats__succeeded)
                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_68;
                                                else
                                                  {
                                                    MR_Word parse_tree__prog_item_stats__Var_69;

                                                    {
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_69, parse_tree__prog_item_stats__ArgX12_26, parse_tree__prog_item_stats__ArgY12_27);
                                                    }
                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_69 == (MR_Integer) 0);
                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                    if (parse_tree__prog_item_stats__succeeded)
                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_69;
                                                    else
                                                      {
                                                        MR_Word parse_tree__prog_item_stats__Var_70;

                                                        {
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_70, parse_tree__prog_item_stats__ArgX13_28, parse_tree__prog_item_stats__ArgY13_29);
                                                        }
                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_70 == (MR_Integer) 0);
                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                        if (parse_tree__prog_item_stats__succeeded)
                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_70;
                                                        else
                                                          {
                                                            MR_Word parse_tree__prog_item_stats__Var_71;

                                                            {
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_71, parse_tree__prog_item_stats__ArgX14_30, parse_tree__prog_item_stats__ArgY14_31);
                                                            }
                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_71 == (MR_Integer) 0);
                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                            if (parse_tree__prog_item_stats__succeeded)
                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_71;
                                                            else
                                                              {
                                                                MR_Word parse_tree__prog_item_stats__Var_72;

                                                                {
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_72, parse_tree__prog_item_stats__ArgX15_32, parse_tree__prog_item_stats__ArgY15_33);
                                                                }
                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_72 == (MR_Integer) 0);
                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_72;
                                                                else
                                                                  {
                                                                    MR_Word parse_tree__prog_item_stats__Var_73;

                                                                    {
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_73, parse_tree__prog_item_stats__ArgX16_34, parse_tree__prog_item_stats__ArgY16_35);
                                                                    }
                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_73 == (MR_Integer) 0);
                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_73;
                                                                    else
                                                                      {
                                                                        MR_Word parse_tree__prog_item_stats__Var_74;

                                                                        {
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_74, parse_tree__prog_item_stats__ArgX17_36, parse_tree__prog_item_stats__ArgY17_37);
                                                                        }
                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_74 == (MR_Integer) 0);
                                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_74;
                                                                        else
                                                                          {
                                                                            MR_Word parse_tree__prog_item_stats__Var_75;

                                                                            {
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_75, parse_tree__prog_item_stats__ArgX18_38, parse_tree__prog_item_stats__ArgY18_39);
                                                                            }
                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_75 == (MR_Integer) 0);
                                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                            if (parse_tree__prog_item_stats__succeeded)
                                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_75;
                                                                            else
                                                                              {
                                                                                MR_Word parse_tree__prog_item_stats__Var_76;

                                                                                {
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_76, parse_tree__prog_item_stats__ArgX19_40, parse_tree__prog_item_stats__ArgY19_41);
                                                                                }
                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_76 == (MR_Integer) 0);
                                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_76;
                                                                                else
                                                                                  {
                                                                                    MR_Word parse_tree__prog_item_stats__Var_77;

                                                                                    {
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_77, parse_tree__prog_item_stats__ArgX20_42, parse_tree__prog_item_stats__ArgY20_43);
                                                                                    }
                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_77 == (MR_Integer) 0);
                                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_77;
                                                                                    else
                                                                                      {
                                                                                        MR_Word parse_tree__prog_item_stats__Var_78;

                                                                                        {
                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_78, parse_tree__prog_item_stats__ArgX21_44, parse_tree__prog_item_stats__ArgY21_45);
                                                                                        }
                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_78 == (MR_Integer) 0);
                                                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_78;
                                                                                        else
                                                                                          {
                                                                                            MR_Word parse_tree__prog_item_stats__Var_79;

                                                                                            {
                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_79, parse_tree__prog_item_stats__ArgX22_46, parse_tree__prog_item_stats__ArgY22_47);
                                                                                            }
                                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_79 == (MR_Integer) 0);
                                                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                            if (parse_tree__prog_item_stats__succeeded)
                                                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_79;
                                                                                            else
                                                                                              {
                                                                                                MR_Word parse_tree__prog_item_stats__Var_80;

                                                                                                {
                                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_80, parse_tree__prog_item_stats__ArgX23_48, parse_tree__prog_item_stats__ArgY23_49);
                                                                                                }
                                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_80 == (MR_Integer) 0);
                                                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_80;
                                                                                                else
                                                                                                  {
                                                                                                    MR_Word parse_tree__prog_item_stats__Var_81;

                                                                                                    {
                                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_81, parse_tree__prog_item_stats__ArgX24_50, parse_tree__prog_item_stats__ArgY24_51);
                                                                                                    }
                                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_81 == (MR_Integer) 0);
                                                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_81;
                                                                                                    else
                                                                                                      {
                                                                                                        MR_Word parse_tree__prog_item_stats__Var_82;

                                                                                                        {
                                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_82, parse_tree__prog_item_stats__ArgX25_52, parse_tree__prog_item_stats__ArgY25_53);
                                                                                                        }
                                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_82 == (MR_Integer) 0);
                                                                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_82;
                                                                                                        else
                                                                                                          {
                                                                                                            MR_Word parse_tree__prog_item_stats__Var_83;

                                                                                                            {
                                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__Var_83, parse_tree__prog_item_stats__ArgX26_54, parse_tree__prog_item_stats__ArgY26_55);
                                                                                                            }
                                                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__Var_83 == (MR_Integer) 0);
                                                                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                                            if (parse_tree__prog_item_stats__succeeded)
                                                                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__Var_83;
                                                                                                            else
                                                                                                              {
                                                                                                                mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_item_stats__HeadVar__1_1, parse_tree__prog_item_stats__ArgX27_56, parse_tree__prog_item_stats__ArgY27_57);
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
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
        MR_Integer parse_tree__prog_item_stats__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_item_stats__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_item_stats__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__ArgX5_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__ArgY5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__ArgX6_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__ArgY6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__ArgX7_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__ArgY7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__ArgX8_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__ArgY8_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__ArgX9_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__ArgY9_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__ArgX10_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__ArgY10_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__ArgX11_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__ArgY11_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__ArgX12_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__ArgY12_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__ArgX13_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__ArgY13_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__ArgX14_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__ArgY14_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__ArgX15_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__ArgY15_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__ArgX16_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__ArgY16_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__ArgX17_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__ArgY17_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__ArgX18_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__ArgY18_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__ArgX19_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__ArgY19_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__ArgX20_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__ArgY20_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__ArgX21_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 20)));
        MR_Integer parse_tree__prog_item_stats__ArgY21_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 20)));
        MR_Integer parse_tree__prog_item_stats__ArgX22_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 21)));
        MR_Integer parse_tree__prog_item_stats__ArgY22_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 21)));
        MR_Integer parse_tree__prog_item_stats__ArgX23_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 22)));
        MR_Integer parse_tree__prog_item_stats__ArgY23_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 22)));
        MR_Integer parse_tree__prog_item_stats__ArgX24_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 23)));
        MR_Integer parse_tree__prog_item_stats__ArgY24_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 23)));
        MR_Integer parse_tree__prog_item_stats__ArgX25_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 24)));
        MR_Integer parse_tree__prog_item_stats__ArgY25_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 24)));
        MR_Integer parse_tree__prog_item_stats__ArgX26_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 25)));
        MR_Integer parse_tree__prog_item_stats__ArgY26_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 25)));
        MR_Integer parse_tree__prog_item_stats__ArgX27_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 26)));
        MR_Integer parse_tree__prog_item_stats__ArgY27_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 26)));

        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX1_3 == parse_tree__prog_item_stats__ArgY1_4);
        if (parse_tree__prog_item_stats__succeeded)
          {
            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX2_5 == parse_tree__prog_item_stats__ArgY2_6);
            if (parse_tree__prog_item_stats__succeeded)
              {
                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX3_7 == parse_tree__prog_item_stats__ArgY3_8);
                if (parse_tree__prog_item_stats__succeeded)
                  {
                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX4_9 == parse_tree__prog_item_stats__ArgY4_10);
                    if (parse_tree__prog_item_stats__succeeded)
                      {
                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX5_11 == parse_tree__prog_item_stats__ArgY5_12);
                        if (parse_tree__prog_item_stats__succeeded)
                          {
                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX6_13 == parse_tree__prog_item_stats__ArgY6_14);
                            if (parse_tree__prog_item_stats__succeeded)
                              {
                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX7_15 == parse_tree__prog_item_stats__ArgY7_16);
                                if (parse_tree__prog_item_stats__succeeded)
                                  {
                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX8_17 == parse_tree__prog_item_stats__ArgY8_18);
                                    if (parse_tree__prog_item_stats__succeeded)
                                      {
                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX9_19 == parse_tree__prog_item_stats__ArgY9_20);
                                        if (parse_tree__prog_item_stats__succeeded)
                                          {
                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX10_21 == parse_tree__prog_item_stats__ArgY10_22);
                                            if (parse_tree__prog_item_stats__succeeded)
                                              {
                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX11_23 == parse_tree__prog_item_stats__ArgY11_24);
                                                if (parse_tree__prog_item_stats__succeeded)
                                                  {
                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX12_25 == parse_tree__prog_item_stats__ArgY12_26);
                                                    if (parse_tree__prog_item_stats__succeeded)
                                                      {
                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX13_27 == parse_tree__prog_item_stats__ArgY13_28);
                                                        if (parse_tree__prog_item_stats__succeeded)
                                                          {
                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX14_29 == parse_tree__prog_item_stats__ArgY14_30);
                                                            if (parse_tree__prog_item_stats__succeeded)
                                                              {
                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX15_31 == parse_tree__prog_item_stats__ArgY15_32);
                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                  {
                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX16_33 == parse_tree__prog_item_stats__ArgY16_34);
                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                      {
                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX17_35 == parse_tree__prog_item_stats__ArgY17_36);
                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                          {
                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX18_37 == parse_tree__prog_item_stats__ArgY18_38);
                                                                            if (parse_tree__prog_item_stats__succeeded)
                                                                              {
                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX19_39 == parse_tree__prog_item_stats__ArgY19_40);
                                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                                  {
                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX20_41 == parse_tree__prog_item_stats__ArgY20_42);
                                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                                      {
                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX21_43 == parse_tree__prog_item_stats__ArgY21_44);
                                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                                          {
                                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX22_45 == parse_tree__prog_item_stats__ArgY22_46);
                                                                                            if (parse_tree__prog_item_stats__succeeded)
                                                                                              {
                                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX23_47 == parse_tree__prog_item_stats__ArgY23_48);
                                                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                                                  {
                                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX24_49 == parse_tree__prog_item_stats__ArgY24_50);
                                                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                                                      {
                                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX25_51 == parse_tree__prog_item_stats__ArgY25_52);
                                                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                                                          {
                                                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX26_53 == parse_tree__prog_item_stats__ArgY26_54);
                                                                                                            if (parse_tree__prog_item_stats__succeeded)
                                                                                                              parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__ArgX27_55 == parse_tree__prog_item_stats__ArgY27_56);
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
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
            MR_Word parse_tree__prog_item_stats__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__CatchExpr_7, (MR_Integer) 0)));

            {
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__Goal_11, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_14_14);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__prog_item_stats__next_value_of_HeadVar__1_1 = parse_tree__prog_item_stats__CatchExprs_8;
              MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_2 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_14_14;

              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_2;
              parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__next_value_of_HeadVar__1_1;
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
        MR_Integer parse_tree__prog_item_stats__Var_1758 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 26)));
        MR_Integer parse_tree__prog_item_stats__Var_1759 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 25)));
        MR_Integer parse_tree__prog_item_stats__Var_1760 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 24)));
        MR_Integer parse_tree__prog_item_stats__Var_1761 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 23)));
        MR_Integer parse_tree__prog_item_stats__Var_1762 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 22)));
        MR_Integer parse_tree__prog_item_stats__Var_1763 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 21)));
        MR_Integer parse_tree__prog_item_stats__Var_1764 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 20)));
        MR_Integer parse_tree__prog_item_stats__Var_1765 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__Var_1766 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__Var_1767 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__Var_1768 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__Var_1769 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__Var_1770 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__Var_1771 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__Var_1772 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__Var_1773 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__Var_1774 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__Var_1775 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__Var_1776 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__Var_1777 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__Var_1778 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__Var_1779 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__Var_1780 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__Var_1781 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__Var_1782 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__Var_1783 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__Var_1784 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83, (MR_Integer) 0)));

        switch (MR_tag((MR_Word) parse_tree__prog_item_stats__Goal_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer parse_tree__prog_item_stats__Var_86 = (parse_tree__prog_item_stats__Var_1758 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_84 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_86));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer parse_tree__prog_item_stats__Var_90 = (parse_tree__prog_item_stats__Var_1759 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_84 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_90));
                MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__prog_item_stats__SubGoalA_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
              MR_Word parse_tree__prog_item_stats__SubGoalB_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219;
              MR_Integer parse_tree__prog_item_stats__Var_220 = (parse_tree__prog_item_stats__Var_1784 + (MR_Integer) 1);
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_223_223;
              MR_Word parse_tree__prog_item_stats__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 0)));

              {
                parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_220));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
              }
              {
                parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_7, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_219_219, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_223_223);
              }
              /* direct tailcall eliminated */
              {
                MR_Word parse_tree__prog_item_stats__next_value_of_Goal_4 = parse_tree__prog_item_stats__SubGoalB_8;
                MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_223_223;

                parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83;
                parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__next_value_of_Goal_4;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer parse_tree__prog_item_stats__Var_210 = (parse_tree__prog_item_stats__Var_1782 + (MR_Integer) 1);

                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_84 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_210));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                    MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_item_stats__CondGoal_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97;
                  MR_Integer parse_tree__prog_item_stats__Var_98 = (parse_tree__prog_item_stats__Var_1761 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101;
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_102_102;
                  MR_Word parse_tree__prog_item_stats__ThenGoal_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));
                  MR_Word parse_tree__prog_item_stats__ElseGoal_245 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__prog_item_stats__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_98));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__CondGoal_71, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_97_97, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101);
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__ThenGoal_244, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_102_102);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__next_value_of_Goal_4 = parse_tree__prog_item_stats__ElseGoal_245;
                    MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_102_102;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__next_value_of_Goal_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203;
                  MR_Integer parse_tree__prog_item_stats__Var_204 = (parse_tree__prog_item_stats__Var_1781 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_207_207;
                  MR_Word parse_tree__prog_item_stats__SubGoalA_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__SubGoalB_228 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_204));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_227, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_203_203, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_207_207);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__next_value_of_Goal_4 = parse_tree__prog_item_stats__SubGoalB_228;
                    MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_207_207;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__next_value_of_Goal_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104;
                  MR_Integer parse_tree__prog_item_stats__Var_105 = (parse_tree__prog_item_stats__Var_1762 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_105));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__next_value_of_Goal_4 = parse_tree__prog_item_stats__SubGoal_243;
                    MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_104_104;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__next_value_of_Goal_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Integer parse_tree__prog_item_stats__Var_200 = (parse_tree__prog_item_stats__Var_1780 + (MR_Integer) 1);

                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_84 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_200));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                    MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213;
                  MR_Integer parse_tree__prog_item_stats__Var_214 = (parse_tree__prog_item_stats__Var_1783 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_217_217;
                  MR_Word parse_tree__prog_item_stats__SubGoalA_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__SubGoalB_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_214));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_225, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_213_213, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_217_217);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__next_value_of_Goal_4 = parse_tree__prog_item_stats__SubGoalB_226;
                    MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_217_217;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__next_value_of_Goal_4;
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
                  MR_Word parse_tree__prog_item_stats__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));

                  switch (parse_tree__prog_item_stats__QuantType_13) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      switch (parse_tree__prog_item_stats__QuantVarsKind_14) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Integer parse_tree__prog_item_stats__Var_187 = (parse_tree__prog_item_stats__Var_1778 + (MR_Integer) 1);

                            {
                              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_187));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Integer parse_tree__prog_item_stats__Var_183 = (parse_tree__prog_item_stats__Var_1776 + (MR_Integer) 1);

                            {
                              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_183));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
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
                            MR_Integer parse_tree__prog_item_stats__Var_195 = (parse_tree__prog_item_stats__Var_1779 + (MR_Integer) 1);

                            {
                              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_195));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Integer parse_tree__prog_item_stats__Var_191 = (parse_tree__prog_item_stats__Var_1777 + (MR_Integer) 1);

                            {
                              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_191));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
                            }
                          }
                          break;
                      }
                      break;
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__next_value_of_Goal_4 = parse_tree__prog_item_stats__SubGoal_17;
                    MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_194_194;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__next_value_of_Goal_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177;
                  MR_Integer parse_tree__prog_item_stats__Var_178 = (parse_tree__prog_item_stats__Var_1775 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_229 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_178));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__next_value_of_Goal_4 = parse_tree__prog_item_stats__SubGoal_229;
                    MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_177_177;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__next_value_of_Goal_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172;
                  MR_Integer parse_tree__prog_item_stats__Var_173 = (parse_tree__prog_item_stats__Var_1774 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__prog_item_stats__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_173));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__next_value_of_Goal_4 = parse_tree__prog_item_stats__SubGoal_230;
                    MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_172_172;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__next_value_of_Goal_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167;
                  MR_Integer parse_tree__prog_item_stats__Var_168 = (parse_tree__prog_item_stats__Var_1773 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_231 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__prog_item_stats__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_168));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__next_value_of_Goal_4 = parse_tree__prog_item_stats__SubGoal_231;
                    MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_167_167;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__next_value_of_Goal_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162;
                  MR_Integer parse_tree__prog_item_stats__Var_163 = (parse_tree__prog_item_stats__Var_1772 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_232 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__prog_item_stats__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_163));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__next_value_of_Goal_4 = parse_tree__prog_item_stats__SubGoal_232;
                    MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_162_162;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__next_value_of_Goal_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157;
                  MR_Integer parse_tree__prog_item_stats__Var_158 = (parse_tree__prog_item_stats__Var_1771 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_158));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__next_value_of_Goal_4 = parse_tree__prog_item_stats__SubGoal_233;
                    MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_157_157;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__next_value_of_Goal_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152;
                  MR_Integer parse_tree__prog_item_stats__Var_153 = (parse_tree__prog_item_stats__Var_1770 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_234 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_153));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__next_value_of_Goal_4 = parse_tree__prog_item_stats__SubGoal_234;
                    MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_152_152;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__next_value_of_Goal_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147;
                  MR_Integer parse_tree__prog_item_stats__Var_148 = (parse_tree__prog_item_stats__Var_1769 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_235 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_148));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__next_value_of_Goal_4 = parse_tree__prog_item_stats__SubGoal_235;
                    MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_147_147;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__next_value_of_Goal_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142;
                  MR_Integer parse_tree__prog_item_stats__Var_143 = (parse_tree__prog_item_stats__Var_1768 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_143));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__next_value_of_Goal_4 = parse_tree__prog_item_stats__SubGoal_236;
                    MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_142_142;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__next_value_of_Goal_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137;
                  MR_Integer parse_tree__prog_item_stats__Var_138 = (parse_tree__prog_item_stats__Var_1767 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_237 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__prog_item_stats__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_138));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__next_value_of_Goal_4 = parse_tree__prog_item_stats__SubGoal_237;
                    MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_137_137;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__next_value_of_Goal_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word parse_tree__prog_item_stats__MainGoal_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));
                  MR_Word parse_tree__prog_item_stats__OrElseGoals_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131;
                  MR_Integer parse_tree__prog_item_stats__Var_132 = (parse_tree__prog_item_stats__Var_1766 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_135_135;
                  MR_Word parse_tree__prog_item_stats__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_132));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_131_131, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
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
                  MR_Integer parse_tree__prog_item_stats__Var_122 = (parse_tree__prog_item_stats__Var_1765 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_125_125;
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_126_126;
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_127_127;
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128;
                  MR_Word parse_tree__prog_item_stats__MainGoal_238 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_122));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_121_121, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
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
                      MR_Word parse_tree__prog_item_stats__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__MaybeCatchAny_61, (MR_Integer) 0)));
                      MR_Word parse_tree__prog_item_stats__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__Var_129, (MR_Integer) 0)));

                      parse_tree__prog_item_stats__CatchAnyGoal_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__Var_129, (MR_Integer) 1)));
                      /* direct tailcall eliminated */
                      {
                        MR_Word parse_tree__prog_item_stats__next_value_of_Goal_4 = parse_tree__prog_item_stats__CatchAnyGoal_64;
                        MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128;

                        parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83;
                        parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__next_value_of_Goal_4;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 18:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115;
                  MR_Integer parse_tree__prog_item_stats__Var_116 = (parse_tree__prog_item_stats__Var_1764 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_119_119;
                  MR_Word parse_tree__prog_item_stats__SubGoalA_239 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__SubGoalB_240 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_116));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_239, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_115_115, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_119_119);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__next_value_of_Goal_4 = parse_tree__prog_item_stats__SubGoalB_240;
                    MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_119_119;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__next_value_of_Goal_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 19:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109;
                  MR_Integer parse_tree__prog_item_stats__Var_110 = (parse_tree__prog_item_stats__Var_1763 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_113_113;
                  MR_Word parse_tree__prog_item_stats__SubGoalA_241 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__SubGoalB_242 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_110));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_1760));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_241, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_109_109, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_113_113);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__next_value_of_Goal_4 = parse_tree__prog_item_stats__SubGoalB_242;
                    MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_113_113;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_83 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_83;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__next_value_of_Goal_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 20:
                {
                  MR_Integer parse_tree__prog_item_stats__Var_94 = (parse_tree__prog_item_stats__Var_1760 + (MR_Integer) 1);

                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_84 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_1784));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_1783));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_1782));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_1781));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_1780));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_1779));
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_1778));
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_1777));
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_1776));
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_1775));
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_1774));
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_1773));
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_1772));
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_1771));
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_1770));
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_1769));
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_1768));
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_1767));
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_1766));
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_1765));
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_1764));
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__Var_1763));
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__Var_1762));
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__Var_1761));
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__Var_94));
                    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__Var_1759));
                    MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (parse_tree__prog_item_stats__Var_1758));
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
              MR_Word parse_tree__prog_item_stats__next_value_of_HeadVar__1_1 = parse_tree__prog_item_stats__Goals_8;
              MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_2 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_12_12;

              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_2;
              parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__next_value_of_HeadVar__1_1;
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
    MR_Integer parse_tree__prog_item_stats__Var_407 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 20)));
    MR_Integer parse_tree__prog_item_stats__Var_408 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 19)));
    MR_Integer parse_tree__prog_item_stats__Var_409 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 18)));
    MR_Integer parse_tree__prog_item_stats__Var_410 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 17)));
    MR_Integer parse_tree__prog_item_stats__Var_411 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 16)));
    MR_Integer parse_tree__prog_item_stats__Var_412 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 15)));
    MR_Integer parse_tree__prog_item_stats__Var_413 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 14)));
    MR_Integer parse_tree__prog_item_stats__Var_414 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 13)));
    MR_Integer parse_tree__prog_item_stats__Var_415 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 12)));
    MR_Integer parse_tree__prog_item_stats__Var_416 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 11)));
    MR_Integer parse_tree__prog_item_stats__Var_417 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 10)));
    MR_Integer parse_tree__prog_item_stats__Var_418 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 9)));
    MR_Integer parse_tree__prog_item_stats__Var_419 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 8)));
    MR_Integer parse_tree__prog_item_stats__Var_420 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 7)));
    MR_Integer parse_tree__prog_item_stats__Var_421 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 6)));
    MR_Integer parse_tree__prog_item_stats__Var_422 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 5)));
    MR_Integer parse_tree__prog_item_stats__Var_423 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 4)));
    MR_Integer parse_tree__prog_item_stats__Var_424 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 3)));
    MR_Integer parse_tree__prog_item_stats__Var_425 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 2)));
    MR_Integer parse_tree__prog_item_stats__Var_426 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 1)));
    MR_Integer parse_tree__prog_item_stats__Var_427 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_45, (MR_Integer) 0)));
    MR_Word parse_tree__prog_item_stats__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemPragmaInfo_4, (MR_Integer) 1)));
    MR_Word parse_tree__prog_item_stats__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemPragmaInfo_4, (MR_Integer) 2)));
    MR_Integer parse_tree__prog_item_stats__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemPragmaInfo_4, (MR_Integer) 3)));

    switch (MR_tag((MR_Word) parse_tree__prog_item_stats__PragmaType_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Integer parse_tree__prog_item_stats__Var_52 = (parse_tree__prog_item_stats__Var_415 + (MR_Integer) 1);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_427));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_426));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_425));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_424));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_423));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_422));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_421));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_420));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_419));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_418));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_417));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_416));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_52));
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_414));
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_413));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_412));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_411));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_410));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_409));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_408));
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_407));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer parse_tree__prog_item_stats__Var_48 = (parse_tree__prog_item_stats__Var_414 + (MR_Integer) 1);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_427));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_426));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_425));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_424));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_423));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_422));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_421));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_420));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_419));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_418));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_417));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_416));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_415));
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_48));
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_413));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_412));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_411));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_410));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_409));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_408));
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_407));
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
              MR_Integer parse_tree__prog_item_stats__Var_48 = (parse_tree__prog_item_stats__Var_414 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_427));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_426));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_425));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_424));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_423));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_422));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_421));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_420));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_419));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_418));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_417));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_416));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_415));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_48));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_413));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_412));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_411));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_410));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_409));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_408));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_407));
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
              MR_Integer parse_tree__prog_item_stats__Var_52 = (parse_tree__prog_item_stats__Var_415 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_427));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_426));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_425));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_424));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_423));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_422));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_421));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_420));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_419));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_418));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_417));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_416));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_52));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_414));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_413));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_412));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_411));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_410));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_409));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_408));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_407));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Integer parse_tree__prog_item_stats__Var_64 = (parse_tree__prog_item_stats__Var_418 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_427));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_426));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_425));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_424));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_423));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_422));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_421));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_420));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_419));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_64));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_417));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_416));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_415));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_414));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_413));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_412));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_411));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_410));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_409));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_408));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_407));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer parse_tree__prog_item_stats__Var_60 = (parse_tree__prog_item_stats__Var_417 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_427));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_426));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_425));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_424));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_423));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_422));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_421));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_420));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_419));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_418));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_60));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_416));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_415));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_414));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_413));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_412));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_411));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_410));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_409));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_408));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_407));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer parse_tree__prog_item_stats__Var_56 = (parse_tree__prog_item_stats__Var_416 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_427));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_426));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_425));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_424));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_423));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_422));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_421));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_420));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_419));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_418));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_417));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_56));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_415));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_414));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_413));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_412));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_411));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_410));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_409));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_408));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_407));
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Integer parse_tree__prog_item_stats__Var_72 = (parse_tree__prog_item_stats__Var_420 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_427));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_426));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_425));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_424));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_423));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_422));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_421));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_72));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_419));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_418));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_417));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_416));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_415));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_414));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_413));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_412));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_411));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_410));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_409));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_408));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_407));
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Integer parse_tree__prog_item_stats__Var_68 = (parse_tree__prog_item_stats__Var_419 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_427));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_426));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_425));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_424));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_423));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_422));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_421));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_420));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_68));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_418));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_417));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_416));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_415));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_414));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_413));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_412));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_411));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_410));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_409));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_408));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_407));
              }
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Integer parse_tree__prog_item_stats__Var_76 = (parse_tree__prog_item_stats__Var_421 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_46 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_427));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_426));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_425));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_424));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_423));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_422));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_76));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_420));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_419));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_418));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_417));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_416));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_415));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_414));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_413));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_412));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_411));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_410));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_409));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_408));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_407));
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
          MR_Integer parse_tree__prog_item_stats__Var_87;
          MR_Integer parse_tree__prog_item_stats__Var_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
          MR_Integer parse_tree__prog_item_stats__Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
          MR_Integer parse_tree__prog_item_stats__Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
          MR_Integer parse_tree__prog_item_stats__Var_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
          MR_Integer parse_tree__prog_item_stats__Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
          MR_Integer parse_tree__prog_item_stats__Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
          MR_Integer parse_tree__prog_item_stats__Var_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
          MR_Integer parse_tree__prog_item_stats__Var_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
          MR_Integer parse_tree__prog_item_stats__Var_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
          MR_Integer parse_tree__prog_item_stats__Var_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
          MR_Integer parse_tree__prog_item_stats__Var_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
          MR_Integer parse_tree__prog_item_stats__Var_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
          MR_Integer parse_tree__prog_item_stats__Var_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
          MR_Integer parse_tree__prog_item_stats__Var_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
          MR_Integer parse_tree__prog_item_stats__Var_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
          MR_Integer parse_tree__prog_item_stats__Var_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
          MR_Integer parse_tree__prog_item_stats__Var_106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
          MR_Integer parse_tree__prog_item_stats__Var_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
          MR_Integer parse_tree__prog_item_stats__Var_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
          MR_Integer parse_tree__prog_item_stats__Var_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
          MR_Integer parse_tree__prog_item_stats__Var_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));
          MR_Word parse_tree__prog_item_stats__Var_10;
          MR_Word parse_tree__prog_item_stats__Var_11;
          MR_Word parse_tree__prog_item_stats__Var_12;
          MR_Word parse_tree__prog_item_stats__Var_13;
          MR_Word parse_tree__prog_item_stats__Var_14;
          MR_Word parse_tree__prog_item_stats__Var_16;
          MR_Integer parse_tree__prog_item_stats__Var_17;

          parse_tree__prog_item_stats__Var_87 = (parse_tree__prog_item_stats__Var_88 + (MR_Integer) 1);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_87));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_91));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_92));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_93));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_94));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_95));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_96));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_97));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_98));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_99));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_100));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_101));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_102));
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_103));
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_104));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_105));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_106));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_107));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_108));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_109));
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_110));
          }
          parse_tree__prog_item_stats__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 0)));
          parse_tree__prog_item_stats__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 1)));
          parse_tree__prog_item_stats__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 2)));
          parse_tree__prog_item_stats__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 3)));
          parse_tree__prog_item_stats__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 4)));
          parse_tree__prog_item_stats__MaybeGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 5)));
          parse_tree__prog_item_stats__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 6)));
          parse_tree__prog_item_stats__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 7)));
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
          MR_Integer parse_tree__prog_item_stats__Var_83;
          MR_Integer parse_tree__prog_item_stats__Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
          MR_Integer parse_tree__prog_item_stats__Var_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
          MR_Integer parse_tree__prog_item_stats__Var_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
          MR_Integer parse_tree__prog_item_stats__Var_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
          MR_Integer parse_tree__prog_item_stats__Var_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
          MR_Integer parse_tree__prog_item_stats__Var_136 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
          MR_Integer parse_tree__prog_item_stats__Var_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
          MR_Integer parse_tree__prog_item_stats__Var_138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
          MR_Integer parse_tree__prog_item_stats__Var_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
          MR_Integer parse_tree__prog_item_stats__Var_140 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
          MR_Integer parse_tree__prog_item_stats__Var_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
          MR_Integer parse_tree__prog_item_stats__Var_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
          MR_Integer parse_tree__prog_item_stats__Var_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
          MR_Integer parse_tree__prog_item_stats__Var_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
          MR_Integer parse_tree__prog_item_stats__Var_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
          MR_Integer parse_tree__prog_item_stats__Var_146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
          MR_Integer parse_tree__prog_item_stats__Var_147 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
          MR_Integer parse_tree__prog_item_stats__Var_148 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
          MR_Integer parse_tree__prog_item_stats__Var_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
          MR_Integer parse_tree__prog_item_stats__Var_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
          MR_Integer parse_tree__prog_item_stats__Var_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

          parse_tree__prog_item_stats__Var_83 = (parse_tree__prog_item_stats__Var_84 + (MR_Integer) 1);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_132));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_83));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_133));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_134));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_135));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_136));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_137));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_138));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_139));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_140));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_141));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_142));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_143));
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_144));
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_145));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_146));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_147));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_148));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_149));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_150));
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_151));
          }
          *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer parse_tree__prog_item_stats__Var_79;
          MR_Integer parse_tree__prog_item_stats__Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
          MR_Integer parse_tree__prog_item_stats__Var_173 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
          MR_Integer parse_tree__prog_item_stats__Var_174 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
          MR_Integer parse_tree__prog_item_stats__Var_175 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
          MR_Integer parse_tree__prog_item_stats__Var_176 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
          MR_Integer parse_tree__prog_item_stats__Var_177 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
          MR_Integer parse_tree__prog_item_stats__Var_178 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
          MR_Integer parse_tree__prog_item_stats__Var_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
          MR_Integer parse_tree__prog_item_stats__Var_180 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
          MR_Integer parse_tree__prog_item_stats__Var_181 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
          MR_Integer parse_tree__prog_item_stats__Var_182 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
          MR_Integer parse_tree__prog_item_stats__Var_183 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
          MR_Integer parse_tree__prog_item_stats__Var_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
          MR_Integer parse_tree__prog_item_stats__Var_185 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
          MR_Integer parse_tree__prog_item_stats__Var_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
          MR_Integer parse_tree__prog_item_stats__Var_187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
          MR_Integer parse_tree__prog_item_stats__Var_188 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
          MR_Integer parse_tree__prog_item_stats__Var_189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
          MR_Integer parse_tree__prog_item_stats__Var_190 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
          MR_Integer parse_tree__prog_item_stats__Var_191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
          MR_Integer parse_tree__prog_item_stats__Var_192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

          parse_tree__prog_item_stats__Var_79 = (parse_tree__prog_item_stats__Var_80 + (MR_Integer) 1);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_173));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_174));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_79));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_175));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_176));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_177));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_178));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_179));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_180));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_181));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_182));
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_183));
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_184));
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_185));
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_186));
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_187));
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_188));
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_189));
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_190));
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_191));
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_192));
          }
          *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Item_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer parse_tree__prog_item_stats__Var_75;
              MR_Integer parse_tree__prog_item_stats__Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
              MR_Integer parse_tree__prog_item_stats__Var_214 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_item_stats__Var_215 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_item_stats__Var_216 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
              MR_Integer parse_tree__prog_item_stats__Var_217 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
              MR_Integer parse_tree__prog_item_stats__Var_218 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
              MR_Integer parse_tree__prog_item_stats__Var_219 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
              MR_Integer parse_tree__prog_item_stats__Var_220 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
              MR_Integer parse_tree__prog_item_stats__Var_221 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
              MR_Integer parse_tree__prog_item_stats__Var_222 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
              MR_Integer parse_tree__prog_item_stats__Var_223 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
              MR_Integer parse_tree__prog_item_stats__Var_224 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
              MR_Integer parse_tree__prog_item_stats__Var_225 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
              MR_Integer parse_tree__prog_item_stats__Var_226 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
              MR_Integer parse_tree__prog_item_stats__Var_227 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
              MR_Integer parse_tree__prog_item_stats__Var_228 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
              MR_Integer parse_tree__prog_item_stats__Var_229 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
              MR_Integer parse_tree__prog_item_stats__Var_230 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
              MR_Integer parse_tree__prog_item_stats__Var_231 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
              MR_Integer parse_tree__prog_item_stats__Var_232 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
              MR_Integer parse_tree__prog_item_stats__Var_233 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

              parse_tree__prog_item_stats__Var_75 = (parse_tree__prog_item_stats__Var_76 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_214));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_215));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_216));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_75));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_217));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_218));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_219));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_220));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_221));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_222));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_223));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_224));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_225));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_226));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_227));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_228));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_229));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_230));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_231));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_232));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_233));
              }
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer parse_tree__prog_item_stats__Var_71;
              MR_Integer parse_tree__prog_item_stats__Var_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
              MR_Integer parse_tree__prog_item_stats__Var_255 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_item_stats__Var_256 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_item_stats__Var_257 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
              MR_Integer parse_tree__prog_item_stats__Var_258 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
              MR_Integer parse_tree__prog_item_stats__Var_259 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
              MR_Integer parse_tree__prog_item_stats__Var_260 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
              MR_Integer parse_tree__prog_item_stats__Var_261 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
              MR_Integer parse_tree__prog_item_stats__Var_262 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
              MR_Integer parse_tree__prog_item_stats__Var_263 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
              MR_Integer parse_tree__prog_item_stats__Var_264 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
              MR_Integer parse_tree__prog_item_stats__Var_265 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
              MR_Integer parse_tree__prog_item_stats__Var_266 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
              MR_Integer parse_tree__prog_item_stats__Var_267 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
              MR_Integer parse_tree__prog_item_stats__Var_268 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
              MR_Integer parse_tree__prog_item_stats__Var_269 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
              MR_Integer parse_tree__prog_item_stats__Var_270 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
              MR_Integer parse_tree__prog_item_stats__Var_271 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
              MR_Integer parse_tree__prog_item_stats__Var_272 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
              MR_Integer parse_tree__prog_item_stats__Var_273 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
              MR_Integer parse_tree__prog_item_stats__Var_274 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

              parse_tree__prog_item_stats__Var_71 = (parse_tree__prog_item_stats__Var_72 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_255));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_256));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_257));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_258));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_71));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_259));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_260));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_261));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_262));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_263));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_264));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_265));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_266));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_267));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_268));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_269));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_270));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_271));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_272));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_273));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_274));
              }
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer parse_tree__prog_item_stats__Var_67;
              MR_Integer parse_tree__prog_item_stats__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
              MR_Integer parse_tree__prog_item_stats__Var_296 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_item_stats__Var_297 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_item_stats__Var_298 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
              MR_Integer parse_tree__prog_item_stats__Var_299 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
              MR_Integer parse_tree__prog_item_stats__Var_300 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
              MR_Integer parse_tree__prog_item_stats__Var_301 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
              MR_Integer parse_tree__prog_item_stats__Var_302 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
              MR_Integer parse_tree__prog_item_stats__Var_303 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
              MR_Integer parse_tree__prog_item_stats__Var_304 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
              MR_Integer parse_tree__prog_item_stats__Var_305 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
              MR_Integer parse_tree__prog_item_stats__Var_306 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
              MR_Integer parse_tree__prog_item_stats__Var_307 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
              MR_Integer parse_tree__prog_item_stats__Var_308 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
              MR_Integer parse_tree__prog_item_stats__Var_309 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
              MR_Integer parse_tree__prog_item_stats__Var_310 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
              MR_Integer parse_tree__prog_item_stats__Var_311 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
              MR_Integer parse_tree__prog_item_stats__Var_312 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
              MR_Integer parse_tree__prog_item_stats__Var_313 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
              MR_Integer parse_tree__prog_item_stats__Var_314 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
              MR_Integer parse_tree__prog_item_stats__Var_315 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

              parse_tree__prog_item_stats__Var_67 = (parse_tree__prog_item_stats__Var_68 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_296));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_297));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_298));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_299));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_300));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_67));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_301));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_302));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_303));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_304));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_305));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_306));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_307));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_308));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_309));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_310));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_311));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_312));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_313));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_314));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_315));
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
              MR_Integer parse_tree__prog_item_stats__Var_62;
              MR_Integer parse_tree__prog_item_stats__Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
              MR_Integer parse_tree__prog_item_stats__Var_337 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_item_stats__Var_338 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_item_stats__Var_339 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
              MR_Integer parse_tree__prog_item_stats__Var_340 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
              MR_Integer parse_tree__prog_item_stats__Var_341 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
              MR_Integer parse_tree__prog_item_stats__Var_342 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
              MR_Integer parse_tree__prog_item_stats__Var_343 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
              MR_Integer parse_tree__prog_item_stats__Var_344 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
              MR_Integer parse_tree__prog_item_stats__Var_345 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
              MR_Integer parse_tree__prog_item_stats__Var_346 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
              MR_Integer parse_tree__prog_item_stats__Var_347 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
              MR_Integer parse_tree__prog_item_stats__Var_348 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
              MR_Integer parse_tree__prog_item_stats__Var_349 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
              MR_Integer parse_tree__prog_item_stats__Var_350 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
              MR_Integer parse_tree__prog_item_stats__Var_351 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
              MR_Integer parse_tree__prog_item_stats__Var_352 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
              MR_Integer parse_tree__prog_item_stats__Var_353 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
              MR_Integer parse_tree__prog_item_stats__Var_354 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
              MR_Integer parse_tree__prog_item_stats__Var_355 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
              MR_Integer parse_tree__prog_item_stats__Var_356 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

              parse_tree__prog_item_stats__Var_62 = (parse_tree__prog_item_stats__Var_63 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_337));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_338));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_339));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_340));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_341));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_342));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_343));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_344));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_345));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_346));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_347));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_348));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_349));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_350));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_62));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_351));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_352));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_353));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_354));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_355));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_356));
              }
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer parse_tree__prog_item_stats__Var_58;
              MR_Integer parse_tree__prog_item_stats__Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
              MR_Integer parse_tree__prog_item_stats__Var_378 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_item_stats__Var_379 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_item_stats__Var_380 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
              MR_Integer parse_tree__prog_item_stats__Var_381 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
              MR_Integer parse_tree__prog_item_stats__Var_382 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
              MR_Integer parse_tree__prog_item_stats__Var_383 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
              MR_Integer parse_tree__prog_item_stats__Var_384 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
              MR_Integer parse_tree__prog_item_stats__Var_385 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
              MR_Integer parse_tree__prog_item_stats__Var_386 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
              MR_Integer parse_tree__prog_item_stats__Var_387 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
              MR_Integer parse_tree__prog_item_stats__Var_388 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
              MR_Integer parse_tree__prog_item_stats__Var_389 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
              MR_Integer parse_tree__prog_item_stats__Var_390 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
              MR_Integer parse_tree__prog_item_stats__Var_391 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
              MR_Integer parse_tree__prog_item_stats__Var_392 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
              MR_Integer parse_tree__prog_item_stats__Var_393 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
              MR_Integer parse_tree__prog_item_stats__Var_394 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
              MR_Integer parse_tree__prog_item_stats__Var_395 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
              MR_Integer parse_tree__prog_item_stats__Var_396 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
              MR_Integer parse_tree__prog_item_stats__Var_397 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

              parse_tree__prog_item_stats__Var_58 = (parse_tree__prog_item_stats__Var_59 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_378));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_379));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_380));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_381));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_382));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_383));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_384));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_385));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_386));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_387));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_388));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_389));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_390));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_391));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_392));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_58));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_393));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_394));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_395));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_396));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_397));
              }
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer parse_tree__prog_item_stats__Var_54;
              MR_Integer parse_tree__prog_item_stats__Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
              MR_Integer parse_tree__prog_item_stats__Var_419 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_item_stats__Var_420 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_item_stats__Var_421 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
              MR_Integer parse_tree__prog_item_stats__Var_422 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
              MR_Integer parse_tree__prog_item_stats__Var_423 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
              MR_Integer parse_tree__prog_item_stats__Var_424 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
              MR_Integer parse_tree__prog_item_stats__Var_425 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
              MR_Integer parse_tree__prog_item_stats__Var_426 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
              MR_Integer parse_tree__prog_item_stats__Var_427 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
              MR_Integer parse_tree__prog_item_stats__Var_428 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
              MR_Integer parse_tree__prog_item_stats__Var_429 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
              MR_Integer parse_tree__prog_item_stats__Var_430 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
              MR_Integer parse_tree__prog_item_stats__Var_431 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
              MR_Integer parse_tree__prog_item_stats__Var_432 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
              MR_Integer parse_tree__prog_item_stats__Var_433 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
              MR_Integer parse_tree__prog_item_stats__Var_434 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
              MR_Integer parse_tree__prog_item_stats__Var_435 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
              MR_Integer parse_tree__prog_item_stats__Var_436 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
              MR_Integer parse_tree__prog_item_stats__Var_437 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
              MR_Integer parse_tree__prog_item_stats__Var_438 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

              parse_tree__prog_item_stats__Var_54 = (parse_tree__prog_item_stats__Var_55 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_419));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_420));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_421));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_422));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_423));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_424));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_425));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_426));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_427));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_428));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_429));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_430));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_431));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_432));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_433));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_434));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_54));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_435));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_436));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_437));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_438));
              }
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer parse_tree__prog_item_stats__Var_50;
              MR_Integer parse_tree__prog_item_stats__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
              MR_Integer parse_tree__prog_item_stats__Var_460 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_item_stats__Var_461 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_item_stats__Var_462 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
              MR_Integer parse_tree__prog_item_stats__Var_463 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
              MR_Integer parse_tree__prog_item_stats__Var_464 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
              MR_Integer parse_tree__prog_item_stats__Var_465 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
              MR_Integer parse_tree__prog_item_stats__Var_466 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
              MR_Integer parse_tree__prog_item_stats__Var_467 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
              MR_Integer parse_tree__prog_item_stats__Var_468 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
              MR_Integer parse_tree__prog_item_stats__Var_469 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
              MR_Integer parse_tree__prog_item_stats__Var_470 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
              MR_Integer parse_tree__prog_item_stats__Var_471 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
              MR_Integer parse_tree__prog_item_stats__Var_472 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
              MR_Integer parse_tree__prog_item_stats__Var_473 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
              MR_Integer parse_tree__prog_item_stats__Var_474 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
              MR_Integer parse_tree__prog_item_stats__Var_475 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
              MR_Integer parse_tree__prog_item_stats__Var_476 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
              MR_Integer parse_tree__prog_item_stats__Var_477 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
              MR_Integer parse_tree__prog_item_stats__Var_478 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
              MR_Integer parse_tree__prog_item_stats__Var_479 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

              parse_tree__prog_item_stats__Var_50 = (parse_tree__prog_item_stats__Var_51 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_460));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_461));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_462));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_463));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_464));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_465));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_466));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_467));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_468));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_469));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_470));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_471));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_472));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_473));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_474));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_475));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_476));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_50));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_477));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_478));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_479));
              }
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Integer parse_tree__prog_item_stats__Var_46;
              MR_Integer parse_tree__prog_item_stats__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
              MR_Integer parse_tree__prog_item_stats__Var_501 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_item_stats__Var_502 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_item_stats__Var_503 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
              MR_Integer parse_tree__prog_item_stats__Var_504 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
              MR_Integer parse_tree__prog_item_stats__Var_505 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
              MR_Integer parse_tree__prog_item_stats__Var_506 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
              MR_Integer parse_tree__prog_item_stats__Var_507 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
              MR_Integer parse_tree__prog_item_stats__Var_508 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
              MR_Integer parse_tree__prog_item_stats__Var_509 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
              MR_Integer parse_tree__prog_item_stats__Var_510 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
              MR_Integer parse_tree__prog_item_stats__Var_511 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
              MR_Integer parse_tree__prog_item_stats__Var_512 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
              MR_Integer parse_tree__prog_item_stats__Var_513 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
              MR_Integer parse_tree__prog_item_stats__Var_514 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
              MR_Integer parse_tree__prog_item_stats__Var_515 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
              MR_Integer parse_tree__prog_item_stats__Var_516 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
              MR_Integer parse_tree__prog_item_stats__Var_517 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
              MR_Integer parse_tree__prog_item_stats__Var_518 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
              MR_Integer parse_tree__prog_item_stats__Var_519 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
              MR_Integer parse_tree__prog_item_stats__Var_520 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

              parse_tree__prog_item_stats__Var_46 = (parse_tree__prog_item_stats__Var_47 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_501));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_502));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_503));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_504));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_505));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_506));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_507));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_508));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_509));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_510));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_511));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_512));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_513));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_514));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_515));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_516));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_517));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_518));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_46));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_519));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_520));
              }
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Integer parse_tree__prog_item_stats__Var_42;
              MR_Integer parse_tree__prog_item_stats__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
              MR_Integer parse_tree__prog_item_stats__Var_542 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_item_stats__Var_543 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_item_stats__Var_544 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
              MR_Integer parse_tree__prog_item_stats__Var_545 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
              MR_Integer parse_tree__prog_item_stats__Var_546 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
              MR_Integer parse_tree__prog_item_stats__Var_547 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
              MR_Integer parse_tree__prog_item_stats__Var_548 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
              MR_Integer parse_tree__prog_item_stats__Var_549 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
              MR_Integer parse_tree__prog_item_stats__Var_550 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
              MR_Integer parse_tree__prog_item_stats__Var_551 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
              MR_Integer parse_tree__prog_item_stats__Var_552 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
              MR_Integer parse_tree__prog_item_stats__Var_553 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
              MR_Integer parse_tree__prog_item_stats__Var_554 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
              MR_Integer parse_tree__prog_item_stats__Var_555 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
              MR_Integer parse_tree__prog_item_stats__Var_556 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
              MR_Integer parse_tree__prog_item_stats__Var_557 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
              MR_Integer parse_tree__prog_item_stats__Var_558 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
              MR_Integer parse_tree__prog_item_stats__Var_559 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
              MR_Integer parse_tree__prog_item_stats__Var_560 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
              MR_Integer parse_tree__prog_item_stats__Var_561 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

              parse_tree__prog_item_stats__Var_42 = (parse_tree__prog_item_stats__Var_43 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_542));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_543));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_544));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_545));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_546));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_547));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_548));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_549));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_550));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_551));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_552));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_553));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_554));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_555));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_556));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_557));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_558));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_559));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_560));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_42));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_561));
              }
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer parse_tree__prog_item_stats__Var_38;
              MR_Integer parse_tree__prog_item_stats__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));
              MR_Integer parse_tree__prog_item_stats__Var_583 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
              MR_Integer parse_tree__prog_item_stats__Var_584 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
              MR_Integer parse_tree__prog_item_stats__Var_585 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
              MR_Integer parse_tree__prog_item_stats__Var_586 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
              MR_Integer parse_tree__prog_item_stats__Var_587 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
              MR_Integer parse_tree__prog_item_stats__Var_588 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
              MR_Integer parse_tree__prog_item_stats__Var_589 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
              MR_Integer parse_tree__prog_item_stats__Var_590 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
              MR_Integer parse_tree__prog_item_stats__Var_591 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
              MR_Integer parse_tree__prog_item_stats__Var_592 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
              MR_Integer parse_tree__prog_item_stats__Var_593 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
              MR_Integer parse_tree__prog_item_stats__Var_594 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
              MR_Integer parse_tree__prog_item_stats__Var_595 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
              MR_Integer parse_tree__prog_item_stats__Var_596 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
              MR_Integer parse_tree__prog_item_stats__Var_597 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
              MR_Integer parse_tree__prog_item_stats__Var_598 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
              MR_Integer parse_tree__prog_item_stats__Var_599 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
              MR_Integer parse_tree__prog_item_stats__Var_600 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
              MR_Integer parse_tree__prog_item_stats__Var_601 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
              MR_Integer parse_tree__prog_item_stats__Var_602 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));

              parse_tree__prog_item_stats__Var_38 = (parse_tree__prog_item_stats__Var_39 + (MR_Integer) 1);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__Var_583));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__Var_584));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__Var_585));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__Var_586));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__Var_587));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__Var_588));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__Var_589));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__Var_590));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__Var_591));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__Var_592));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__Var_593));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__Var_594));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__Var_595));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__Var_596));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__Var_597));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__Var_598));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__Var_599));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__Var_600));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__Var_601));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__Var_602));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__Var_38));
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
              MR_Word parse_tree__prog_item_stats__next_value_of_HeadVar__1_1 = parse_tree__prog_item_stats__Items_13;
              MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_ItemStats_0_2 = parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_20_20;
              MR_Word parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_4 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_21_21;

              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_4 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_GoalStats_0_4;
              parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_2 = parse_tree__prog_item_stats__next_value_of_STATE_VARIABLE_ItemStats_0_2;
              parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__next_value_of_HeadVar__1_1;
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
    MR_Word parse_tree__prog_item_stats__Var_11;
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
    MR_String parse_tree__prog_item_stats__Var_69;
    MR_Word parse_tree__prog_item_stats__Var_71;
    MR_Word parse_tree__prog_item_stats___ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 0)));
    MR_Word parse_tree__prog_item_stats___ModuleNameContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 1)));
    MR_Word parse_tree__prog_item_stats___ModuleVersionNumbers_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 2)));
    MR_Word parse_tree__prog_item_stats__Var_13;
    MR_Word parse_tree__prog_item_stats__Var_14;
    MR_Word parse_tree__prog_item_stats__Var_15;
    MR_Word parse_tree__prog_item_stats__Var_16;
    MR_Word parse_tree__prog_item_stats__Var_17;
    MR_Word parse_tree__prog_item_stats__Var_18;
    MR_Word parse_tree__prog_item_stats__Var_19;
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
    parse_tree__prog_item_stats__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 0)));
    parse_tree__prog_item_stats__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 1)));
    parse_tree__prog_item_stats__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 2)));
    parse_tree__prog_item_stats__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 3)));
    parse_tree__prog_item_stats__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 4)));
    parse_tree__prog_item_stats__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 5)));
    parse_tree__prog_item_stats__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 6)));
    parse_tree__prog_item_stats__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 7)));
    {
      parse_tree__prog_item_stats__Var_69 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_item_stats__Var_11);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_5, (MR_String) "MODULE ");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__Var_69);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_5, (MR_String) "\n");
    }
    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, parse_tree__prog_item_stats__CompUnitStats_8, &parse_tree__prog_item_stats__SectionStatPairs_64);
    }
    {
      parse_tree__prog_item_stats__Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__Var_71, 0) = ((MR_Box) (&parse_tree__prog_item_stats_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__Var_71, 1) = ((MR_Box) (parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__Var_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__Var_71, 3) = ((MR_Box) (parse_tree__prog_item_stats__Stream_5));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item_stats_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__prog_item_stats__Var_71, parse_tree__prog_item_stats__SectionStatPairs_64, ((MR_Box) ((MR_Integer) 0)), &parse_tree__prog_item_stats__conv0_STATE_VARIABLE_IO_10);
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
