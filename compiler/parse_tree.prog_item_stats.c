/*
** Automatically generated from `prog_item_stats.m'
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


/* :- module parse_tree.prog_item_stats. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_item_stats__init
ENDINIT
*/

#include "parse_tree.prog_item_stats.mih"


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 99 "parse_tree.prog_item_stats.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_item_stats__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_item_stats__type_ctor_info_section_stats_0;

#line 102 "parse_tree.prog_item_stats.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_item_stats__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_item_stats__type_ctor_info_section_stats_0;

#line 105 "parse_tree.prog_item_stats.c"
static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_goal_stats_0_0[26];

#line 108 "parse_tree.prog_item_stats.c"
static const MR_ConstString parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_goal_stats_0_0[26];

#line 111 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDesc parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_goal_stats_0_0;

#line 114 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_goal_stats_0_0[1];

#line 117 "parse_tree.prog_item_stats.c"
static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_goal_stats_0[1];

#line 120 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_goal_stats_0[1];

#line 123 "parse_tree.prog_item_stats.c"
static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_goal_stats_0[1];

#line 126 "parse_tree.prog_item_stats.c"
static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_item_stats_0_0[21];

#line 129 "parse_tree.prog_item_stats.c"
static const MR_ConstString parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_item_stats_0_0[21];

#line 132 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDesc parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_item_stats_0_0;

#line 135 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_item_stats_0_0[1];

#line 138 "parse_tree.prog_item_stats.c"
static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_item_stats_0[1];

#line 141 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_item_stats_0[1];

#line 144 "parse_tree.prog_item_stats.c"
static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_item_stats_0[1];

#line 147 "parse_tree.prog_item_stats.c"
static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_section_stats_0_0[2];

#line 150 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDesc parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_section_stats_0_0;

#line 153 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_section_stats_0_0[1];

#line 156 "parse_tree.prog_item_stats.c"
static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_section_stats_0[1];

#line 159 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_section_stats_0[1];

#line 162 "parse_tree.prog_item_stats.c"
static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_section_stats_0[1];

#line 165 "parse_tree.prog_item_stats.c"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0_10001(
#line 168 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 170 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2);

#line 173 "parse_tree.prog_item_stats.c"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0_10001(
#line 176 "parse_tree.prog_item_stats.c"
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
#line 178 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 180 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3);

#line 183 "parse_tree.prog_item_stats.c"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____goal_stats_0_0_10001(
#line 186 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 188 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2);

#line 191 "parse_tree.prog_item_stats.c"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____goal_stats_0_0_10001(
#line 194 "parse_tree.prog_item_stats.c"
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
#line 196 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 198 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3);

#line 201 "parse_tree.prog_item_stats.c"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____item_stats_0_0_10001(
#line 204 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 206 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2);

#line 209 "parse_tree.prog_item_stats.c"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____item_stats_0_0_10001(
#line 212 "parse_tree.prog_item_stats.c"
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
#line 214 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 216 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3);

#line 219 "parse_tree.prog_item_stats.c"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____section_stats_0_0_10001(
#line 222 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 224 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2);

#line 227 "parse_tree.prog_item_stats.c"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____section_stats_0_0_10001(
#line 230 "parse_tree.prog_item_stats.c"
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
#line 232 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 234 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3);

#line 188 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho4_4_p_0(
#line 188 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 188 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
#line 188 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4);

#line 188 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho3_4_p_0(
#line 188 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 188 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
#line 188 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4);

#line 188 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho2_4_p_0(
#line 188 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 188 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
#line 188 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4);

#line 188 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho1_4_p_0(
#line 188 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 188 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
#line 188 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4);

#line 119 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____section_stats_0_0(
#line 119 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
#line 119 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 119 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3);

#line 119 "prog_item_stats.m"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____section_stats_0_0(
#line 119 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 119 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2);

#line 55 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____item_stats_0_0(
#line 55 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
#line 55 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 55 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3);

#line 55 "prog_item_stats.m"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____item_stats_0_0(
#line 55 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 55 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2);

#line 87 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____goal_stats_0_0(
#line 87 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
#line 87 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 87 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3);

#line 87 "prog_item_stats.m"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____goal_stats_0_0(
#line 87 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 87 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2);

#line 122 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0(
#line 122 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
#line 122 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 122 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3);

#line 122 "prog_item_stats.m"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0(
#line 122 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 122 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2);

#line 589 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__write_one_stat_6_p_0(
#line 589 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Stream_7,
#line 589 "prog_item_stats.m"
  MR_String parse_tree__prog_item_stats__SectionName_8,
#line 589 "prog_item_stats.m"
  MR_String parse_tree__prog_item_stats__StatName_9,
#line 589 "prog_item_stats.m"
  MR_Integer parse_tree__prog_item_stats__StatNum_10);

#line 545 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__write_goal_stats_5_p_0(
#line 545 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Stream_6,
#line 545 "prog_item_stats.m"
  MR_String parse_tree__prog_item_stats__SectionName_7,
#line 545 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__GoalStats_8);

#line 506 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__write_section_stats_4_p_0(
#line 506 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Stream_5,
#line 506 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2);

#line 487 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_catch_exprs_3_p_0(
#line 487 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 487 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2,
#line 487 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3);

#line 348 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(
#line 348 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Goal_4,
#line 348 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84,
#line 348 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_85);

#line 340 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(
#line 340 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 340 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2,
#line 340 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3);

#line 272 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_pragma_3_p_0(
#line 272 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__ItemPragmaInfo_4,
#line 272 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43,
#line 272 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44);

#line 219 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_5_p_0(
#line 219 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Item_6,
#line 219 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31,
#line 219 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32,
#line 219 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33,
#line 219 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34);

#line 211 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(
#line 211 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 211 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_2,
#line 211 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_3,
#line 211 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_4,
#line 211 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_5);

#line 504 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0_1(
#line 504 "prog_item_stats.m"
  MR_Box parse_tree__prog_item_stats__closure_arg,
#line 504 "prog_item_stats.m"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 504 "prog_item_stats.m"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 504 "prog_item_stats.m"
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_2[1][21];

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_3[1][26];

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_4[1][1];

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_5[1][7];




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

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_3[1][26] = {
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
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box parse_tree__prog_item_stats_scalar_common_5[1][7] = {
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



#line 576 "parse_tree.prog_item_stats.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_item_stats__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_item_stats__type_ctor_info_section_stats_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0
  }
};

#line 585 "parse_tree.prog_item_stats.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_item_stats__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_item_stats__type_ctor_info_section_stats_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0
  }
};

#line 594 "parse_tree.prog_item_stats.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_comp_unit_stats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 611 "parse_tree.prog_item_stats.c"
static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_goal_stats_0_0[26] = {
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

#line 641 "parse_tree.prog_item_stats.c"
static const MR_ConstString parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_goal_stats_0_0[26] = {
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

#line 671 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDesc parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_goal_stats_0_0 = {
  (MR_String) "goal_stats",
  (MR_Integer) 26,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_goal_stats_0_0,
  parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_goal_stats_0_0,
  NULL,
  NULL
};

#line 686 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_goal_stats_0_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_goal_stats_0_0
};

#line 691 "parse_tree.prog_item_stats.c"
static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_goal_stats_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_goal_stats_0_0
  }
};

#line 700 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_goal_stats_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_goal_stats_0_0
};

#line 705 "parse_tree.prog_item_stats.c"
static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_goal_stats_0[1] = {
  (MR_Integer) 0
};

#line 710 "parse_tree.prog_item_stats.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_goal_stats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 727 "parse_tree.prog_item_stats.c"
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

#line 752 "parse_tree.prog_item_stats.c"
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

#line 777 "parse_tree.prog_item_stats.c"
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
  NULL
};

#line 792 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_item_stats_0_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_item_stats_0_0
};

#line 797 "parse_tree.prog_item_stats.c"
static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_item_stats_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_item_stats_0_0
  }
};

#line 806 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_item_stats_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_item_stats_0_0
};

#line 811 "parse_tree.prog_item_stats.c"
static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_item_stats_0[1] = {
  (MR_Integer) 0
};

#line 816 "parse_tree.prog_item_stats.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_item_stats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 833 "parse_tree.prog_item_stats.c"
static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_section_stats_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_item_stats_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_goal_stats_0
};

#line 839 "parse_tree.prog_item_stats.c"
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
  NULL
};

#line 854 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_section_stats_0_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_section_stats_0_0
};

#line 859 "parse_tree.prog_item_stats.c"
static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_section_stats_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_section_stats_0_0
  }
};

#line 868 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_section_stats_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_section_stats_0_0
};

#line 873 "parse_tree.prog_item_stats.c"
static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_section_stats_0[1] = {
  (MR_Integer) 0
};

#line 878 "parse_tree.prog_item_stats.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 895 "parse_tree.prog_item_stats.c"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0_10001(
#line 898 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 900 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2)
#line 902 "parse_tree.prog_item_stats.c"
{
#line 904 "parse_tree.prog_item_stats.c"
  {
#line 906 "parse_tree.prog_item_stats.c"
    MR_bool parse_tree__prog_item_stats__succeeded;

#line 909 "parse_tree.prog_item_stats.c"
    {
#line 911 "parse_tree.prog_item_stats.c"
      parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0(((MR_Word) parse_tree__prog_item_stats__wrapper_arg_1), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2));
    }
#line 914 "parse_tree.prog_item_stats.c"
    return parse_tree__prog_item_stats__succeeded;
#line 916 "parse_tree.prog_item_stats.c"
  }
#line 918 "parse_tree.prog_item_stats.c"
}

#line 921 "parse_tree.prog_item_stats.c"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0_10001(
#line 924 "parse_tree.prog_item_stats.c"
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
#line 926 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 928 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3)
#line 930 "parse_tree.prog_item_stats.c"
{
#line 932 "parse_tree.prog_item_stats.c"
  {
#line 934 "parse_tree.prog_item_stats.c"
    MR_Word parse_tree__prog_item_stats__conv0_HeadVar__1_1;

#line 937 "parse_tree.prog_item_stats.c"
    {
#line 939 "parse_tree.prog_item_stats.c"
      parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0(&parse_tree__prog_item_stats__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_3));
    }
#line 942 "parse_tree.prog_item_stats.c"
    *parse_tree__prog_item_stats__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_item_stats__conv0_HeadVar__1_1));
#line 944 "parse_tree.prog_item_stats.c"
  }
#line 946 "parse_tree.prog_item_stats.c"
}

#line 949 "parse_tree.prog_item_stats.c"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____goal_stats_0_0_10001(
#line 952 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 954 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2)
#line 956 "parse_tree.prog_item_stats.c"
{
#line 958 "parse_tree.prog_item_stats.c"
  {
#line 960 "parse_tree.prog_item_stats.c"
    MR_bool parse_tree__prog_item_stats__succeeded;

#line 963 "parse_tree.prog_item_stats.c"
    {
#line 965 "parse_tree.prog_item_stats.c"
      parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____goal_stats_0_0(((MR_Word) parse_tree__prog_item_stats__wrapper_arg_1), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2));
    }
#line 968 "parse_tree.prog_item_stats.c"
    return parse_tree__prog_item_stats__succeeded;
#line 970 "parse_tree.prog_item_stats.c"
  }
#line 972 "parse_tree.prog_item_stats.c"
}

#line 975 "parse_tree.prog_item_stats.c"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____goal_stats_0_0_10001(
#line 978 "parse_tree.prog_item_stats.c"
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
#line 980 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 982 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3)
#line 984 "parse_tree.prog_item_stats.c"
{
#line 986 "parse_tree.prog_item_stats.c"
  {
#line 988 "parse_tree.prog_item_stats.c"
    MR_Word parse_tree__prog_item_stats__conv0_HeadVar__1_1;

#line 991 "parse_tree.prog_item_stats.c"
    {
#line 993 "parse_tree.prog_item_stats.c"
      parse_tree__prog_item_stats____Compare____goal_stats_0_0(&parse_tree__prog_item_stats__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_3));
    }
#line 996 "parse_tree.prog_item_stats.c"
    *parse_tree__prog_item_stats__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_item_stats__conv0_HeadVar__1_1));
#line 998 "parse_tree.prog_item_stats.c"
  }
#line 1000 "parse_tree.prog_item_stats.c"
}

#line 1003 "parse_tree.prog_item_stats.c"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____item_stats_0_0_10001(
#line 1006 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 1008 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2)
#line 1010 "parse_tree.prog_item_stats.c"
{
#line 1012 "parse_tree.prog_item_stats.c"
  {
#line 1014 "parse_tree.prog_item_stats.c"
    MR_bool parse_tree__prog_item_stats__succeeded;

#line 1017 "parse_tree.prog_item_stats.c"
    {
#line 1019 "parse_tree.prog_item_stats.c"
      parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____item_stats_0_0(((MR_Word) parse_tree__prog_item_stats__wrapper_arg_1), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2));
    }
#line 1022 "parse_tree.prog_item_stats.c"
    return parse_tree__prog_item_stats__succeeded;
#line 1024 "parse_tree.prog_item_stats.c"
  }
#line 1026 "parse_tree.prog_item_stats.c"
}

#line 1029 "parse_tree.prog_item_stats.c"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____item_stats_0_0_10001(
#line 1032 "parse_tree.prog_item_stats.c"
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
#line 1034 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 1036 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3)
#line 1038 "parse_tree.prog_item_stats.c"
{
#line 1040 "parse_tree.prog_item_stats.c"
  {
#line 1042 "parse_tree.prog_item_stats.c"
    MR_Word parse_tree__prog_item_stats__conv0_HeadVar__1_1;

#line 1045 "parse_tree.prog_item_stats.c"
    {
#line 1047 "parse_tree.prog_item_stats.c"
      parse_tree__prog_item_stats____Compare____item_stats_0_0(&parse_tree__prog_item_stats__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_3));
    }
#line 1050 "parse_tree.prog_item_stats.c"
    *parse_tree__prog_item_stats__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_item_stats__conv0_HeadVar__1_1));
#line 1052 "parse_tree.prog_item_stats.c"
  }
#line 1054 "parse_tree.prog_item_stats.c"
}

#line 1057 "parse_tree.prog_item_stats.c"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____section_stats_0_0_10001(
#line 1060 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 1062 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2)
#line 1064 "parse_tree.prog_item_stats.c"
{
#line 1066 "parse_tree.prog_item_stats.c"
  {
#line 1068 "parse_tree.prog_item_stats.c"
    MR_bool parse_tree__prog_item_stats__succeeded;

#line 1071 "parse_tree.prog_item_stats.c"
    {
#line 1073 "parse_tree.prog_item_stats.c"
      parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____section_stats_0_0(((MR_Word) parse_tree__prog_item_stats__wrapper_arg_1), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2));
    }
#line 1076 "parse_tree.prog_item_stats.c"
    return parse_tree__prog_item_stats__succeeded;
#line 1078 "parse_tree.prog_item_stats.c"
  }
#line 1080 "parse_tree.prog_item_stats.c"
}

#line 1083 "parse_tree.prog_item_stats.c"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____section_stats_0_0_10001(
#line 1086 "parse_tree.prog_item_stats.c"
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
#line 1088 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 1090 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3)
#line 1092 "parse_tree.prog_item_stats.c"
{
#line 1094 "parse_tree.prog_item_stats.c"
  {
#line 1096 "parse_tree.prog_item_stats.c"
    MR_Word parse_tree__prog_item_stats__conv0_HeadVar__1_1;

#line 1099 "parse_tree.prog_item_stats.c"
    {
#line 1101 "parse_tree.prog_item_stats.c"
      parse_tree__prog_item_stats____Compare____section_stats_0_0(&parse_tree__prog_item_stats__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_3));
    }
#line 1104 "parse_tree.prog_item_stats.c"
    *parse_tree__prog_item_stats__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_item_stats__conv0_HeadVar__1_1));
#line 1106 "parse_tree.prog_item_stats.c"
  }
#line 1108 "parse_tree.prog_item_stats.c"
}

#line 188 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho4_4_p_0(
#line 188 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 188 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
#line 188 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4)
#line 188 "prog_item_stats.m"
{
#line 192 "prog_item_stats.m"
  while (MR_TRUE)
#line 192 "prog_item_stats.m"
    {
#line 192 "prog_item_stats.m"
      /* tailcall optimized into a loop */
#line 192 "prog_item_stats.m"
      {
#line 192 "prog_item_stats.m"
        MR_bool parse_tree__prog_item_stats__succeeded;

#line 192 "prog_item_stats.m"
        if ((parse_tree__prog_item_stats__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 192 "prog_item_stats.m"
          *parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3;
#line 192 "prog_item_stats.m"
        else
#line 194 "prog_item_stats.m"
          {
#line 194 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__ItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 194 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__ItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 194 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Section_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 0)));
#line 194 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Items_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 4)));
#line 194 "prog_item_stats.m"
            MR_String parse_tree__prog_item_stats__SectionName_18;
#line 194 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 1)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 2)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 3)));
#line 203 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__SectionStats0_19;
#line 197 "prog_item_stats.m"
            MR_Box parse_tree__prog_item_stats__conv0_SectionStats0_19;

#line 168 "prog_item_stats.m"
#line 168 "prog_item_stats.m"
            switch (parse_tree__prog_item_stats__Section_13) {
#line 168 "prog_item_stats.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 168 "prog_item_stats.m"
              case (MR_Integer) 2:
#line 170 "prog_item_stats.m"
                parse_tree__prog_item_stats__SectionName_18 = (MR_String) "src_impl_sub";
#line 168 "prog_item_stats.m"
                break;
#line 168 "prog_item_stats.m"
              case (MR_Integer) 1:
#line 169 "prog_item_stats.m"
                parse_tree__prog_item_stats__SectionName_18 = (MR_String) "src_impl";
#line 168 "prog_item_stats.m"
                break;
#line 168 "prog_item_stats.m"
              case (MR_Integer) 0:
#line 168 "prog_item_stats.m"
                parse_tree__prog_item_stats__SectionName_18 = (MR_String) "src_int";
#line 168 "prog_item_stats.m"
                break;
#line 168 "prog_item_stats.m"
            }
#line 197 "prog_item_stats.m"
            {
#line 197 "prog_item_stats.m"
              parse_tree__prog_item_stats__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, ((MR_Box) (parse_tree__prog_item_stats__SectionName_18)), &parse_tree__prog_item_stats__conv0_SectionStats0_19);
            }
#line 197 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 197 "prog_item_stats.m"
              {
#line 197 "prog_item_stats.m"
                parse_tree__prog_item_stats__SectionStats0_19 = ((MR_Word) parse_tree__prog_item_stats__conv0_SectionStats0_19);
#line 197 "prog_item_stats.m"
                parse_tree__prog_item_stats__succeeded = MR_TRUE;
#line 197 "prog_item_stats.m"
              }
#line 203 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 198 "prog_item_stats.m"
              {
#line 198 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 0)));
#line 198 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 1)));
#line 198 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats_22;
#line 198 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats_23;
#line 198 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__SectionStats_24;

#line 199 "prog_item_stats.m"
                {
#line 199 "prog_item_stats.m"
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, parse_tree__prog_item_stats__ItemStats0_20, &parse_tree__prog_item_stats__ItemStats_22, parse_tree__prog_item_stats__GoalStats0_21, &parse_tree__prog_item_stats__GoalStats_23);
                }
#line 201 "prog_item_stats.m"
                {
#line 201 "prog_item_stats.m"
                  parse_tree__prog_item_stats__SectionStats_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 201 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_22));
#line 201 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_23));
#line 201 "prog_item_stats.m"
                }
#line 202 "prog_item_stats.m"
                {
#line 202 "prog_item_stats.m"
                  mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) (parse_tree__prog_item_stats__SectionName_18)), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_24)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
#line 198 "prog_item_stats.m"
              }
#line 203 "prog_item_stats.m"
            else
#line 205 "prog_item_stats.m"
              {
#line 205 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats_32;
#line 205 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats_33;
#line 205 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__SectionStats_34;

#line 204 "prog_item_stats.m"
                {
#line 204 "prog_item_stats.m"
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, (MR_Word) &parse_tree__prog_item_stats_scalar_common_2[0], &parse_tree__prog_item_stats__ItemStats_32, (MR_Word) &parse_tree__prog_item_stats_scalar_common_3[0], &parse_tree__prog_item_stats__GoalStats_33);
                }
#line 206 "prog_item_stats.m"
                {
#line 206 "prog_item_stats.m"
                  parse_tree__prog_item_stats__SectionStats_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 206 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_32));
#line 206 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_33));
#line 206 "prog_item_stats.m"
                }
#line 207 "prog_item_stats.m"
                {
#line 207 "prog_item_stats.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) (parse_tree__prog_item_stats__SectionName_18)), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_34)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
#line 205 "prog_item_stats.m"
              }
#line 209 "prog_item_stats.m"
            /* direct tailcall eliminated */
#line 209 "prog_item_stats.m"
            {
#line 209 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2 = parse_tree__prog_item_stats__ItemBlocks_11;
#line 209 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;

#line 209 "prog_item_stats.m"
              parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3;
#line 209 "prog_item_stats.m"
              parse_tree__prog_item_stats__HeadVar__2_2 = parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2;
#line 209 "prog_item_stats.m"
            }
#line 209 "prog_item_stats.m"
            continue;
#line 194 "prog_item_stats.m"
          }
#line 192 "prog_item_stats.m"
      }
#line 192 "prog_item_stats.m"
      break;
#line 192 "prog_item_stats.m"
    }
#line 188 "prog_item_stats.m"
}

#line 188 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho3_4_p_0(
#line 188 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 188 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
#line 188 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4)
#line 188 "prog_item_stats.m"
{
#line 192 "prog_item_stats.m"
  while (MR_TRUE)
#line 192 "prog_item_stats.m"
    {
#line 192 "prog_item_stats.m"
      /* tailcall optimized into a loop */
#line 192 "prog_item_stats.m"
      {
#line 192 "prog_item_stats.m"
        MR_bool parse_tree__prog_item_stats__succeeded;

#line 192 "prog_item_stats.m"
        if ((parse_tree__prog_item_stats__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 192 "prog_item_stats.m"
          *parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3;
#line 192 "prog_item_stats.m"
        else
#line 194 "prog_item_stats.m"
          {
#line 194 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__ItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 194 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__ItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 194 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Section_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 0)));
#line 194 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Items_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 4)));
#line 194 "prog_item_stats.m"
            MR_String parse_tree__prog_item_stats__SectionName_18;
#line 194 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 1)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 2)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 3)));
#line 203 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__SectionStats0_19;
#line 197 "prog_item_stats.m"
            MR_Box parse_tree__prog_item_stats__conv0_SectionStats0_19;

#line 173 "prog_item_stats.m"
#line 173 "prog_item_stats.m"
            switch (MR_tag((MR_Word) parse_tree__prog_item_stats__Section_13)) {
#line 173 "prog_item_stats.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 173 "prog_item_stats.m"
              case (MR_Integer) 0:
#line 173 "prog_item_stats.m"
                parse_tree__prog_item_stats__SectionName_18 = (MR_String) "int_imported";
#line 173 "prog_item_stats.m"
                break;
#line 173 "prog_item_stats.m"
              case (MR_Integer) 1:
#line 174 "prog_item_stats.m"
                parse_tree__prog_item_stats__SectionName_18 = (MR_String) "int_used";
#line 173 "prog_item_stats.m"
                break;
#line 173 "prog_item_stats.m"
              case (MR_Integer) 2:
#line 175 "prog_item_stats.m"
                parse_tree__prog_item_stats__SectionName_18 = (MR_String) "int_abstract_imported";
#line 173 "prog_item_stats.m"
                break;
#line 173 "prog_item_stats.m"
            }
#line 197 "prog_item_stats.m"
            {
#line 197 "prog_item_stats.m"
              parse_tree__prog_item_stats__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, ((MR_Box) (parse_tree__prog_item_stats__SectionName_18)), &parse_tree__prog_item_stats__conv0_SectionStats0_19);
            }
#line 197 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 197 "prog_item_stats.m"
              {
#line 197 "prog_item_stats.m"
                parse_tree__prog_item_stats__SectionStats0_19 = ((MR_Word) parse_tree__prog_item_stats__conv0_SectionStats0_19);
#line 197 "prog_item_stats.m"
                parse_tree__prog_item_stats__succeeded = MR_TRUE;
#line 197 "prog_item_stats.m"
              }
#line 203 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 198 "prog_item_stats.m"
              {
#line 198 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 0)));
#line 198 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 1)));
#line 198 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats_22;
#line 198 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats_23;
#line 198 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__SectionStats_24;

#line 199 "prog_item_stats.m"
                {
#line 199 "prog_item_stats.m"
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, parse_tree__prog_item_stats__ItemStats0_20, &parse_tree__prog_item_stats__ItemStats_22, parse_tree__prog_item_stats__GoalStats0_21, &parse_tree__prog_item_stats__GoalStats_23);
                }
#line 201 "prog_item_stats.m"
                {
#line 201 "prog_item_stats.m"
                  parse_tree__prog_item_stats__SectionStats_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 201 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_22));
#line 201 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_23));
#line 201 "prog_item_stats.m"
                }
#line 202 "prog_item_stats.m"
                {
#line 202 "prog_item_stats.m"
                  mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) (parse_tree__prog_item_stats__SectionName_18)), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_24)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
#line 198 "prog_item_stats.m"
              }
#line 203 "prog_item_stats.m"
            else
#line 205 "prog_item_stats.m"
              {
#line 205 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats_32;
#line 205 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats_33;
#line 205 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__SectionStats_34;

#line 204 "prog_item_stats.m"
                {
#line 204 "prog_item_stats.m"
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, (MR_Word) &parse_tree__prog_item_stats_scalar_common_2[0], &parse_tree__prog_item_stats__ItemStats_32, (MR_Word) &parse_tree__prog_item_stats_scalar_common_3[0], &parse_tree__prog_item_stats__GoalStats_33);
                }
#line 206 "prog_item_stats.m"
                {
#line 206 "prog_item_stats.m"
                  parse_tree__prog_item_stats__SectionStats_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 206 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_32));
#line 206 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_33));
#line 206 "prog_item_stats.m"
                }
#line 207 "prog_item_stats.m"
                {
#line 207 "prog_item_stats.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) (parse_tree__prog_item_stats__SectionName_18)), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_34)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
#line 205 "prog_item_stats.m"
              }
#line 209 "prog_item_stats.m"
            /* direct tailcall eliminated */
#line 209 "prog_item_stats.m"
            {
#line 209 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2 = parse_tree__prog_item_stats__ItemBlocks_11;
#line 209 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;

#line 209 "prog_item_stats.m"
              parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3;
#line 209 "prog_item_stats.m"
              parse_tree__prog_item_stats__HeadVar__2_2 = parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2;
#line 209 "prog_item_stats.m"
            }
#line 209 "prog_item_stats.m"
            continue;
#line 194 "prog_item_stats.m"
          }
#line 192 "prog_item_stats.m"
      }
#line 192 "prog_item_stats.m"
      break;
#line 192 "prog_item_stats.m"
    }
#line 188 "prog_item_stats.m"
}

#line 188 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho2_4_p_0(
#line 188 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 188 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
#line 188 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4)
#line 188 "prog_item_stats.m"
{
#line 192 "prog_item_stats.m"
  while (MR_TRUE)
#line 192 "prog_item_stats.m"
    {
#line 192 "prog_item_stats.m"
      /* tailcall optimized into a loop */
#line 192 "prog_item_stats.m"
      {
#line 192 "prog_item_stats.m"
        MR_bool parse_tree__prog_item_stats__succeeded;

#line 192 "prog_item_stats.m"
        if ((parse_tree__prog_item_stats__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 192 "prog_item_stats.m"
          *parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3;
#line 192 "prog_item_stats.m"
        else
#line 194 "prog_item_stats.m"
          {
#line 194 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__ItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 194 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__ItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 194 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Items_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 4)));
#line 194 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Section_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 0)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 1)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 2)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 3)));
#line 203 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__SectionStats0_19;
#line 197 "prog_item_stats.m"
            MR_Box parse_tree__prog_item_stats__conv0_SectionStats0_19;

#line 197 "prog_item_stats.m"
            {
#line 197 "prog_item_stats.m"
              parse_tree__prog_item_stats__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, ((MR_Box) ((MR_String) "int_for_opt_imported")), &parse_tree__prog_item_stats__conv0_SectionStats0_19);
            }
#line 197 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 197 "prog_item_stats.m"
              {
#line 197 "prog_item_stats.m"
                parse_tree__prog_item_stats__SectionStats0_19 = ((MR_Word) parse_tree__prog_item_stats__conv0_SectionStats0_19);
#line 197 "prog_item_stats.m"
                parse_tree__prog_item_stats__succeeded = MR_TRUE;
#line 197 "prog_item_stats.m"
              }
#line 203 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 198 "prog_item_stats.m"
              {
#line 198 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 0)));
#line 198 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 1)));
#line 198 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats_22;
#line 198 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats_23;
#line 198 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__SectionStats_24;

#line 199 "prog_item_stats.m"
                {
#line 199 "prog_item_stats.m"
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, parse_tree__prog_item_stats__ItemStats0_20, &parse_tree__prog_item_stats__ItemStats_22, parse_tree__prog_item_stats__GoalStats0_21, &parse_tree__prog_item_stats__GoalStats_23);
                }
#line 201 "prog_item_stats.m"
                {
#line 201 "prog_item_stats.m"
                  parse_tree__prog_item_stats__SectionStats_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 201 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_22));
#line 201 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_23));
#line 201 "prog_item_stats.m"
                }
#line 202 "prog_item_stats.m"
                {
#line 202 "prog_item_stats.m"
                  mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) ((MR_String) "int_for_opt_imported")), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_24)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
#line 198 "prog_item_stats.m"
              }
#line 203 "prog_item_stats.m"
            else
#line 205 "prog_item_stats.m"
              {
#line 205 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats_32;
#line 205 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats_33;
#line 205 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__SectionStats_34;

#line 204 "prog_item_stats.m"
                {
#line 204 "prog_item_stats.m"
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, (MR_Word) &parse_tree__prog_item_stats_scalar_common_2[0], &parse_tree__prog_item_stats__ItemStats_32, (MR_Word) &parse_tree__prog_item_stats_scalar_common_3[0], &parse_tree__prog_item_stats__GoalStats_33);
                }
#line 206 "prog_item_stats.m"
                {
#line 206 "prog_item_stats.m"
                  parse_tree__prog_item_stats__SectionStats_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 206 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_32));
#line 206 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_33));
#line 206 "prog_item_stats.m"
                }
#line 207 "prog_item_stats.m"
                {
#line 207 "prog_item_stats.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) ((MR_String) "int_for_opt_imported")), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_34)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
#line 205 "prog_item_stats.m"
              }
#line 209 "prog_item_stats.m"
            /* direct tailcall eliminated */
#line 209 "prog_item_stats.m"
            {
#line 209 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2 = parse_tree__prog_item_stats__ItemBlocks_11;
#line 209 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;

#line 209 "prog_item_stats.m"
              parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3;
#line 209 "prog_item_stats.m"
              parse_tree__prog_item_stats__HeadVar__2_2 = parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2;
#line 209 "prog_item_stats.m"
            }
#line 209 "prog_item_stats.m"
            continue;
#line 194 "prog_item_stats.m"
          }
#line 192 "prog_item_stats.m"
      }
#line 192 "prog_item_stats.m"
      break;
#line 192 "prog_item_stats.m"
    }
#line 188 "prog_item_stats.m"
}

#line 188 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho1_4_p_0(
#line 188 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 188 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
#line 188 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4)
#line 188 "prog_item_stats.m"
{
#line 192 "prog_item_stats.m"
  while (MR_TRUE)
#line 192 "prog_item_stats.m"
    {
#line 192 "prog_item_stats.m"
      /* tailcall optimized into a loop */
#line 192 "prog_item_stats.m"
      {
#line 192 "prog_item_stats.m"
        MR_bool parse_tree__prog_item_stats__succeeded;

#line 192 "prog_item_stats.m"
        if ((parse_tree__prog_item_stats__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 192 "prog_item_stats.m"
          *parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3;
#line 192 "prog_item_stats.m"
        else
#line 194 "prog_item_stats.m"
          {
#line 194 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__ItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 194 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__ItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 194 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Items_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 4)));
#line 194 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Section_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 0)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 1)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 2)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 3)));
#line 203 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__SectionStats0_19;
#line 197 "prog_item_stats.m"
            MR_Box parse_tree__prog_item_stats__conv0_SectionStats0_19;

#line 197 "prog_item_stats.m"
            {
#line 197 "prog_item_stats.m"
              parse_tree__prog_item_stats__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, ((MR_Box) ((MR_String) "opt_imported")), &parse_tree__prog_item_stats__conv0_SectionStats0_19);
            }
#line 197 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 197 "prog_item_stats.m"
              {
#line 197 "prog_item_stats.m"
                parse_tree__prog_item_stats__SectionStats0_19 = ((MR_Word) parse_tree__prog_item_stats__conv0_SectionStats0_19);
#line 197 "prog_item_stats.m"
                parse_tree__prog_item_stats__succeeded = MR_TRUE;
#line 197 "prog_item_stats.m"
              }
#line 203 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 198 "prog_item_stats.m"
              {
#line 198 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 0)));
#line 198 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 1)));
#line 198 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats_22;
#line 198 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats_23;
#line 198 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__SectionStats_24;

#line 199 "prog_item_stats.m"
                {
#line 199 "prog_item_stats.m"
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, parse_tree__prog_item_stats__ItemStats0_20, &parse_tree__prog_item_stats__ItemStats_22, parse_tree__prog_item_stats__GoalStats0_21, &parse_tree__prog_item_stats__GoalStats_23);
                }
#line 201 "prog_item_stats.m"
                {
#line 201 "prog_item_stats.m"
                  parse_tree__prog_item_stats__SectionStats_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 201 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_22));
#line 201 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_23));
#line 201 "prog_item_stats.m"
                }
#line 202 "prog_item_stats.m"
                {
#line 202 "prog_item_stats.m"
                  mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) ((MR_String) "opt_imported")), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_24)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
#line 198 "prog_item_stats.m"
              }
#line 203 "prog_item_stats.m"
            else
#line 205 "prog_item_stats.m"
              {
#line 205 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats_32;
#line 205 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats_33;
#line 205 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__SectionStats_34;

#line 204 "prog_item_stats.m"
                {
#line 204 "prog_item_stats.m"
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, (MR_Word) &parse_tree__prog_item_stats_scalar_common_2[0], &parse_tree__prog_item_stats__ItemStats_32, (MR_Word) &parse_tree__prog_item_stats_scalar_common_3[0], &parse_tree__prog_item_stats__GoalStats_33);
                }
#line 206 "prog_item_stats.m"
                {
#line 206 "prog_item_stats.m"
                  parse_tree__prog_item_stats__SectionStats_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 206 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_32));
#line 206 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_33));
#line 206 "prog_item_stats.m"
                }
#line 207 "prog_item_stats.m"
                {
#line 207 "prog_item_stats.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) ((MR_String) "opt_imported")), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_34)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
#line 205 "prog_item_stats.m"
              }
#line 209 "prog_item_stats.m"
            /* direct tailcall eliminated */
#line 209 "prog_item_stats.m"
            {
#line 209 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2 = parse_tree__prog_item_stats__ItemBlocks_11;
#line 209 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;

#line 209 "prog_item_stats.m"
              parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3;
#line 209 "prog_item_stats.m"
              parse_tree__prog_item_stats__HeadVar__2_2 = parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2;
#line 209 "prog_item_stats.m"
            }
#line 209 "prog_item_stats.m"
            continue;
#line 194 "prog_item_stats.m"
          }
#line 192 "prog_item_stats.m"
      }
#line 192 "prog_item_stats.m"
      break;
#line 192 "prog_item_stats.m"
    }
#line 188 "prog_item_stats.m"
}

#line 119 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____section_stats_0_0(
#line 119 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
#line 119 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 119 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3)
#line 119 "prog_item_stats.m"
{
#line 119 "prog_item_stats.m"
  {
#line 119 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 119 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastX_9 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__2_2;
#line 119 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastY_10 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__3_3;

#line 119 "prog_item_stats.m"
    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__CastX_9 == parse_tree__prog_item_stats__CastY_10);
#line 119 "prog_item_stats.m"
    if (parse_tree__prog_item_stats__succeeded)
#line 1845 "parse_tree.prog_item_stats.c"
      *parse_tree__prog_item_stats__HeadVar__1_1 = (MR_Integer) 0;
#line 119 "prog_item_stats.m"
    else
#line 119 "prog_item_stats.m"
      {
#line 119 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 119 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 119 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 0)));
#line 119 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 1)));
#line 119 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_8_8;

#line 119 "prog_item_stats.m"
        {
#line 119 "prog_item_stats.m"
          parse_tree__prog_item_stats____Compare____item_stats_0_0(&parse_tree__prog_item_stats__V_8_8, parse_tree__prog_item_stats__V_4_4, parse_tree__prog_item_stats__V_6_6);
        }
#line 1867 "parse_tree.prog_item_stats.c"
        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_8_8 == (MR_Integer) 0);
#line 119 "prog_item_stats.m"
        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 119 "prog_item_stats.m"
        if (parse_tree__prog_item_stats__succeeded)
#line 119 "prog_item_stats.m"
          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_8_8;
#line 119 "prog_item_stats.m"
        else
#line 119 "prog_item_stats.m"
          {
#line 119 "prog_item_stats.m"
            parse_tree__prog_item_stats____Compare____goal_stats_0_0(parse_tree__prog_item_stats__HeadVar__1_1, parse_tree__prog_item_stats__V_5_5, parse_tree__prog_item_stats__V_7_7);
          }
#line 119 "prog_item_stats.m"
      }
#line 119 "prog_item_stats.m"
  }
#line 119 "prog_item_stats.m"
}

#line 119 "prog_item_stats.m"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____section_stats_0_0(
#line 119 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 119 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2)
#line 119 "prog_item_stats.m"
{
#line 119 "prog_item_stats.m"
  {
#line 119 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 119 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastX_7 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__1_1;
#line 119 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastY_8 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__2_2;

#line 119 "prog_item_stats.m"
    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__CastX_7 == parse_tree__prog_item_stats__CastY_8);
#line 119 "prog_item_stats.m"
    if (parse_tree__prog_item_stats__succeeded)
#line 119 "prog_item_stats.m"
      parse_tree__prog_item_stats__succeeded = MR_TRUE;
#line 119 "prog_item_stats.m"
    else
#line 119 "prog_item_stats.m"
      {
#line 119 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
#line 119 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
#line 119 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 119 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));

#line 1926 "parse_tree.prog_item_stats.c"
        {
#line 1928 "parse_tree.prog_item_stats.c"
          parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____item_stats_0_0(parse_tree__prog_item_stats__V_3_3, parse_tree__prog_item_stats__V_5_5);
        }
#line 119 "prog_item_stats.m"
        if (parse_tree__prog_item_stats__succeeded)
#line 1933 "parse_tree.prog_item_stats.c"
          {
#line 1935 "parse_tree.prog_item_stats.c"
            parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____goal_stats_0_0(parse_tree__prog_item_stats__V_4_4, parse_tree__prog_item_stats__V_6_6);
          }
#line 119 "prog_item_stats.m"
      }
#line 119 "prog_item_stats.m"
    return parse_tree__prog_item_stats__succeeded;
#line 119 "prog_item_stats.m"
  }
#line 119 "prog_item_stats.m"
}

#line 55 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____item_stats_0_0(
#line 55 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
#line 55 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 55 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3)
#line 55 "prog_item_stats.m"
{
#line 55 "prog_item_stats.m"
  {
#line 55 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 55 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastX_66 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__2_2;
#line 55 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastY_67 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__3_3;

#line 55 "prog_item_stats.m"
    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__CastX_66 == parse_tree__prog_item_stats__CastY_67);
#line 55 "prog_item_stats.m"
    if (parse_tree__prog_item_stats__succeeded)
#line 1971 "parse_tree.prog_item_stats.c"
      *parse_tree__prog_item_stats__HeadVar__1_1 = (MR_Integer) 0;
#line 55 "prog_item_stats.m"
    else
#line 55 "prog_item_stats.m"
      {
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 2)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 3)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 4)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 5)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 6)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 7)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 8)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 9)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 10)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 11)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 12)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 13)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 14)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 15)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 16)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 17)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 18)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 19)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 20)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 0)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 1)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 2)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 3)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 4)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 5)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 6)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 7)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 8)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 9)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 10)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 11)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 12)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 13)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 14)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 15)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 16)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 17)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 18)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 19)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 20)));
#line 55 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_46_46;

#line 55 "prog_item_stats.m"
        {
#line 55 "prog_item_stats.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_46_46, parse_tree__prog_item_stats__V_4_4, parse_tree__prog_item_stats__V_25_25);
        }
#line 2069 "parse_tree.prog_item_stats.c"
        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_46_46 == (MR_Integer) 0);
#line 55 "prog_item_stats.m"
        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 55 "prog_item_stats.m"
        if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_46_46;
#line 55 "prog_item_stats.m"
        else
#line 55 "prog_item_stats.m"
          {
#line 55 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_47_47;

#line 55 "prog_item_stats.m"
            {
#line 55 "prog_item_stats.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_47_47, parse_tree__prog_item_stats__V_5_5, parse_tree__prog_item_stats__V_26_26);
            }
#line 2089 "parse_tree.prog_item_stats.c"
            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_47_47 == (MR_Integer) 0);
#line 55 "prog_item_stats.m"
            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 55 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_47_47;
#line 55 "prog_item_stats.m"
            else
#line 55 "prog_item_stats.m"
              {
#line 55 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__V_48_48;

#line 55 "prog_item_stats.m"
                {
#line 55 "prog_item_stats.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_48_48, parse_tree__prog_item_stats__V_6_6, parse_tree__prog_item_stats__V_27_27);
                }
#line 2109 "parse_tree.prog_item_stats.c"
                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_48_48 == (MR_Integer) 0);
#line 55 "prog_item_stats.m"
                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 55 "prog_item_stats.m"
                if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_48_48;
#line 55 "prog_item_stats.m"
                else
#line 55 "prog_item_stats.m"
                  {
#line 55 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__V_49_49;

#line 55 "prog_item_stats.m"
                    {
#line 55 "prog_item_stats.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_49_49, parse_tree__prog_item_stats__V_7_7, parse_tree__prog_item_stats__V_28_28);
                    }
#line 2129 "parse_tree.prog_item_stats.c"
                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_49_49 == (MR_Integer) 0);
#line 55 "prog_item_stats.m"
                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 55 "prog_item_stats.m"
                    if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_49_49;
#line 55 "prog_item_stats.m"
                    else
#line 55 "prog_item_stats.m"
                      {
#line 55 "prog_item_stats.m"
                        MR_Word parse_tree__prog_item_stats__V_50_50;

#line 55 "prog_item_stats.m"
                        {
#line 55 "prog_item_stats.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_50_50, parse_tree__prog_item_stats__V_8_8, parse_tree__prog_item_stats__V_29_29);
                        }
#line 2149 "parse_tree.prog_item_stats.c"
                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_50_50 == (MR_Integer) 0);
#line 55 "prog_item_stats.m"
                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 55 "prog_item_stats.m"
                        if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_50_50;
#line 55 "prog_item_stats.m"
                        else
#line 55 "prog_item_stats.m"
                          {
#line 55 "prog_item_stats.m"
                            MR_Word parse_tree__prog_item_stats__V_51_51;

#line 55 "prog_item_stats.m"
                            {
#line 55 "prog_item_stats.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_51_51, parse_tree__prog_item_stats__V_9_9, parse_tree__prog_item_stats__V_30_30);
                            }
#line 2169 "parse_tree.prog_item_stats.c"
                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_51_51 == (MR_Integer) 0);
#line 55 "prog_item_stats.m"
                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 55 "prog_item_stats.m"
                            if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_51_51;
#line 55 "prog_item_stats.m"
                            else
#line 55 "prog_item_stats.m"
                              {
#line 55 "prog_item_stats.m"
                                MR_Word parse_tree__prog_item_stats__V_52_52;

#line 55 "prog_item_stats.m"
                                {
#line 55 "prog_item_stats.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_52_52, parse_tree__prog_item_stats__V_10_10, parse_tree__prog_item_stats__V_31_31);
                                }
#line 2189 "parse_tree.prog_item_stats.c"
                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_52_52 == (MR_Integer) 0);
#line 55 "prog_item_stats.m"
                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 55 "prog_item_stats.m"
                                if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_52_52;
#line 55 "prog_item_stats.m"
                                else
#line 55 "prog_item_stats.m"
                                  {
#line 55 "prog_item_stats.m"
                                    MR_Word parse_tree__prog_item_stats__V_53_53;

#line 55 "prog_item_stats.m"
                                    {
#line 55 "prog_item_stats.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_53_53, parse_tree__prog_item_stats__V_11_11, parse_tree__prog_item_stats__V_32_32);
                                    }
#line 2209 "parse_tree.prog_item_stats.c"
                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_53_53 == (MR_Integer) 0);
#line 55 "prog_item_stats.m"
                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 55 "prog_item_stats.m"
                                    if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_53_53;
#line 55 "prog_item_stats.m"
                                    else
#line 55 "prog_item_stats.m"
                                      {
#line 55 "prog_item_stats.m"
                                        MR_Word parse_tree__prog_item_stats__V_54_54;

#line 55 "prog_item_stats.m"
                                        {
#line 55 "prog_item_stats.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_54_54, parse_tree__prog_item_stats__V_12_12, parse_tree__prog_item_stats__V_33_33);
                                        }
#line 2229 "parse_tree.prog_item_stats.c"
                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_54_54 == (MR_Integer) 0);
#line 55 "prog_item_stats.m"
                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 55 "prog_item_stats.m"
                                        if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_54_54;
#line 55 "prog_item_stats.m"
                                        else
#line 55 "prog_item_stats.m"
                                          {
#line 55 "prog_item_stats.m"
                                            MR_Word parse_tree__prog_item_stats__V_55_55;

#line 55 "prog_item_stats.m"
                                            {
#line 55 "prog_item_stats.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_55_55, parse_tree__prog_item_stats__V_13_13, parse_tree__prog_item_stats__V_34_34);
                                            }
#line 2249 "parse_tree.prog_item_stats.c"
                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_55_55 == (MR_Integer) 0);
#line 55 "prog_item_stats.m"
                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 55 "prog_item_stats.m"
                                            if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_55_55;
#line 55 "prog_item_stats.m"
                                            else
#line 55 "prog_item_stats.m"
                                              {
#line 55 "prog_item_stats.m"
                                                MR_Word parse_tree__prog_item_stats__V_56_56;

#line 55 "prog_item_stats.m"
                                                {
#line 55 "prog_item_stats.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_56_56, parse_tree__prog_item_stats__V_14_14, parse_tree__prog_item_stats__V_35_35);
                                                }
#line 2269 "parse_tree.prog_item_stats.c"
                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_56_56 == (MR_Integer) 0);
#line 55 "prog_item_stats.m"
                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 55 "prog_item_stats.m"
                                                if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_56_56;
#line 55 "prog_item_stats.m"
                                                else
#line 55 "prog_item_stats.m"
                                                  {
#line 55 "prog_item_stats.m"
                                                    MR_Word parse_tree__prog_item_stats__V_57_57;

#line 55 "prog_item_stats.m"
                                                    {
#line 55 "prog_item_stats.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_57_57, parse_tree__prog_item_stats__V_15_15, parse_tree__prog_item_stats__V_36_36);
                                                    }
#line 2289 "parse_tree.prog_item_stats.c"
                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_57_57 == (MR_Integer) 0);
#line 55 "prog_item_stats.m"
                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 55 "prog_item_stats.m"
                                                    if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_57_57;
#line 55 "prog_item_stats.m"
                                                    else
#line 55 "prog_item_stats.m"
                                                      {
#line 55 "prog_item_stats.m"
                                                        MR_Word parse_tree__prog_item_stats__V_58_58;

#line 55 "prog_item_stats.m"
                                                        {
#line 55 "prog_item_stats.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_58_58, parse_tree__prog_item_stats__V_16_16, parse_tree__prog_item_stats__V_37_37);
                                                        }
#line 2309 "parse_tree.prog_item_stats.c"
                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_58_58 == (MR_Integer) 0);
#line 55 "prog_item_stats.m"
                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 55 "prog_item_stats.m"
                                                        if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_58_58;
#line 55 "prog_item_stats.m"
                                                        else
#line 55 "prog_item_stats.m"
                                                          {
#line 55 "prog_item_stats.m"
                                                            MR_Word parse_tree__prog_item_stats__V_59_59;

#line 55 "prog_item_stats.m"
                                                            {
#line 55 "prog_item_stats.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_59_59, parse_tree__prog_item_stats__V_17_17, parse_tree__prog_item_stats__V_38_38);
                                                            }
#line 2329 "parse_tree.prog_item_stats.c"
                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_59_59 == (MR_Integer) 0);
#line 55 "prog_item_stats.m"
                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 55 "prog_item_stats.m"
                                                            if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_59_59;
#line 55 "prog_item_stats.m"
                                                            else
#line 55 "prog_item_stats.m"
                                                              {
#line 55 "prog_item_stats.m"
                                                                MR_Word parse_tree__prog_item_stats__V_60_60;

#line 55 "prog_item_stats.m"
                                                                {
#line 55 "prog_item_stats.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_60_60, parse_tree__prog_item_stats__V_18_18, parse_tree__prog_item_stats__V_39_39);
                                                                }
#line 2349 "parse_tree.prog_item_stats.c"
                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_60_60 == (MR_Integer) 0);
#line 55 "prog_item_stats.m"
                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 55 "prog_item_stats.m"
                                                                if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_60_60;
#line 55 "prog_item_stats.m"
                                                                else
#line 55 "prog_item_stats.m"
                                                                  {
#line 55 "prog_item_stats.m"
                                                                    MR_Word parse_tree__prog_item_stats__V_61_61;

#line 55 "prog_item_stats.m"
                                                                    {
#line 55 "prog_item_stats.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_61_61, parse_tree__prog_item_stats__V_19_19, parse_tree__prog_item_stats__V_40_40);
                                                                    }
#line 2369 "parse_tree.prog_item_stats.c"
                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_61_61 == (MR_Integer) 0);
#line 55 "prog_item_stats.m"
                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 55 "prog_item_stats.m"
                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_61_61;
#line 55 "prog_item_stats.m"
                                                                    else
#line 55 "prog_item_stats.m"
                                                                      {
#line 55 "prog_item_stats.m"
                                                                        MR_Word parse_tree__prog_item_stats__V_62_62;

#line 55 "prog_item_stats.m"
                                                                        {
#line 55 "prog_item_stats.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_62_62, parse_tree__prog_item_stats__V_20_20, parse_tree__prog_item_stats__V_41_41);
                                                                        }
#line 2389 "parse_tree.prog_item_stats.c"
                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_62_62 == (MR_Integer) 0);
#line 55 "prog_item_stats.m"
                                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 55 "prog_item_stats.m"
                                                                        if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_62_62;
#line 55 "prog_item_stats.m"
                                                                        else
#line 55 "prog_item_stats.m"
                                                                          {
#line 55 "prog_item_stats.m"
                                                                            MR_Word parse_tree__prog_item_stats__V_63_63;

#line 55 "prog_item_stats.m"
                                                                            {
#line 55 "prog_item_stats.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_63_63, parse_tree__prog_item_stats__V_21_21, parse_tree__prog_item_stats__V_42_42);
                                                                            }
#line 2409 "parse_tree.prog_item_stats.c"
                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_63_63 == (MR_Integer) 0);
#line 55 "prog_item_stats.m"
                                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 55 "prog_item_stats.m"
                                                                            if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_63_63;
#line 55 "prog_item_stats.m"
                                                                            else
#line 55 "prog_item_stats.m"
                                                                              {
#line 55 "prog_item_stats.m"
                                                                                MR_Word parse_tree__prog_item_stats__V_64_64;

#line 55 "prog_item_stats.m"
                                                                                {
#line 55 "prog_item_stats.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_64_64, parse_tree__prog_item_stats__V_22_22, parse_tree__prog_item_stats__V_43_43);
                                                                                }
#line 2429 "parse_tree.prog_item_stats.c"
                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_64_64 == (MR_Integer) 0);
#line 55 "prog_item_stats.m"
                                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 55 "prog_item_stats.m"
                                                                                if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_64_64;
#line 55 "prog_item_stats.m"
                                                                                else
#line 55 "prog_item_stats.m"
                                                                                  {
#line 55 "prog_item_stats.m"
                                                                                    MR_Word parse_tree__prog_item_stats__V_65_65;

#line 55 "prog_item_stats.m"
                                                                                    {
#line 55 "prog_item_stats.m"
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_65_65, parse_tree__prog_item_stats__V_23_23, parse_tree__prog_item_stats__V_44_44);
                                                                                    }
#line 2449 "parse_tree.prog_item_stats.c"
                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_65_65 == (MR_Integer) 0);
#line 55 "prog_item_stats.m"
                                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 55 "prog_item_stats.m"
                                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_65_65;
#line 55 "prog_item_stats.m"
                                                                                    else
#line 55 "prog_item_stats.m"
                                                                                      {
#line 55 "prog_item_stats.m"
                                                                                        mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_item_stats__HeadVar__1_1, parse_tree__prog_item_stats__V_24_24, parse_tree__prog_item_stats__V_45_45);
                                                                                      }
#line 55 "prog_item_stats.m"
                                                                                  }
#line 55 "prog_item_stats.m"
                                                                              }
#line 55 "prog_item_stats.m"
                                                                          }
#line 55 "prog_item_stats.m"
                                                                      }
#line 55 "prog_item_stats.m"
                                                                  }
#line 55 "prog_item_stats.m"
                                                              }
#line 55 "prog_item_stats.m"
                                                          }
#line 55 "prog_item_stats.m"
                                                      }
#line 55 "prog_item_stats.m"
                                                  }
#line 55 "prog_item_stats.m"
                                              }
#line 55 "prog_item_stats.m"
                                          }
#line 55 "prog_item_stats.m"
                                      }
#line 55 "prog_item_stats.m"
                                  }
#line 55 "prog_item_stats.m"
                              }
#line 55 "prog_item_stats.m"
                          }
#line 55 "prog_item_stats.m"
                      }
#line 55 "prog_item_stats.m"
                  }
#line 55 "prog_item_stats.m"
              }
#line 55 "prog_item_stats.m"
          }
#line 55 "prog_item_stats.m"
      }
#line 55 "prog_item_stats.m"
  }
#line 55 "prog_item_stats.m"
}

#line 55 "prog_item_stats.m"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____item_stats_0_0(
#line 55 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 55 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2)
#line 55 "prog_item_stats.m"
{
#line 55 "prog_item_stats.m"
  {
#line 55 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 55 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastX_45 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__1_1;
#line 55 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastY_46 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__2_2;

#line 55 "prog_item_stats.m"
    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__CastX_45 == parse_tree__prog_item_stats__CastY_46);
#line 55 "prog_item_stats.m"
    if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
      parse_tree__prog_item_stats__succeeded = MR_TRUE;
#line 55 "prog_item_stats.m"
    else
#line 55 "prog_item_stats.m"
      {
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 2)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 3)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 4)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 5)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 6)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 7)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 8)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 9)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 10)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 11)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 12)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 13)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 14)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 15)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 16)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 17)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 18)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 19)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 20)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 2)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 3)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 4)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 5)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 6)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 7)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 8)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 9)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 10)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 11)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 12)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 13)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 14)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 15)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 16)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 17)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 18)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 19)));
#line 55 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 20)));

#line 2622 "parse_tree.prog_item_stats.c"
        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_3_3 == parse_tree__prog_item_stats__V_24_24);
#line 55 "prog_item_stats.m"
        if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
          {
#line 2628 "parse_tree.prog_item_stats.c"
            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_4_4 == parse_tree__prog_item_stats__V_25_25);
#line 55 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
              {
#line 2634 "parse_tree.prog_item_stats.c"
                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_5_5 == parse_tree__prog_item_stats__V_26_26);
#line 55 "prog_item_stats.m"
                if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                  {
#line 2640 "parse_tree.prog_item_stats.c"
                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_6_6 == parse_tree__prog_item_stats__V_27_27);
#line 55 "prog_item_stats.m"
                    if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                      {
#line 2646 "parse_tree.prog_item_stats.c"
                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_7_7 == parse_tree__prog_item_stats__V_28_28);
#line 55 "prog_item_stats.m"
                        if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                          {
#line 2652 "parse_tree.prog_item_stats.c"
                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_8_8 == parse_tree__prog_item_stats__V_29_29);
#line 55 "prog_item_stats.m"
                            if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                              {
#line 2658 "parse_tree.prog_item_stats.c"
                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_9_9 == parse_tree__prog_item_stats__V_30_30);
#line 55 "prog_item_stats.m"
                                if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                  {
#line 2664 "parse_tree.prog_item_stats.c"
                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_10_10 == parse_tree__prog_item_stats__V_31_31);
#line 55 "prog_item_stats.m"
                                    if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                      {
#line 2670 "parse_tree.prog_item_stats.c"
                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_11_11 == parse_tree__prog_item_stats__V_32_32);
#line 55 "prog_item_stats.m"
                                        if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                          {
#line 2676 "parse_tree.prog_item_stats.c"
                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_12_12 == parse_tree__prog_item_stats__V_33_33);
#line 55 "prog_item_stats.m"
                                            if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                              {
#line 2682 "parse_tree.prog_item_stats.c"
                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_13_13 == parse_tree__prog_item_stats__V_34_34);
#line 55 "prog_item_stats.m"
                                                if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                                  {
#line 2688 "parse_tree.prog_item_stats.c"
                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_14_14 == parse_tree__prog_item_stats__V_35_35);
#line 55 "prog_item_stats.m"
                                                    if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                                      {
#line 2694 "parse_tree.prog_item_stats.c"
                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_15_15 == parse_tree__prog_item_stats__V_36_36);
#line 55 "prog_item_stats.m"
                                                        if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                                          {
#line 2700 "parse_tree.prog_item_stats.c"
                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_16_16 == parse_tree__prog_item_stats__V_37_37);
#line 55 "prog_item_stats.m"
                                                            if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                                              {
#line 2706 "parse_tree.prog_item_stats.c"
                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_17_17 == parse_tree__prog_item_stats__V_38_38);
#line 55 "prog_item_stats.m"
                                                                if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                                                  {
#line 2712 "parse_tree.prog_item_stats.c"
                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_18_18 == parse_tree__prog_item_stats__V_39_39);
#line 55 "prog_item_stats.m"
                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                                                      {
#line 2718 "parse_tree.prog_item_stats.c"
                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_19_19 == parse_tree__prog_item_stats__V_40_40);
#line 55 "prog_item_stats.m"
                                                                        if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                                                          {
#line 2724 "parse_tree.prog_item_stats.c"
                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_20_20 == parse_tree__prog_item_stats__V_41_41);
#line 55 "prog_item_stats.m"
                                                                            if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                                                              {
#line 2730 "parse_tree.prog_item_stats.c"
                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_21_21 == parse_tree__prog_item_stats__V_42_42);
#line 55 "prog_item_stats.m"
                                                                                if (parse_tree__prog_item_stats__succeeded)
#line 55 "prog_item_stats.m"
                                                                                  {
#line 2736 "parse_tree.prog_item_stats.c"
                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_22_22 == parse_tree__prog_item_stats__V_43_43);
#line 55 "prog_item_stats.m"
                                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 2740 "parse_tree.prog_item_stats.c"
                                                                                      parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_23_23 == parse_tree__prog_item_stats__V_44_44);
#line 55 "prog_item_stats.m"
                                                                                  }
#line 55 "prog_item_stats.m"
                                                                              }
#line 55 "prog_item_stats.m"
                                                                          }
#line 55 "prog_item_stats.m"
                                                                      }
#line 55 "prog_item_stats.m"
                                                                  }
#line 55 "prog_item_stats.m"
                                                              }
#line 55 "prog_item_stats.m"
                                                          }
#line 55 "prog_item_stats.m"
                                                      }
#line 55 "prog_item_stats.m"
                                                  }
#line 55 "prog_item_stats.m"
                                              }
#line 55 "prog_item_stats.m"
                                          }
#line 55 "prog_item_stats.m"
                                      }
#line 55 "prog_item_stats.m"
                                  }
#line 55 "prog_item_stats.m"
                              }
#line 55 "prog_item_stats.m"
                          }
#line 55 "prog_item_stats.m"
                      }
#line 55 "prog_item_stats.m"
                  }
#line 55 "prog_item_stats.m"
              }
#line 55 "prog_item_stats.m"
          }
#line 55 "prog_item_stats.m"
      }
#line 55 "prog_item_stats.m"
    return parse_tree__prog_item_stats__succeeded;
#line 55 "prog_item_stats.m"
  }
#line 55 "prog_item_stats.m"
}

#line 87 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____goal_stats_0_0(
#line 87 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
#line 87 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 87 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3)
#line 87 "prog_item_stats.m"
{
#line 87 "prog_item_stats.m"
  {
#line 87 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 87 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastX_81 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__2_2;
#line 87 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastY_82 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__3_3;

#line 87 "prog_item_stats.m"
    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__CastX_81 == parse_tree__prog_item_stats__CastY_82);
#line 87 "prog_item_stats.m"
    if (parse_tree__prog_item_stats__succeeded)
#line 2813 "parse_tree.prog_item_stats.c"
      *parse_tree__prog_item_stats__HeadVar__1_1 = (MR_Integer) 0;
#line 87 "prog_item_stats.m"
    else
#line 87 "prog_item_stats.m"
      {
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 2)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 3)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 4)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 5)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 6)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 7)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 8)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 9)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 10)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 11)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 12)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 13)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 14)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 15)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 16)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 17)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 18)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 19)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 20)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 21)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 22)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 23)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 24)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 25)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 0)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 1)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 2)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 3)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 4)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 5)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 6)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 7)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 8)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 9)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 10)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 11)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 12)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 13)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 14)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 15)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 16)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 17)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 18)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 19)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 20)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 21)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 22)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 23)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 24)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 25)));
#line 87 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_56_56;

#line 87 "prog_item_stats.m"
        {
#line 87 "prog_item_stats.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_56_56, parse_tree__prog_item_stats__V_4_4, parse_tree__prog_item_stats__V_30_30);
        }
#line 2931 "parse_tree.prog_item_stats.c"
        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_56_56 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
        if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_56_56;
#line 87 "prog_item_stats.m"
        else
#line 87 "prog_item_stats.m"
          {
#line 87 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_57_57;

#line 87 "prog_item_stats.m"
            {
#line 87 "prog_item_stats.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_57_57, parse_tree__prog_item_stats__V_5_5, parse_tree__prog_item_stats__V_31_31);
            }
#line 2951 "parse_tree.prog_item_stats.c"
            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_57_57 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_57_57;
#line 87 "prog_item_stats.m"
            else
#line 87 "prog_item_stats.m"
              {
#line 87 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__V_58_58;

#line 87 "prog_item_stats.m"
                {
#line 87 "prog_item_stats.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_58_58, parse_tree__prog_item_stats__V_6_6, parse_tree__prog_item_stats__V_32_32);
                }
#line 2971 "parse_tree.prog_item_stats.c"
                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_58_58 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_58_58;
#line 87 "prog_item_stats.m"
                else
#line 87 "prog_item_stats.m"
                  {
#line 87 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__V_59_59;

#line 87 "prog_item_stats.m"
                    {
#line 87 "prog_item_stats.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_59_59, parse_tree__prog_item_stats__V_7_7, parse_tree__prog_item_stats__V_33_33);
                    }
#line 2991 "parse_tree.prog_item_stats.c"
                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_59_59 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                    if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_59_59;
#line 87 "prog_item_stats.m"
                    else
#line 87 "prog_item_stats.m"
                      {
#line 87 "prog_item_stats.m"
                        MR_Word parse_tree__prog_item_stats__V_60_60;

#line 87 "prog_item_stats.m"
                        {
#line 87 "prog_item_stats.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_60_60, parse_tree__prog_item_stats__V_8_8, parse_tree__prog_item_stats__V_34_34);
                        }
#line 3011 "parse_tree.prog_item_stats.c"
                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_60_60 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                        if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_60_60;
#line 87 "prog_item_stats.m"
                        else
#line 87 "prog_item_stats.m"
                          {
#line 87 "prog_item_stats.m"
                            MR_Word parse_tree__prog_item_stats__V_61_61;

#line 87 "prog_item_stats.m"
                            {
#line 87 "prog_item_stats.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_61_61, parse_tree__prog_item_stats__V_9_9, parse_tree__prog_item_stats__V_35_35);
                            }
#line 3031 "parse_tree.prog_item_stats.c"
                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_61_61 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                            if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_61_61;
#line 87 "prog_item_stats.m"
                            else
#line 87 "prog_item_stats.m"
                              {
#line 87 "prog_item_stats.m"
                                MR_Word parse_tree__prog_item_stats__V_62_62;

#line 87 "prog_item_stats.m"
                                {
#line 87 "prog_item_stats.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_62_62, parse_tree__prog_item_stats__V_10_10, parse_tree__prog_item_stats__V_36_36);
                                }
#line 3051 "parse_tree.prog_item_stats.c"
                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_62_62 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                                if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_62_62;
#line 87 "prog_item_stats.m"
                                else
#line 87 "prog_item_stats.m"
                                  {
#line 87 "prog_item_stats.m"
                                    MR_Word parse_tree__prog_item_stats__V_63_63;

#line 87 "prog_item_stats.m"
                                    {
#line 87 "prog_item_stats.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_63_63, parse_tree__prog_item_stats__V_11_11, parse_tree__prog_item_stats__V_37_37);
                                    }
#line 3071 "parse_tree.prog_item_stats.c"
                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_63_63 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                                    if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_63_63;
#line 87 "prog_item_stats.m"
                                    else
#line 87 "prog_item_stats.m"
                                      {
#line 87 "prog_item_stats.m"
                                        MR_Word parse_tree__prog_item_stats__V_64_64;

#line 87 "prog_item_stats.m"
                                        {
#line 87 "prog_item_stats.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_64_64, parse_tree__prog_item_stats__V_12_12, parse_tree__prog_item_stats__V_38_38);
                                        }
#line 3091 "parse_tree.prog_item_stats.c"
                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_64_64 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                                        if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_64_64;
#line 87 "prog_item_stats.m"
                                        else
#line 87 "prog_item_stats.m"
                                          {
#line 87 "prog_item_stats.m"
                                            MR_Word parse_tree__prog_item_stats__V_65_65;

#line 87 "prog_item_stats.m"
                                            {
#line 87 "prog_item_stats.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_65_65, parse_tree__prog_item_stats__V_13_13, parse_tree__prog_item_stats__V_39_39);
                                            }
#line 3111 "parse_tree.prog_item_stats.c"
                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_65_65 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                                            if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_65_65;
#line 87 "prog_item_stats.m"
                                            else
#line 87 "prog_item_stats.m"
                                              {
#line 87 "prog_item_stats.m"
                                                MR_Word parse_tree__prog_item_stats__V_66_66;

#line 87 "prog_item_stats.m"
                                                {
#line 87 "prog_item_stats.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_66_66, parse_tree__prog_item_stats__V_14_14, parse_tree__prog_item_stats__V_40_40);
                                                }
#line 3131 "parse_tree.prog_item_stats.c"
                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_66_66 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                                                if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_66_66;
#line 87 "prog_item_stats.m"
                                                else
#line 87 "prog_item_stats.m"
                                                  {
#line 87 "prog_item_stats.m"
                                                    MR_Word parse_tree__prog_item_stats__V_67_67;

#line 87 "prog_item_stats.m"
                                                    {
#line 87 "prog_item_stats.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_67_67, parse_tree__prog_item_stats__V_15_15, parse_tree__prog_item_stats__V_41_41);
                                                    }
#line 3151 "parse_tree.prog_item_stats.c"
                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_67_67 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                                                    if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_67_67;
#line 87 "prog_item_stats.m"
                                                    else
#line 87 "prog_item_stats.m"
                                                      {
#line 87 "prog_item_stats.m"
                                                        MR_Word parse_tree__prog_item_stats__V_68_68;

#line 87 "prog_item_stats.m"
                                                        {
#line 87 "prog_item_stats.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_68_68, parse_tree__prog_item_stats__V_16_16, parse_tree__prog_item_stats__V_42_42);
                                                        }
#line 3171 "parse_tree.prog_item_stats.c"
                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_68_68 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                                                        if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_68_68;
#line 87 "prog_item_stats.m"
                                                        else
#line 87 "prog_item_stats.m"
                                                          {
#line 87 "prog_item_stats.m"
                                                            MR_Word parse_tree__prog_item_stats__V_69_69;

#line 87 "prog_item_stats.m"
                                                            {
#line 87 "prog_item_stats.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_69_69, parse_tree__prog_item_stats__V_17_17, parse_tree__prog_item_stats__V_43_43);
                                                            }
#line 3191 "parse_tree.prog_item_stats.c"
                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_69_69 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                                                            if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_69_69;
#line 87 "prog_item_stats.m"
                                                            else
#line 87 "prog_item_stats.m"
                                                              {
#line 87 "prog_item_stats.m"
                                                                MR_Word parse_tree__prog_item_stats__V_70_70;

#line 87 "prog_item_stats.m"
                                                                {
#line 87 "prog_item_stats.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_70_70, parse_tree__prog_item_stats__V_18_18, parse_tree__prog_item_stats__V_44_44);
                                                                }
#line 3211 "parse_tree.prog_item_stats.c"
                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_70_70 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                                                                if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_70_70;
#line 87 "prog_item_stats.m"
                                                                else
#line 87 "prog_item_stats.m"
                                                                  {
#line 87 "prog_item_stats.m"
                                                                    MR_Word parse_tree__prog_item_stats__V_71_71;

#line 87 "prog_item_stats.m"
                                                                    {
#line 87 "prog_item_stats.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_71_71, parse_tree__prog_item_stats__V_19_19, parse_tree__prog_item_stats__V_45_45);
                                                                    }
#line 3231 "parse_tree.prog_item_stats.c"
                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_71_71 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_71_71;
#line 87 "prog_item_stats.m"
                                                                    else
#line 87 "prog_item_stats.m"
                                                                      {
#line 87 "prog_item_stats.m"
                                                                        MR_Word parse_tree__prog_item_stats__V_72_72;

#line 87 "prog_item_stats.m"
                                                                        {
#line 87 "prog_item_stats.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_72_72, parse_tree__prog_item_stats__V_20_20, parse_tree__prog_item_stats__V_46_46);
                                                                        }
#line 3251 "parse_tree.prog_item_stats.c"
                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_72_72 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                                                                        if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_72_72;
#line 87 "prog_item_stats.m"
                                                                        else
#line 87 "prog_item_stats.m"
                                                                          {
#line 87 "prog_item_stats.m"
                                                                            MR_Word parse_tree__prog_item_stats__V_73_73;

#line 87 "prog_item_stats.m"
                                                                            {
#line 87 "prog_item_stats.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_73_73, parse_tree__prog_item_stats__V_21_21, parse_tree__prog_item_stats__V_47_47);
                                                                            }
#line 3271 "parse_tree.prog_item_stats.c"
                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_73_73 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                                                                            if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_73_73;
#line 87 "prog_item_stats.m"
                                                                            else
#line 87 "prog_item_stats.m"
                                                                              {
#line 87 "prog_item_stats.m"
                                                                                MR_Word parse_tree__prog_item_stats__V_74_74;

#line 87 "prog_item_stats.m"
                                                                                {
#line 87 "prog_item_stats.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_74_74, parse_tree__prog_item_stats__V_22_22, parse_tree__prog_item_stats__V_48_48);
                                                                                }
#line 3291 "parse_tree.prog_item_stats.c"
                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_74_74 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                                                                                if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_74_74;
#line 87 "prog_item_stats.m"
                                                                                else
#line 87 "prog_item_stats.m"
                                                                                  {
#line 87 "prog_item_stats.m"
                                                                                    MR_Word parse_tree__prog_item_stats__V_75_75;

#line 87 "prog_item_stats.m"
                                                                                    {
#line 87 "prog_item_stats.m"
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_75_75, parse_tree__prog_item_stats__V_23_23, parse_tree__prog_item_stats__V_49_49);
                                                                                    }
#line 3311 "parse_tree.prog_item_stats.c"
                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_75_75 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_75_75;
#line 87 "prog_item_stats.m"
                                                                                    else
#line 87 "prog_item_stats.m"
                                                                                      {
#line 87 "prog_item_stats.m"
                                                                                        MR_Word parse_tree__prog_item_stats__V_76_76;

#line 87 "prog_item_stats.m"
                                                                                        {
#line 87 "prog_item_stats.m"
                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_76_76, parse_tree__prog_item_stats__V_24_24, parse_tree__prog_item_stats__V_50_50);
                                                                                        }
#line 3331 "parse_tree.prog_item_stats.c"
                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_76_76 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                                                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                                                                                        if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_76_76;
#line 87 "prog_item_stats.m"
                                                                                        else
#line 87 "prog_item_stats.m"
                                                                                          {
#line 87 "prog_item_stats.m"
                                                                                            MR_Word parse_tree__prog_item_stats__V_77_77;

#line 87 "prog_item_stats.m"
                                                                                            {
#line 87 "prog_item_stats.m"
                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_77_77, parse_tree__prog_item_stats__V_25_25, parse_tree__prog_item_stats__V_51_51);
                                                                                            }
#line 3351 "parse_tree.prog_item_stats.c"
                                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_77_77 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                                                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                                                                                            if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_77_77;
#line 87 "prog_item_stats.m"
                                                                                            else
#line 87 "prog_item_stats.m"
                                                                                              {
#line 87 "prog_item_stats.m"
                                                                                                MR_Word parse_tree__prog_item_stats__V_78_78;

#line 87 "prog_item_stats.m"
                                                                                                {
#line 87 "prog_item_stats.m"
                                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_78_78, parse_tree__prog_item_stats__V_26_26, parse_tree__prog_item_stats__V_52_52);
                                                                                                }
#line 3371 "parse_tree.prog_item_stats.c"
                                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_78_78 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                                                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                                                                                                if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_78_78;
#line 87 "prog_item_stats.m"
                                                                                                else
#line 87 "prog_item_stats.m"
                                                                                                  {
#line 87 "prog_item_stats.m"
                                                                                                    MR_Word parse_tree__prog_item_stats__V_79_79;

#line 87 "prog_item_stats.m"
                                                                                                    {
#line 87 "prog_item_stats.m"
                                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_79_79, parse_tree__prog_item_stats__V_27_27, parse_tree__prog_item_stats__V_53_53);
                                                                                                    }
#line 3391 "parse_tree.prog_item_stats.c"
                                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_79_79 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                                                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                                                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_79_79;
#line 87 "prog_item_stats.m"
                                                                                                    else
#line 87 "prog_item_stats.m"
                                                                                                      {
#line 87 "prog_item_stats.m"
                                                                                                        MR_Word parse_tree__prog_item_stats__V_80_80;

#line 87 "prog_item_stats.m"
                                                                                                        {
#line 87 "prog_item_stats.m"
                                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_80_80, parse_tree__prog_item_stats__V_28_28, parse_tree__prog_item_stats__V_54_54);
                                                                                                        }
#line 3411 "parse_tree.prog_item_stats.c"
                                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_80_80 == (MR_Integer) 0);
#line 87 "prog_item_stats.m"
                                                                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 87 "prog_item_stats.m"
                                                                                                        if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_80_80;
#line 87 "prog_item_stats.m"
                                                                                                        else
#line 87 "prog_item_stats.m"
                                                                                                          {
#line 87 "prog_item_stats.m"
                                                                                                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_item_stats__HeadVar__1_1, parse_tree__prog_item_stats__V_29_29, parse_tree__prog_item_stats__V_55_55);
                                                                                                          }
#line 87 "prog_item_stats.m"
                                                                                                      }
#line 87 "prog_item_stats.m"
                                                                                                  }
#line 87 "prog_item_stats.m"
                                                                                              }
#line 87 "prog_item_stats.m"
                                                                                          }
#line 87 "prog_item_stats.m"
                                                                                      }
#line 87 "prog_item_stats.m"
                                                                                  }
#line 87 "prog_item_stats.m"
                                                                              }
#line 87 "prog_item_stats.m"
                                                                          }
#line 87 "prog_item_stats.m"
                                                                      }
#line 87 "prog_item_stats.m"
                                                                  }
#line 87 "prog_item_stats.m"
                                                              }
#line 87 "prog_item_stats.m"
                                                          }
#line 87 "prog_item_stats.m"
                                                      }
#line 87 "prog_item_stats.m"
                                                  }
#line 87 "prog_item_stats.m"
                                              }
#line 87 "prog_item_stats.m"
                                          }
#line 87 "prog_item_stats.m"
                                      }
#line 87 "prog_item_stats.m"
                                  }
#line 87 "prog_item_stats.m"
                              }
#line 87 "prog_item_stats.m"
                          }
#line 87 "prog_item_stats.m"
                      }
#line 87 "prog_item_stats.m"
                  }
#line 87 "prog_item_stats.m"
              }
#line 87 "prog_item_stats.m"
          }
#line 87 "prog_item_stats.m"
      }
#line 87 "prog_item_stats.m"
  }
#line 87 "prog_item_stats.m"
}

#line 87 "prog_item_stats.m"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____goal_stats_0_0(
#line 87 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 87 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2)
#line 87 "prog_item_stats.m"
{
#line 87 "prog_item_stats.m"
  {
#line 87 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 87 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastX_55 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__1_1;
#line 87 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastY_56 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__2_2;

#line 87 "prog_item_stats.m"
    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__CastX_55 == parse_tree__prog_item_stats__CastY_56);
#line 87 "prog_item_stats.m"
    if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
      parse_tree__prog_item_stats__succeeded = MR_TRUE;
#line 87 "prog_item_stats.m"
    else
#line 87 "prog_item_stats.m"
      {
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 2)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 3)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 4)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 5)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 6)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 7)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 8)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 9)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 10)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 11)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 12)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 13)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 14)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 15)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 16)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 17)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 18)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 19)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 20)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 21)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 22)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 23)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 24)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 25)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 2)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 3)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 4)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 5)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 6)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 7)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 8)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 9)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 10)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 11)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 12)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 13)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 14)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 15)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 16)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 17)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 18)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 19)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 20)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 21)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 22)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 23)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 24)));
#line 87 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 25)));

#line 3614 "parse_tree.prog_item_stats.c"
        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_3_3 == parse_tree__prog_item_stats__V_29_29);
#line 87 "prog_item_stats.m"
        if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
          {
#line 3620 "parse_tree.prog_item_stats.c"
            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_4_4 == parse_tree__prog_item_stats__V_30_30);
#line 87 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
              {
#line 3626 "parse_tree.prog_item_stats.c"
                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_5_5 == parse_tree__prog_item_stats__V_31_31);
#line 87 "prog_item_stats.m"
                if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                  {
#line 3632 "parse_tree.prog_item_stats.c"
                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_6_6 == parse_tree__prog_item_stats__V_32_32);
#line 87 "prog_item_stats.m"
                    if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                      {
#line 3638 "parse_tree.prog_item_stats.c"
                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_7_7 == parse_tree__prog_item_stats__V_33_33);
#line 87 "prog_item_stats.m"
                        if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                          {
#line 3644 "parse_tree.prog_item_stats.c"
                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_8_8 == parse_tree__prog_item_stats__V_34_34);
#line 87 "prog_item_stats.m"
                            if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                              {
#line 3650 "parse_tree.prog_item_stats.c"
                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_9_9 == parse_tree__prog_item_stats__V_35_35);
#line 87 "prog_item_stats.m"
                                if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                  {
#line 3656 "parse_tree.prog_item_stats.c"
                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_10_10 == parse_tree__prog_item_stats__V_36_36);
#line 87 "prog_item_stats.m"
                                    if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                      {
#line 3662 "parse_tree.prog_item_stats.c"
                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_11_11 == parse_tree__prog_item_stats__V_37_37);
#line 87 "prog_item_stats.m"
                                        if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                          {
#line 3668 "parse_tree.prog_item_stats.c"
                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_12_12 == parse_tree__prog_item_stats__V_38_38);
#line 87 "prog_item_stats.m"
                                            if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                              {
#line 3674 "parse_tree.prog_item_stats.c"
                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_13_13 == parse_tree__prog_item_stats__V_39_39);
#line 87 "prog_item_stats.m"
                                                if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                  {
#line 3680 "parse_tree.prog_item_stats.c"
                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_14_14 == parse_tree__prog_item_stats__V_40_40);
#line 87 "prog_item_stats.m"
                                                    if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                      {
#line 3686 "parse_tree.prog_item_stats.c"
                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_15_15 == parse_tree__prog_item_stats__V_41_41);
#line 87 "prog_item_stats.m"
                                                        if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                          {
#line 3692 "parse_tree.prog_item_stats.c"
                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_16_16 == parse_tree__prog_item_stats__V_42_42);
#line 87 "prog_item_stats.m"
                                                            if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                              {
#line 3698 "parse_tree.prog_item_stats.c"
                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_17_17 == parse_tree__prog_item_stats__V_43_43);
#line 87 "prog_item_stats.m"
                                                                if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                  {
#line 3704 "parse_tree.prog_item_stats.c"
                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_18_18 == parse_tree__prog_item_stats__V_44_44);
#line 87 "prog_item_stats.m"
                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                      {
#line 3710 "parse_tree.prog_item_stats.c"
                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_19_19 == parse_tree__prog_item_stats__V_45_45);
#line 87 "prog_item_stats.m"
                                                                        if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                          {
#line 3716 "parse_tree.prog_item_stats.c"
                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_20_20 == parse_tree__prog_item_stats__V_46_46);
#line 87 "prog_item_stats.m"
                                                                            if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                              {
#line 3722 "parse_tree.prog_item_stats.c"
                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_21_21 == parse_tree__prog_item_stats__V_47_47);
#line 87 "prog_item_stats.m"
                                                                                if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                                  {
#line 3728 "parse_tree.prog_item_stats.c"
                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_22_22 == parse_tree__prog_item_stats__V_48_48);
#line 87 "prog_item_stats.m"
                                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                                      {
#line 3734 "parse_tree.prog_item_stats.c"
                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_23_23 == parse_tree__prog_item_stats__V_49_49);
#line 87 "prog_item_stats.m"
                                                                                        if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                                          {
#line 3740 "parse_tree.prog_item_stats.c"
                                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_24_24 == parse_tree__prog_item_stats__V_50_50);
#line 87 "prog_item_stats.m"
                                                                                            if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                                              {
#line 3746 "parse_tree.prog_item_stats.c"
                                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_25_25 == parse_tree__prog_item_stats__V_51_51);
#line 87 "prog_item_stats.m"
                                                                                                if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                                                  {
#line 3752 "parse_tree.prog_item_stats.c"
                                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_26_26 == parse_tree__prog_item_stats__V_52_52);
#line 87 "prog_item_stats.m"
                                                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 87 "prog_item_stats.m"
                                                                                                      {
#line 3758 "parse_tree.prog_item_stats.c"
                                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_27_27 == parse_tree__prog_item_stats__V_53_53);
#line 87 "prog_item_stats.m"
                                                                                                        if (parse_tree__prog_item_stats__succeeded)
#line 3762 "parse_tree.prog_item_stats.c"
                                                                                                          parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_28_28 == parse_tree__prog_item_stats__V_54_54);
#line 87 "prog_item_stats.m"
                                                                                                      }
#line 87 "prog_item_stats.m"
                                                                                                  }
#line 87 "prog_item_stats.m"
                                                                                              }
#line 87 "prog_item_stats.m"
                                                                                          }
#line 87 "prog_item_stats.m"
                                                                                      }
#line 87 "prog_item_stats.m"
                                                                                  }
#line 87 "prog_item_stats.m"
                                                                              }
#line 87 "prog_item_stats.m"
                                                                          }
#line 87 "prog_item_stats.m"
                                                                      }
#line 87 "prog_item_stats.m"
                                                                  }
#line 87 "prog_item_stats.m"
                                                              }
#line 87 "prog_item_stats.m"
                                                          }
#line 87 "prog_item_stats.m"
                                                      }
#line 87 "prog_item_stats.m"
                                                  }
#line 87 "prog_item_stats.m"
                                              }
#line 87 "prog_item_stats.m"
                                          }
#line 87 "prog_item_stats.m"
                                      }
#line 87 "prog_item_stats.m"
                                  }
#line 87 "prog_item_stats.m"
                              }
#line 87 "prog_item_stats.m"
                          }
#line 87 "prog_item_stats.m"
                      }
#line 87 "prog_item_stats.m"
                  }
#line 87 "prog_item_stats.m"
              }
#line 87 "prog_item_stats.m"
          }
#line 87 "prog_item_stats.m"
      }
#line 87 "prog_item_stats.m"
    return parse_tree__prog_item_stats__succeeded;
#line 87 "prog_item_stats.m"
  }
#line 87 "prog_item_stats.m"
}

#line 122 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0(
#line 122 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
#line 122 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 122 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3)
#line 122 "prog_item_stats.m"
{
#line 122 "prog_item_stats.m"
  {
#line 122 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 122 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__Cast_HeadVar1_4 = parse_tree__prog_item_stats__HeadVar__2_2;
#line 122 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__Cast_HeadVar2_5 = parse_tree__prog_item_stats__HeadVar__3_3;

#line 122 "prog_item_stats.m"
    {
#line 122 "prog_item_stats.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_item_stats_scalar_common_1[1], parse_tree__prog_item_stats__HeadVar__1_1, ((MR_Box) (parse_tree__prog_item_stats__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_item_stats__Cast_HeadVar2_5)));
    }
#line 122 "prog_item_stats.m"
  }
#line 122 "prog_item_stats.m"
}

#line 122 "prog_item_stats.m"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0(
#line 122 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 122 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2)
#line 122 "prog_item_stats.m"
{
#line 122 "prog_item_stats.m"
  {
#line 122 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 122 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__Cast_HeadVar1_3 = parse_tree__prog_item_stats__HeadVar__1_1;
#line 122 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__Cast_HeadVar2_4 = parse_tree__prog_item_stats__HeadVar__2_2;

#line 122 "prog_item_stats.m"
    {
#line 122 "prog_item_stats.m"
      parse_tree__prog_item_stats__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_item_stats_scalar_common_1[1], ((MR_Box) (parse_tree__prog_item_stats__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_item_stats__Cast_HeadVar2_4)));
    }
#line 122 "prog_item_stats.m"
    return parse_tree__prog_item_stats__succeeded;
#line 122 "prog_item_stats.m"
  }
#line 122 "prog_item_stats.m"
}

#line 589 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__write_one_stat_6_p_0(
#line 589 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Stream_7,
#line 589 "prog_item_stats.m"
  MR_String parse_tree__prog_item_stats__SectionName_8,
#line 589 "prog_item_stats.m"
  MR_String parse_tree__prog_item_stats__StatName_9,
#line 589 "prog_item_stats.m"
  MR_Integer parse_tree__prog_item_stats__StatNum_10)
#line 589 "prog_item_stats.m"
{
#line 592 "prog_item_stats.m"
  {
#line 592 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;

#line 593 "prog_item_stats.m"
    {
#line 593 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_7, parse_tree__prog_item_stats__SectionName_8);
    }
#line 594 "prog_item_stats.m"
    {
#line 594 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_7, (MR_String) " ");
    }
#line 595 "prog_item_stats.m"
    {
#line 595 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_7, parse_tree__prog_item_stats__StatName_9);
    }
#line 596 "prog_item_stats.m"
    {
#line 596 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_7, (MR_String) " ");
    }
#line 597 "prog_item_stats.m"
    {
#line 597 "prog_item_stats.m"
      mercury__io__write_int_4_p_0(parse_tree__prog_item_stats__Stream_7, parse_tree__prog_item_stats__StatNum_10);
    }
#line 598 "prog_item_stats.m"
    {
#line 598 "prog_item_stats.m"
      mercury__io__nl_3_p_0(parse_tree__prog_item_stats__Stream_7);
    }
#line 599 "prog_item_stats.m"
    {
#line 599 "prog_item_stats.m"
      mercury__io__flush_output_2_p_0();
    }
#line 592 "prog_item_stats.m"
  }
#line 589 "prog_item_stats.m"
}

#line 545 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__write_goal_stats_5_p_0(
#line 545 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Stream_6,
#line 545 "prog_item_stats.m"
  MR_String parse_tree__prog_item_stats__SectionName_7,
#line 545 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__GoalStats_8)
#line 545 "prog_item_stats.m"
{
#line 548 "prog_item_stats.m"
  {
#line 548 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Conj_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 0)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__ParConj_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 1)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__True_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 2)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Disj_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 3)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Fail_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 4)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Some_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 5)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__All_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 6)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__SomeStateVars_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 7)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__AllStateVars_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 8)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PromisePurity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 9)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PromiseEqvSolns_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 10)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PromiseEqvSolnSets_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 11)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PromiseArbitrary_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 12)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__ReqDetism_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 13)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__ReqComplSwitch_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 14)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__ReqSwitchArmDetism_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 15)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Trace_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 16)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Atomic_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 17)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Try_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 18)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Implies_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 19)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Equivalent_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 20)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Not_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 21)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__IfThenElse_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 22)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Event_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 23)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Call_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 24)));
#line 548 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Unify_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 25)));

#line 555 "prog_item_stats.m"
    {
#line 555 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_conj", parse_tree__prog_item_stats__Conj_10);
    }
#line 556 "prog_item_stats.m"
    {
#line 556 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_par_conj", parse_tree__prog_item_stats__ParConj_11);
    }
#line 557 "prog_item_stats.m"
    {
#line 557 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_true", parse_tree__prog_item_stats__True_12);
    }
#line 558 "prog_item_stats.m"
    {
#line 558 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_disj", parse_tree__prog_item_stats__Disj_13);
    }
#line 559 "prog_item_stats.m"
    {
#line 559 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_fail", parse_tree__prog_item_stats__Fail_14);
    }
#line 560 "prog_item_stats.m"
    {
#line 560 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_some", parse_tree__prog_item_stats__Some_15);
    }
#line 561 "prog_item_stats.m"
    {
#line 561 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_all", parse_tree__prog_item_stats__All_16);
    }
#line 562 "prog_item_stats.m"
    {
#line 562 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_some_state_vars", parse_tree__prog_item_stats__SomeStateVars_17);
    }
#line 564 "prog_item_stats.m"
    {
#line 564 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_all_state_vars", parse_tree__prog_item_stats__AllStateVars_18);
    }
#line 566 "prog_item_stats.m"
    {
#line 566 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_pro_purity", parse_tree__prog_item_stats__PromisePurity_19);
    }
#line 567 "prog_item_stats.m"
    {
#line 567 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_pro_eqv_solns", parse_tree__prog_item_stats__PromiseEqvSolns_20);
    }
#line 569 "prog_item_stats.m"
    {
#line 569 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_pro_eqv_soln_sets", parse_tree__prog_item_stats__PromiseEqvSolnSets_21);
    }
#line 571 "prog_item_stats.m"
    {
#line 571 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_pro_arbitrary", parse_tree__prog_item_stats__PromiseArbitrary_22);
    }
#line 573 "prog_item_stats.m"
    {
#line 573 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_req_detism", parse_tree__prog_item_stats__ReqDetism_23);
    }
#line 574 "prog_item_stats.m"
    {
#line 574 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_req_compl_switch", parse_tree__prog_item_stats__ReqComplSwitch_24);
    }
#line 576 "prog_item_stats.m"
    {
#line 576 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_req_arm_detism", parse_tree__prog_item_stats__ReqSwitchArmDetism_25);
    }
#line 578 "prog_item_stats.m"
    {
#line 578 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_trace", parse_tree__prog_item_stats__Trace_26);
    }
#line 579 "prog_item_stats.m"
    {
#line 579 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_atomic", parse_tree__prog_item_stats__Atomic_27);
    }
#line 580 "prog_item_stats.m"
    {
#line 580 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_try", parse_tree__prog_item_stats__Try_28);
    }
#line 581 "prog_item_stats.m"
    {
#line 581 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_implies", parse_tree__prog_item_stats__Implies_29);
    }
#line 582 "prog_item_stats.m"
    {
#line 582 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_equivalent", parse_tree__prog_item_stats__Equivalent_30);
    }
#line 583 "prog_item_stats.m"
    {
#line 583 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_not", parse_tree__prog_item_stats__Not_31);
    }
#line 584 "prog_item_stats.m"
    {
#line 584 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_if_then_else", parse_tree__prog_item_stats__IfThenElse_32);
    }
#line 585 "prog_item_stats.m"
    {
#line 585 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_event", parse_tree__prog_item_stats__Event_33);
    }
#line 586 "prog_item_stats.m"
    {
#line 586 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_call", parse_tree__prog_item_stats__Call_34);
    }
#line 587 "prog_item_stats.m"
    {
#line 587 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_unify", parse_tree__prog_item_stats__Unify_35);
    }
#line 548 "prog_item_stats.m"
  }
#line 545 "prog_item_stats.m"
}

#line 506 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__write_section_stats_4_p_0(
#line 506 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Stream_5,
#line 506 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2)
#line 506 "prog_item_stats.m"
{
#line 509 "prog_item_stats.m"
  {
#line 509 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 509 "prog_item_stats.m"
    MR_String parse_tree__prog_item_stats__SectionName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 509 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__SectionStats_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 509 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__ItemStats_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_7, (MR_Integer) 0)));
#line 509 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__GoalStats_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_7, (MR_Integer) 1)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Clause_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 0)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__TypeDefn_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 1)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__InstDefn_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 2)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__ModeDefn_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 3)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PredDecl_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 4)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__ModeDecl_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 5)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaFIM_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 6)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaTerm_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 7)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaTerm2_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 8)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaExcp_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 9)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaTrail_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 10)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaMM_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 11)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaPass2_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 12)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaPass3_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 13)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Promise_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 14)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Typeclasse_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 15)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Instance_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 16)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Initialise_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 17)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Finalise_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 18)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Mutable_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 19)));
#line 509 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Nothing_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 20)));

#line 522 "prog_item_stats.m"
    {
#line 522 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_clause", parse_tree__prog_item_stats__Clause_21);
    }
#line 523 "prog_item_stats.m"
    {
#line 523 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_type_defn", parse_tree__prog_item_stats__TypeDefn_22);
    }
#line 524 "prog_item_stats.m"
    {
#line 524 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_inst_defn", parse_tree__prog_item_stats__InstDefn_23);
    }
#line 525 "prog_item_stats.m"
    {
#line 525 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_mode_defn", parse_tree__prog_item_stats__ModeDefn_24);
    }
#line 526 "prog_item_stats.m"
    {
#line 526 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pred_decl", parse_tree__prog_item_stats__PredDecl_25);
    }
#line 527 "prog_item_stats.m"
    {
#line 527 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_mode_decl", parse_tree__prog_item_stats__ModeDecl_26);
    }
#line 528 "prog_item_stats.m"
    {
#line 528 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_fim", parse_tree__prog_item_stats__PragmaFIM_27);
    }
#line 529 "prog_item_stats.m"
    {
#line 529 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_term", parse_tree__prog_item_stats__PragmaTerm_28);
    }
#line 530 "prog_item_stats.m"
    {
#line 530 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_term2", parse_tree__prog_item_stats__PragmaTerm2_29);
    }
#line 531 "prog_item_stats.m"
    {
#line 531 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_excp", parse_tree__prog_item_stats__PragmaExcp_30);
    }
#line 532 "prog_item_stats.m"
    {
#line 532 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_trail", parse_tree__prog_item_stats__PragmaTrail_31);
    }
#line 533 "prog_item_stats.m"
    {
#line 533 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_mm", parse_tree__prog_item_stats__PragmaMM_32);
    }
#line 534 "prog_item_stats.m"
    {
#line 534 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_pass2", parse_tree__prog_item_stats__PragmaPass2_33);
    }
#line 535 "prog_item_stats.m"
    {
#line 535 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_pass3", parse_tree__prog_item_stats__PragmaPass3_34);
    }
#line 536 "prog_item_stats.m"
    {
#line 536 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_promise", parse_tree__prog_item_stats__Promise_35);
    }
#line 537 "prog_item_stats.m"
    {
#line 537 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_typeclass", parse_tree__prog_item_stats__Typeclasse_36);
    }
#line 538 "prog_item_stats.m"
    {
#line 538 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_instance", parse_tree__prog_item_stats__Instance_37);
    }
#line 539 "prog_item_stats.m"
    {
#line 539 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_promise", parse_tree__prog_item_stats__Promise_35);
    }
#line 540 "prog_item_stats.m"
    {
#line 540 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_initialise", parse_tree__prog_item_stats__Initialise_38);
    }
#line 541 "prog_item_stats.m"
    {
#line 541 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_finalise", parse_tree__prog_item_stats__Finalise_39);
    }
#line 542 "prog_item_stats.m"
    {
#line 542 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_mutable", parse_tree__prog_item_stats__Mutable_40);
    }
#line 543 "prog_item_stats.m"
    {
#line 543 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_nothing", parse_tree__prog_item_stats__Nothing_41);
    }
#line 512 "prog_item_stats.m"
    {
#line 512 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_goal_stats_5_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, parse_tree__prog_item_stats__GoalStats_10);
    }
#line 509 "prog_item_stats.m"
  }
#line 506 "prog_item_stats.m"
}

#line 487 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_catch_exprs_3_p_0(
#line 487 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 487 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2,
#line 487 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3)
#line 487 "prog_item_stats.m"
{
#line 490 "prog_item_stats.m"
  while (MR_TRUE)
#line 490 "prog_item_stats.m"
    {
#line 490 "prog_item_stats.m"
      /* tailcall optimized into a loop */
#line 490 "prog_item_stats.m"
      {
#line 490 "prog_item_stats.m"
        MR_bool parse_tree__prog_item_stats__succeeded;

#line 490 "prog_item_stats.m"
        if ((parse_tree__prog_item_stats__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "prog_item_stats.m"
          *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2;
#line 490 "prog_item_stats.m"
        else
#line 491 "prog_item_stats.m"
          {
#line 491 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__CatchExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
#line 491 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__CatchExprs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
#line 491 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__CatchExpr_7, (MR_Integer) 1)));
#line 491 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_14_14;
#line 492 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__CatchExpr_7, (MR_Integer) 0)));

#line 493 "prog_item_stats.m"
            {
#line 493 "prog_item_stats.m"
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__Goal_11, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_14_14);
            }
#line 494 "prog_item_stats.m"
            /* direct tailcall eliminated */
#line 494 "prog_item_stats.m"
            {
#line 494 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1 = parse_tree__prog_item_stats__CatchExprs_8;
#line 494 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_2 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_14_14;

#line 494 "prog_item_stats.m"
              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_2;
#line 494 "prog_item_stats.m"
              parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1;
#line 494 "prog_item_stats.m"
            }
#line 494 "prog_item_stats.m"
            continue;
#line 491 "prog_item_stats.m"
          }
#line 490 "prog_item_stats.m"
      }
#line 490 "prog_item_stats.m"
      break;
#line 490 "prog_item_stats.m"
    }
#line 487 "prog_item_stats.m"
}

#line 348 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(
#line 348 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Goal_4,
#line 348 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84,
#line 348 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_85)
#line 348 "prog_item_stats.m"
{
#line 352 "prog_item_stats.m"
  while (MR_TRUE)
#line 352 "prog_item_stats.m"
    {
#line 352 "prog_item_stats.m"
      /* tailcall optimized into a loop */
#line 352 "prog_item_stats.m"
      {
#line 352 "prog_item_stats.m"
        MR_bool parse_tree__prog_item_stats__succeeded;
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1573_1573 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 25)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1574_1574 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 24)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1575_1575 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 23)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1576_1576 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 22)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1577_1577 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 21)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1578_1578 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 20)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1579_1579 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 19)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1580_1580 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 18)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1581_1581 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 17)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1582_1582 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 16)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1583_1583 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 15)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1584_1584 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 14)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1585_1585 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 13)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1586_1586 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 12)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1587_1587 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 11)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1588_1588 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 10)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1589_1589 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 9)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1590_1590 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 8)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1591_1591 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 7)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1592_1592 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 6)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1593_1593 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 5)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1594_1594 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 4)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1595_1595 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 3)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1596_1596 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 2)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1597_1597 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 1)));
#line 352 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1598_1598 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 0)));

#line 352 "prog_item_stats.m"
#line 352 "prog_item_stats.m"
        switch (MR_tag((MR_Word) parse_tree__prog_item_stats__Goal_4)) {
#line 352 "prog_item_stats.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 352 "prog_item_stats.m"
          case (MR_Integer) 0:
#line 483 "prog_item_stats.m"
            {
#line 483 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_87_87 = (parse_tree__prog_item_stats__V_1573_1573 + (MR_Integer) 1);

#line 484 "prog_item_stats.m"
              {
#line 484 "prog_item_stats.m"
                MR_Word base;
#line 484 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 484 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_85 = base;
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 484 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_87_87));
#line 484 "prog_item_stats.m"
              }
#line 483 "prog_item_stats.m"
            }
#line 352 "prog_item_stats.m"
            break;
#line 352 "prog_item_stats.m"
          case (MR_Integer) 1:
#line 480 "prog_item_stats.m"
            {
#line 480 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_91_91 = (parse_tree__prog_item_stats__V_1574_1574 + (MR_Integer) 1);

#line 481 "prog_item_stats.m"
              {
#line 481 "prog_item_stats.m"
                MR_Word base;
#line 481 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 481 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_85 = base;
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_91_91));
#line 481 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 481 "prog_item_stats.m"
              }
#line 480 "prog_item_stats.m"
            }
#line 352 "prog_item_stats.m"
            break;
#line 352 "prog_item_stats.m"
          case (MR_Integer) 2:
#line 352 "prog_item_stats.m"
            {
#line 352 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__SubGoalA_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 352 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__SubGoalB_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 352 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218;
#line 352 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_219_219 = (parse_tree__prog_item_stats__V_1598_1598 + (MR_Integer) 1);
#line 352 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_222_222;
#line 352 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 0)));

#line 353 "prog_item_stats.m"
              {
#line 353 "prog_item_stats.m"
                parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_219_219));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 353 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 353 "prog_item_stats.m"
              }
#line 354 "prog_item_stats.m"
              {
#line 354 "prog_item_stats.m"
                parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_7, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_222_222);
              }
#line 355 "prog_item_stats.m"
              /* direct tailcall eliminated */
#line 355 "prog_item_stats.m"
              {
#line 355 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_8;
#line 355 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_222_222;

#line 355 "prog_item_stats.m"
                parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 355 "prog_item_stats.m"
                parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 355 "prog_item_stats.m"
              }
#line 355 "prog_item_stats.m"
              continue;
#line 352 "prog_item_stats.m"
            }
#line 352 "prog_item_stats.m"
            break;
#line 352 "prog_item_stats.m"
          case (MR_Integer) 3:
#line 352 "prog_item_stats.m"
#line 352 "prog_item_stats.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 0)))) {
#line 352 "prog_item_stats.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 352 "prog_item_stats.m"
              case (MR_Integer) 0:
#line 362 "prog_item_stats.m"
                {
#line 362 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_209_209 = (parse_tree__prog_item_stats__V_1596_1596 + (MR_Integer) 1);

#line 363 "prog_item_stats.m"
                  {
#line 363 "prog_item_stats.m"
                    MR_Word base;
#line 363 "prog_item_stats.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 363 "prog_item_stats.m"
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_85 = base;
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_209_209));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 363 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 363 "prog_item_stats.m"
                  }
#line 362 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 1:
#line 470 "prog_item_stats.m"
                {
#line 470 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__CondGoal_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 470 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98;
#line 470 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_99_99 = (parse_tree__prog_item_stats__V_1576_1576 + (MR_Integer) 1);
#line 470 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_102_102;
#line 470 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_103_103;
#line 470 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__ThenGoal_245 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));
#line 470 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__ElseGoal_246 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 470 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 470 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 470 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));

#line 471 "prog_item_stats.m"
                  {
#line 471 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_99_99));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 471 "prog_item_stats.m"
                  }
#line 473 "prog_item_stats.m"
                  {
#line 473 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__CondGoal_72, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_102_102);
                  }
#line 474 "prog_item_stats.m"
                  {
#line 474 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__ThenGoal_245, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_102_102, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_103_103);
                  }
#line 475 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 475 "prog_item_stats.m"
                  {
#line 475 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__ElseGoal_246;
#line 475 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_103_103;

#line 475 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 475 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 475 "prog_item_stats.m"
                  }
#line 475 "prog_item_stats.m"
                  continue;
#line 470 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 2:
#line 365 "prog_item_stats.m"
                {
#line 365 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202;
#line 365 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_203_203 = (parse_tree__prog_item_stats__V_1595_1595 + (MR_Integer) 1);
#line 365 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_206_206;
#line 365 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalA_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 365 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalB_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 365 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

#line 366 "prog_item_stats.m"
                  {
#line 366 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_203_203));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 366 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 366 "prog_item_stats.m"
                  }
#line 367 "prog_item_stats.m"
                  {
#line 367 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_226, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_206_206);
                  }
#line 368 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 368 "prog_item_stats.m"
                  {
#line 368 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_227;
#line 368 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_206_206;

#line 368 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 368 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 368 "prog_item_stats.m"
                  }
#line 368 "prog_item_stats.m"
                  continue;
#line 365 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 3:
#line 466 "prog_item_stats.m"
                {
#line 466 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105;
#line 466 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_106_106 = (parse_tree__prog_item_stats__V_1577_1577 + (MR_Integer) 1);
#line 466 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 466 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

#line 467 "prog_item_stats.m"
                  {
#line 467 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_106_106));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 467 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 467 "prog_item_stats.m"
                  }
#line 468 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 468 "prog_item_stats.m"
                  {
#line 468 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_244;
#line 468 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105;

#line 468 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 468 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 468 "prog_item_stats.m"
                  }
#line 468 "prog_item_stats.m"
                  continue;
#line 466 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 4:
#line 370 "prog_item_stats.m"
                {
#line 370 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_199_199 = (parse_tree__prog_item_stats__V_1594_1594 + (MR_Integer) 1);

#line 371 "prog_item_stats.m"
                  {
#line 371 "prog_item_stats.m"
                    MR_Word base;
#line 371 "prog_item_stats.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 371 "prog_item_stats.m"
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_85 = base;
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_199_199));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 371 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 371 "prog_item_stats.m"
                  }
#line 370 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 5:
#line 357 "prog_item_stats.m"
                {
#line 357 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212;
#line 357 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_213_213 = (parse_tree__prog_item_stats__V_1597_1597 + (MR_Integer) 1);
#line 357 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_216_216;
#line 357 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalA_224 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 357 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalB_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 357 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

#line 358 "prog_item_stats.m"
                  {
#line 358 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_213_213));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 358 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 358 "prog_item_stats.m"
                  }
#line 359 "prog_item_stats.m"
                  {
#line 359 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_224, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_216_216);
                  }
#line 360 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 360 "prog_item_stats.m"
                  {
#line 360 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_225;
#line 360 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_216_216;

#line 360 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 360 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 360 "prog_item_stats.m"
                  }
#line 360 "prog_item_stats.m"
                  continue;
#line 357 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 6:
#line 373 "prog_item_stats.m"
                {
#line 373 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 373 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193;
#line 373 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_194_194 = (parse_tree__prog_item_stats__V_1593_1593 + (MR_Integer) 1);
#line 373 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 373 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

#line 374 "prog_item_stats.m"
                  {
#line 374 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_194_194));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 374 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 374 "prog_item_stats.m"
                  }
#line 375 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 375 "prog_item_stats.m"
                  {
#line 375 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_15;
#line 375 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193;

#line 375 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 375 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 375 "prog_item_stats.m"
                  }
#line 375 "prog_item_stats.m"
                  continue;
#line 373 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 7:
#line 377 "prog_item_stats.m"
                {
#line 377 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188;
#line 377 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_189_189 = (parse_tree__prog_item_stats__V_1592_1592 + (MR_Integer) 1);
#line 377 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_228 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 377 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 377 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

#line 378 "prog_item_stats.m"
                  {
#line 378 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_189_189));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 378 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 378 "prog_item_stats.m"
                  }
#line 379 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 379 "prog_item_stats.m"
                  {
#line 379 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_228;
#line 379 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188;

#line 379 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 379 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 379 "prog_item_stats.m"
                  }
#line 379 "prog_item_stats.m"
                  continue;
#line 377 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 8:
#line 381 "prog_item_stats.m"
                {
#line 381 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183;
#line 381 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_184_184 = (parse_tree__prog_item_stats__V_1591_1591 + (MR_Integer) 1);
#line 381 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_229 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 381 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 381 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

#line 382 "prog_item_stats.m"
                  {
#line 382 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_184_184));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 382 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 382 "prog_item_stats.m"
                  }
#line 384 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 384 "prog_item_stats.m"
                  {
#line 384 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_229;
#line 384 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183;

#line 384 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 384 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 384 "prog_item_stats.m"
                  }
#line 384 "prog_item_stats.m"
                  continue;
#line 381 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 9:
#line 386 "prog_item_stats.m"
                {
#line 386 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178;
#line 386 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_179_179 = (parse_tree__prog_item_stats__V_1590_1590 + (MR_Integer) 1);
#line 386 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 386 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 386 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

#line 387 "prog_item_stats.m"
                  {
#line 387 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_179_179));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 387 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 387 "prog_item_stats.m"
                  }
#line 389 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 389 "prog_item_stats.m"
                  {
#line 389 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_230;
#line 389 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178;

#line 389 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 389 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 389 "prog_item_stats.m"
                  }
#line 389 "prog_item_stats.m"
                  continue;
#line 386 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 10:
#line 391 "prog_item_stats.m"
                {
#line 391 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173;
#line 391 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_174_174 = (parse_tree__prog_item_stats__V_1589_1589 + (MR_Integer) 1);
#line 391 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_231 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 391 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 391 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

#line 392 "prog_item_stats.m"
                  {
#line 392 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_174_174));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 392 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 392 "prog_item_stats.m"
                  }
#line 394 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 394 "prog_item_stats.m"
                  {
#line 394 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_231;
#line 394 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173;

#line 394 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 394 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 394 "prog_item_stats.m"
                  }
#line 394 "prog_item_stats.m"
                  continue;
#line 391 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 11:
#line 396 "prog_item_stats.m"
                {
#line 396 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168;
#line 396 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_169_169 = (parse_tree__prog_item_stats__V_1588_1588 + (MR_Integer) 1);
#line 396 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_232 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 396 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 396 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 396 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 396 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 396 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

#line 397 "prog_item_stats.m"
                  {
#line 397 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_169_169));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 397 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 397 "prog_item_stats.m"
                  }
#line 399 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 399 "prog_item_stats.m"
                  {
#line 399 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_232;
#line 399 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168;

#line 399 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 399 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 399 "prog_item_stats.m"
                  }
#line 399 "prog_item_stats.m"
                  continue;
#line 396 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 12:
#line 401 "prog_item_stats.m"
                {
#line 401 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163;
#line 401 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_164_164 = (parse_tree__prog_item_stats__V_1587_1587 + (MR_Integer) 1);
#line 401 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 401 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 401 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 401 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 401 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 401 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

#line 402 "prog_item_stats.m"
                  {
#line 402 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_164_164));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 402 "prog_item_stats.m"
                  }
#line 404 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 404 "prog_item_stats.m"
                  {
#line 404 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_233;
#line 404 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163;

#line 404 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 404 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 404 "prog_item_stats.m"
                  }
#line 404 "prog_item_stats.m"
                  continue;
#line 401 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 13:
#line 407 "prog_item_stats.m"
                {
#line 407 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158;
#line 407 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_159_159 = (parse_tree__prog_item_stats__V_1586_1586 + (MR_Integer) 1);
#line 407 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_234 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 406 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 406 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 406 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 406 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 406 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

#line 408 "prog_item_stats.m"
                  {
#line 408 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_159_159));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 408 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 408 "prog_item_stats.m"
                  }
#line 410 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 410 "prog_item_stats.m"
                  {
#line 410 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_234;
#line 410 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158;

#line 410 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 410 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 410 "prog_item_stats.m"
                  }
#line 410 "prog_item_stats.m"
                  continue;
#line 407 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 14:
#line 412 "prog_item_stats.m"
                {
#line 412 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153;
#line 412 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_154_154 = (parse_tree__prog_item_stats__V_1585_1585 + (MR_Integer) 1);
#line 412 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_235 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 412 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 412 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

#line 413 "prog_item_stats.m"
                  {
#line 413 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_154_154));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 413 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 413 "prog_item_stats.m"
                  }
#line 415 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 415 "prog_item_stats.m"
                  {
#line 415 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_235;
#line 415 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153;

#line 415 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 415 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 415 "prog_item_stats.m"
                  }
#line 415 "prog_item_stats.m"
                  continue;
#line 412 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 15:
#line 417 "prog_item_stats.m"
                {
#line 417 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148;
#line 417 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_149_149 = (parse_tree__prog_item_stats__V_1584_1584 + (MR_Integer) 1);
#line 417 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 417 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 417 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

#line 418 "prog_item_stats.m"
                  {
#line 418 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_149_149));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 418 "prog_item_stats.m"
                  }
#line 420 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 420 "prog_item_stats.m"
                  {
#line 420 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_236;
#line 420 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148;

#line 420 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 420 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 420 "prog_item_stats.m"
                  }
#line 420 "prog_item_stats.m"
                  continue;
#line 417 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 16:
#line 422 "prog_item_stats.m"
                {
#line 422 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143;
#line 422 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_144_144 = (parse_tree__prog_item_stats__V_1583_1583 + (MR_Integer) 1);
#line 422 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_237 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 422 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 422 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 422 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));

#line 423 "prog_item_stats.m"
                  {
#line 423 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_144_144));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 423 "prog_item_stats.m"
                  }
#line 425 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 425 "prog_item_stats.m"
                  {
#line 425 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_237;
#line 425 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143;

#line 425 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 425 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 425 "prog_item_stats.m"
                  }
#line 425 "prog_item_stats.m"
                  continue;
#line 422 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 17:
#line 427 "prog_item_stats.m"
                {
#line 427 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138;
#line 427 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_139_139 = (parse_tree__prog_item_stats__V_1582_1582 + (MR_Integer) 1);
#line 427 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_238 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 427 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 427 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 427 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 427 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 427 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

#line 428 "prog_item_stats.m"
                  {
#line 428 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_139_139));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 428 "prog_item_stats.m"
                  }
#line 429 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 429 "prog_item_stats.m"
                  {
#line 429 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_238;
#line 429 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138;

#line 429 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 429 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 429 "prog_item_stats.m"
                  }
#line 429 "prog_item_stats.m"
                  continue;
#line 427 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 18:
#line 431 "prog_item_stats.m"
                {
#line 431 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__MainGoal_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));
#line 431 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__OrElseGoals_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 431 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132;
#line 431 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_133_133 = (parse_tree__prog_item_stats__V_1581_1581 + (MR_Integer) 1);
#line 431 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_136_136;
#line 431 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 431 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 431 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 431 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));

#line 432 "prog_item_stats.m"
                  {
#line 432 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_133_133));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 432 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 432 "prog_item_stats.m"
                  }
#line 433 "prog_item_stats.m"
                  {
#line 433 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__MainGoal_55, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_136_136);
                  }
#line 434 "prog_item_stats.m"
                  {
#line 434 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(parse_tree__prog_item_stats__OrElseGoals_56, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_136_136, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_85);
                  }
#line 431 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 19:
#line 437 "prog_item_stats.m"
                {
#line 437 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__ThenGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 437 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__MaybeElseGoal_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));
#line 437 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__Catches_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 437 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__MaybeCatchAny_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 7)));
#line 437 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122;
#line 437 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_123_123 = (parse_tree__prog_item_stats__V_1580_1580 + (MR_Integer) 1);
#line 437 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_126_126;
#line 437 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_127_127;
#line 437 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128;
#line 437 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_129_129;
#line 437 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__MainGoal_239 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 436 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 436 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

#line 438 "prog_item_stats.m"
                  {
#line 438 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_123_123));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 438 "prog_item_stats.m"
                  }
#line 439 "prog_item_stats.m"
                  {
#line 439 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__MainGoal_239, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_126_126);
                  }
#line 440 "prog_item_stats.m"
                  {
#line 440 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__ThenGoal_59, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_126_126, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_127_127);
                  }
#line 444 "prog_item_stats.m"
                  if ((parse_tree__prog_item_stats__MaybeElseGoal_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_127_127;
#line 444 "prog_item_stats.m"
                  else
#line 442 "prog_item_stats.m"
                    {
#line 442 "prog_item_stats.m"
                      MR_Word parse_tree__prog_item_stats__ElseGoal_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__MaybeElseGoal_60, (MR_Integer) 0)));

#line 443 "prog_item_stats.m"
                      {
#line 443 "prog_item_stats.m"
                        parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__ElseGoal_63, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_127_127, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128);
                      }
#line 442 "prog_item_stats.m"
                    }
#line 447 "prog_item_stats.m"
                  {
#line 447 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_catch_exprs_3_p_0(parse_tree__prog_item_stats__Catches_61, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_129_129);
                  }
#line 451 "prog_item_stats.m"
                  if ((parse_tree__prog_item_stats__MaybeCatchAny_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 452 "prog_item_stats.m"
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_85 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_129_129;
#line 451 "prog_item_stats.m"
                  else
#line 449 "prog_item_stats.m"
                    {
#line 449 "prog_item_stats.m"
                      MR_Word parse_tree__prog_item_stats__CatchAnyGoal_65;
#line 449 "prog_item_stats.m"
                      MR_Word parse_tree__prog_item_stats__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__MaybeCatchAny_62, (MR_Integer) 0)));
#line 449 "prog_item_stats.m"
                      MR_Word parse_tree__prog_item_stats__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_130_130, (MR_Integer) 0)));

#line 449 "prog_item_stats.m"
                      parse_tree__prog_item_stats__CatchAnyGoal_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_130_130, (MR_Integer) 1)));
#line 450 "prog_item_stats.m"
                      /* direct tailcall eliminated */
#line 450 "prog_item_stats.m"
                      {
#line 450 "prog_item_stats.m"
                        MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__CatchAnyGoal_65;
#line 450 "prog_item_stats.m"
                        MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_129_129;

#line 450 "prog_item_stats.m"
                        parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 450 "prog_item_stats.m"
                        parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 450 "prog_item_stats.m"
                      }
#line 450 "prog_item_stats.m"
                      continue;
#line 449 "prog_item_stats.m"
                    }
#line 437 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 20:
#line 455 "prog_item_stats.m"
                {
#line 455 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116;
#line 455 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_117_117 = (parse_tree__prog_item_stats__V_1579_1579 + (MR_Integer) 1);
#line 455 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_120_120;
#line 455 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalA_240 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 455 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalB_241 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 455 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

#line 456 "prog_item_stats.m"
                  {
#line 456 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_117_117));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 456 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 456 "prog_item_stats.m"
                  }
#line 457 "prog_item_stats.m"
                  {
#line 457 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_240, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_120_120);
                  }
#line 458 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 458 "prog_item_stats.m"
                  {
#line 458 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_241;
#line 458 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_120_120;

#line 458 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 458 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 458 "prog_item_stats.m"
                  }
#line 458 "prog_item_stats.m"
                  continue;
#line 455 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 21:
#line 460 "prog_item_stats.m"
                {
#line 460 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110;
#line 460 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_111_111 = (parse_tree__prog_item_stats__V_1578_1578 + (MR_Integer) 1);
#line 460 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_114_114;
#line 460 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalA_242 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 460 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalB_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 460 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

#line 461 "prog_item_stats.m"
                  {
#line 461 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_111_111));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 461 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 461 "prog_item_stats.m"
                  }
#line 463 "prog_item_stats.m"
                  {
#line 463 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_242, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_114_114);
                  }
#line 464 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 464 "prog_item_stats.m"
                  {
#line 464 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_243;
#line 464 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_114_114;

#line 464 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 464 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 464 "prog_item_stats.m"
                  }
#line 464 "prog_item_stats.m"
                  continue;
#line 460 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
              case (MR_Integer) 22:
#line 477 "prog_item_stats.m"
                {
#line 477 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_95_95 = (parse_tree__prog_item_stats__V_1575_1575 + (MR_Integer) 1);

#line 478 "prog_item_stats.m"
                  {
#line 478 "prog_item_stats.m"
                    MR_Word base;
#line 478 "prog_item_stats.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 478 "prog_item_stats.m"
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_85 = base;
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_95_95));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 478 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 478 "prog_item_stats.m"
                  }
#line 477 "prog_item_stats.m"
                }
#line 352 "prog_item_stats.m"
                break;
#line 352 "prog_item_stats.m"
            }
#line 352 "prog_item_stats.m"
            break;
#line 352 "prog_item_stats.m"
        }
#line 352 "prog_item_stats.m"
      }
#line 352 "prog_item_stats.m"
      break;
#line 352 "prog_item_stats.m"
    }
#line 348 "prog_item_stats.m"
}

#line 340 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(
#line 340 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 340 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2,
#line 340 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3)
#line 340 "prog_item_stats.m"
{
#line 343 "prog_item_stats.m"
  while (MR_TRUE)
#line 343 "prog_item_stats.m"
    {
#line 343 "prog_item_stats.m"
      /* tailcall optimized into a loop */
#line 343 "prog_item_stats.m"
      {
#line 343 "prog_item_stats.m"
        MR_bool parse_tree__prog_item_stats__succeeded;

#line 343 "prog_item_stats.m"
        if ((parse_tree__prog_item_stats__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 343 "prog_item_stats.m"
          *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2;
#line 343 "prog_item_stats.m"
        else
#line 344 "prog_item_stats.m"
          {
#line 344 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
#line 344 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
#line 344 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_12_12;

#line 345 "prog_item_stats.m"
            {
#line 345 "prog_item_stats.m"
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__Goal_7, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_12_12);
            }
#line 346 "prog_item_stats.m"
            /* direct tailcall eliminated */
#line 346 "prog_item_stats.m"
            {
#line 346 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1 = parse_tree__prog_item_stats__Goals_8;
#line 346 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_2 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_12_12;

#line 346 "prog_item_stats.m"
              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_2;
#line 346 "prog_item_stats.m"
              parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1;
#line 346 "prog_item_stats.m"
            }
#line 346 "prog_item_stats.m"
            continue;
#line 344 "prog_item_stats.m"
          }
#line 343 "prog_item_stats.m"
      }
#line 343 "prog_item_stats.m"
      break;
#line 343 "prog_item_stats.m"
    }
#line 340 "prog_item_stats.m"
}

#line 272 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_pragma_3_p_0(
#line 272 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__ItemPragmaInfo_4,
#line 272 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43,
#line 272 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44)
#line 272 "prog_item_stats.m"
{
#line 275 "prog_item_stats.m"
  {
#line 275 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 275 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__PragmaType_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemPragmaInfo_4, (MR_Integer) 0)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_405_405 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 20)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_406_406 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 19)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_407_407 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 18)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_408_408 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 17)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_409_409 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 16)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_410_410 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 15)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_411_411 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 14)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_412_412 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 13)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_413_413 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 12)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_414_414 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 11)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_415_415 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 10)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_416_416 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 9)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_417_417 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 8)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_418_418 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 7)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_419_419 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 6)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_420_420 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 5)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_421_421 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 4)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_422_422 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 3)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_423_423 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 2)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_424_424 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 1)));
#line 275 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_425_425 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 0)));
#line 276 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemPragmaInfo_4, (MR_Integer) 1)));
#line 276 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemPragmaInfo_4, (MR_Integer) 2)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemPragmaInfo_4, (MR_Integer) 3)));

#line 281 "prog_item_stats.m"
#line 281 "prog_item_stats.m"
    switch (MR_tag((MR_Word) parse_tree__prog_item_stats__PragmaType_6)) {
#line 281 "prog_item_stats.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 281 "prog_item_stats.m"
      case (MR_Integer) 0:
#line 281 "prog_item_stats.m"
      case (MR_Integer) 1:
#line 320 "prog_item_stats.m"
        {
#line 320 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_50_50 = (parse_tree__prog_item_stats__V_413_413 + (MR_Integer) 1);

#line 321 "prog_item_stats.m"
          {
#line 321 "prog_item_stats.m"
            MR_Word base;
#line 321 "prog_item_stats.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 321 "prog_item_stats.m"
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_50_50));
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 321 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 321 "prog_item_stats.m"
          }
#line 320 "prog_item_stats.m"
        }
#line 281 "prog_item_stats.m"
        break;
#line 281 "prog_item_stats.m"
      case (MR_Integer) 2:
#line 333 "prog_item_stats.m"
        {
#line 333 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_46_46 = (parse_tree__prog_item_stats__V_412_412 + (MR_Integer) 1);

#line 334 "prog_item_stats.m"
          {
#line 334 "prog_item_stats.m"
            MR_Word base;
#line 334 "prog_item_stats.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 334 "prog_item_stats.m"
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_46_46));
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 334 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 334 "prog_item_stats.m"
          }
#line 333 "prog_item_stats.m"
        }
#line 281 "prog_item_stats.m"
        break;
#line 281 "prog_item_stats.m"
      case (MR_Integer) 3:
#line 281 "prog_item_stats.m"
#line 281 "prog_item_stats.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__PragmaType_6, (MR_Integer) 0)))) {
#line 281 "prog_item_stats.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 281 "prog_item_stats.m"
          case (MR_Integer) 0:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 4:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 13:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 14:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 15:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 25:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 26:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 28:
#line 333 "prog_item_stats.m"
            {
#line 333 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_46_46 = (parse_tree__prog_item_stats__V_412_412 + (MR_Integer) 1);

#line 334 "prog_item_stats.m"
              {
#line 334 "prog_item_stats.m"
                MR_Word base;
#line 334 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 334 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_46_46));
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 334 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 334 "prog_item_stats.m"
              }
#line 333 "prog_item_stats.m"
            }
#line 281 "prog_item_stats.m"
            break;
#line 281 "prog_item_stats.m"
          case (MR_Integer) 1:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 2:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 3:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 5:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 6:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 7:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 11:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 12:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 16:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 17:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 18:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 21:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 22:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 23:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 24:
#line 281 "prog_item_stats.m"
          case (MR_Integer) 29:
#line 320 "prog_item_stats.m"
            {
#line 320 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_50_50 = (parse_tree__prog_item_stats__V_413_413 + (MR_Integer) 1);

#line 321 "prog_item_stats.m"
              {
#line 321 "prog_item_stats.m"
                MR_Word base;
#line 321 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 321 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_50_50));
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 321 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 321 "prog_item_stats.m"
              }
#line 320 "prog_item_stats.m"
            }
#line 281 "prog_item_stats.m"
            break;
#line 281 "prog_item_stats.m"
          case (MR_Integer) 8:
#line 290 "prog_item_stats.m"
            {
#line 290 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_62_62 = (parse_tree__prog_item_stats__V_416_416 + (MR_Integer) 1);

#line 291 "prog_item_stats.m"
              {
#line 291 "prog_item_stats.m"
                MR_Word base;
#line 291 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 291 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_62_62));
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 291 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 291 "prog_item_stats.m"
              }
#line 290 "prog_item_stats.m"
            }
#line 281 "prog_item_stats.m"
            break;
#line 281 "prog_item_stats.m"
          case (MR_Integer) 9:
#line 294 "prog_item_stats.m"
            {
#line 294 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_58_58 = (parse_tree__prog_item_stats__V_415_415 + (MR_Integer) 1);

#line 295 "prog_item_stats.m"
              {
#line 295 "prog_item_stats.m"
                MR_Word base;
#line 295 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 295 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_58_58));
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 295 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 295 "prog_item_stats.m"
              }
#line 294 "prog_item_stats.m"
            }
#line 281 "prog_item_stats.m"
            break;
#line 281 "prog_item_stats.m"
          case (MR_Integer) 10:
#line 298 "prog_item_stats.m"
            {
#line 298 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_54_54 = (parse_tree__prog_item_stats__V_414_414 + (MR_Integer) 1);

#line 299 "prog_item_stats.m"
              {
#line 299 "prog_item_stats.m"
                MR_Word base;
#line 299 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 299 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_54_54));
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 299 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 299 "prog_item_stats.m"
              }
#line 298 "prog_item_stats.m"
            }
#line 281 "prog_item_stats.m"
            break;
#line 281 "prog_item_stats.m"
          case (MR_Integer) 19:
#line 282 "prog_item_stats.m"
            {
#line 282 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_70_70 = (parse_tree__prog_item_stats__V_418_418 + (MR_Integer) 1);

#line 283 "prog_item_stats.m"
              {
#line 283 "prog_item_stats.m"
                MR_Word base;
#line 283 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 283 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_70_70));
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 283 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 283 "prog_item_stats.m"
              }
#line 282 "prog_item_stats.m"
            }
#line 281 "prog_item_stats.m"
            break;
#line 281 "prog_item_stats.m"
          case (MR_Integer) 20:
#line 286 "prog_item_stats.m"
            {
#line 286 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_66_66 = (parse_tree__prog_item_stats__V_417_417 + (MR_Integer) 1);

#line 287 "prog_item_stats.m"
              {
#line 287 "prog_item_stats.m"
                MR_Word base;
#line 287 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 287 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_66_66));
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 287 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 287 "prog_item_stats.m"
              }
#line 286 "prog_item_stats.m"
            }
#line 281 "prog_item_stats.m"
            break;
#line 281 "prog_item_stats.m"
          case (MR_Integer) 27:
#line 278 "prog_item_stats.m"
            {
#line 278 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_74_74 = (parse_tree__prog_item_stats__V_419_419 + (MR_Integer) 1);

#line 279 "prog_item_stats.m"
              {
#line 279 "prog_item_stats.m"
                MR_Word base;
#line 279 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 279 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_74_74));
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 279 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 279 "prog_item_stats.m"
              }
#line 278 "prog_item_stats.m"
            }
#line 281 "prog_item_stats.m"
            break;
#line 281 "prog_item_stats.m"
        }
#line 281 "prog_item_stats.m"
        break;
#line 281 "prog_item_stats.m"
    }
#line 275 "prog_item_stats.m"
  }
#line 272 "prog_item_stats.m"
}

#line 219 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_5_p_0(
#line 219 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Item_6,
#line 219 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31,
#line 219 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32,
#line 219 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33,
#line 219 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34)
#line 219 "prog_item_stats.m"
{
#line 225 "prog_item_stats.m"
  {
#line 225 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;

#line 225 "prog_item_stats.m"
#line 225 "prog_item_stats.m"
    switch (MR_tag((MR_Word) parse_tree__prog_item_stats__Item_6)) {
#line 225 "prog_item_stats.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 225 "prog_item_stats.m"
      case (MR_Integer) 0:
#line 225 "prog_item_stats.m"
        {
#line 225 "prog_item_stats.m"
          MR_Word parse_tree__prog_item_stats__ItemClauseInfo_9 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_item_stats__Item_6), (MR_Integer) 0);
#line 225 "prog_item_stats.m"
          MR_Word parse_tree__prog_item_stats__Goal_15;
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_85_85;
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_106_106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 225 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));
#line 228 "prog_item_stats.m"
          MR_Word parse_tree__prog_item_stats__V_10_10;
#line 228 "prog_item_stats.m"
          MR_Word parse_tree__prog_item_stats__V_11_11;
#line 228 "prog_item_stats.m"
          MR_Word parse_tree__prog_item_stats__V_12_12;
#line 228 "prog_item_stats.m"
          MR_Word parse_tree__prog_item_stats__V_13_13;
#line 228 "prog_item_stats.m"
          MR_Word parse_tree__prog_item_stats__V_14_14;
#line 228 "prog_item_stats.m"
          MR_Word parse_tree__prog_item_stats__V_16_16;
#line 228 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_17_17;

#line 226 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_85_85 = (parse_tree__prog_item_stats__V_86_86 + (MR_Integer) 1);
#line 226 "prog_item_stats.m"
          {
#line 226 "prog_item_stats.m"
            MR_Word base;
#line 226 "prog_item_stats.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 226 "prog_item_stats.m"
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_85_85));
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_89_89));
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_90_90));
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_91_91));
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_92_92));
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_93_93));
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_94_94));
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_95_95));
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_96_96));
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_97_97));
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_98_98));
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_99_99));
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_100_100));
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_101_101));
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_102_102));
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_103_103));
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_104_104));
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_105_105));
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_106_106));
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_107_107));
#line 226 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_108_108));
#line 226 "prog_item_stats.m"
          }
#line 228 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 0)));
#line 228 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 1)));
#line 228 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 2)));
#line 228 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 3)));
#line 228 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 4)));
#line 228 "prog_item_stats.m"
          parse_tree__prog_item_stats__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 5)));
#line 228 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 6)));
#line 228 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 7)));
#line 229 "prog_item_stats.m"
          {
#line 229 "prog_item_stats.m"
            parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__Goal_15, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34);
          }
#line 225 "prog_item_stats.m"
        }
#line 225 "prog_item_stats.m"
        break;
#line 225 "prog_item_stats.m"
      case (MR_Integer) 1:
#line 231 "prog_item_stats.m"
        {
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_81_81;
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_130_130 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_134_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_135_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_136_136 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_137_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_138_138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_139_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_140_140 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_141_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_142_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_143_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_144_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_145_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_147_147 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_148_148 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 231 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_149_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 232 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_81_81 = (parse_tree__prog_item_stats__V_82_82 + (MR_Integer) 1);
#line 232 "prog_item_stats.m"
          {
#line 232 "prog_item_stats.m"
            MR_Word base;
#line 232 "prog_item_stats.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 232 "prog_item_stats.m"
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_130_130));
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_81_81));
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_131_131));
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_132_132));
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_133_133));
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_134_134));
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_135_135));
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_136_136));
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_137_137));
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_138_138));
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_139_139));
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_140_140));
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_141_141));
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_142_142));
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_143_143));
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_144_144));
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_145_145));
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_146_146));
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_147_147));
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_148_148));
#line 232 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_149_149));
#line 232 "prog_item_stats.m"
          }
#line 231 "prog_item_stats.m"
          *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 231 "prog_item_stats.m"
        }
#line 225 "prog_item_stats.m"
        break;
#line 225 "prog_item_stats.m"
      case (MR_Integer) 2:
#line 234 "prog_item_stats.m"
        {
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_77_77;
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_171_171 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_172_172 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_173_173 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_174_174 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_175_175 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_176_176 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_177_177 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_178_178 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_179_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_180_180 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_181_181 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_182_182 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_183_183 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_184_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_185_185 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_186_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_187_187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_188_188 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_189_189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 234 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_190_190 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 235 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_77_77 = (parse_tree__prog_item_stats__V_78_78 + (MR_Integer) 1);
#line 235 "prog_item_stats.m"
          {
#line 235 "prog_item_stats.m"
            MR_Word base;
#line 235 "prog_item_stats.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 235 "prog_item_stats.m"
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_171_171));
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_172_172));
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_77_77));
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_173_173));
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_174_174));
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_175_175));
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_176_176));
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_177_177));
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_178_178));
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_179_179));
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_180_180));
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_181_181));
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_182_182));
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_183_183));
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_184_184));
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_185_185));
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_186_186));
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_187_187));
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_188_188));
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_189_189));
#line 235 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_190_190));
#line 235 "prog_item_stats.m"
          }
#line 234 "prog_item_stats.m"
          *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 234 "prog_item_stats.m"
        }
#line 225 "prog_item_stats.m"
        break;
#line 225 "prog_item_stats.m"
      case (MR_Integer) 3:
#line 225 "prog_item_stats.m"
#line 225 "prog_item_stats.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Item_6, (MR_Integer) 0)))) {
#line 225 "prog_item_stats.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 225 "prog_item_stats.m"
          case (MR_Integer) 0:
#line 237 "prog_item_stats.m"
            {
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_73_73;
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_212_212 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_213_213 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_214_214 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_215_215 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_216_216 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_217_217 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_218_218 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_219_219 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_220_220 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_221_221 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_222_222 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_223_223 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_224_224 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_225_225 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_226_226 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_227_227 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_228_228 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_229_229 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_230_230 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 237 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_231_231 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 238 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_73_73 = (parse_tree__prog_item_stats__V_74_74 + (MR_Integer) 1);
#line 238 "prog_item_stats.m"
              {
#line 238 "prog_item_stats.m"
                MR_Word base;
#line 238 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 238 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_212_212));
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_213_213));
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_214_214));
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_73_73));
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_215_215));
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_216_216));
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_217_217));
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_218_218));
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_219_219));
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_220_220));
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_221_221));
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_222_222));
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_223_223));
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_224_224));
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_225_225));
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_226_226));
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_227_227));
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_228_228));
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_229_229));
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_230_230));
#line 238 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_231_231));
#line 238 "prog_item_stats.m"
              }
#line 237 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 237 "prog_item_stats.m"
            }
#line 225 "prog_item_stats.m"
            break;
#line 225 "prog_item_stats.m"
          case (MR_Integer) 1:
#line 240 "prog_item_stats.m"
            {
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_69_69;
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_253_253 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_254_254 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_255_255 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_256_256 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_257_257 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_258_258 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_259_259 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_260_260 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_261_261 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_262_262 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_263_263 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_264_264 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_265_265 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_266_266 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_267_267 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_268_268 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_269_269 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_270_270 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_271_271 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 240 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_272_272 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 241 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_69_69 = (parse_tree__prog_item_stats__V_70_70 + (MR_Integer) 1);
#line 241 "prog_item_stats.m"
              {
#line 241 "prog_item_stats.m"
                MR_Word base;
#line 241 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 241 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_253_253));
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_254_254));
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_255_255));
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_256_256));
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_69_69));
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_257_257));
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_258_258));
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_259_259));
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_260_260));
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_261_261));
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_262_262));
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_263_263));
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_264_264));
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_265_265));
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_266_266));
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_267_267));
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_268_268));
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_269_269));
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_270_270));
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_271_271));
#line 241 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_272_272));
#line 241 "prog_item_stats.m"
              }
#line 240 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 240 "prog_item_stats.m"
            }
#line 225 "prog_item_stats.m"
            break;
#line 225 "prog_item_stats.m"
          case (MR_Integer) 2:
#line 243 "prog_item_stats.m"
            {
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_65_65;
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_294_294 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_295_295 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_296_296 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_297_297 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_298_298 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_299_299 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_300_300 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_301_301 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_302_302 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_303_303 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_304_304 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_305_305 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_306_306 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_307_307 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_308_308 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_309_309 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_310_310 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_311_311 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_312_312 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_313_313 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 244 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_65_65 = (parse_tree__prog_item_stats__V_66_66 + (MR_Integer) 1);
#line 244 "prog_item_stats.m"
              {
#line 244 "prog_item_stats.m"
                MR_Word base;
#line 244 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 244 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_294_294));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_295_295));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_296_296));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_297_297));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_298_298));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_65_65));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_299_299));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_300_300));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_301_301));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_302_302));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_303_303));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_304_304));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_305_305));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_306_306));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_307_307));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_308_308));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_309_309));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_310_310));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_311_311));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_312_312));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_313_313));
#line 244 "prog_item_stats.m"
              }
#line 243 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 243 "prog_item_stats.m"
            }
#line 225 "prog_item_stats.m"
            break;
#line 225 "prog_item_stats.m"
          case (MR_Integer) 3:
#line 246 "prog_item_stats.m"
            {
#line 246 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__ItemPragmaInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Item_6, (MR_Integer) 1)));

#line 247 "prog_item_stats.m"
              {
#line 247 "prog_item_stats.m"
                parse_tree__prog_item_stats__gather_stats_in_item_pragma_3_p_0(parse_tree__prog_item_stats__ItemPragmaInfo_23, parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32);
              }
#line 246 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 246 "prog_item_stats.m"
            }
#line 225 "prog_item_stats.m"
            break;
#line 225 "prog_item_stats.m"
          case (MR_Integer) 4:
#line 249 "prog_item_stats.m"
            {
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_60_60;
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_335_335 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_336_336 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_337_337 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_338_338 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_339_339 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_340_340 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_341_341 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_342_342 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_343_343 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_344_344 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_345_345 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_346_346 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_347_347 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_348_348 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_349_349 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_350_350 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_351_351 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_352_352 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_353_353 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_354_354 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 250 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_60_60 = (parse_tree__prog_item_stats__V_61_61 + (MR_Integer) 1);
#line 250 "prog_item_stats.m"
              {
#line 250 "prog_item_stats.m"
                MR_Word base;
#line 250 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 250 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_335_335));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_336_336));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_337_337));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_338_338));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_339_339));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_340_340));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_341_341));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_342_342));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_343_343));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_344_344));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_345_345));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_346_346));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_347_347));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_348_348));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_60_60));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_349_349));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_350_350));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_351_351));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_352_352));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_353_353));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_354_354));
#line 250 "prog_item_stats.m"
              }
#line 249 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 249 "prog_item_stats.m"
            }
#line 225 "prog_item_stats.m"
            break;
#line 225 "prog_item_stats.m"
          case (MR_Integer) 5:
#line 252 "prog_item_stats.m"
            {
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_56_56;
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_376_376 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_377_377 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_378_378 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_379_379 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_380_380 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_381_381 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_382_382 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_383_383 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_384_384 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_385_385 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_386_386 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_387_387 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_388_388 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_389_389 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_390_390 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_391_391 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_392_392 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_393_393 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_394_394 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 252 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_395_395 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 253 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_56_56 = (parse_tree__prog_item_stats__V_57_57 + (MR_Integer) 1);
#line 253 "prog_item_stats.m"
              {
#line 253 "prog_item_stats.m"
                MR_Word base;
#line 253 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 253 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_376_376));
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_377_377));
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_378_378));
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_379_379));
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_380_380));
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_381_381));
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_382_382));
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_383_383));
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_384_384));
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_385_385));
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_386_386));
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_387_387));
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_388_388));
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_389_389));
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_390_390));
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_56_56));
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_391_391));
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_392_392));
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_393_393));
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_394_394));
#line 253 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_395_395));
#line 253 "prog_item_stats.m"
              }
#line 252 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 252 "prog_item_stats.m"
            }
#line 225 "prog_item_stats.m"
            break;
#line 225 "prog_item_stats.m"
          case (MR_Integer) 6:
#line 255 "prog_item_stats.m"
            {
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_52_52;
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_417_417 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_418_418 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_419_419 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_420_420 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_421_421 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_422_422 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_423_423 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_424_424 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_425_425 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_426_426 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_427_427 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_428_428 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_429_429 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_430_430 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_431_431 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_432_432 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_433_433 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_434_434 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_435_435 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_436_436 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 256 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_52_52 = (parse_tree__prog_item_stats__V_53_53 + (MR_Integer) 1);
#line 256 "prog_item_stats.m"
              {
#line 256 "prog_item_stats.m"
                MR_Word base;
#line 256 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 256 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_426_426));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_427_427));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_428_428));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_429_429));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_430_430));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_431_431));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_432_432));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_52_52));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_433_433));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_434_434));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_435_435));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_436_436));
#line 256 "prog_item_stats.m"
              }
#line 255 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 255 "prog_item_stats.m"
            }
#line 225 "prog_item_stats.m"
            break;
#line 225 "prog_item_stats.m"
          case (MR_Integer) 7:
#line 258 "prog_item_stats.m"
            {
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_48_48;
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_458_458 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_459_459 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_460_460 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_461_461 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_462_462 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_463_463 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_464_464 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_465_465 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_466_466 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_467_467 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_468_468 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_469_469 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_470_470 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_471_471 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_472_472 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_473_473 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_474_474 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_475_475 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_476_476 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_477_477 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 260 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_48_48 = (parse_tree__prog_item_stats__V_49_49 + (MR_Integer) 1);
#line 259 "prog_item_stats.m"
              {
#line 259 "prog_item_stats.m"
                MR_Word base;
#line 259 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 259 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_458_458));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_459_459));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_460_460));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_461_461));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_462_462));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_463_463));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_464_464));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_465_465));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_466_466));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_467_467));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_468_468));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_469_469));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_470_470));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_471_471));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_472_472));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_473_473));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_474_474));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_48_48));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_475_475));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_476_476));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_477_477));
#line 259 "prog_item_stats.m"
              }
#line 258 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 258 "prog_item_stats.m"
            }
#line 225 "prog_item_stats.m"
            break;
#line 225 "prog_item_stats.m"
          case (MR_Integer) 8:
#line 262 "prog_item_stats.m"
            {
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_44_44;
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_499_499 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_500_500 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_501_501 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_502_502 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_503_503 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_504_504 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_505_505 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_506_506 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_507_507 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_508_508 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_509_509 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_510_510 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_511_511 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_512_512 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_513_513 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_514_514 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_515_515 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_516_516 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_517_517 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 262 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_518_518 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 263 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_44_44 = (parse_tree__prog_item_stats__V_45_45 + (MR_Integer) 1);
#line 263 "prog_item_stats.m"
              {
#line 263 "prog_item_stats.m"
                MR_Word base;
#line 263 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 263 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_499_499));
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_500_500));
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_501_501));
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_502_502));
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_503_503));
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_504_504));
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_505_505));
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_506_506));
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_507_507));
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_508_508));
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_509_509));
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_510_510));
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_511_511));
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_512_512));
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_513_513));
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_514_514));
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_515_515));
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_516_516));
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_44_44));
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_517_517));
#line 263 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_518_518));
#line 263 "prog_item_stats.m"
              }
#line 262 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 262 "prog_item_stats.m"
            }
#line 225 "prog_item_stats.m"
            break;
#line 225 "prog_item_stats.m"
          case (MR_Integer) 9:
#line 265 "prog_item_stats.m"
            {
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_40_40;
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_540_540 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_541_541 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_542_542 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_543_543 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_544_544 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_545_545 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_546_546 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_547_547 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_548_548 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_549_549 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_550_550 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_551_551 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_552_552 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_553_553 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_554_554 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_555_555 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_556_556 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_557_557 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_558_558 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 265 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_559_559 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 266 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_40_40 = (parse_tree__prog_item_stats__V_41_41 + (MR_Integer) 1);
#line 266 "prog_item_stats.m"
              {
#line 266 "prog_item_stats.m"
                MR_Word base;
#line 266 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 266 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_540_540));
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_541_541));
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_542_542));
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_543_543));
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_544_544));
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_545_545));
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_546_546));
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_547_547));
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_548_548));
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_549_549));
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_550_550));
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_551_551));
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_552_552));
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_553_553));
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_554_554));
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_555_555));
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_556_556));
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_557_557));
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_558_558));
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_40_40));
#line 266 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_559_559));
#line 266 "prog_item_stats.m"
              }
#line 265 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 265 "prog_item_stats.m"
            }
#line 225 "prog_item_stats.m"
            break;
#line 225 "prog_item_stats.m"
          case (MR_Integer) 10:
#line 268 "prog_item_stats.m"
            {
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_36_36;
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_581_581 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_582_582 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_583_583 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_584_584 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_585_585 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_586_586 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_587_587 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_588_588 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_589_589 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_590_590 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_591_591 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_592_592 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_593_593 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_594_594 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_595_595 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_596_596 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_597_597 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_598_598 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_599_599 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_600_600 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));

#line 269 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_36_36 = (parse_tree__prog_item_stats__V_37_37 + (MR_Integer) 1);
#line 269 "prog_item_stats.m"
              {
#line 269 "prog_item_stats.m"
                MR_Word base;
#line 269 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 269 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_581_581));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_582_582));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_583_583));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_584_584));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_585_585));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_586_586));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_587_587));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_588_588));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_589_589));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_590_590));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_591_591));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_592_592));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_593_593));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_594_594));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_595_595));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_596_596));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_597_597));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_598_598));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_599_599));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_600_600));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_36_36));
#line 269 "prog_item_stats.m"
              }
#line 268 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 268 "prog_item_stats.m"
            }
#line 225 "prog_item_stats.m"
            break;
#line 225 "prog_item_stats.m"
        }
#line 225 "prog_item_stats.m"
        break;
#line 225 "prog_item_stats.m"
    }
#line 225 "prog_item_stats.m"
  }
#line 219 "prog_item_stats.m"
}

#line 211 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(
#line 211 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 211 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_2,
#line 211 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_3,
#line 211 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_4,
#line 211 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_5)
#line 211 "prog_item_stats.m"
{
#line 214 "prog_item_stats.m"
  while (MR_TRUE)
#line 214 "prog_item_stats.m"
    {
#line 214 "prog_item_stats.m"
      /* tailcall optimized into a loop */
#line 214 "prog_item_stats.m"
      {
#line 214 "prog_item_stats.m"
        MR_bool parse_tree__prog_item_stats__succeeded;

#line 214 "prog_item_stats.m"
        if ((parse_tree__prog_item_stats__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 214 "prog_item_stats.m"
          {
#line 214 "prog_item_stats.m"
            *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_5 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_4;
#line 214 "prog_item_stats.m"
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_3 = parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_2;
#line 214 "prog_item_stats.m"
          }
#line 214 "prog_item_stats.m"
        else
#line 215 "prog_item_stats.m"
          {
#line 215 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Item_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
#line 215 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
#line 215 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_20_20;
#line 215 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_21_21;

#line 216 "prog_item_stats.m"
            {
#line 216 "prog_item_stats.m"
              parse_tree__prog_item_stats__gather_stats_in_item_5_p_0(parse_tree__prog_item_stats__Item_12, parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_2, &parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_20_20, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_4, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_21_21);
            }
#line 217 "prog_item_stats.m"
            /* direct tailcall eliminated */
#line 217 "prog_item_stats.m"
            {
#line 217 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1 = parse_tree__prog_item_stats__Items_13;
#line 217 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0__tmp_copy_2 = parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_20_20;
#line 217 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_4 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_21_21;

#line 217 "prog_item_stats.m"
              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_4 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_4;
#line 217 "prog_item_stats.m"
              parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_2 = parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0__tmp_copy_2;
#line 217 "prog_item_stats.m"
              parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1;
#line 217 "prog_item_stats.m"
            }
#line 217 "prog_item_stats.m"
            continue;
#line 215 "prog_item_stats.m"
          }
#line 214 "prog_item_stats.m"
      }
#line 214 "prog_item_stats.m"
      break;
#line 214 "prog_item_stats.m"
    }
#line 211 "prog_item_stats.m"
}

#line 504 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0_1(
#line 504 "prog_item_stats.m"
  MR_Box parse_tree__prog_item_stats__closure_arg,
#line 504 "prog_item_stats.m"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 504 "prog_item_stats.m"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 504 "prog_item_stats.m"
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_3)
#line 504 "prog_item_stats.m"
{
#line 504 "prog_item_stats.m"
  {
#line 504 "prog_item_stats.m"
    MR_Box parse_tree__prog_item_stats__closure = parse_tree__prog_item_stats__closure_arg;

#line 504 "prog_item_stats.m"
    {
#line 504 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_section_stats_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_1));
    }
#line 504 "prog_item_stats.m"
  }
#line 504 "prog_item_stats.m"
}

#line 28 "prog_item_stats.m"
void MR_CALL 
parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0(
#line 28 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Stream_5,
#line 28 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__AugCompUnit_6)
#line 28 "prog_item_stats.m"
{
#line 48 "prog_item_stats.m"
  {
#line 48 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 48 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__CompUnitStats_8;
#line 48 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_11_11;
#line 48 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__SrcItemBlocks_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 3)));
#line 48 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__DirectIntItemBlocks_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 4)));
#line 48 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__IndirectIntItemBlocks_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 5)));
#line 48 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__OptItemBlocks_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 6)));
#line 48 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__IntForOptItemBlocks_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 7)));
#line 48 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_14_31;
#line 48 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_16_33;
#line 48 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_18_35;
#line 48 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_20_37;
#line 48 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_22_39;
#line 48 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__SectionStatPairs_64;
#line 48 "prog_item_stats.m"
    MR_String parse_tree__prog_item_stats__V_69_69;
#line 48 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_71_71;
#line 48 "prog_item_stats.m"
    MR_String parse_tree__prog_item_stats__V_83_83;
#line 150 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats___ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 0)));
#line 150 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats___ModuleNameContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 1)));
#line 150 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats___ModuleVersionNumbers_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 2)));
#line 50 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_13_13;
#line 50 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_14_14;
#line 50 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_15_15;
#line 50 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_16_16;
#line 50 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_17_17;
#line 50 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_18_18;
#line 50 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_19_19;
#line 504 "prog_item_stats.m"
    MR_Box parse_tree__prog_item_stats__conv0_STATE_VARIABLE_IO_10;

#line 155 "prog_item_stats.m"
    {
#line 155 "prog_item_stats.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_14_31);
    }
#line 156 "prog_item_stats.m"
    {
#line 156 "prog_item_stats.m"
      parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho4_4_p_0(parse_tree__prog_item_stats__SrcItemBlocks_26, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_14_31, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_16_33);
    }
#line 158 "prog_item_stats.m"
    {
#line 158 "prog_item_stats.m"
      parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho3_4_p_0(parse_tree__prog_item_stats__DirectIntItemBlocks_27, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_16_33, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_18_35);
    }
#line 160 "prog_item_stats.m"
    {
#line 160 "prog_item_stats.m"
      parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho3_4_p_0(parse_tree__prog_item_stats__IndirectIntItemBlocks_28, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_18_35, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_20_37);
    }
#line 162 "prog_item_stats.m"
    {
#line 162 "prog_item_stats.m"
      parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho2_4_p_0(parse_tree__prog_item_stats__IntForOptItemBlocks_30, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_20_37, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_22_39);
    }
#line 164 "prog_item_stats.m"
    {
#line 164 "prog_item_stats.m"
      parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho1_4_p_0(parse_tree__prog_item_stats__OptItemBlocks_29, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_22_39, &parse_tree__prog_item_stats__CompUnitStats_8);
    }
#line 50 "prog_item_stats.m"
    parse_tree__prog_item_stats__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 0)));
#line 50 "prog_item_stats.m"
    parse_tree__prog_item_stats__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 1)));
#line 50 "prog_item_stats.m"
    parse_tree__prog_item_stats__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 2)));
#line 50 "prog_item_stats.m"
    parse_tree__prog_item_stats__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 3)));
#line 50 "prog_item_stats.m"
    parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 4)));
#line 50 "prog_item_stats.m"
    parse_tree__prog_item_stats__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 5)));
#line 50 "prog_item_stats.m"
    parse_tree__prog_item_stats__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 6)));
#line 50 "prog_item_stats.m"
    parse_tree__prog_item_stats__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 7)));
#line 502 "prog_item_stats.m"
    {
#line 502 "prog_item_stats.m"
      parse_tree__prog_item_stats__V_69_69 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_item_stats__V_11_11);
    }
#line 502 "prog_item_stats.m"
    {
#line 502 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_5, (MR_String) "MODULE ");
    }
#line 502 "prog_item_stats.m"
    {
#line 502 "prog_item_stats.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &parse_tree__prog_item_stats_scalar_common_4[0], parse_tree__prog_item_stats__V_69_69, &parse_tree__prog_item_stats__V_83_83);
    }
#line 502 "prog_item_stats.m"
    {
#line 502 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__V_83_83);
    }
#line 502 "prog_item_stats.m"
    {
#line 502 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_5, (MR_String) "\n");
    }
#line 503 "prog_item_stats.m"
    {
#line 503 "prog_item_stats.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, parse_tree__prog_item_stats__CompUnitStats_8, &parse_tree__prog_item_stats__SectionStatPairs_64);
    }
#line 504 "prog_item_stats.m"
    {
#line 504 "prog_item_stats.m"
      parse_tree__prog_item_stats__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 504 "prog_item_stats.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_71_71, 0) = ((MR_Box) (&parse_tree__prog_item_stats_scalar_common_5[0]));
#line 504 "prog_item_stats.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_71_71, 1) = ((MR_Box) (parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0_1));
#line 504 "prog_item_stats.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 504 "prog_item_stats.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_71_71, 3) = ((MR_Box) (parse_tree__prog_item_stats__Stream_5));
#line 504 "prog_item_stats.m"
    }
#line 504 "prog_item_stats.m"
    {
#line 504 "prog_item_stats.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item_stats_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__prog_item_stats__V_71_71, parse_tree__prog_item_stats__SectionStatPairs_64, ((MR_Box) ((MR_Integer) 0)), &parse_tree__prog_item_stats__conv0_STATE_VARIABLE_IO_10);
    }
#line 48 "prog_item_stats.m"
  }
#line 28 "prog_item_stats.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_item_stats. */
