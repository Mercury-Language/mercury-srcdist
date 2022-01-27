/*
** Automatically generated from `prog_item_stats.m'
** by the Mercury compiler,
** version 2015-10-27
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

#line 189 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho4_4_p_0(
#line 189 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 189 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
#line 189 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4);

#line 189 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho3_4_p_0(
#line 189 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 189 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
#line 189 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4);

#line 189 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho2_4_p_0(
#line 189 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 189 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
#line 189 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4);

#line 189 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho1_4_p_0(
#line 189 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 189 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
#line 189 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4);

#line 120 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____section_stats_0_0(
#line 120 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
#line 120 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 120 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3);

#line 120 "prog_item_stats.m"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____section_stats_0_0(
#line 120 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 120 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2);

#line 56 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____item_stats_0_0(
#line 56 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
#line 56 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 56 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3);

#line 56 "prog_item_stats.m"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____item_stats_0_0(
#line 56 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 56 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2);

#line 88 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____goal_stats_0_0(
#line 88 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
#line 88 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 88 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3);

#line 88 "prog_item_stats.m"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____goal_stats_0_0(
#line 88 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 88 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2);

#line 123 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0(
#line 123 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
#line 123 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 123 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3);

#line 123 "prog_item_stats.m"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0(
#line 123 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 123 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2);

#line 590 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__write_one_stat_6_p_0(
#line 590 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Stream_7,
#line 590 "prog_item_stats.m"
  MR_String parse_tree__prog_item_stats__SectionName_8,
#line 590 "prog_item_stats.m"
  MR_String parse_tree__prog_item_stats__StatName_9,
#line 590 "prog_item_stats.m"
  MR_Integer parse_tree__prog_item_stats__StatNum_10);

#line 546 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__write_goal_stats_5_p_0(
#line 546 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Stream_6,
#line 546 "prog_item_stats.m"
  MR_String parse_tree__prog_item_stats__SectionName_7,
#line 546 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__GoalStats_8);

#line 507 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__write_section_stats_4_p_0(
#line 507 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Stream_5,
#line 507 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2);

#line 488 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_catch_exprs_3_p_0(
#line 488 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 488 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2,
#line 488 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3);

#line 349 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(
#line 349 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Goal_4,
#line 349 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84,
#line 349 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_85);

#line 341 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(
#line 341 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 341 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2,
#line 341 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3);

#line 273 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_pragma_3_p_0(
#line 273 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__ItemPragmaInfo_4,
#line 273 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43,
#line 273 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44);

#line 220 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_5_p_0(
#line 220 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Item_6,
#line 220 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31,
#line 220 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32,
#line 220 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33,
#line 220 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34);

#line 212 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(
#line 212 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 212 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_2,
#line 212 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_3,
#line 212 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_4,
#line 212 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_5);

#line 505 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0_1(
#line 505 "prog_item_stats.m"
  MR_Box parse_tree__prog_item_stats__closure_arg,
#line 505 "prog_item_stats.m"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 505 "prog_item_stats.m"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 505 "prog_item_stats.m"
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

#line 189 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho4_4_p_0(
#line 189 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 189 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
#line 189 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4)
#line 189 "prog_item_stats.m"
{
#line 193 "prog_item_stats.m"
  while (MR_TRUE)
#line 193 "prog_item_stats.m"
    {
#line 193 "prog_item_stats.m"
      /* tailcall optimized into a loop */
#line 193 "prog_item_stats.m"
      {
#line 193 "prog_item_stats.m"
        MR_bool parse_tree__prog_item_stats__succeeded;

#line 193 "prog_item_stats.m"
        if ((parse_tree__prog_item_stats__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 193 "prog_item_stats.m"
          *parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3;
#line 193 "prog_item_stats.m"
        else
#line 195 "prog_item_stats.m"
          {
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__ItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__ItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Section_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 0)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Items_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 4)));
#line 195 "prog_item_stats.m"
            MR_String parse_tree__prog_item_stats__SectionName_18;
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;
#line 196 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 1)));
#line 196 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 2)));
#line 196 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 3)));
#line 204 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__SectionStats0_19;
#line 198 "prog_item_stats.m"
            MR_Box parse_tree__prog_item_stats__conv0_SectionStats0_19;

#line 169 "prog_item_stats.m"
#line 169 "prog_item_stats.m"
            switch (parse_tree__prog_item_stats__Section_13) {
#line 169 "prog_item_stats.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 169 "prog_item_stats.m"
              case (MR_Integer) 2:
#line 171 "prog_item_stats.m"
                parse_tree__prog_item_stats__SectionName_18 = (MR_String) "src_impl_sub";
#line 169 "prog_item_stats.m"
                break;
#line 169 "prog_item_stats.m"
              case (MR_Integer) 1:
#line 170 "prog_item_stats.m"
                parse_tree__prog_item_stats__SectionName_18 = (MR_String) "src_impl";
#line 169 "prog_item_stats.m"
                break;
#line 169 "prog_item_stats.m"
              case (MR_Integer) 0:
#line 169 "prog_item_stats.m"
                parse_tree__prog_item_stats__SectionName_18 = (MR_String) "src_int";
#line 169 "prog_item_stats.m"
                break;
#line 169 "prog_item_stats.m"
            }
#line 198 "prog_item_stats.m"
            {
#line 198 "prog_item_stats.m"
              parse_tree__prog_item_stats__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, ((MR_Box) (parse_tree__prog_item_stats__SectionName_18)), &parse_tree__prog_item_stats__conv0_SectionStats0_19);
            }
#line 198 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 198 "prog_item_stats.m"
              {
#line 198 "prog_item_stats.m"
                parse_tree__prog_item_stats__SectionStats0_19 = ((MR_Word) parse_tree__prog_item_stats__conv0_SectionStats0_19);
#line 198 "prog_item_stats.m"
                parse_tree__prog_item_stats__succeeded = MR_TRUE;
#line 198 "prog_item_stats.m"
              }
#line 204 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 199 "prog_item_stats.m"
              {
#line 199 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 0)));
#line 199 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 1)));
#line 199 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats_22;
#line 199 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats_23;
#line 199 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__SectionStats_24;

#line 200 "prog_item_stats.m"
                {
#line 200 "prog_item_stats.m"
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, parse_tree__prog_item_stats__ItemStats0_20, &parse_tree__prog_item_stats__ItemStats_22, parse_tree__prog_item_stats__GoalStats0_21, &parse_tree__prog_item_stats__GoalStats_23);
                }
#line 202 "prog_item_stats.m"
                {
#line 202 "prog_item_stats.m"
                  parse_tree__prog_item_stats__SectionStats_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 202 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_22));
#line 202 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_23));
#line 202 "prog_item_stats.m"
                }
#line 203 "prog_item_stats.m"
                {
#line 203 "prog_item_stats.m"
                  mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) (parse_tree__prog_item_stats__SectionName_18)), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_24)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
#line 199 "prog_item_stats.m"
              }
#line 204 "prog_item_stats.m"
            else
#line 206 "prog_item_stats.m"
              {
#line 206 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats_32;
#line 206 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats_33;
#line 206 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__SectionStats_34;

#line 205 "prog_item_stats.m"
                {
#line 205 "prog_item_stats.m"
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, (MR_Word) &parse_tree__prog_item_stats_scalar_common_2[0], &parse_tree__prog_item_stats__ItemStats_32, (MR_Word) &parse_tree__prog_item_stats_scalar_common_3[0], &parse_tree__prog_item_stats__GoalStats_33);
                }
#line 207 "prog_item_stats.m"
                {
#line 207 "prog_item_stats.m"
                  parse_tree__prog_item_stats__SectionStats_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_32));
#line 207 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_33));
#line 207 "prog_item_stats.m"
                }
#line 208 "prog_item_stats.m"
                {
#line 208 "prog_item_stats.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) (parse_tree__prog_item_stats__SectionName_18)), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_34)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
#line 206 "prog_item_stats.m"
              }
#line 210 "prog_item_stats.m"
            /* direct tailcall eliminated */
#line 210 "prog_item_stats.m"
            {
#line 210 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2 = parse_tree__prog_item_stats__ItemBlocks_11;
#line 210 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;

#line 210 "prog_item_stats.m"
              parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3;
#line 210 "prog_item_stats.m"
              parse_tree__prog_item_stats__HeadVar__2_2 = parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2;
#line 210 "prog_item_stats.m"
            }
#line 210 "prog_item_stats.m"
            continue;
#line 195 "prog_item_stats.m"
          }
#line 193 "prog_item_stats.m"
      }
#line 193 "prog_item_stats.m"
      break;
#line 193 "prog_item_stats.m"
    }
#line 189 "prog_item_stats.m"
}

#line 189 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho3_4_p_0(
#line 189 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 189 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
#line 189 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4)
#line 189 "prog_item_stats.m"
{
#line 193 "prog_item_stats.m"
  while (MR_TRUE)
#line 193 "prog_item_stats.m"
    {
#line 193 "prog_item_stats.m"
      /* tailcall optimized into a loop */
#line 193 "prog_item_stats.m"
      {
#line 193 "prog_item_stats.m"
        MR_bool parse_tree__prog_item_stats__succeeded;

#line 193 "prog_item_stats.m"
        if ((parse_tree__prog_item_stats__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 193 "prog_item_stats.m"
          *parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3;
#line 193 "prog_item_stats.m"
        else
#line 195 "prog_item_stats.m"
          {
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__ItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__ItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Section_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 0)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Items_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 4)));
#line 195 "prog_item_stats.m"
            MR_String parse_tree__prog_item_stats__SectionName_18;
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;
#line 196 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 1)));
#line 196 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 2)));
#line 196 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 3)));
#line 204 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__SectionStats0_19;
#line 198 "prog_item_stats.m"
            MR_Box parse_tree__prog_item_stats__conv0_SectionStats0_19;

#line 174 "prog_item_stats.m"
#line 174 "prog_item_stats.m"
            switch (MR_tag((MR_Word) parse_tree__prog_item_stats__Section_13)) {
#line 174 "prog_item_stats.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 174 "prog_item_stats.m"
              case (MR_Integer) 0:
#line 174 "prog_item_stats.m"
                parse_tree__prog_item_stats__SectionName_18 = (MR_String) "int_imported";
#line 174 "prog_item_stats.m"
                break;
#line 174 "prog_item_stats.m"
              case (MR_Integer) 1:
#line 175 "prog_item_stats.m"
                parse_tree__prog_item_stats__SectionName_18 = (MR_String) "int_used";
#line 174 "prog_item_stats.m"
                break;
#line 174 "prog_item_stats.m"
              case (MR_Integer) 2:
#line 176 "prog_item_stats.m"
                parse_tree__prog_item_stats__SectionName_18 = (MR_String) "int_abstract_imported";
#line 174 "prog_item_stats.m"
                break;
#line 174 "prog_item_stats.m"
            }
#line 198 "prog_item_stats.m"
            {
#line 198 "prog_item_stats.m"
              parse_tree__prog_item_stats__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, ((MR_Box) (parse_tree__prog_item_stats__SectionName_18)), &parse_tree__prog_item_stats__conv0_SectionStats0_19);
            }
#line 198 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 198 "prog_item_stats.m"
              {
#line 198 "prog_item_stats.m"
                parse_tree__prog_item_stats__SectionStats0_19 = ((MR_Word) parse_tree__prog_item_stats__conv0_SectionStats0_19);
#line 198 "prog_item_stats.m"
                parse_tree__prog_item_stats__succeeded = MR_TRUE;
#line 198 "prog_item_stats.m"
              }
#line 204 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 199 "prog_item_stats.m"
              {
#line 199 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 0)));
#line 199 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 1)));
#line 199 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats_22;
#line 199 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats_23;
#line 199 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__SectionStats_24;

#line 200 "prog_item_stats.m"
                {
#line 200 "prog_item_stats.m"
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, parse_tree__prog_item_stats__ItemStats0_20, &parse_tree__prog_item_stats__ItemStats_22, parse_tree__prog_item_stats__GoalStats0_21, &parse_tree__prog_item_stats__GoalStats_23);
                }
#line 202 "prog_item_stats.m"
                {
#line 202 "prog_item_stats.m"
                  parse_tree__prog_item_stats__SectionStats_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 202 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_22));
#line 202 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_23));
#line 202 "prog_item_stats.m"
                }
#line 203 "prog_item_stats.m"
                {
#line 203 "prog_item_stats.m"
                  mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) (parse_tree__prog_item_stats__SectionName_18)), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_24)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
#line 199 "prog_item_stats.m"
              }
#line 204 "prog_item_stats.m"
            else
#line 206 "prog_item_stats.m"
              {
#line 206 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats_32;
#line 206 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats_33;
#line 206 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__SectionStats_34;

#line 205 "prog_item_stats.m"
                {
#line 205 "prog_item_stats.m"
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, (MR_Word) &parse_tree__prog_item_stats_scalar_common_2[0], &parse_tree__prog_item_stats__ItemStats_32, (MR_Word) &parse_tree__prog_item_stats_scalar_common_3[0], &parse_tree__prog_item_stats__GoalStats_33);
                }
#line 207 "prog_item_stats.m"
                {
#line 207 "prog_item_stats.m"
                  parse_tree__prog_item_stats__SectionStats_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_32));
#line 207 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_33));
#line 207 "prog_item_stats.m"
                }
#line 208 "prog_item_stats.m"
                {
#line 208 "prog_item_stats.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) (parse_tree__prog_item_stats__SectionName_18)), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_34)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
#line 206 "prog_item_stats.m"
              }
#line 210 "prog_item_stats.m"
            /* direct tailcall eliminated */
#line 210 "prog_item_stats.m"
            {
#line 210 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2 = parse_tree__prog_item_stats__ItemBlocks_11;
#line 210 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;

#line 210 "prog_item_stats.m"
              parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3;
#line 210 "prog_item_stats.m"
              parse_tree__prog_item_stats__HeadVar__2_2 = parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2;
#line 210 "prog_item_stats.m"
            }
#line 210 "prog_item_stats.m"
            continue;
#line 195 "prog_item_stats.m"
          }
#line 193 "prog_item_stats.m"
      }
#line 193 "prog_item_stats.m"
      break;
#line 193 "prog_item_stats.m"
    }
#line 189 "prog_item_stats.m"
}

#line 189 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho2_4_p_0(
#line 189 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 189 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
#line 189 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4)
#line 189 "prog_item_stats.m"
{
#line 193 "prog_item_stats.m"
  while (MR_TRUE)
#line 193 "prog_item_stats.m"
    {
#line 193 "prog_item_stats.m"
      /* tailcall optimized into a loop */
#line 193 "prog_item_stats.m"
      {
#line 193 "prog_item_stats.m"
        MR_bool parse_tree__prog_item_stats__succeeded;

#line 193 "prog_item_stats.m"
        if ((parse_tree__prog_item_stats__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 193 "prog_item_stats.m"
          *parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3;
#line 193 "prog_item_stats.m"
        else
#line 195 "prog_item_stats.m"
          {
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__ItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__ItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Items_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 4)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;
#line 196 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Section_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 0)));
#line 196 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 1)));
#line 196 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 2)));
#line 196 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 3)));
#line 204 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__SectionStats0_19;
#line 198 "prog_item_stats.m"
            MR_Box parse_tree__prog_item_stats__conv0_SectionStats0_19;

#line 198 "prog_item_stats.m"
            {
#line 198 "prog_item_stats.m"
              parse_tree__prog_item_stats__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, ((MR_Box) ((MR_String) "int_for_opt_imported")), &parse_tree__prog_item_stats__conv0_SectionStats0_19);
            }
#line 198 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 198 "prog_item_stats.m"
              {
#line 198 "prog_item_stats.m"
                parse_tree__prog_item_stats__SectionStats0_19 = ((MR_Word) parse_tree__prog_item_stats__conv0_SectionStats0_19);
#line 198 "prog_item_stats.m"
                parse_tree__prog_item_stats__succeeded = MR_TRUE;
#line 198 "prog_item_stats.m"
              }
#line 204 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 199 "prog_item_stats.m"
              {
#line 199 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 0)));
#line 199 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 1)));
#line 199 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats_22;
#line 199 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats_23;
#line 199 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__SectionStats_24;

#line 200 "prog_item_stats.m"
                {
#line 200 "prog_item_stats.m"
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, parse_tree__prog_item_stats__ItemStats0_20, &parse_tree__prog_item_stats__ItemStats_22, parse_tree__prog_item_stats__GoalStats0_21, &parse_tree__prog_item_stats__GoalStats_23);
                }
#line 202 "prog_item_stats.m"
                {
#line 202 "prog_item_stats.m"
                  parse_tree__prog_item_stats__SectionStats_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 202 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_22));
#line 202 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_23));
#line 202 "prog_item_stats.m"
                }
#line 203 "prog_item_stats.m"
                {
#line 203 "prog_item_stats.m"
                  mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) ((MR_String) "int_for_opt_imported")), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_24)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
#line 199 "prog_item_stats.m"
              }
#line 204 "prog_item_stats.m"
            else
#line 206 "prog_item_stats.m"
              {
#line 206 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats_32;
#line 206 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats_33;
#line 206 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__SectionStats_34;

#line 205 "prog_item_stats.m"
                {
#line 205 "prog_item_stats.m"
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, (MR_Word) &parse_tree__prog_item_stats_scalar_common_2[0], &parse_tree__prog_item_stats__ItemStats_32, (MR_Word) &parse_tree__prog_item_stats_scalar_common_3[0], &parse_tree__prog_item_stats__GoalStats_33);
                }
#line 207 "prog_item_stats.m"
                {
#line 207 "prog_item_stats.m"
                  parse_tree__prog_item_stats__SectionStats_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_32));
#line 207 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_33));
#line 207 "prog_item_stats.m"
                }
#line 208 "prog_item_stats.m"
                {
#line 208 "prog_item_stats.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) ((MR_String) "int_for_opt_imported")), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_34)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
#line 206 "prog_item_stats.m"
              }
#line 210 "prog_item_stats.m"
            /* direct tailcall eliminated */
#line 210 "prog_item_stats.m"
            {
#line 210 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2 = parse_tree__prog_item_stats__ItemBlocks_11;
#line 210 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;

#line 210 "prog_item_stats.m"
              parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3;
#line 210 "prog_item_stats.m"
              parse_tree__prog_item_stats__HeadVar__2_2 = parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2;
#line 210 "prog_item_stats.m"
            }
#line 210 "prog_item_stats.m"
            continue;
#line 195 "prog_item_stats.m"
          }
#line 193 "prog_item_stats.m"
      }
#line 193 "prog_item_stats.m"
      break;
#line 193 "prog_item_stats.m"
    }
#line 189 "prog_item_stats.m"
}

#line 189 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho1_4_p_0(
#line 189 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 189 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3,
#line 189 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4)
#line 189 "prog_item_stats.m"
{
#line 193 "prog_item_stats.m"
  while (MR_TRUE)
#line 193 "prog_item_stats.m"
    {
#line 193 "prog_item_stats.m"
      /* tailcall optimized into a loop */
#line 193 "prog_item_stats.m"
      {
#line 193 "prog_item_stats.m"
        MR_bool parse_tree__prog_item_stats__succeeded;

#line 193 "prog_item_stats.m"
        if ((parse_tree__prog_item_stats__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 193 "prog_item_stats.m"
          *parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_4 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3;
#line 193 "prog_item_stats.m"
        else
#line 195 "prog_item_stats.m"
          {
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__ItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__ItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Items_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 4)));
#line 195 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;
#line 196 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Section_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 0)));
#line 196 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 1)));
#line 196 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 2)));
#line 196 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemBlock_10, (MR_Integer) 3)));
#line 204 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__SectionStats0_19;
#line 198 "prog_item_stats.m"
            MR_Box parse_tree__prog_item_stats__conv0_SectionStats0_19;

#line 198 "prog_item_stats.m"
            {
#line 198 "prog_item_stats.m"
              parse_tree__prog_item_stats__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, ((MR_Box) ((MR_String) "opt_imported")), &parse_tree__prog_item_stats__conv0_SectionStats0_19);
            }
#line 198 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 198 "prog_item_stats.m"
              {
#line 198 "prog_item_stats.m"
                parse_tree__prog_item_stats__SectionStats0_19 = ((MR_Word) parse_tree__prog_item_stats__conv0_SectionStats0_19);
#line 198 "prog_item_stats.m"
                parse_tree__prog_item_stats__succeeded = MR_TRUE;
#line 198 "prog_item_stats.m"
              }
#line 204 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 199 "prog_item_stats.m"
              {
#line 199 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 0)));
#line 199 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats0_19, (MR_Integer) 1)));
#line 199 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats_22;
#line 199 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats_23;
#line 199 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__SectionStats_24;

#line 200 "prog_item_stats.m"
                {
#line 200 "prog_item_stats.m"
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, parse_tree__prog_item_stats__ItemStats0_20, &parse_tree__prog_item_stats__ItemStats_22, parse_tree__prog_item_stats__GoalStats0_21, &parse_tree__prog_item_stats__GoalStats_23);
                }
#line 202 "prog_item_stats.m"
                {
#line 202 "prog_item_stats.m"
                  parse_tree__prog_item_stats__SectionStats_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 202 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_22));
#line 202 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_24, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_23));
#line 202 "prog_item_stats.m"
                }
#line 203 "prog_item_stats.m"
                {
#line 203 "prog_item_stats.m"
                  mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) ((MR_String) "opt_imported")), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_24)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
#line 199 "prog_item_stats.m"
              }
#line 204 "prog_item_stats.m"
            else
#line 206 "prog_item_stats.m"
              {
#line 206 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__ItemStats_32;
#line 206 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__GoalStats_33;
#line 206 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__SectionStats_34;

#line 205 "prog_item_stats.m"
                {
#line 205 "prog_item_stats.m"
                  parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(parse_tree__prog_item_stats__Items_17, (MR_Word) &parse_tree__prog_item_stats_scalar_common_2[0], &parse_tree__prog_item_stats__ItemStats_32, (MR_Word) &parse_tree__prog_item_stats_scalar_common_3[0], &parse_tree__prog_item_stats__GoalStats_33);
                }
#line 207 "prog_item_stats.m"
                {
#line 207 "prog_item_stats.m"
                  parse_tree__prog_item_stats__SectionStats_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 0) = ((MR_Box) (parse_tree__prog_item_stats__ItemStats_32));
#line 207 "prog_item_stats.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_34, 1) = ((MR_Box) (parse_tree__prog_item_stats__GoalStats_33));
#line 207 "prog_item_stats.m"
                }
#line 208 "prog_item_stats.m"
                {
#line 208 "prog_item_stats.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, ((MR_Box) ((MR_String) "opt_imported")), ((MR_Box) (parse_tree__prog_item_stats__SectionStats_34)), parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27);
                }
#line 206 "prog_item_stats.m"
              }
#line 210 "prog_item_stats.m"
            /* direct tailcall eliminated */
#line 210 "prog_item_stats.m"
            {
#line 210 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2 = parse_tree__prog_item_stats__ItemBlocks_11;
#line 210 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_27_27;

#line 210 "prog_item_stats.m"
              parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0_3 = parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_0__tmp_copy_3;
#line 210 "prog_item_stats.m"
              parse_tree__prog_item_stats__HeadVar__2_2 = parse_tree__prog_item_stats__HeadVar__2__tmp_copy_2;
#line 210 "prog_item_stats.m"
            }
#line 210 "prog_item_stats.m"
            continue;
#line 195 "prog_item_stats.m"
          }
#line 193 "prog_item_stats.m"
      }
#line 193 "prog_item_stats.m"
      break;
#line 193 "prog_item_stats.m"
    }
#line 189 "prog_item_stats.m"
}

#line 120 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____section_stats_0_0(
#line 120 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
#line 120 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 120 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3)
#line 120 "prog_item_stats.m"
{
#line 120 "prog_item_stats.m"
  {
#line 120 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 120 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastX_9 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__2_2;
#line 120 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastY_10 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__3_3;

#line 120 "prog_item_stats.m"
    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__CastX_9 == parse_tree__prog_item_stats__CastY_10);
#line 120 "prog_item_stats.m"
    if (parse_tree__prog_item_stats__succeeded)
#line 1845 "parse_tree.prog_item_stats.c"
      *parse_tree__prog_item_stats__HeadVar__1_1 = (MR_Integer) 0;
#line 120 "prog_item_stats.m"
    else
#line 120 "prog_item_stats.m"
      {
#line 120 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 120 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 120 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 0)));
#line 120 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 1)));
#line 120 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_8_8;

#line 120 "prog_item_stats.m"
        {
#line 120 "prog_item_stats.m"
          parse_tree__prog_item_stats____Compare____item_stats_0_0(&parse_tree__prog_item_stats__V_8_8, parse_tree__prog_item_stats__V_4_4, parse_tree__prog_item_stats__V_6_6);
        }
#line 1867 "parse_tree.prog_item_stats.c"
        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_8_8 == (MR_Integer) 0);
#line 120 "prog_item_stats.m"
        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 120 "prog_item_stats.m"
        if (parse_tree__prog_item_stats__succeeded)
#line 120 "prog_item_stats.m"
          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_8_8;
#line 120 "prog_item_stats.m"
        else
#line 120 "prog_item_stats.m"
          {
#line 120 "prog_item_stats.m"
            parse_tree__prog_item_stats____Compare____goal_stats_0_0(parse_tree__prog_item_stats__HeadVar__1_1, parse_tree__prog_item_stats__V_5_5, parse_tree__prog_item_stats__V_7_7);
#line 120 "prog_item_stats.m"
            return;
          }
#line 120 "prog_item_stats.m"
      }
#line 120 "prog_item_stats.m"
  }
#line 120 "prog_item_stats.m"
}

#line 120 "prog_item_stats.m"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____section_stats_0_0(
#line 120 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 120 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2)
#line 120 "prog_item_stats.m"
{
#line 120 "prog_item_stats.m"
  {
#line 120 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 120 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastX_7 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__1_1;
#line 120 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastY_8 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__2_2;

#line 120 "prog_item_stats.m"
    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__CastX_7 == parse_tree__prog_item_stats__CastY_8);
#line 120 "prog_item_stats.m"
    if (parse_tree__prog_item_stats__succeeded)
#line 120 "prog_item_stats.m"
      parse_tree__prog_item_stats__succeeded = MR_TRUE;
#line 120 "prog_item_stats.m"
    else
#line 120 "prog_item_stats.m"
      {
#line 120 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
#line 120 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
#line 120 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 120 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));

#line 1928 "parse_tree.prog_item_stats.c"
        {
#line 1930 "parse_tree.prog_item_stats.c"
          parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____item_stats_0_0(parse_tree__prog_item_stats__V_3_3, parse_tree__prog_item_stats__V_5_5);
        }
#line 120 "prog_item_stats.m"
        if (parse_tree__prog_item_stats__succeeded)
#line 1935 "parse_tree.prog_item_stats.c"
          {
#line 1937 "parse_tree.prog_item_stats.c"
            return parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____goal_stats_0_0(parse_tree__prog_item_stats__V_4_4, parse_tree__prog_item_stats__V_6_6);
          }
#line 120 "prog_item_stats.m"
      }
#line 120 "prog_item_stats.m"
    return parse_tree__prog_item_stats__succeeded;
#line 120 "prog_item_stats.m"
  }
#line 120 "prog_item_stats.m"
}

#line 56 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____item_stats_0_0(
#line 56 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
#line 56 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 56 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3)
#line 56 "prog_item_stats.m"
{
#line 56 "prog_item_stats.m"
  {
#line 56 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 56 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastX_66 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__2_2;
#line 56 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastY_67 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__3_3;

#line 56 "prog_item_stats.m"
    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__CastX_66 == parse_tree__prog_item_stats__CastY_67);
#line 56 "prog_item_stats.m"
    if (parse_tree__prog_item_stats__succeeded)
#line 1973 "parse_tree.prog_item_stats.c"
      *parse_tree__prog_item_stats__HeadVar__1_1 = (MR_Integer) 0;
#line 56 "prog_item_stats.m"
    else
#line 56 "prog_item_stats.m"
      {
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 2)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 3)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 4)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 5)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 6)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 7)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 8)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 9)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 10)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 11)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 12)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 13)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 14)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 15)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 16)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 17)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 18)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 19)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 20)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 0)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 1)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 2)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 3)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 4)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 5)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 6)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 7)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 8)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 9)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 10)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 11)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 12)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 13)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 14)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 15)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 16)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 17)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 18)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 19)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 20)));
#line 56 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_46_46;

#line 56 "prog_item_stats.m"
        {
#line 56 "prog_item_stats.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_46_46, parse_tree__prog_item_stats__V_4_4, parse_tree__prog_item_stats__V_25_25);
        }
#line 2071 "parse_tree.prog_item_stats.c"
        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_46_46 == (MR_Integer) 0);
#line 56 "prog_item_stats.m"
        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 56 "prog_item_stats.m"
        if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_46_46;
#line 56 "prog_item_stats.m"
        else
#line 56 "prog_item_stats.m"
          {
#line 56 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_47_47;

#line 56 "prog_item_stats.m"
            {
#line 56 "prog_item_stats.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_47_47, parse_tree__prog_item_stats__V_5_5, parse_tree__prog_item_stats__V_26_26);
            }
#line 2091 "parse_tree.prog_item_stats.c"
            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_47_47 == (MR_Integer) 0);
#line 56 "prog_item_stats.m"
            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 56 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_47_47;
#line 56 "prog_item_stats.m"
            else
#line 56 "prog_item_stats.m"
              {
#line 56 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__V_48_48;

#line 56 "prog_item_stats.m"
                {
#line 56 "prog_item_stats.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_48_48, parse_tree__prog_item_stats__V_6_6, parse_tree__prog_item_stats__V_27_27);
                }
#line 2111 "parse_tree.prog_item_stats.c"
                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_48_48 == (MR_Integer) 0);
#line 56 "prog_item_stats.m"
                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 56 "prog_item_stats.m"
                if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_48_48;
#line 56 "prog_item_stats.m"
                else
#line 56 "prog_item_stats.m"
                  {
#line 56 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__V_49_49;

#line 56 "prog_item_stats.m"
                    {
#line 56 "prog_item_stats.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_49_49, parse_tree__prog_item_stats__V_7_7, parse_tree__prog_item_stats__V_28_28);
                    }
#line 2131 "parse_tree.prog_item_stats.c"
                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_49_49 == (MR_Integer) 0);
#line 56 "prog_item_stats.m"
                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 56 "prog_item_stats.m"
                    if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_49_49;
#line 56 "prog_item_stats.m"
                    else
#line 56 "prog_item_stats.m"
                      {
#line 56 "prog_item_stats.m"
                        MR_Word parse_tree__prog_item_stats__V_50_50;

#line 56 "prog_item_stats.m"
                        {
#line 56 "prog_item_stats.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_50_50, parse_tree__prog_item_stats__V_8_8, parse_tree__prog_item_stats__V_29_29);
                        }
#line 2151 "parse_tree.prog_item_stats.c"
                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_50_50 == (MR_Integer) 0);
#line 56 "prog_item_stats.m"
                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 56 "prog_item_stats.m"
                        if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_50_50;
#line 56 "prog_item_stats.m"
                        else
#line 56 "prog_item_stats.m"
                          {
#line 56 "prog_item_stats.m"
                            MR_Word parse_tree__prog_item_stats__V_51_51;

#line 56 "prog_item_stats.m"
                            {
#line 56 "prog_item_stats.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_51_51, parse_tree__prog_item_stats__V_9_9, parse_tree__prog_item_stats__V_30_30);
                            }
#line 2171 "parse_tree.prog_item_stats.c"
                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_51_51 == (MR_Integer) 0);
#line 56 "prog_item_stats.m"
                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 56 "prog_item_stats.m"
                            if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_51_51;
#line 56 "prog_item_stats.m"
                            else
#line 56 "prog_item_stats.m"
                              {
#line 56 "prog_item_stats.m"
                                MR_Word parse_tree__prog_item_stats__V_52_52;

#line 56 "prog_item_stats.m"
                                {
#line 56 "prog_item_stats.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_52_52, parse_tree__prog_item_stats__V_10_10, parse_tree__prog_item_stats__V_31_31);
                                }
#line 2191 "parse_tree.prog_item_stats.c"
                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_52_52 == (MR_Integer) 0);
#line 56 "prog_item_stats.m"
                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 56 "prog_item_stats.m"
                                if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_52_52;
#line 56 "prog_item_stats.m"
                                else
#line 56 "prog_item_stats.m"
                                  {
#line 56 "prog_item_stats.m"
                                    MR_Word parse_tree__prog_item_stats__V_53_53;

#line 56 "prog_item_stats.m"
                                    {
#line 56 "prog_item_stats.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_53_53, parse_tree__prog_item_stats__V_11_11, parse_tree__prog_item_stats__V_32_32);
                                    }
#line 2211 "parse_tree.prog_item_stats.c"
                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_53_53 == (MR_Integer) 0);
#line 56 "prog_item_stats.m"
                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 56 "prog_item_stats.m"
                                    if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_53_53;
#line 56 "prog_item_stats.m"
                                    else
#line 56 "prog_item_stats.m"
                                      {
#line 56 "prog_item_stats.m"
                                        MR_Word parse_tree__prog_item_stats__V_54_54;

#line 56 "prog_item_stats.m"
                                        {
#line 56 "prog_item_stats.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_54_54, parse_tree__prog_item_stats__V_12_12, parse_tree__prog_item_stats__V_33_33);
                                        }
#line 2231 "parse_tree.prog_item_stats.c"
                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_54_54 == (MR_Integer) 0);
#line 56 "prog_item_stats.m"
                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 56 "prog_item_stats.m"
                                        if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_54_54;
#line 56 "prog_item_stats.m"
                                        else
#line 56 "prog_item_stats.m"
                                          {
#line 56 "prog_item_stats.m"
                                            MR_Word parse_tree__prog_item_stats__V_55_55;

#line 56 "prog_item_stats.m"
                                            {
#line 56 "prog_item_stats.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_55_55, parse_tree__prog_item_stats__V_13_13, parse_tree__prog_item_stats__V_34_34);
                                            }
#line 2251 "parse_tree.prog_item_stats.c"
                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_55_55 == (MR_Integer) 0);
#line 56 "prog_item_stats.m"
                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 56 "prog_item_stats.m"
                                            if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_55_55;
#line 56 "prog_item_stats.m"
                                            else
#line 56 "prog_item_stats.m"
                                              {
#line 56 "prog_item_stats.m"
                                                MR_Word parse_tree__prog_item_stats__V_56_56;

#line 56 "prog_item_stats.m"
                                                {
#line 56 "prog_item_stats.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_56_56, parse_tree__prog_item_stats__V_14_14, parse_tree__prog_item_stats__V_35_35);
                                                }
#line 2271 "parse_tree.prog_item_stats.c"
                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_56_56 == (MR_Integer) 0);
#line 56 "prog_item_stats.m"
                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 56 "prog_item_stats.m"
                                                if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_56_56;
#line 56 "prog_item_stats.m"
                                                else
#line 56 "prog_item_stats.m"
                                                  {
#line 56 "prog_item_stats.m"
                                                    MR_Word parse_tree__prog_item_stats__V_57_57;

#line 56 "prog_item_stats.m"
                                                    {
#line 56 "prog_item_stats.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_57_57, parse_tree__prog_item_stats__V_15_15, parse_tree__prog_item_stats__V_36_36);
                                                    }
#line 2291 "parse_tree.prog_item_stats.c"
                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_57_57 == (MR_Integer) 0);
#line 56 "prog_item_stats.m"
                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 56 "prog_item_stats.m"
                                                    if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_57_57;
#line 56 "prog_item_stats.m"
                                                    else
#line 56 "prog_item_stats.m"
                                                      {
#line 56 "prog_item_stats.m"
                                                        MR_Word parse_tree__prog_item_stats__V_58_58;

#line 56 "prog_item_stats.m"
                                                        {
#line 56 "prog_item_stats.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_58_58, parse_tree__prog_item_stats__V_16_16, parse_tree__prog_item_stats__V_37_37);
                                                        }
#line 2311 "parse_tree.prog_item_stats.c"
                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_58_58 == (MR_Integer) 0);
#line 56 "prog_item_stats.m"
                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 56 "prog_item_stats.m"
                                                        if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_58_58;
#line 56 "prog_item_stats.m"
                                                        else
#line 56 "prog_item_stats.m"
                                                          {
#line 56 "prog_item_stats.m"
                                                            MR_Word parse_tree__prog_item_stats__V_59_59;

#line 56 "prog_item_stats.m"
                                                            {
#line 56 "prog_item_stats.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_59_59, parse_tree__prog_item_stats__V_17_17, parse_tree__prog_item_stats__V_38_38);
                                                            }
#line 2331 "parse_tree.prog_item_stats.c"
                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_59_59 == (MR_Integer) 0);
#line 56 "prog_item_stats.m"
                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 56 "prog_item_stats.m"
                                                            if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_59_59;
#line 56 "prog_item_stats.m"
                                                            else
#line 56 "prog_item_stats.m"
                                                              {
#line 56 "prog_item_stats.m"
                                                                MR_Word parse_tree__prog_item_stats__V_60_60;

#line 56 "prog_item_stats.m"
                                                                {
#line 56 "prog_item_stats.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_60_60, parse_tree__prog_item_stats__V_18_18, parse_tree__prog_item_stats__V_39_39);
                                                                }
#line 2351 "parse_tree.prog_item_stats.c"
                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_60_60 == (MR_Integer) 0);
#line 56 "prog_item_stats.m"
                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 56 "prog_item_stats.m"
                                                                if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_60_60;
#line 56 "prog_item_stats.m"
                                                                else
#line 56 "prog_item_stats.m"
                                                                  {
#line 56 "prog_item_stats.m"
                                                                    MR_Word parse_tree__prog_item_stats__V_61_61;

#line 56 "prog_item_stats.m"
                                                                    {
#line 56 "prog_item_stats.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_61_61, parse_tree__prog_item_stats__V_19_19, parse_tree__prog_item_stats__V_40_40);
                                                                    }
#line 2371 "parse_tree.prog_item_stats.c"
                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_61_61 == (MR_Integer) 0);
#line 56 "prog_item_stats.m"
                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 56 "prog_item_stats.m"
                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_61_61;
#line 56 "prog_item_stats.m"
                                                                    else
#line 56 "prog_item_stats.m"
                                                                      {
#line 56 "prog_item_stats.m"
                                                                        MR_Word parse_tree__prog_item_stats__V_62_62;

#line 56 "prog_item_stats.m"
                                                                        {
#line 56 "prog_item_stats.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_62_62, parse_tree__prog_item_stats__V_20_20, parse_tree__prog_item_stats__V_41_41);
                                                                        }
#line 2391 "parse_tree.prog_item_stats.c"
                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_62_62 == (MR_Integer) 0);
#line 56 "prog_item_stats.m"
                                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 56 "prog_item_stats.m"
                                                                        if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_62_62;
#line 56 "prog_item_stats.m"
                                                                        else
#line 56 "prog_item_stats.m"
                                                                          {
#line 56 "prog_item_stats.m"
                                                                            MR_Word parse_tree__prog_item_stats__V_63_63;

#line 56 "prog_item_stats.m"
                                                                            {
#line 56 "prog_item_stats.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_63_63, parse_tree__prog_item_stats__V_21_21, parse_tree__prog_item_stats__V_42_42);
                                                                            }
#line 2411 "parse_tree.prog_item_stats.c"
                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_63_63 == (MR_Integer) 0);
#line 56 "prog_item_stats.m"
                                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 56 "prog_item_stats.m"
                                                                            if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_63_63;
#line 56 "prog_item_stats.m"
                                                                            else
#line 56 "prog_item_stats.m"
                                                                              {
#line 56 "prog_item_stats.m"
                                                                                MR_Word parse_tree__prog_item_stats__V_64_64;

#line 56 "prog_item_stats.m"
                                                                                {
#line 56 "prog_item_stats.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_64_64, parse_tree__prog_item_stats__V_22_22, parse_tree__prog_item_stats__V_43_43);
                                                                                }
#line 2431 "parse_tree.prog_item_stats.c"
                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_64_64 == (MR_Integer) 0);
#line 56 "prog_item_stats.m"
                                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 56 "prog_item_stats.m"
                                                                                if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_64_64;
#line 56 "prog_item_stats.m"
                                                                                else
#line 56 "prog_item_stats.m"
                                                                                  {
#line 56 "prog_item_stats.m"
                                                                                    MR_Word parse_tree__prog_item_stats__V_65_65;

#line 56 "prog_item_stats.m"
                                                                                    {
#line 56 "prog_item_stats.m"
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_65_65, parse_tree__prog_item_stats__V_23_23, parse_tree__prog_item_stats__V_44_44);
                                                                                    }
#line 2451 "parse_tree.prog_item_stats.c"
                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_65_65 == (MR_Integer) 0);
#line 56 "prog_item_stats.m"
                                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 56 "prog_item_stats.m"
                                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_65_65;
#line 56 "prog_item_stats.m"
                                                                                    else
#line 56 "prog_item_stats.m"
                                                                                      {
#line 56 "prog_item_stats.m"
                                                                                        mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_item_stats__HeadVar__1_1, parse_tree__prog_item_stats__V_24_24, parse_tree__prog_item_stats__V_45_45);
#line 56 "prog_item_stats.m"
                                                                                        return;
                                                                                      }
#line 56 "prog_item_stats.m"
                                                                                  }
#line 56 "prog_item_stats.m"
                                                                              }
#line 56 "prog_item_stats.m"
                                                                          }
#line 56 "prog_item_stats.m"
                                                                      }
#line 56 "prog_item_stats.m"
                                                                  }
#line 56 "prog_item_stats.m"
                                                              }
#line 56 "prog_item_stats.m"
                                                          }
#line 56 "prog_item_stats.m"
                                                      }
#line 56 "prog_item_stats.m"
                                                  }
#line 56 "prog_item_stats.m"
                                              }
#line 56 "prog_item_stats.m"
                                          }
#line 56 "prog_item_stats.m"
                                      }
#line 56 "prog_item_stats.m"
                                  }
#line 56 "prog_item_stats.m"
                              }
#line 56 "prog_item_stats.m"
                          }
#line 56 "prog_item_stats.m"
                      }
#line 56 "prog_item_stats.m"
                  }
#line 56 "prog_item_stats.m"
              }
#line 56 "prog_item_stats.m"
          }
#line 56 "prog_item_stats.m"
      }
#line 56 "prog_item_stats.m"
  }
#line 56 "prog_item_stats.m"
}

#line 56 "prog_item_stats.m"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____item_stats_0_0(
#line 56 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 56 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2)
#line 56 "prog_item_stats.m"
{
#line 56 "prog_item_stats.m"
  {
#line 56 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 56 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastX_45 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__1_1;
#line 56 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastY_46 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__2_2;

#line 56 "prog_item_stats.m"
    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__CastX_45 == parse_tree__prog_item_stats__CastY_46);
#line 56 "prog_item_stats.m"
    if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
      parse_tree__prog_item_stats__succeeded = MR_TRUE;
#line 56 "prog_item_stats.m"
    else
#line 56 "prog_item_stats.m"
      {
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 2)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 3)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 4)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 5)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 6)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 7)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 8)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 9)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 10)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 11)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 12)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 13)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 14)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 15)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 16)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 17)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 18)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 19)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 20)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 2)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 3)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 4)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 5)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 6)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 7)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 8)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 9)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 10)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 11)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 12)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 13)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 14)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 15)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 16)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 17)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 18)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 19)));
#line 56 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 20)));

#line 2626 "parse_tree.prog_item_stats.c"
        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_3_3 == parse_tree__prog_item_stats__V_24_24);
#line 56 "prog_item_stats.m"
        if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
          {
#line 2632 "parse_tree.prog_item_stats.c"
            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_4_4 == parse_tree__prog_item_stats__V_25_25);
#line 56 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
              {
#line 2638 "parse_tree.prog_item_stats.c"
                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_5_5 == parse_tree__prog_item_stats__V_26_26);
#line 56 "prog_item_stats.m"
                if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                  {
#line 2644 "parse_tree.prog_item_stats.c"
                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_6_6 == parse_tree__prog_item_stats__V_27_27);
#line 56 "prog_item_stats.m"
                    if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                      {
#line 2650 "parse_tree.prog_item_stats.c"
                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_7_7 == parse_tree__prog_item_stats__V_28_28);
#line 56 "prog_item_stats.m"
                        if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                          {
#line 2656 "parse_tree.prog_item_stats.c"
                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_8_8 == parse_tree__prog_item_stats__V_29_29);
#line 56 "prog_item_stats.m"
                            if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                              {
#line 2662 "parse_tree.prog_item_stats.c"
                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_9_9 == parse_tree__prog_item_stats__V_30_30);
#line 56 "prog_item_stats.m"
                                if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                  {
#line 2668 "parse_tree.prog_item_stats.c"
                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_10_10 == parse_tree__prog_item_stats__V_31_31);
#line 56 "prog_item_stats.m"
                                    if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                      {
#line 2674 "parse_tree.prog_item_stats.c"
                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_11_11 == parse_tree__prog_item_stats__V_32_32);
#line 56 "prog_item_stats.m"
                                        if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                          {
#line 2680 "parse_tree.prog_item_stats.c"
                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_12_12 == parse_tree__prog_item_stats__V_33_33);
#line 56 "prog_item_stats.m"
                                            if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                              {
#line 2686 "parse_tree.prog_item_stats.c"
                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_13_13 == parse_tree__prog_item_stats__V_34_34);
#line 56 "prog_item_stats.m"
                                                if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                  {
#line 2692 "parse_tree.prog_item_stats.c"
                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_14_14 == parse_tree__prog_item_stats__V_35_35);
#line 56 "prog_item_stats.m"
                                                    if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                      {
#line 2698 "parse_tree.prog_item_stats.c"
                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_15_15 == parse_tree__prog_item_stats__V_36_36);
#line 56 "prog_item_stats.m"
                                                        if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                          {
#line 2704 "parse_tree.prog_item_stats.c"
                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_16_16 == parse_tree__prog_item_stats__V_37_37);
#line 56 "prog_item_stats.m"
                                                            if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                              {
#line 2710 "parse_tree.prog_item_stats.c"
                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_17_17 == parse_tree__prog_item_stats__V_38_38);
#line 56 "prog_item_stats.m"
                                                                if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                                  {
#line 2716 "parse_tree.prog_item_stats.c"
                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_18_18 == parse_tree__prog_item_stats__V_39_39);
#line 56 "prog_item_stats.m"
                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                                      {
#line 2722 "parse_tree.prog_item_stats.c"
                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_19_19 == parse_tree__prog_item_stats__V_40_40);
#line 56 "prog_item_stats.m"
                                                                        if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                                          {
#line 2728 "parse_tree.prog_item_stats.c"
                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_20_20 == parse_tree__prog_item_stats__V_41_41);
#line 56 "prog_item_stats.m"
                                                                            if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                                              {
#line 2734 "parse_tree.prog_item_stats.c"
                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_21_21 == parse_tree__prog_item_stats__V_42_42);
#line 56 "prog_item_stats.m"
                                                                                if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                                                  {
#line 2740 "parse_tree.prog_item_stats.c"
                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_22_22 == parse_tree__prog_item_stats__V_43_43);
#line 56 "prog_item_stats.m"
                                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 2744 "parse_tree.prog_item_stats.c"
                                                                                      parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_23_23 == parse_tree__prog_item_stats__V_44_44);
#line 56 "prog_item_stats.m"
                                                                                  }
#line 56 "prog_item_stats.m"
                                                                              }
#line 56 "prog_item_stats.m"
                                                                          }
#line 56 "prog_item_stats.m"
                                                                      }
#line 56 "prog_item_stats.m"
                                                                  }
#line 56 "prog_item_stats.m"
                                                              }
#line 56 "prog_item_stats.m"
                                                          }
#line 56 "prog_item_stats.m"
                                                      }
#line 56 "prog_item_stats.m"
                                                  }
#line 56 "prog_item_stats.m"
                                              }
#line 56 "prog_item_stats.m"
                                          }
#line 56 "prog_item_stats.m"
                                      }
#line 56 "prog_item_stats.m"
                                  }
#line 56 "prog_item_stats.m"
                              }
#line 56 "prog_item_stats.m"
                          }
#line 56 "prog_item_stats.m"
                      }
#line 56 "prog_item_stats.m"
                  }
#line 56 "prog_item_stats.m"
              }
#line 56 "prog_item_stats.m"
          }
#line 56 "prog_item_stats.m"
      }
#line 56 "prog_item_stats.m"
    return parse_tree__prog_item_stats__succeeded;
#line 56 "prog_item_stats.m"
  }
#line 56 "prog_item_stats.m"
}

#line 88 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____goal_stats_0_0(
#line 88 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
#line 88 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 88 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3)
#line 88 "prog_item_stats.m"
{
#line 88 "prog_item_stats.m"
  {
#line 88 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 88 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastX_81 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__2_2;
#line 88 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastY_82 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__3_3;

#line 88 "prog_item_stats.m"
    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__CastX_81 == parse_tree__prog_item_stats__CastY_82);
#line 88 "prog_item_stats.m"
    if (parse_tree__prog_item_stats__succeeded)
#line 2817 "parse_tree.prog_item_stats.c"
      *parse_tree__prog_item_stats__HeadVar__1_1 = (MR_Integer) 0;
#line 88 "prog_item_stats.m"
    else
#line 88 "prog_item_stats.m"
      {
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 2)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 3)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 4)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 5)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 6)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 7)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 8)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 9)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 10)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 11)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 12)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 13)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 14)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 15)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 16)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 17)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 18)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 19)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 20)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 21)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 22)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 23)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 24)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 25)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 0)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 1)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 2)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 3)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 4)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 5)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 6)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 7)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 8)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 9)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 10)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 11)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 12)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 13)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 14)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 15)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 16)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 17)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 18)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 19)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 20)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 21)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 22)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 23)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 24)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 25)));
#line 88 "prog_item_stats.m"
        MR_Word parse_tree__prog_item_stats__V_56_56;

#line 88 "prog_item_stats.m"
        {
#line 88 "prog_item_stats.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_56_56, parse_tree__prog_item_stats__V_4_4, parse_tree__prog_item_stats__V_30_30);
        }
#line 2935 "parse_tree.prog_item_stats.c"
        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_56_56 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
        if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_56_56;
#line 88 "prog_item_stats.m"
        else
#line 88 "prog_item_stats.m"
          {
#line 88 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_57_57;

#line 88 "prog_item_stats.m"
            {
#line 88 "prog_item_stats.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_57_57, parse_tree__prog_item_stats__V_5_5, parse_tree__prog_item_stats__V_31_31);
            }
#line 2955 "parse_tree.prog_item_stats.c"
            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_57_57 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_57_57;
#line 88 "prog_item_stats.m"
            else
#line 88 "prog_item_stats.m"
              {
#line 88 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__V_58_58;

#line 88 "prog_item_stats.m"
                {
#line 88 "prog_item_stats.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_58_58, parse_tree__prog_item_stats__V_6_6, parse_tree__prog_item_stats__V_32_32);
                }
#line 2975 "parse_tree.prog_item_stats.c"
                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_58_58 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_58_58;
#line 88 "prog_item_stats.m"
                else
#line 88 "prog_item_stats.m"
                  {
#line 88 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__V_59_59;

#line 88 "prog_item_stats.m"
                    {
#line 88 "prog_item_stats.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_59_59, parse_tree__prog_item_stats__V_7_7, parse_tree__prog_item_stats__V_33_33);
                    }
#line 2995 "parse_tree.prog_item_stats.c"
                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_59_59 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                    if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_59_59;
#line 88 "prog_item_stats.m"
                    else
#line 88 "prog_item_stats.m"
                      {
#line 88 "prog_item_stats.m"
                        MR_Word parse_tree__prog_item_stats__V_60_60;

#line 88 "prog_item_stats.m"
                        {
#line 88 "prog_item_stats.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_60_60, parse_tree__prog_item_stats__V_8_8, parse_tree__prog_item_stats__V_34_34);
                        }
#line 3015 "parse_tree.prog_item_stats.c"
                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_60_60 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                        if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_60_60;
#line 88 "prog_item_stats.m"
                        else
#line 88 "prog_item_stats.m"
                          {
#line 88 "prog_item_stats.m"
                            MR_Word parse_tree__prog_item_stats__V_61_61;

#line 88 "prog_item_stats.m"
                            {
#line 88 "prog_item_stats.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_61_61, parse_tree__prog_item_stats__V_9_9, parse_tree__prog_item_stats__V_35_35);
                            }
#line 3035 "parse_tree.prog_item_stats.c"
                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_61_61 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                            if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_61_61;
#line 88 "prog_item_stats.m"
                            else
#line 88 "prog_item_stats.m"
                              {
#line 88 "prog_item_stats.m"
                                MR_Word parse_tree__prog_item_stats__V_62_62;

#line 88 "prog_item_stats.m"
                                {
#line 88 "prog_item_stats.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_62_62, parse_tree__prog_item_stats__V_10_10, parse_tree__prog_item_stats__V_36_36);
                                }
#line 3055 "parse_tree.prog_item_stats.c"
                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_62_62 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                                if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_62_62;
#line 88 "prog_item_stats.m"
                                else
#line 88 "prog_item_stats.m"
                                  {
#line 88 "prog_item_stats.m"
                                    MR_Word parse_tree__prog_item_stats__V_63_63;

#line 88 "prog_item_stats.m"
                                    {
#line 88 "prog_item_stats.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_63_63, parse_tree__prog_item_stats__V_11_11, parse_tree__prog_item_stats__V_37_37);
                                    }
#line 3075 "parse_tree.prog_item_stats.c"
                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_63_63 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                                    if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_63_63;
#line 88 "prog_item_stats.m"
                                    else
#line 88 "prog_item_stats.m"
                                      {
#line 88 "prog_item_stats.m"
                                        MR_Word parse_tree__prog_item_stats__V_64_64;

#line 88 "prog_item_stats.m"
                                        {
#line 88 "prog_item_stats.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_64_64, parse_tree__prog_item_stats__V_12_12, parse_tree__prog_item_stats__V_38_38);
                                        }
#line 3095 "parse_tree.prog_item_stats.c"
                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_64_64 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                                        if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_64_64;
#line 88 "prog_item_stats.m"
                                        else
#line 88 "prog_item_stats.m"
                                          {
#line 88 "prog_item_stats.m"
                                            MR_Word parse_tree__prog_item_stats__V_65_65;

#line 88 "prog_item_stats.m"
                                            {
#line 88 "prog_item_stats.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_65_65, parse_tree__prog_item_stats__V_13_13, parse_tree__prog_item_stats__V_39_39);
                                            }
#line 3115 "parse_tree.prog_item_stats.c"
                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_65_65 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                                            if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_65_65;
#line 88 "prog_item_stats.m"
                                            else
#line 88 "prog_item_stats.m"
                                              {
#line 88 "prog_item_stats.m"
                                                MR_Word parse_tree__prog_item_stats__V_66_66;

#line 88 "prog_item_stats.m"
                                                {
#line 88 "prog_item_stats.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_66_66, parse_tree__prog_item_stats__V_14_14, parse_tree__prog_item_stats__V_40_40);
                                                }
#line 3135 "parse_tree.prog_item_stats.c"
                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_66_66 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                                                if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_66_66;
#line 88 "prog_item_stats.m"
                                                else
#line 88 "prog_item_stats.m"
                                                  {
#line 88 "prog_item_stats.m"
                                                    MR_Word parse_tree__prog_item_stats__V_67_67;

#line 88 "prog_item_stats.m"
                                                    {
#line 88 "prog_item_stats.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_67_67, parse_tree__prog_item_stats__V_15_15, parse_tree__prog_item_stats__V_41_41);
                                                    }
#line 3155 "parse_tree.prog_item_stats.c"
                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_67_67 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                                                    if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_67_67;
#line 88 "prog_item_stats.m"
                                                    else
#line 88 "prog_item_stats.m"
                                                      {
#line 88 "prog_item_stats.m"
                                                        MR_Word parse_tree__prog_item_stats__V_68_68;

#line 88 "prog_item_stats.m"
                                                        {
#line 88 "prog_item_stats.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_68_68, parse_tree__prog_item_stats__V_16_16, parse_tree__prog_item_stats__V_42_42);
                                                        }
#line 3175 "parse_tree.prog_item_stats.c"
                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_68_68 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                                                        if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_68_68;
#line 88 "prog_item_stats.m"
                                                        else
#line 88 "prog_item_stats.m"
                                                          {
#line 88 "prog_item_stats.m"
                                                            MR_Word parse_tree__prog_item_stats__V_69_69;

#line 88 "prog_item_stats.m"
                                                            {
#line 88 "prog_item_stats.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_69_69, parse_tree__prog_item_stats__V_17_17, parse_tree__prog_item_stats__V_43_43);
                                                            }
#line 3195 "parse_tree.prog_item_stats.c"
                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_69_69 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                                                            if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_69_69;
#line 88 "prog_item_stats.m"
                                                            else
#line 88 "prog_item_stats.m"
                                                              {
#line 88 "prog_item_stats.m"
                                                                MR_Word parse_tree__prog_item_stats__V_70_70;

#line 88 "prog_item_stats.m"
                                                                {
#line 88 "prog_item_stats.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_70_70, parse_tree__prog_item_stats__V_18_18, parse_tree__prog_item_stats__V_44_44);
                                                                }
#line 3215 "parse_tree.prog_item_stats.c"
                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_70_70 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                                                                if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_70_70;
#line 88 "prog_item_stats.m"
                                                                else
#line 88 "prog_item_stats.m"
                                                                  {
#line 88 "prog_item_stats.m"
                                                                    MR_Word parse_tree__prog_item_stats__V_71_71;

#line 88 "prog_item_stats.m"
                                                                    {
#line 88 "prog_item_stats.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_71_71, parse_tree__prog_item_stats__V_19_19, parse_tree__prog_item_stats__V_45_45);
                                                                    }
#line 3235 "parse_tree.prog_item_stats.c"
                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_71_71 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_71_71;
#line 88 "prog_item_stats.m"
                                                                    else
#line 88 "prog_item_stats.m"
                                                                      {
#line 88 "prog_item_stats.m"
                                                                        MR_Word parse_tree__prog_item_stats__V_72_72;

#line 88 "prog_item_stats.m"
                                                                        {
#line 88 "prog_item_stats.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_72_72, parse_tree__prog_item_stats__V_20_20, parse_tree__prog_item_stats__V_46_46);
                                                                        }
#line 3255 "parse_tree.prog_item_stats.c"
                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_72_72 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                                                                        if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_72_72;
#line 88 "prog_item_stats.m"
                                                                        else
#line 88 "prog_item_stats.m"
                                                                          {
#line 88 "prog_item_stats.m"
                                                                            MR_Word parse_tree__prog_item_stats__V_73_73;

#line 88 "prog_item_stats.m"
                                                                            {
#line 88 "prog_item_stats.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_73_73, parse_tree__prog_item_stats__V_21_21, parse_tree__prog_item_stats__V_47_47);
                                                                            }
#line 3275 "parse_tree.prog_item_stats.c"
                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_73_73 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                                                                            if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_73_73;
#line 88 "prog_item_stats.m"
                                                                            else
#line 88 "prog_item_stats.m"
                                                                              {
#line 88 "prog_item_stats.m"
                                                                                MR_Word parse_tree__prog_item_stats__V_74_74;

#line 88 "prog_item_stats.m"
                                                                                {
#line 88 "prog_item_stats.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_74_74, parse_tree__prog_item_stats__V_22_22, parse_tree__prog_item_stats__V_48_48);
                                                                                }
#line 3295 "parse_tree.prog_item_stats.c"
                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_74_74 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                                                                                if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_74_74;
#line 88 "prog_item_stats.m"
                                                                                else
#line 88 "prog_item_stats.m"
                                                                                  {
#line 88 "prog_item_stats.m"
                                                                                    MR_Word parse_tree__prog_item_stats__V_75_75;

#line 88 "prog_item_stats.m"
                                                                                    {
#line 88 "prog_item_stats.m"
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_75_75, parse_tree__prog_item_stats__V_23_23, parse_tree__prog_item_stats__V_49_49);
                                                                                    }
#line 3315 "parse_tree.prog_item_stats.c"
                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_75_75 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_75_75;
#line 88 "prog_item_stats.m"
                                                                                    else
#line 88 "prog_item_stats.m"
                                                                                      {
#line 88 "prog_item_stats.m"
                                                                                        MR_Word parse_tree__prog_item_stats__V_76_76;

#line 88 "prog_item_stats.m"
                                                                                        {
#line 88 "prog_item_stats.m"
                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_76_76, parse_tree__prog_item_stats__V_24_24, parse_tree__prog_item_stats__V_50_50);
                                                                                        }
#line 3335 "parse_tree.prog_item_stats.c"
                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_76_76 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                                                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                                                                                        if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_76_76;
#line 88 "prog_item_stats.m"
                                                                                        else
#line 88 "prog_item_stats.m"
                                                                                          {
#line 88 "prog_item_stats.m"
                                                                                            MR_Word parse_tree__prog_item_stats__V_77_77;

#line 88 "prog_item_stats.m"
                                                                                            {
#line 88 "prog_item_stats.m"
                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_77_77, parse_tree__prog_item_stats__V_25_25, parse_tree__prog_item_stats__V_51_51);
                                                                                            }
#line 3355 "parse_tree.prog_item_stats.c"
                                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_77_77 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                                                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                                                                                            if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_77_77;
#line 88 "prog_item_stats.m"
                                                                                            else
#line 88 "prog_item_stats.m"
                                                                                              {
#line 88 "prog_item_stats.m"
                                                                                                MR_Word parse_tree__prog_item_stats__V_78_78;

#line 88 "prog_item_stats.m"
                                                                                                {
#line 88 "prog_item_stats.m"
                                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_78_78, parse_tree__prog_item_stats__V_26_26, parse_tree__prog_item_stats__V_52_52);
                                                                                                }
#line 3375 "parse_tree.prog_item_stats.c"
                                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_78_78 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                                                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                                                                                                if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_78_78;
#line 88 "prog_item_stats.m"
                                                                                                else
#line 88 "prog_item_stats.m"
                                                                                                  {
#line 88 "prog_item_stats.m"
                                                                                                    MR_Word parse_tree__prog_item_stats__V_79_79;

#line 88 "prog_item_stats.m"
                                                                                                    {
#line 88 "prog_item_stats.m"
                                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_79_79, parse_tree__prog_item_stats__V_27_27, parse_tree__prog_item_stats__V_53_53);
                                                                                                    }
#line 3395 "parse_tree.prog_item_stats.c"
                                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_79_79 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                                                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                                                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_79_79;
#line 88 "prog_item_stats.m"
                                                                                                    else
#line 88 "prog_item_stats.m"
                                                                                                      {
#line 88 "prog_item_stats.m"
                                                                                                        MR_Word parse_tree__prog_item_stats__V_80_80;

#line 88 "prog_item_stats.m"
                                                                                                        {
#line 88 "prog_item_stats.m"
                                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_80_80, parse_tree__prog_item_stats__V_28_28, parse_tree__prog_item_stats__V_54_54);
                                                                                                        }
#line 3415 "parse_tree.prog_item_stats.c"
                                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_80_80 == (MR_Integer) 0);
#line 88 "prog_item_stats.m"
                                                                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
#line 88 "prog_item_stats.m"
                                                                                                        if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_80_80;
#line 88 "prog_item_stats.m"
                                                                                                        else
#line 88 "prog_item_stats.m"
                                                                                                          {
#line 88 "prog_item_stats.m"
                                                                                                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_item_stats__HeadVar__1_1, parse_tree__prog_item_stats__V_29_29, parse_tree__prog_item_stats__V_55_55);
#line 88 "prog_item_stats.m"
                                                                                                            return;
                                                                                                          }
#line 88 "prog_item_stats.m"
                                                                                                      }
#line 88 "prog_item_stats.m"
                                                                                                  }
#line 88 "prog_item_stats.m"
                                                                                              }
#line 88 "prog_item_stats.m"
                                                                                          }
#line 88 "prog_item_stats.m"
                                                                                      }
#line 88 "prog_item_stats.m"
                                                                                  }
#line 88 "prog_item_stats.m"
                                                                              }
#line 88 "prog_item_stats.m"
                                                                          }
#line 88 "prog_item_stats.m"
                                                                      }
#line 88 "prog_item_stats.m"
                                                                  }
#line 88 "prog_item_stats.m"
                                                              }
#line 88 "prog_item_stats.m"
                                                          }
#line 88 "prog_item_stats.m"
                                                      }
#line 88 "prog_item_stats.m"
                                                  }
#line 88 "prog_item_stats.m"
                                              }
#line 88 "prog_item_stats.m"
                                          }
#line 88 "prog_item_stats.m"
                                      }
#line 88 "prog_item_stats.m"
                                  }
#line 88 "prog_item_stats.m"
                              }
#line 88 "prog_item_stats.m"
                          }
#line 88 "prog_item_stats.m"
                      }
#line 88 "prog_item_stats.m"
                  }
#line 88 "prog_item_stats.m"
              }
#line 88 "prog_item_stats.m"
          }
#line 88 "prog_item_stats.m"
      }
#line 88 "prog_item_stats.m"
  }
#line 88 "prog_item_stats.m"
}

#line 88 "prog_item_stats.m"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____goal_stats_0_0(
#line 88 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 88 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2)
#line 88 "prog_item_stats.m"
{
#line 88 "prog_item_stats.m"
  {
#line 88 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 88 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastX_55 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__1_1;
#line 88 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__CastY_56 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__2_2;

#line 88 "prog_item_stats.m"
    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__CastX_55 == parse_tree__prog_item_stats__CastY_56);
#line 88 "prog_item_stats.m"
    if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
      parse_tree__prog_item_stats__succeeded = MR_TRUE;
#line 88 "prog_item_stats.m"
    else
#line 88 "prog_item_stats.m"
      {
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 2)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 3)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 4)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 5)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 6)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 7)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 8)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 9)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 10)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 11)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 12)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 13)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 14)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 15)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 16)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 17)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 18)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 19)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 20)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 21)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 22)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 23)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 24)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 25)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 2)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 3)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 4)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 5)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 6)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 7)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 8)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 9)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 10)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 11)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 12)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 13)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 14)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 15)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 16)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 17)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 18)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 19)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 20)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 21)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 22)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 23)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 24)));
#line 88 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 25)));

#line 3620 "parse_tree.prog_item_stats.c"
        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_3_3 == parse_tree__prog_item_stats__V_29_29);
#line 88 "prog_item_stats.m"
        if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
          {
#line 3626 "parse_tree.prog_item_stats.c"
            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_4_4 == parse_tree__prog_item_stats__V_30_30);
#line 88 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
              {
#line 3632 "parse_tree.prog_item_stats.c"
                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_5_5 == parse_tree__prog_item_stats__V_31_31);
#line 88 "prog_item_stats.m"
                if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                  {
#line 3638 "parse_tree.prog_item_stats.c"
                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_6_6 == parse_tree__prog_item_stats__V_32_32);
#line 88 "prog_item_stats.m"
                    if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                      {
#line 3644 "parse_tree.prog_item_stats.c"
                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_7_7 == parse_tree__prog_item_stats__V_33_33);
#line 88 "prog_item_stats.m"
                        if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                          {
#line 3650 "parse_tree.prog_item_stats.c"
                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_8_8 == parse_tree__prog_item_stats__V_34_34);
#line 88 "prog_item_stats.m"
                            if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                              {
#line 3656 "parse_tree.prog_item_stats.c"
                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_9_9 == parse_tree__prog_item_stats__V_35_35);
#line 88 "prog_item_stats.m"
                                if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                  {
#line 3662 "parse_tree.prog_item_stats.c"
                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_10_10 == parse_tree__prog_item_stats__V_36_36);
#line 88 "prog_item_stats.m"
                                    if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                      {
#line 3668 "parse_tree.prog_item_stats.c"
                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_11_11 == parse_tree__prog_item_stats__V_37_37);
#line 88 "prog_item_stats.m"
                                        if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                          {
#line 3674 "parse_tree.prog_item_stats.c"
                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_12_12 == parse_tree__prog_item_stats__V_38_38);
#line 88 "prog_item_stats.m"
                                            if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                              {
#line 3680 "parse_tree.prog_item_stats.c"
                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_13_13 == parse_tree__prog_item_stats__V_39_39);
#line 88 "prog_item_stats.m"
                                                if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                  {
#line 3686 "parse_tree.prog_item_stats.c"
                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_14_14 == parse_tree__prog_item_stats__V_40_40);
#line 88 "prog_item_stats.m"
                                                    if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                      {
#line 3692 "parse_tree.prog_item_stats.c"
                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_15_15 == parse_tree__prog_item_stats__V_41_41);
#line 88 "prog_item_stats.m"
                                                        if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                          {
#line 3698 "parse_tree.prog_item_stats.c"
                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_16_16 == parse_tree__prog_item_stats__V_42_42);
#line 88 "prog_item_stats.m"
                                                            if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                              {
#line 3704 "parse_tree.prog_item_stats.c"
                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_17_17 == parse_tree__prog_item_stats__V_43_43);
#line 88 "prog_item_stats.m"
                                                                if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                  {
#line 3710 "parse_tree.prog_item_stats.c"
                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_18_18 == parse_tree__prog_item_stats__V_44_44);
#line 88 "prog_item_stats.m"
                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                      {
#line 3716 "parse_tree.prog_item_stats.c"
                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_19_19 == parse_tree__prog_item_stats__V_45_45);
#line 88 "prog_item_stats.m"
                                                                        if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                          {
#line 3722 "parse_tree.prog_item_stats.c"
                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_20_20 == parse_tree__prog_item_stats__V_46_46);
#line 88 "prog_item_stats.m"
                                                                            if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                              {
#line 3728 "parse_tree.prog_item_stats.c"
                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_21_21 == parse_tree__prog_item_stats__V_47_47);
#line 88 "prog_item_stats.m"
                                                                                if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                                  {
#line 3734 "parse_tree.prog_item_stats.c"
                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_22_22 == parse_tree__prog_item_stats__V_48_48);
#line 88 "prog_item_stats.m"
                                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                                      {
#line 3740 "parse_tree.prog_item_stats.c"
                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_23_23 == parse_tree__prog_item_stats__V_49_49);
#line 88 "prog_item_stats.m"
                                                                                        if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                                          {
#line 3746 "parse_tree.prog_item_stats.c"
                                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_24_24 == parse_tree__prog_item_stats__V_50_50);
#line 88 "prog_item_stats.m"
                                                                                            if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                                              {
#line 3752 "parse_tree.prog_item_stats.c"
                                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_25_25 == parse_tree__prog_item_stats__V_51_51);
#line 88 "prog_item_stats.m"
                                                                                                if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                                                  {
#line 3758 "parse_tree.prog_item_stats.c"
                                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_26_26 == parse_tree__prog_item_stats__V_52_52);
#line 88 "prog_item_stats.m"
                                                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                                                      {
#line 3764 "parse_tree.prog_item_stats.c"
                                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_27_27 == parse_tree__prog_item_stats__V_53_53);
#line 88 "prog_item_stats.m"
                                                                                                        if (parse_tree__prog_item_stats__succeeded)
#line 3768 "parse_tree.prog_item_stats.c"
                                                                                                          parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_28_28 == parse_tree__prog_item_stats__V_54_54);
#line 88 "prog_item_stats.m"
                                                                                                      }
#line 88 "prog_item_stats.m"
                                                                                                  }
#line 88 "prog_item_stats.m"
                                                                                              }
#line 88 "prog_item_stats.m"
                                                                                          }
#line 88 "prog_item_stats.m"
                                                                                      }
#line 88 "prog_item_stats.m"
                                                                                  }
#line 88 "prog_item_stats.m"
                                                                              }
#line 88 "prog_item_stats.m"
                                                                          }
#line 88 "prog_item_stats.m"
                                                                      }
#line 88 "prog_item_stats.m"
                                                                  }
#line 88 "prog_item_stats.m"
                                                              }
#line 88 "prog_item_stats.m"
                                                          }
#line 88 "prog_item_stats.m"
                                                      }
#line 88 "prog_item_stats.m"
                                                  }
#line 88 "prog_item_stats.m"
                                              }
#line 88 "prog_item_stats.m"
                                          }
#line 88 "prog_item_stats.m"
                                      }
#line 88 "prog_item_stats.m"
                                  }
#line 88 "prog_item_stats.m"
                              }
#line 88 "prog_item_stats.m"
                          }
#line 88 "prog_item_stats.m"
                      }
#line 88 "prog_item_stats.m"
                  }
#line 88 "prog_item_stats.m"
              }
#line 88 "prog_item_stats.m"
          }
#line 88 "prog_item_stats.m"
      }
#line 88 "prog_item_stats.m"
    return parse_tree__prog_item_stats__succeeded;
#line 88 "prog_item_stats.m"
  }
#line 88 "prog_item_stats.m"
}

#line 123 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0(
#line 123 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__HeadVar__1_1,
#line 123 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2,
#line 123 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__3_3)
#line 123 "prog_item_stats.m"
{
#line 123 "prog_item_stats.m"
  {
#line 123 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 123 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__Cast_HeadVar1_4 = parse_tree__prog_item_stats__HeadVar__2_2;
#line 123 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__Cast_HeadVar2_5 = parse_tree__prog_item_stats__HeadVar__3_3;

#line 123 "prog_item_stats.m"
    {
#line 123 "prog_item_stats.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_item_stats_scalar_common_1[1], parse_tree__prog_item_stats__HeadVar__1_1, ((MR_Box) (parse_tree__prog_item_stats__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_item_stats__Cast_HeadVar2_5)));
#line 123 "prog_item_stats.m"
      return;
    }
#line 123 "prog_item_stats.m"
  }
#line 123 "prog_item_stats.m"
}

#line 123 "prog_item_stats.m"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0(
#line 123 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 123 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2)
#line 123 "prog_item_stats.m"
{
#line 123 "prog_item_stats.m"
  {
#line 123 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 123 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__Cast_HeadVar1_3 = parse_tree__prog_item_stats__HeadVar__1_1;
#line 123 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__Cast_HeadVar2_4 = parse_tree__prog_item_stats__HeadVar__2_2;

#line 123 "prog_item_stats.m"
    {
#line 123 "prog_item_stats.m"
      return parse_tree__prog_item_stats__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_item_stats_scalar_common_1[1], ((MR_Box) (parse_tree__prog_item_stats__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_item_stats__Cast_HeadVar2_4)));
    }
#line 123 "prog_item_stats.m"
    return parse_tree__prog_item_stats__succeeded;
#line 123 "prog_item_stats.m"
  }
#line 123 "prog_item_stats.m"
}

#line 590 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__write_one_stat_6_p_0(
#line 590 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Stream_7,
#line 590 "prog_item_stats.m"
  MR_String parse_tree__prog_item_stats__SectionName_8,
#line 590 "prog_item_stats.m"
  MR_String parse_tree__prog_item_stats__StatName_9,
#line 590 "prog_item_stats.m"
  MR_Integer parse_tree__prog_item_stats__StatNum_10)
#line 590 "prog_item_stats.m"
{
#line 593 "prog_item_stats.m"
  {
#line 593 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;

#line 594 "prog_item_stats.m"
    {
#line 594 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_7, parse_tree__prog_item_stats__SectionName_8);
    }
#line 595 "prog_item_stats.m"
    {
#line 595 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_7, (MR_String) " ");
    }
#line 596 "prog_item_stats.m"
    {
#line 596 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_7, parse_tree__prog_item_stats__StatName_9);
    }
#line 597 "prog_item_stats.m"
    {
#line 597 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_7, (MR_String) " ");
    }
#line 598 "prog_item_stats.m"
    {
#line 598 "prog_item_stats.m"
      mercury__io__write_int_4_p_0(parse_tree__prog_item_stats__Stream_7, parse_tree__prog_item_stats__StatNum_10);
    }
#line 599 "prog_item_stats.m"
    {
#line 599 "prog_item_stats.m"
      mercury__io__nl_3_p_0(parse_tree__prog_item_stats__Stream_7);
    }
#line 600 "prog_item_stats.m"
    {
#line 600 "prog_item_stats.m"
      mercury__io__flush_output_2_p_0();
#line 600 "prog_item_stats.m"
      return;
    }
#line 593 "prog_item_stats.m"
  }
#line 590 "prog_item_stats.m"
}

#line 546 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__write_goal_stats_5_p_0(
#line 546 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Stream_6,
#line 546 "prog_item_stats.m"
  MR_String parse_tree__prog_item_stats__SectionName_7,
#line 546 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__GoalStats_8)
#line 546 "prog_item_stats.m"
{
#line 549 "prog_item_stats.m"
  {
#line 549 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Conj_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 0)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__ParConj_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 1)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__True_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 2)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Disj_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 3)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Fail_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 4)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Some_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 5)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__All_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 6)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__SomeStateVars_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 7)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__AllStateVars_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 8)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PromisePurity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 9)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PromiseEqvSolns_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 10)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PromiseEqvSolnSets_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 11)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PromiseArbitrary_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 12)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__ReqDetism_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 13)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__ReqComplSwitch_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 14)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__ReqSwitchArmDetism_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 15)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Trace_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 16)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Atomic_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 17)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Try_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 18)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Implies_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 19)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Equivalent_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 20)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Not_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 21)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__IfThenElse_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 22)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Event_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 23)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Call_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 24)));
#line 549 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Unify_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 25)));

#line 556 "prog_item_stats.m"
    {
#line 556 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_conj", parse_tree__prog_item_stats__Conj_10);
    }
#line 557 "prog_item_stats.m"
    {
#line 557 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_par_conj", parse_tree__prog_item_stats__ParConj_11);
    }
#line 558 "prog_item_stats.m"
    {
#line 558 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_true", parse_tree__prog_item_stats__True_12);
    }
#line 559 "prog_item_stats.m"
    {
#line 559 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_disj", parse_tree__prog_item_stats__Disj_13);
    }
#line 560 "prog_item_stats.m"
    {
#line 560 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_fail", parse_tree__prog_item_stats__Fail_14);
    }
#line 561 "prog_item_stats.m"
    {
#line 561 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_some", parse_tree__prog_item_stats__Some_15);
    }
#line 562 "prog_item_stats.m"
    {
#line 562 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_all", parse_tree__prog_item_stats__All_16);
    }
#line 563 "prog_item_stats.m"
    {
#line 563 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_some_state_vars", parse_tree__prog_item_stats__SomeStateVars_17);
    }
#line 565 "prog_item_stats.m"
    {
#line 565 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_all_state_vars", parse_tree__prog_item_stats__AllStateVars_18);
    }
#line 567 "prog_item_stats.m"
    {
#line 567 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_pro_purity", parse_tree__prog_item_stats__PromisePurity_19);
    }
#line 568 "prog_item_stats.m"
    {
#line 568 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_pro_eqv_solns", parse_tree__prog_item_stats__PromiseEqvSolns_20);
    }
#line 570 "prog_item_stats.m"
    {
#line 570 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_pro_eqv_soln_sets", parse_tree__prog_item_stats__PromiseEqvSolnSets_21);
    }
#line 572 "prog_item_stats.m"
    {
#line 572 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_pro_arbitrary", parse_tree__prog_item_stats__PromiseArbitrary_22);
    }
#line 574 "prog_item_stats.m"
    {
#line 574 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_req_detism", parse_tree__prog_item_stats__ReqDetism_23);
    }
#line 575 "prog_item_stats.m"
    {
#line 575 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_req_compl_switch", parse_tree__prog_item_stats__ReqComplSwitch_24);
    }
#line 577 "prog_item_stats.m"
    {
#line 577 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_req_arm_detism", parse_tree__prog_item_stats__ReqSwitchArmDetism_25);
    }
#line 579 "prog_item_stats.m"
    {
#line 579 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_trace", parse_tree__prog_item_stats__Trace_26);
    }
#line 580 "prog_item_stats.m"
    {
#line 580 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_atomic", parse_tree__prog_item_stats__Atomic_27);
    }
#line 581 "prog_item_stats.m"
    {
#line 581 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_try", parse_tree__prog_item_stats__Try_28);
    }
#line 582 "prog_item_stats.m"
    {
#line 582 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_implies", parse_tree__prog_item_stats__Implies_29);
    }
#line 583 "prog_item_stats.m"
    {
#line 583 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_equivalent", parse_tree__prog_item_stats__Equivalent_30);
    }
#line 584 "prog_item_stats.m"
    {
#line 584 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_not", parse_tree__prog_item_stats__Not_31);
    }
#line 585 "prog_item_stats.m"
    {
#line 585 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_if_then_else", parse_tree__prog_item_stats__IfThenElse_32);
    }
#line 586 "prog_item_stats.m"
    {
#line 586 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_event", parse_tree__prog_item_stats__Event_33);
    }
#line 587 "prog_item_stats.m"
    {
#line 587 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_call", parse_tree__prog_item_stats__Call_34);
    }
#line 588 "prog_item_stats.m"
    {
#line 588 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_unify", parse_tree__prog_item_stats__Unify_35);
#line 588 "prog_item_stats.m"
      return;
    }
#line 549 "prog_item_stats.m"
  }
#line 546 "prog_item_stats.m"
}

#line 507 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__write_section_stats_4_p_0(
#line 507 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Stream_5,
#line 507 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2)
#line 507 "prog_item_stats.m"
{
#line 510 "prog_item_stats.m"
  {
#line 510 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 510 "prog_item_stats.m"
    MR_String parse_tree__prog_item_stats__SectionName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 510 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__SectionStats_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 510 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__ItemStats_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_7, (MR_Integer) 0)));
#line 510 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__GoalStats_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_7, (MR_Integer) 1)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Clause_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 0)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__TypeDefn_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 1)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__InstDefn_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 2)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__ModeDefn_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 3)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PredDecl_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 4)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__ModeDecl_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 5)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaFIM_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 6)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaTerm_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 7)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaTerm2_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 8)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaExcp_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 9)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaTrail_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 10)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaMM_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 11)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaPass2_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 12)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaPass3_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 13)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Promise_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 14)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Typeclasse_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 15)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Instance_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 16)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Initialise_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 17)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Finalise_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 18)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Mutable_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 19)));
#line 510 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Nothing_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 20)));

#line 523 "prog_item_stats.m"
    {
#line 523 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_clause", parse_tree__prog_item_stats__Clause_21);
    }
#line 524 "prog_item_stats.m"
    {
#line 524 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_type_defn", parse_tree__prog_item_stats__TypeDefn_22);
    }
#line 525 "prog_item_stats.m"
    {
#line 525 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_inst_defn", parse_tree__prog_item_stats__InstDefn_23);
    }
#line 526 "prog_item_stats.m"
    {
#line 526 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_mode_defn", parse_tree__prog_item_stats__ModeDefn_24);
    }
#line 527 "prog_item_stats.m"
    {
#line 527 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pred_decl", parse_tree__prog_item_stats__PredDecl_25);
    }
#line 528 "prog_item_stats.m"
    {
#line 528 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_mode_decl", parse_tree__prog_item_stats__ModeDecl_26);
    }
#line 529 "prog_item_stats.m"
    {
#line 529 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_fim", parse_tree__prog_item_stats__PragmaFIM_27);
    }
#line 530 "prog_item_stats.m"
    {
#line 530 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_term", parse_tree__prog_item_stats__PragmaTerm_28);
    }
#line 531 "prog_item_stats.m"
    {
#line 531 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_term2", parse_tree__prog_item_stats__PragmaTerm2_29);
    }
#line 532 "prog_item_stats.m"
    {
#line 532 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_excp", parse_tree__prog_item_stats__PragmaExcp_30);
    }
#line 533 "prog_item_stats.m"
    {
#line 533 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_trail", parse_tree__prog_item_stats__PragmaTrail_31);
    }
#line 534 "prog_item_stats.m"
    {
#line 534 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_mm", parse_tree__prog_item_stats__PragmaMM_32);
    }
#line 535 "prog_item_stats.m"
    {
#line 535 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_pass2", parse_tree__prog_item_stats__PragmaPass2_33);
    }
#line 536 "prog_item_stats.m"
    {
#line 536 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_pass3", parse_tree__prog_item_stats__PragmaPass3_34);
    }
#line 537 "prog_item_stats.m"
    {
#line 537 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_promise", parse_tree__prog_item_stats__Promise_35);
    }
#line 538 "prog_item_stats.m"
    {
#line 538 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_typeclass", parse_tree__prog_item_stats__Typeclasse_36);
    }
#line 539 "prog_item_stats.m"
    {
#line 539 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_instance", parse_tree__prog_item_stats__Instance_37);
    }
#line 540 "prog_item_stats.m"
    {
#line 540 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_promise", parse_tree__prog_item_stats__Promise_35);
    }
#line 541 "prog_item_stats.m"
    {
#line 541 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_initialise", parse_tree__prog_item_stats__Initialise_38);
    }
#line 542 "prog_item_stats.m"
    {
#line 542 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_finalise", parse_tree__prog_item_stats__Finalise_39);
    }
#line 543 "prog_item_stats.m"
    {
#line 543 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_mutable", parse_tree__prog_item_stats__Mutable_40);
    }
#line 544 "prog_item_stats.m"
    {
#line 544 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_nothing", parse_tree__prog_item_stats__Nothing_41);
    }
#line 513 "prog_item_stats.m"
    {
#line 513 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_goal_stats_5_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, parse_tree__prog_item_stats__GoalStats_10);
#line 513 "prog_item_stats.m"
      return;
    }
#line 510 "prog_item_stats.m"
  }
#line 507 "prog_item_stats.m"
}

#line 488 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_catch_exprs_3_p_0(
#line 488 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 488 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2,
#line 488 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3)
#line 488 "prog_item_stats.m"
{
#line 491 "prog_item_stats.m"
  while (MR_TRUE)
#line 491 "prog_item_stats.m"
    {
#line 491 "prog_item_stats.m"
      /* tailcall optimized into a loop */
#line 491 "prog_item_stats.m"
      {
#line 491 "prog_item_stats.m"
        MR_bool parse_tree__prog_item_stats__succeeded;

#line 491 "prog_item_stats.m"
        if ((parse_tree__prog_item_stats__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 491 "prog_item_stats.m"
          *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2;
#line 491 "prog_item_stats.m"
        else
#line 492 "prog_item_stats.m"
          {
#line 492 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__CatchExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
#line 492 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__CatchExprs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
#line 492 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__CatchExpr_7, (MR_Integer) 1)));
#line 492 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_14_14;
#line 493 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__CatchExpr_7, (MR_Integer) 0)));

#line 494 "prog_item_stats.m"
            {
#line 494 "prog_item_stats.m"
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__Goal_11, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_14_14);
            }
#line 495 "prog_item_stats.m"
            /* direct tailcall eliminated */
#line 495 "prog_item_stats.m"
            {
#line 495 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1 = parse_tree__prog_item_stats__CatchExprs_8;
#line 495 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_2 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_14_14;

#line 495 "prog_item_stats.m"
              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_2;
#line 495 "prog_item_stats.m"
              parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1;
#line 495 "prog_item_stats.m"
            }
#line 495 "prog_item_stats.m"
            continue;
#line 492 "prog_item_stats.m"
          }
#line 491 "prog_item_stats.m"
      }
#line 491 "prog_item_stats.m"
      break;
#line 491 "prog_item_stats.m"
    }
#line 488 "prog_item_stats.m"
}

#line 349 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(
#line 349 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Goal_4,
#line 349 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84,
#line 349 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_85)
#line 349 "prog_item_stats.m"
{
#line 353 "prog_item_stats.m"
  while (MR_TRUE)
#line 353 "prog_item_stats.m"
    {
#line 353 "prog_item_stats.m"
      /* tailcall optimized into a loop */
#line 353 "prog_item_stats.m"
      {
#line 353 "prog_item_stats.m"
        MR_bool parse_tree__prog_item_stats__succeeded;
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1573_1573 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 25)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1574_1574 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 24)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1575_1575 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 23)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1576_1576 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 22)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1577_1577 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 21)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1578_1578 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 20)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1579_1579 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 19)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1580_1580 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 18)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1581_1581 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 17)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1582_1582 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 16)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1583_1583 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 15)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1584_1584 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 14)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1585_1585 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 13)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1586_1586 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 12)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1587_1587 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 11)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1588_1588 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 10)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1589_1589 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 9)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1590_1590 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 8)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1591_1591 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 7)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1592_1592 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 6)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1593_1593 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 5)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1594_1594 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 4)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1595_1595 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 3)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1596_1596 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 2)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1597_1597 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 1)));
#line 353 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1598_1598 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84, (MR_Integer) 0)));

#line 353 "prog_item_stats.m"
#line 353 "prog_item_stats.m"
        switch (MR_tag((MR_Word) parse_tree__prog_item_stats__Goal_4)) {
#line 353 "prog_item_stats.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 353 "prog_item_stats.m"
          case (MR_Integer) 0:
#line 484 "prog_item_stats.m"
            {
#line 484 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_87_87 = (parse_tree__prog_item_stats__V_1573_1573 + (MR_Integer) 1);

#line 485 "prog_item_stats.m"
              {
#line 485 "prog_item_stats.m"
                MR_Word base;
#line 485 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 485 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_85 = base;
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 485 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_87_87));
#line 485 "prog_item_stats.m"
              }
#line 484 "prog_item_stats.m"
            }
#line 353 "prog_item_stats.m"
            break;
#line 353 "prog_item_stats.m"
          case (MR_Integer) 1:
#line 481 "prog_item_stats.m"
            {
#line 481 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_91_91 = (parse_tree__prog_item_stats__V_1574_1574 + (MR_Integer) 1);

#line 482 "prog_item_stats.m"
              {
#line 482 "prog_item_stats.m"
                MR_Word base;
#line 482 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 482 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_85 = base;
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_91_91));
#line 482 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 482 "prog_item_stats.m"
              }
#line 481 "prog_item_stats.m"
            }
#line 353 "prog_item_stats.m"
            break;
#line 353 "prog_item_stats.m"
          case (MR_Integer) 2:
#line 353 "prog_item_stats.m"
            {
#line 353 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__SubGoalA_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 353 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__SubGoalB_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 353 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218;
#line 353 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_219_219 = (parse_tree__prog_item_stats__V_1598_1598 + (MR_Integer) 1);
#line 353 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_222_222;
#line 353 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 0)));

#line 354 "prog_item_stats.m"
              {
#line 354 "prog_item_stats.m"
                parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_219_219));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 354 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 354 "prog_item_stats.m"
              }
#line 355 "prog_item_stats.m"
              {
#line 355 "prog_item_stats.m"
                parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_7, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_218_218, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_222_222);
              }
#line 356 "prog_item_stats.m"
              /* direct tailcall eliminated */
#line 356 "prog_item_stats.m"
              {
#line 356 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_8;
#line 356 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_222_222;

#line 356 "prog_item_stats.m"
                parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 356 "prog_item_stats.m"
                parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 356 "prog_item_stats.m"
              }
#line 356 "prog_item_stats.m"
              continue;
#line 353 "prog_item_stats.m"
            }
#line 353 "prog_item_stats.m"
            break;
#line 353 "prog_item_stats.m"
          case (MR_Integer) 3:
#line 353 "prog_item_stats.m"
#line 353 "prog_item_stats.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 0)))) {
#line 353 "prog_item_stats.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 353 "prog_item_stats.m"
              case (MR_Integer) 0:
#line 363 "prog_item_stats.m"
                {
#line 363 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_209_209 = (parse_tree__prog_item_stats__V_1596_1596 + (MR_Integer) 1);

#line 364 "prog_item_stats.m"
                  {
#line 364 "prog_item_stats.m"
                    MR_Word base;
#line 364 "prog_item_stats.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 364 "prog_item_stats.m"
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_85 = base;
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_209_209));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 364 "prog_item_stats.m"
                  }
#line 363 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 1:
#line 471 "prog_item_stats.m"
                {
#line 471 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__CondGoal_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 471 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98;
#line 471 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_99_99 = (parse_tree__prog_item_stats__V_1576_1576 + (MR_Integer) 1);
#line 471 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_102_102;
#line 471 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_103_103;
#line 471 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__ThenGoal_245 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));
#line 471 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__ElseGoal_246 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 471 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 471 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 471 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));

#line 472 "prog_item_stats.m"
                  {
#line 472 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_99_99));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 472 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 472 "prog_item_stats.m"
                  }
#line 474 "prog_item_stats.m"
                  {
#line 474 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__CondGoal_72, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_102_102);
                  }
#line 475 "prog_item_stats.m"
                  {
#line 475 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__ThenGoal_245, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_102_102, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_103_103);
                  }
#line 476 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 476 "prog_item_stats.m"
                  {
#line 476 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__ElseGoal_246;
#line 476 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_103_103;

#line 476 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 476 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 476 "prog_item_stats.m"
                  }
#line 476 "prog_item_stats.m"
                  continue;
#line 471 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 2:
#line 366 "prog_item_stats.m"
                {
#line 366 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202;
#line 366 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_203_203 = (parse_tree__prog_item_stats__V_1595_1595 + (MR_Integer) 1);
#line 366 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_206_206;
#line 366 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalA_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 366 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalB_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 366 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

#line 367 "prog_item_stats.m"
                  {
#line 367 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_203_203));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 367 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 367 "prog_item_stats.m"
                  }
#line 368 "prog_item_stats.m"
                  {
#line 368 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_226, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_202_202, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_206_206);
                  }
#line 369 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 369 "prog_item_stats.m"
                  {
#line 369 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_227;
#line 369 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_206_206;

#line 369 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 369 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 369 "prog_item_stats.m"
                  }
#line 369 "prog_item_stats.m"
                  continue;
#line 366 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 3:
#line 467 "prog_item_stats.m"
                {
#line 467 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105;
#line 467 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_106_106 = (parse_tree__prog_item_stats__V_1577_1577 + (MR_Integer) 1);
#line 467 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 467 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

#line 468 "prog_item_stats.m"
                  {
#line 468 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_106_106));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 468 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 468 "prog_item_stats.m"
                  }
#line 469 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 469 "prog_item_stats.m"
                  {
#line 469 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_244;
#line 469 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_105_105;

#line 469 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 469 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 469 "prog_item_stats.m"
                  }
#line 469 "prog_item_stats.m"
                  continue;
#line 467 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 4:
#line 371 "prog_item_stats.m"
                {
#line 371 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_199_199 = (parse_tree__prog_item_stats__V_1594_1594 + (MR_Integer) 1);

#line 372 "prog_item_stats.m"
                  {
#line 372 "prog_item_stats.m"
                    MR_Word base;
#line 372 "prog_item_stats.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 372 "prog_item_stats.m"
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_85 = base;
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_199_199));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 372 "prog_item_stats.m"
                  }
#line 371 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 5:
#line 358 "prog_item_stats.m"
                {
#line 358 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212;
#line 358 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_213_213 = (parse_tree__prog_item_stats__V_1597_1597 + (MR_Integer) 1);
#line 358 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_216_216;
#line 358 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalA_224 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 358 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalB_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 358 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

#line 359 "prog_item_stats.m"
                  {
#line 359 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_213_213));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 359 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 359 "prog_item_stats.m"
                  }
#line 360 "prog_item_stats.m"
                  {
#line 360 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_224, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_212_212, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_216_216);
                  }
#line 361 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 361 "prog_item_stats.m"
                  {
#line 361 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_225;
#line 361 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_216_216;

#line 361 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 361 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 361 "prog_item_stats.m"
                  }
#line 361 "prog_item_stats.m"
                  continue;
#line 358 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 6:
#line 374 "prog_item_stats.m"
                {
#line 374 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 374 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193;
#line 374 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_194_194 = (parse_tree__prog_item_stats__V_1593_1593 + (MR_Integer) 1);
#line 374 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 374 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

#line 375 "prog_item_stats.m"
                  {
#line 375 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_194_194));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 375 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 375 "prog_item_stats.m"
                  }
#line 376 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 376 "prog_item_stats.m"
                  {
#line 376 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_15;
#line 376 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_193_193;

#line 376 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 376 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 376 "prog_item_stats.m"
                  }
#line 376 "prog_item_stats.m"
                  continue;
#line 374 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 7:
#line 378 "prog_item_stats.m"
                {
#line 378 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188;
#line 378 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_189_189 = (parse_tree__prog_item_stats__V_1592_1592 + (MR_Integer) 1);
#line 378 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_228 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 378 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 378 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

#line 379 "prog_item_stats.m"
                  {
#line 379 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_189_189));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 379 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 379 "prog_item_stats.m"
                  }
#line 380 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 380 "prog_item_stats.m"
                  {
#line 380 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_228;
#line 380 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_188_188;

#line 380 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 380 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 380 "prog_item_stats.m"
                  }
#line 380 "prog_item_stats.m"
                  continue;
#line 378 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 8:
#line 382 "prog_item_stats.m"
                {
#line 382 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183;
#line 382 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_184_184 = (parse_tree__prog_item_stats__V_1591_1591 + (MR_Integer) 1);
#line 382 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_229 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 382 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 382 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

#line 383 "prog_item_stats.m"
                  {
#line 383 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_184_184));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 383 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 383 "prog_item_stats.m"
                  }
#line 385 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 385 "prog_item_stats.m"
                  {
#line 385 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_229;
#line 385 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_183_183;

#line 385 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 385 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 385 "prog_item_stats.m"
                  }
#line 385 "prog_item_stats.m"
                  continue;
#line 382 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 9:
#line 387 "prog_item_stats.m"
                {
#line 387 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178;
#line 387 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_179_179 = (parse_tree__prog_item_stats__V_1590_1590 + (MR_Integer) 1);
#line 387 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 387 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 387 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

#line 388 "prog_item_stats.m"
                  {
#line 388 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_179_179));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 388 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 388 "prog_item_stats.m"
                  }
#line 390 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 390 "prog_item_stats.m"
                  {
#line 390 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_230;
#line 390 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_178_178;

#line 390 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 390 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 390 "prog_item_stats.m"
                  }
#line 390 "prog_item_stats.m"
                  continue;
#line 387 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 10:
#line 392 "prog_item_stats.m"
                {
#line 392 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173;
#line 392 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_174_174 = (parse_tree__prog_item_stats__V_1589_1589 + (MR_Integer) 1);
#line 392 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_231 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 392 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 392 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

#line 393 "prog_item_stats.m"
                  {
#line 393 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_174_174));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 393 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 393 "prog_item_stats.m"
                  }
#line 395 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 395 "prog_item_stats.m"
                  {
#line 395 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_231;
#line 395 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_173_173;

#line 395 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 395 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 395 "prog_item_stats.m"
                  }
#line 395 "prog_item_stats.m"
                  continue;
#line 392 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 11:
#line 397 "prog_item_stats.m"
                {
#line 397 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168;
#line 397 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_169_169 = (parse_tree__prog_item_stats__V_1588_1588 + (MR_Integer) 1);
#line 397 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_232 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 397 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 397 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 397 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 397 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 397 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

#line 398 "prog_item_stats.m"
                  {
#line 398 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_169_169));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 398 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 398 "prog_item_stats.m"
                  }
#line 400 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 400 "prog_item_stats.m"
                  {
#line 400 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_232;
#line 400 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_168_168;

#line 400 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 400 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 400 "prog_item_stats.m"
                  }
#line 400 "prog_item_stats.m"
                  continue;
#line 397 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 12:
#line 402 "prog_item_stats.m"
                {
#line 402 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163;
#line 402 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_164_164 = (parse_tree__prog_item_stats__V_1587_1587 + (MR_Integer) 1);
#line 402 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 402 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 402 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 402 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 402 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 402 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

#line 403 "prog_item_stats.m"
                  {
#line 403 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_164_164));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 403 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 403 "prog_item_stats.m"
                  }
#line 405 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 405 "prog_item_stats.m"
                  {
#line 405 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_233;
#line 405 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_163_163;

#line 405 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 405 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 405 "prog_item_stats.m"
                  }
#line 405 "prog_item_stats.m"
                  continue;
#line 402 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 13:
#line 408 "prog_item_stats.m"
                {
#line 408 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158;
#line 408 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_159_159 = (parse_tree__prog_item_stats__V_1586_1586 + (MR_Integer) 1);
#line 408 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_234 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 407 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 407 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 407 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 407 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 407 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

#line 409 "prog_item_stats.m"
                  {
#line 409 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_159_159));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 409 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 409 "prog_item_stats.m"
                  }
#line 411 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 411 "prog_item_stats.m"
                  {
#line 411 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_234;
#line 411 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_158_158;

#line 411 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 411 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 411 "prog_item_stats.m"
                  }
#line 411 "prog_item_stats.m"
                  continue;
#line 408 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 14:
#line 413 "prog_item_stats.m"
                {
#line 413 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153;
#line 413 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_154_154 = (parse_tree__prog_item_stats__V_1585_1585 + (MR_Integer) 1);
#line 413 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_235 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 413 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 413 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

#line 414 "prog_item_stats.m"
                  {
#line 414 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_154_154));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 414 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 414 "prog_item_stats.m"
                  }
#line 416 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 416 "prog_item_stats.m"
                  {
#line 416 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_235;
#line 416 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_153_153;

#line 416 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 416 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 416 "prog_item_stats.m"
                  }
#line 416 "prog_item_stats.m"
                  continue;
#line 413 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 15:
#line 418 "prog_item_stats.m"
                {
#line 418 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148;
#line 418 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_149_149 = (parse_tree__prog_item_stats__V_1584_1584 + (MR_Integer) 1);
#line 418 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 418 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 418 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

#line 419 "prog_item_stats.m"
                  {
#line 419 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_149_149));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 419 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 419 "prog_item_stats.m"
                  }
#line 421 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 421 "prog_item_stats.m"
                  {
#line 421 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_236;
#line 421 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_148_148;

#line 421 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 421 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 421 "prog_item_stats.m"
                  }
#line 421 "prog_item_stats.m"
                  continue;
#line 418 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 16:
#line 423 "prog_item_stats.m"
                {
#line 423 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143;
#line 423 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_144_144 = (parse_tree__prog_item_stats__V_1583_1583 + (MR_Integer) 1);
#line 423 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_237 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 423 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 423 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 423 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));

#line 424 "prog_item_stats.m"
                  {
#line 424 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_144_144));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 424 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 424 "prog_item_stats.m"
                  }
#line 426 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 426 "prog_item_stats.m"
                  {
#line 426 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_237;
#line 426 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_143_143;

#line 426 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 426 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 426 "prog_item_stats.m"
                  }
#line 426 "prog_item_stats.m"
                  continue;
#line 423 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 17:
#line 428 "prog_item_stats.m"
                {
#line 428 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138;
#line 428 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_139_139 = (parse_tree__prog_item_stats__V_1582_1582 + (MR_Integer) 1);
#line 428 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_238 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 428 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 428 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 428 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 428 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 428 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

#line 429 "prog_item_stats.m"
                  {
#line 429 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_139_139));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 429 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 429 "prog_item_stats.m"
                  }
#line 430 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 430 "prog_item_stats.m"
                  {
#line 430 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_238;
#line 430 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_138_138;

#line 430 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 430 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 430 "prog_item_stats.m"
                  }
#line 430 "prog_item_stats.m"
                  continue;
#line 428 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 18:
#line 432 "prog_item_stats.m"
                {
#line 432 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__MainGoal_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));
#line 432 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__OrElseGoals_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 432 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132;
#line 432 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_133_133 = (parse_tree__prog_item_stats__V_1581_1581 + (MR_Integer) 1);
#line 432 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_136_136;
#line 432 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 432 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 432 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 432 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));

#line 433 "prog_item_stats.m"
                  {
#line 433 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_133_133));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 433 "prog_item_stats.m"
                  }
#line 434 "prog_item_stats.m"
                  {
#line 434 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__MainGoal_55, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_136_136);
                  }
#line 435 "prog_item_stats.m"
                  {
#line 435 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(parse_tree__prog_item_stats__OrElseGoals_56, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_136_136, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_85);
#line 435 "prog_item_stats.m"
                    return;
                  }
#line 432 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 19:
#line 438 "prog_item_stats.m"
                {
#line 438 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__ThenGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 438 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__MaybeElseGoal_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));
#line 438 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__Catches_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 438 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__MaybeCatchAny_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 7)));
#line 438 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122;
#line 438 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_123_123 = (parse_tree__prog_item_stats__V_1580_1580 + (MR_Integer) 1);
#line 438 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_126_126;
#line 438 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_127_127;
#line 438 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128;
#line 438 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_129_129;
#line 438 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__MainGoal_239 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 437 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 437 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

#line 439 "prog_item_stats.m"
                  {
#line 439 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_123_123));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 439 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 439 "prog_item_stats.m"
                  }
#line 440 "prog_item_stats.m"
                  {
#line 440 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__MainGoal_239, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_126_126);
                  }
#line 441 "prog_item_stats.m"
                  {
#line 441 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__ThenGoal_59, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_126_126, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_127_127);
                  }
#line 445 "prog_item_stats.m"
                  if ((parse_tree__prog_item_stats__MaybeElseGoal_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 446 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_127_127;
#line 445 "prog_item_stats.m"
                  else
#line 443 "prog_item_stats.m"
                    {
#line 443 "prog_item_stats.m"
                      MR_Word parse_tree__prog_item_stats__ElseGoal_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__MaybeElseGoal_60, (MR_Integer) 0)));

#line 444 "prog_item_stats.m"
                      {
#line 444 "prog_item_stats.m"
                        parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__ElseGoal_63, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_127_127, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128);
                      }
#line 443 "prog_item_stats.m"
                    }
#line 448 "prog_item_stats.m"
                  {
#line 448 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_catch_exprs_3_p_0(parse_tree__prog_item_stats__Catches_61, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_129_129);
                  }
#line 452 "prog_item_stats.m"
                  if ((parse_tree__prog_item_stats__MaybeCatchAny_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "prog_item_stats.m"
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_85 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_129_129;
#line 452 "prog_item_stats.m"
                  else
#line 450 "prog_item_stats.m"
                    {
#line 450 "prog_item_stats.m"
                      MR_Word parse_tree__prog_item_stats__CatchAnyGoal_65;
#line 450 "prog_item_stats.m"
                      MR_Word parse_tree__prog_item_stats__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__MaybeCatchAny_62, (MR_Integer) 0)));
#line 450 "prog_item_stats.m"
                      MR_Word parse_tree__prog_item_stats__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_130_130, (MR_Integer) 0)));

#line 450 "prog_item_stats.m"
                      parse_tree__prog_item_stats__CatchAnyGoal_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_130_130, (MR_Integer) 1)));
#line 451 "prog_item_stats.m"
                      /* direct tailcall eliminated */
#line 451 "prog_item_stats.m"
                      {
#line 451 "prog_item_stats.m"
                        MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__CatchAnyGoal_65;
#line 451 "prog_item_stats.m"
                        MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_129_129;

#line 451 "prog_item_stats.m"
                        parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 451 "prog_item_stats.m"
                        parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 451 "prog_item_stats.m"
                      }
#line 451 "prog_item_stats.m"
                      continue;
#line 450 "prog_item_stats.m"
                    }
#line 438 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 20:
#line 456 "prog_item_stats.m"
                {
#line 456 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116;
#line 456 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_117_117 = (parse_tree__prog_item_stats__V_1579_1579 + (MR_Integer) 1);
#line 456 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_120_120;
#line 456 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalA_240 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 456 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalB_241 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 456 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

#line 457 "prog_item_stats.m"
                  {
#line 457 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_117_117));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 457 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 457 "prog_item_stats.m"
                  }
#line 458 "prog_item_stats.m"
                  {
#line 458 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_240, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_120_120);
                  }
#line 459 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 459 "prog_item_stats.m"
                  {
#line 459 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_241;
#line 459 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_120_120;

#line 459 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 459 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 459 "prog_item_stats.m"
                  }
#line 459 "prog_item_stats.m"
                  continue;
#line 456 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 21:
#line 461 "prog_item_stats.m"
                {
#line 461 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110;
#line 461 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_111_111 = (parse_tree__prog_item_stats__V_1578_1578 + (MR_Integer) 1);
#line 461 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_114_114;
#line 461 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalA_242 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 461 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalB_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 461 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

#line 462 "prog_item_stats.m"
                  {
#line 462 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_111_111));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1575_1575));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 462 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 462 "prog_item_stats.m"
                  }
#line 464 "prog_item_stats.m"
                  {
#line 464 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_242, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_114_114);
                  }
#line 465 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 465 "prog_item_stats.m"
                  {
#line 465 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_243;
#line 465 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_114_114;

#line 465 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_84 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_84;
#line 465 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 465 "prog_item_stats.m"
                  }
#line 465 "prog_item_stats.m"
                  continue;
#line 461 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
              case (MR_Integer) 22:
#line 478 "prog_item_stats.m"
                {
#line 478 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_95_95 = (parse_tree__prog_item_stats__V_1575_1575 + (MR_Integer) 1);

#line 479 "prog_item_stats.m"
                  {
#line 479 "prog_item_stats.m"
                    MR_Word base;
#line 479 "prog_item_stats.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 479 "prog_item_stats.m"
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_85 = base;
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1598_1598));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1597_1597));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1596_1596));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1595_1595));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1594_1594));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1593_1593));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1592_1592));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1591_1591));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1590_1590));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1589_1589));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1588_1588));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1587_1587));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1586_1586));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1585_1585));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1584_1584));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1583_1583));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1582_1582));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1581_1581));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1580_1580));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1579_1579));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1578_1578));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1577_1577));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1576_1576));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_95_95));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1574_1574));
#line 479 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1573_1573));
#line 479 "prog_item_stats.m"
                  }
#line 478 "prog_item_stats.m"
                }
#line 353 "prog_item_stats.m"
                break;
#line 353 "prog_item_stats.m"
            }
#line 353 "prog_item_stats.m"
            break;
#line 353 "prog_item_stats.m"
        }
#line 353 "prog_item_stats.m"
      }
#line 353 "prog_item_stats.m"
      break;
#line 353 "prog_item_stats.m"
    }
#line 349 "prog_item_stats.m"
}

#line 341 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(
#line 341 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 341 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2,
#line 341 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3)
#line 341 "prog_item_stats.m"
{
#line 344 "prog_item_stats.m"
  while (MR_TRUE)
#line 344 "prog_item_stats.m"
    {
#line 344 "prog_item_stats.m"
      /* tailcall optimized into a loop */
#line 344 "prog_item_stats.m"
      {
#line 344 "prog_item_stats.m"
        MR_bool parse_tree__prog_item_stats__succeeded;

#line 344 "prog_item_stats.m"
        if ((parse_tree__prog_item_stats__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 344 "prog_item_stats.m"
          *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2;
#line 344 "prog_item_stats.m"
        else
#line 345 "prog_item_stats.m"
          {
#line 345 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
#line 345 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
#line 345 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_12_12;

#line 346 "prog_item_stats.m"
            {
#line 346 "prog_item_stats.m"
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__Goal_7, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_12_12);
            }
#line 347 "prog_item_stats.m"
            /* direct tailcall eliminated */
#line 347 "prog_item_stats.m"
            {
#line 347 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1 = parse_tree__prog_item_stats__Goals_8;
#line 347 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_2 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_12_12;

#line 347 "prog_item_stats.m"
              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_2;
#line 347 "prog_item_stats.m"
              parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1;
#line 347 "prog_item_stats.m"
            }
#line 347 "prog_item_stats.m"
            continue;
#line 345 "prog_item_stats.m"
          }
#line 344 "prog_item_stats.m"
      }
#line 344 "prog_item_stats.m"
      break;
#line 344 "prog_item_stats.m"
    }
#line 341 "prog_item_stats.m"
}

#line 273 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_pragma_3_p_0(
#line 273 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__ItemPragmaInfo_4,
#line 273 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43,
#line 273 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44)
#line 273 "prog_item_stats.m"
{
#line 276 "prog_item_stats.m"
  {
#line 276 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 276 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__PragmaType_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemPragmaInfo_4, (MR_Integer) 0)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_405_405 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 20)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_406_406 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 19)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_407_407 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 18)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_408_408 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 17)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_409_409 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 16)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_410_410 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 15)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_411_411 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 14)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_412_412 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 13)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_413_413 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 12)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_414_414 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 11)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_415_415 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 10)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_416_416 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 9)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_417_417 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 8)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_418_418 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 7)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_419_419 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 6)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_420_420 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 5)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_421_421 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 4)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_422_422 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 3)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_423_423 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 2)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_424_424 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 1)));
#line 276 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_425_425 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 0)));
#line 277 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemPragmaInfo_4, (MR_Integer) 1)));
#line 277 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemPragmaInfo_4, (MR_Integer) 2)));
#line 277 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemPragmaInfo_4, (MR_Integer) 3)));

#line 282 "prog_item_stats.m"
#line 282 "prog_item_stats.m"
    switch (MR_tag((MR_Word) parse_tree__prog_item_stats__PragmaType_6)) {
#line 282 "prog_item_stats.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 282 "prog_item_stats.m"
      case (MR_Integer) 0:
#line 282 "prog_item_stats.m"
      case (MR_Integer) 1:
#line 321 "prog_item_stats.m"
        {
#line 321 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_50_50 = (parse_tree__prog_item_stats__V_413_413 + (MR_Integer) 1);

#line 322 "prog_item_stats.m"
          {
#line 322 "prog_item_stats.m"
            MR_Word base;
#line 322 "prog_item_stats.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 322 "prog_item_stats.m"
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_50_50));
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 322 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 322 "prog_item_stats.m"
          }
#line 321 "prog_item_stats.m"
        }
#line 282 "prog_item_stats.m"
        break;
#line 282 "prog_item_stats.m"
      case (MR_Integer) 2:
#line 334 "prog_item_stats.m"
        {
#line 334 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_46_46 = (parse_tree__prog_item_stats__V_412_412 + (MR_Integer) 1);

#line 335 "prog_item_stats.m"
          {
#line 335 "prog_item_stats.m"
            MR_Word base;
#line 335 "prog_item_stats.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 335 "prog_item_stats.m"
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_46_46));
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 335 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 335 "prog_item_stats.m"
          }
#line 334 "prog_item_stats.m"
        }
#line 282 "prog_item_stats.m"
        break;
#line 282 "prog_item_stats.m"
      case (MR_Integer) 3:
#line 282 "prog_item_stats.m"
#line 282 "prog_item_stats.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__PragmaType_6, (MR_Integer) 0)))) {
#line 282 "prog_item_stats.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 282 "prog_item_stats.m"
          case (MR_Integer) 0:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 4:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 13:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 14:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 15:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 25:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 26:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 28:
#line 334 "prog_item_stats.m"
            {
#line 334 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_46_46 = (parse_tree__prog_item_stats__V_412_412 + (MR_Integer) 1);

#line 335 "prog_item_stats.m"
              {
#line 335 "prog_item_stats.m"
                MR_Word base;
#line 335 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 335 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_46_46));
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 335 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 335 "prog_item_stats.m"
              }
#line 334 "prog_item_stats.m"
            }
#line 282 "prog_item_stats.m"
            break;
#line 282 "prog_item_stats.m"
          case (MR_Integer) 1:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 2:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 3:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 5:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 6:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 7:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 11:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 12:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 16:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 17:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 18:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 21:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 22:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 23:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 24:
#line 282 "prog_item_stats.m"
          case (MR_Integer) 29:
#line 321 "prog_item_stats.m"
            {
#line 321 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_50_50 = (parse_tree__prog_item_stats__V_413_413 + (MR_Integer) 1);

#line 322 "prog_item_stats.m"
              {
#line 322 "prog_item_stats.m"
                MR_Word base;
#line 322 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 322 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_50_50));
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 322 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 322 "prog_item_stats.m"
              }
#line 321 "prog_item_stats.m"
            }
#line 282 "prog_item_stats.m"
            break;
#line 282 "prog_item_stats.m"
          case (MR_Integer) 8:
#line 291 "prog_item_stats.m"
            {
#line 291 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_62_62 = (parse_tree__prog_item_stats__V_416_416 + (MR_Integer) 1);

#line 292 "prog_item_stats.m"
              {
#line 292 "prog_item_stats.m"
                MR_Word base;
#line 292 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 292 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_62_62));
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 292 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 292 "prog_item_stats.m"
              }
#line 291 "prog_item_stats.m"
            }
#line 282 "prog_item_stats.m"
            break;
#line 282 "prog_item_stats.m"
          case (MR_Integer) 9:
#line 295 "prog_item_stats.m"
            {
#line 295 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_58_58 = (parse_tree__prog_item_stats__V_415_415 + (MR_Integer) 1);

#line 296 "prog_item_stats.m"
              {
#line 296 "prog_item_stats.m"
                MR_Word base;
#line 296 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 296 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_58_58));
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 296 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 296 "prog_item_stats.m"
              }
#line 295 "prog_item_stats.m"
            }
#line 282 "prog_item_stats.m"
            break;
#line 282 "prog_item_stats.m"
          case (MR_Integer) 10:
#line 299 "prog_item_stats.m"
            {
#line 299 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_54_54 = (parse_tree__prog_item_stats__V_414_414 + (MR_Integer) 1);

#line 300 "prog_item_stats.m"
              {
#line 300 "prog_item_stats.m"
                MR_Word base;
#line 300 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 300 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_54_54));
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 300 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 300 "prog_item_stats.m"
              }
#line 299 "prog_item_stats.m"
            }
#line 282 "prog_item_stats.m"
            break;
#line 282 "prog_item_stats.m"
          case (MR_Integer) 19:
#line 283 "prog_item_stats.m"
            {
#line 283 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_70_70 = (parse_tree__prog_item_stats__V_418_418 + (MR_Integer) 1);

#line 284 "prog_item_stats.m"
              {
#line 284 "prog_item_stats.m"
                MR_Word base;
#line 284 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 284 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_70_70));
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 284 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 284 "prog_item_stats.m"
              }
#line 283 "prog_item_stats.m"
            }
#line 282 "prog_item_stats.m"
            break;
#line 282 "prog_item_stats.m"
          case (MR_Integer) 20:
#line 287 "prog_item_stats.m"
            {
#line 287 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_66_66 = (parse_tree__prog_item_stats__V_417_417 + (MR_Integer) 1);

#line 288 "prog_item_stats.m"
              {
#line 288 "prog_item_stats.m"
                MR_Word base;
#line 288 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 288 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_66_66));
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 288 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 288 "prog_item_stats.m"
              }
#line 287 "prog_item_stats.m"
            }
#line 282 "prog_item_stats.m"
            break;
#line 282 "prog_item_stats.m"
          case (MR_Integer) 27:
#line 279 "prog_item_stats.m"
            {
#line 279 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_74_74 = (parse_tree__prog_item_stats__V_419_419 + (MR_Integer) 1);

#line 280 "prog_item_stats.m"
              {
#line 280 "prog_item_stats.m"
                MR_Word base;
#line 280 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 280 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_74_74));
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 280 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 280 "prog_item_stats.m"
              }
#line 279 "prog_item_stats.m"
            }
#line 282 "prog_item_stats.m"
            break;
#line 282 "prog_item_stats.m"
        }
#line 282 "prog_item_stats.m"
        break;
#line 282 "prog_item_stats.m"
    }
#line 276 "prog_item_stats.m"
  }
#line 273 "prog_item_stats.m"
}

#line 220 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_5_p_0(
#line 220 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Item_6,
#line 220 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31,
#line 220 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32,
#line 220 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33,
#line 220 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34)
#line 220 "prog_item_stats.m"
{
#line 226 "prog_item_stats.m"
  {
#line 226 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;

#line 226 "prog_item_stats.m"
#line 226 "prog_item_stats.m"
    switch (MR_tag((MR_Word) parse_tree__prog_item_stats__Item_6)) {
#line 226 "prog_item_stats.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 226 "prog_item_stats.m"
      case (MR_Integer) 0:
#line 226 "prog_item_stats.m"
        {
#line 226 "prog_item_stats.m"
          MR_Word parse_tree__prog_item_stats__ItemClauseInfo_9 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_item_stats__Item_6), (MR_Integer) 0);
#line 226 "prog_item_stats.m"
          MR_Word parse_tree__prog_item_stats__Goal_15;
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_85_85;
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_106_106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));
#line 229 "prog_item_stats.m"
          MR_Word parse_tree__prog_item_stats__V_10_10;
#line 229 "prog_item_stats.m"
          MR_Word parse_tree__prog_item_stats__V_11_11;
#line 229 "prog_item_stats.m"
          MR_Word parse_tree__prog_item_stats__V_12_12;
#line 229 "prog_item_stats.m"
          MR_Word parse_tree__prog_item_stats__V_13_13;
#line 229 "prog_item_stats.m"
          MR_Word parse_tree__prog_item_stats__V_14_14;
#line 229 "prog_item_stats.m"
          MR_Word parse_tree__prog_item_stats__V_16_16;
#line 229 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_17_17;

#line 227 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_85_85 = (parse_tree__prog_item_stats__V_86_86 + (MR_Integer) 1);
#line 227 "prog_item_stats.m"
          {
#line 227 "prog_item_stats.m"
            MR_Word base;
#line 227 "prog_item_stats.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 227 "prog_item_stats.m"
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_85_85));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_89_89));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_90_90));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_91_91));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_92_92));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_93_93));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_94_94));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_95_95));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_96_96));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_97_97));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_98_98));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_99_99));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_100_100));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_101_101));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_102_102));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_103_103));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_104_104));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_105_105));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_106_106));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_107_107));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_108_108));
#line 227 "prog_item_stats.m"
          }
#line 229 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 0)));
#line 229 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 1)));
#line 229 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 2)));
#line 229 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 3)));
#line 229 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 4)));
#line 229 "prog_item_stats.m"
          parse_tree__prog_item_stats__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 5)));
#line 229 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 6)));
#line 229 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 7)));
#line 230 "prog_item_stats.m"
          {
#line 230 "prog_item_stats.m"
            parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__Goal_15, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34);
#line 230 "prog_item_stats.m"
            return;
          }
#line 226 "prog_item_stats.m"
        }
#line 226 "prog_item_stats.m"
        break;
#line 226 "prog_item_stats.m"
      case (MR_Integer) 1:
#line 232 "prog_item_stats.m"
        {
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_81_81;
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_130_130 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_134_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_135_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_136_136 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_137_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_138_138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_139_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_140_140 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_141_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_142_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_143_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_144_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_145_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_147_147 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_148_148 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 232 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_149_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 233 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_81_81 = (parse_tree__prog_item_stats__V_82_82 + (MR_Integer) 1);
#line 233 "prog_item_stats.m"
          {
#line 233 "prog_item_stats.m"
            MR_Word base;
#line 233 "prog_item_stats.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 233 "prog_item_stats.m"
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_130_130));
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_81_81));
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_131_131));
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_132_132));
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_133_133));
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_134_134));
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_135_135));
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_136_136));
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_137_137));
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_138_138));
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_139_139));
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_140_140));
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_141_141));
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_142_142));
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_143_143));
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_144_144));
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_145_145));
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_146_146));
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_147_147));
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_148_148));
#line 233 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_149_149));
#line 233 "prog_item_stats.m"
          }
#line 232 "prog_item_stats.m"
          *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 232 "prog_item_stats.m"
        }
#line 226 "prog_item_stats.m"
        break;
#line 226 "prog_item_stats.m"
      case (MR_Integer) 2:
#line 235 "prog_item_stats.m"
        {
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_77_77;
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_171_171 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_172_172 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_173_173 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_174_174 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_175_175 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_176_176 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_177_177 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_178_178 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_179_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_180_180 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_181_181 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_182_182 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_183_183 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_184_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_185_185 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_186_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_187_187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_188_188 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_189_189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 235 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_190_190 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 236 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_77_77 = (parse_tree__prog_item_stats__V_78_78 + (MR_Integer) 1);
#line 236 "prog_item_stats.m"
          {
#line 236 "prog_item_stats.m"
            MR_Word base;
#line 236 "prog_item_stats.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 236 "prog_item_stats.m"
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_171_171));
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_172_172));
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_77_77));
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_173_173));
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_174_174));
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_175_175));
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_176_176));
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_177_177));
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_178_178));
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_179_179));
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_180_180));
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_181_181));
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_182_182));
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_183_183));
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_184_184));
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_185_185));
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_186_186));
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_187_187));
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_188_188));
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_189_189));
#line 236 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_190_190));
#line 236 "prog_item_stats.m"
          }
#line 235 "prog_item_stats.m"
          *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 235 "prog_item_stats.m"
        }
#line 226 "prog_item_stats.m"
        break;
#line 226 "prog_item_stats.m"
      case (MR_Integer) 3:
#line 226 "prog_item_stats.m"
#line 226 "prog_item_stats.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Item_6, (MR_Integer) 0)))) {
#line 226 "prog_item_stats.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 226 "prog_item_stats.m"
          case (MR_Integer) 0:
#line 238 "prog_item_stats.m"
            {
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_73_73;
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_212_212 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_213_213 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_214_214 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_215_215 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_216_216 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_217_217 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_218_218 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_219_219 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_220_220 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_221_221 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_222_222 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_223_223 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_224_224 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_225_225 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_226_226 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_227_227 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_228_228 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_229_229 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_230_230 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 238 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_231_231 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 239 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_73_73 = (parse_tree__prog_item_stats__V_74_74 + (MR_Integer) 1);
#line 239 "prog_item_stats.m"
              {
#line 239 "prog_item_stats.m"
                MR_Word base;
#line 239 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 239 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_212_212));
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_213_213));
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_214_214));
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_73_73));
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_215_215));
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_216_216));
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_217_217));
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_218_218));
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_219_219));
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_220_220));
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_221_221));
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_222_222));
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_223_223));
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_224_224));
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_225_225));
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_226_226));
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_227_227));
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_228_228));
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_229_229));
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_230_230));
#line 239 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_231_231));
#line 239 "prog_item_stats.m"
              }
#line 238 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 238 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
          case (MR_Integer) 1:
#line 241 "prog_item_stats.m"
            {
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_69_69;
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_253_253 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_254_254 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_255_255 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_256_256 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_257_257 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_258_258 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_259_259 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_260_260 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_261_261 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_262_262 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_263_263 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_264_264 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_265_265 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_266_266 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_267_267 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_268_268 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_269_269 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_270_270 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_271_271 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 241 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_272_272 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 242 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_69_69 = (parse_tree__prog_item_stats__V_70_70 + (MR_Integer) 1);
#line 242 "prog_item_stats.m"
              {
#line 242 "prog_item_stats.m"
                MR_Word base;
#line 242 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 242 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_253_253));
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_254_254));
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_255_255));
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_256_256));
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_69_69));
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_257_257));
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_258_258));
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_259_259));
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_260_260));
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_261_261));
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_262_262));
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_263_263));
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_264_264));
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_265_265));
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_266_266));
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_267_267));
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_268_268));
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_269_269));
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_270_270));
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_271_271));
#line 242 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_272_272));
#line 242 "prog_item_stats.m"
              }
#line 241 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 241 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
          case (MR_Integer) 2:
#line 244 "prog_item_stats.m"
            {
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_65_65;
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_294_294 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_295_295 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_296_296 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_297_297 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_298_298 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_299_299 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_300_300 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_301_301 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_302_302 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_303_303 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_304_304 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_305_305 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_306_306 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_307_307 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_308_308 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_309_309 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_310_310 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_311_311 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_312_312 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 244 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_313_313 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 245 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_65_65 = (parse_tree__prog_item_stats__V_66_66 + (MR_Integer) 1);
#line 245 "prog_item_stats.m"
              {
#line 245 "prog_item_stats.m"
                MR_Word base;
#line 245 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 245 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_294_294));
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_295_295));
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_296_296));
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_297_297));
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_298_298));
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_65_65));
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_299_299));
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_300_300));
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_301_301));
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_302_302));
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_303_303));
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_304_304));
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_305_305));
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_306_306));
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_307_307));
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_308_308));
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_309_309));
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_310_310));
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_311_311));
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_312_312));
#line 245 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_313_313));
#line 245 "prog_item_stats.m"
              }
#line 244 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 244 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
          case (MR_Integer) 3:
#line 247 "prog_item_stats.m"
            {
#line 247 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__ItemPragmaInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Item_6, (MR_Integer) 1)));

#line 248 "prog_item_stats.m"
              {
#line 248 "prog_item_stats.m"
                parse_tree__prog_item_stats__gather_stats_in_item_pragma_3_p_0(parse_tree__prog_item_stats__ItemPragmaInfo_23, parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32);
              }
#line 247 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 247 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
          case (MR_Integer) 4:
#line 250 "prog_item_stats.m"
            {
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_60_60;
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_335_335 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_336_336 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_337_337 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_338_338 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_339_339 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_340_340 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_341_341 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_342_342 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_343_343 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_344_344 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_345_345 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_346_346 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_347_347 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_348_348 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_349_349 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_350_350 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_351_351 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_352_352 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_353_353 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 250 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_354_354 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 251 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_60_60 = (parse_tree__prog_item_stats__V_61_61 + (MR_Integer) 1);
#line 251 "prog_item_stats.m"
              {
#line 251 "prog_item_stats.m"
                MR_Word base;
#line 251 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 251 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_335_335));
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_336_336));
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_337_337));
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_338_338));
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_339_339));
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_340_340));
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_341_341));
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_342_342));
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_343_343));
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_344_344));
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_345_345));
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_346_346));
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_347_347));
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_348_348));
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_60_60));
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_349_349));
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_350_350));
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_351_351));
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_352_352));
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_353_353));
#line 251 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_354_354));
#line 251 "prog_item_stats.m"
              }
#line 250 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 250 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
          case (MR_Integer) 5:
#line 253 "prog_item_stats.m"
            {
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_56_56;
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_376_376 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_377_377 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_378_378 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_379_379 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_380_380 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_381_381 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_382_382 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_383_383 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_384_384 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_385_385 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_386_386 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_387_387 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_388_388 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_389_389 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_390_390 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_391_391 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_392_392 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_393_393 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_394_394 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 253 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_395_395 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 254 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_56_56 = (parse_tree__prog_item_stats__V_57_57 + (MR_Integer) 1);
#line 254 "prog_item_stats.m"
              {
#line 254 "prog_item_stats.m"
                MR_Word base;
#line 254 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 254 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_376_376));
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_377_377));
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_378_378));
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_379_379));
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_380_380));
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_381_381));
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_382_382));
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_383_383));
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_384_384));
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_385_385));
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_386_386));
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_387_387));
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_388_388));
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_389_389));
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_390_390));
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_56_56));
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_391_391));
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_392_392));
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_393_393));
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_394_394));
#line 254 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_395_395));
#line 254 "prog_item_stats.m"
              }
#line 253 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 253 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
          case (MR_Integer) 6:
#line 256 "prog_item_stats.m"
            {
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_52_52;
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_417_417 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_418_418 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_419_419 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_420_420 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_421_421 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_422_422 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_423_423 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_424_424 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_425_425 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_426_426 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_427_427 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_428_428 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_429_429 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_430_430 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_431_431 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_432_432 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_433_433 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_434_434 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_435_435 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 256 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_436_436 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 257 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_52_52 = (parse_tree__prog_item_stats__V_53_53 + (MR_Integer) 1);
#line 257 "prog_item_stats.m"
              {
#line 257 "prog_item_stats.m"
                MR_Word base;
#line 257 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 257 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_426_426));
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_427_427));
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_428_428));
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_429_429));
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_430_430));
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_431_431));
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_432_432));
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_52_52));
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_433_433));
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_434_434));
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_435_435));
#line 257 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_436_436));
#line 257 "prog_item_stats.m"
              }
#line 256 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 256 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
          case (MR_Integer) 7:
#line 259 "prog_item_stats.m"
            {
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_48_48;
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_458_458 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_459_459 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_460_460 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_461_461 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_462_462 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_463_463 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_464_464 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_465_465 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_466_466 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_467_467 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_468_468 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_469_469 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_470_470 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_471_471 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_472_472 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_473_473 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_474_474 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_475_475 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_476_476 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 259 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_477_477 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 261 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_48_48 = (parse_tree__prog_item_stats__V_49_49 + (MR_Integer) 1);
#line 260 "prog_item_stats.m"
              {
#line 260 "prog_item_stats.m"
                MR_Word base;
#line 260 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 260 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_458_458));
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_459_459));
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_460_460));
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_461_461));
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_462_462));
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_463_463));
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_464_464));
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_465_465));
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_466_466));
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_467_467));
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_468_468));
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_469_469));
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_470_470));
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_471_471));
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_472_472));
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_473_473));
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_474_474));
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_48_48));
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_475_475));
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_476_476));
#line 260 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_477_477));
#line 260 "prog_item_stats.m"
              }
#line 259 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 259 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
          case (MR_Integer) 8:
#line 263 "prog_item_stats.m"
            {
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_44_44;
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_499_499 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_500_500 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_501_501 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_502_502 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_503_503 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_504_504 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_505_505 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_506_506 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_507_507 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_508_508 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_509_509 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_510_510 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_511_511 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_512_512 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_513_513 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_514_514 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_515_515 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_516_516 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_517_517 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 263 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_518_518 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 264 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_44_44 = (parse_tree__prog_item_stats__V_45_45 + (MR_Integer) 1);
#line 264 "prog_item_stats.m"
              {
#line 264 "prog_item_stats.m"
                MR_Word base;
#line 264 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 264 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_499_499));
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_500_500));
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_501_501));
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_502_502));
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_503_503));
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_504_504));
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_505_505));
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_506_506));
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_507_507));
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_508_508));
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_509_509));
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_510_510));
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_511_511));
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_512_512));
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_513_513));
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_514_514));
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_515_515));
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_516_516));
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_44_44));
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_517_517));
#line 264 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_518_518));
#line 264 "prog_item_stats.m"
              }
#line 263 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 263 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
          case (MR_Integer) 9:
#line 266 "prog_item_stats.m"
            {
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_40_40;
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_540_540 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_541_541 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_542_542 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_543_543 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_544_544 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_545_545 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_546_546 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_547_547 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_548_548 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_549_549 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_550_550 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_551_551 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_552_552 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_553_553 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_554_554 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_555_555 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_556_556 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_557_557 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_558_558 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 266 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_559_559 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));

#line 267 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_40_40 = (parse_tree__prog_item_stats__V_41_41 + (MR_Integer) 1);
#line 267 "prog_item_stats.m"
              {
#line 267 "prog_item_stats.m"
                MR_Word base;
#line 267 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 267 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_540_540));
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_541_541));
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_542_542));
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_543_543));
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_544_544));
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_545_545));
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_546_546));
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_547_547));
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_548_548));
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_549_549));
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_550_550));
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_551_551));
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_552_552));
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_553_553));
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_554_554));
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_555_555));
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_556_556));
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_557_557));
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_558_558));
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_40_40));
#line 267 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_559_559));
#line 267 "prog_item_stats.m"
              }
#line 266 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 266 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
          case (MR_Integer) 10:
#line 269 "prog_item_stats.m"
            {
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_36_36;
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 20)));
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_581_581 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 0)));
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_582_582 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 1)));
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_583_583 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 2)));
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_584_584 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 3)));
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_585_585 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 4)));
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_586_586 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 5)));
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_587_587 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 6)));
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_588_588 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 7)));
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_589_589 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 8)));
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_590_590 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 9)));
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_591_591 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 10)));
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_592_592 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 11)));
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_593_593 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 12)));
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_594_594 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 13)));
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_595_595 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 14)));
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_596_596 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 15)));
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_597_597 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 16)));
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_598_598 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 17)));
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_599_599 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 18)));
#line 269 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_600_600 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_31, (MR_Integer) 19)));

#line 270 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_36_36 = (parse_tree__prog_item_stats__V_37_37 + (MR_Integer) 1);
#line 270 "prog_item_stats.m"
              {
#line 270 "prog_item_stats.m"
                MR_Word base;
#line 270 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 270 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_32 = base;
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_581_581));
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_582_582));
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_583_583));
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_584_584));
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_585_585));
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_586_586));
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_587_587));
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_588_588));
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_589_589));
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_590_590));
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_591_591));
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_592_592));
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_593_593));
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_594_594));
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_595_595));
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_596_596));
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_597_597));
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_598_598));
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_599_599));
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_600_600));
#line 270 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_36_36));
#line 270 "prog_item_stats.m"
              }
#line 269 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_34 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_33;
#line 269 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
        }
#line 226 "prog_item_stats.m"
        break;
#line 226 "prog_item_stats.m"
    }
#line 226 "prog_item_stats.m"
  }
#line 220 "prog_item_stats.m"
}

#line 212 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_items_5_p_0(
#line 212 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 212 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_2,
#line 212 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_3,
#line 212 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_4,
#line 212 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_5)
#line 212 "prog_item_stats.m"
{
#line 215 "prog_item_stats.m"
  while (MR_TRUE)
#line 215 "prog_item_stats.m"
    {
#line 215 "prog_item_stats.m"
      /* tailcall optimized into a loop */
#line 215 "prog_item_stats.m"
      {
#line 215 "prog_item_stats.m"
        MR_bool parse_tree__prog_item_stats__succeeded;

#line 215 "prog_item_stats.m"
        if ((parse_tree__prog_item_stats__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 215 "prog_item_stats.m"
          {
#line 215 "prog_item_stats.m"
            *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_5 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_4;
#line 215 "prog_item_stats.m"
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_3 = parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_2;
#line 215 "prog_item_stats.m"
          }
#line 215 "prog_item_stats.m"
        else
#line 216 "prog_item_stats.m"
          {
#line 216 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Item_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
#line 216 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
#line 216 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_20_20;
#line 216 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_21_21;

#line 217 "prog_item_stats.m"
            {
#line 217 "prog_item_stats.m"
              parse_tree__prog_item_stats__gather_stats_in_item_5_p_0(parse_tree__prog_item_stats__Item_12, parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_2, &parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_20_20, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_4, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_21_21);
            }
#line 218 "prog_item_stats.m"
            /* direct tailcall eliminated */
#line 218 "prog_item_stats.m"
            {
#line 218 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1 = parse_tree__prog_item_stats__Items_13;
#line 218 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0__tmp_copy_2 = parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_20_20;
#line 218 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_4 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_21_21;

#line 218 "prog_item_stats.m"
              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_4 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_4;
#line 218 "prog_item_stats.m"
              parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_2 = parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0__tmp_copy_2;
#line 218 "prog_item_stats.m"
              parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1;
#line 218 "prog_item_stats.m"
            }
#line 218 "prog_item_stats.m"
            continue;
#line 216 "prog_item_stats.m"
          }
#line 215 "prog_item_stats.m"
      }
#line 215 "prog_item_stats.m"
      break;
#line 215 "prog_item_stats.m"
    }
#line 212 "prog_item_stats.m"
}

#line 505 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0_1(
#line 505 "prog_item_stats.m"
  MR_Box parse_tree__prog_item_stats__closure_arg,
#line 505 "prog_item_stats.m"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 505 "prog_item_stats.m"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 505 "prog_item_stats.m"
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_3)
#line 505 "prog_item_stats.m"
{
#line 505 "prog_item_stats.m"
  {
#line 505 "prog_item_stats.m"
    MR_Box parse_tree__prog_item_stats__closure = parse_tree__prog_item_stats__closure_arg;

#line 505 "prog_item_stats.m"
    {
#line 505 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_section_stats_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_1));
#line 505 "prog_item_stats.m"
      return;
    }
#line 505 "prog_item_stats.m"
  }
#line 505 "prog_item_stats.m"
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
#line 49 "prog_item_stats.m"
  {
#line 49 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 49 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__CompUnitStats_8;
#line 49 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_11_11;
#line 49 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__SrcItemBlocks_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 3)));
#line 49 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__DirectIntItemBlocks_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 4)));
#line 49 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__IndirectIntItemBlocks_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 5)));
#line 49 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__OptItemBlocks_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 6)));
#line 49 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__IntForOptItemBlocks_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 7)));
#line 49 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_14_31;
#line 49 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_16_33;
#line 49 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_18_35;
#line 49 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_20_37;
#line 49 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_22_39;
#line 49 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__SectionStatPairs_64;
#line 49 "prog_item_stats.m"
    MR_String parse_tree__prog_item_stats__V_69_69;
#line 49 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_71_71;
#line 49 "prog_item_stats.m"
    MR_String parse_tree__prog_item_stats__V_83_83;
#line 151 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats___ModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 0)));
#line 151 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats___ModuleNameContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 1)));
#line 151 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats___ModuleVersionNumbers_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 2)));
#line 51 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_13_13;
#line 51 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_14_14;
#line 51 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_15_15;
#line 51 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_16_16;
#line 51 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_17_17;
#line 51 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_18_18;
#line 51 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_19_19;
#line 505 "prog_item_stats.m"
    MR_Box parse_tree__prog_item_stats__conv0_STATE_VARIABLE_IO_10;

#line 156 "prog_item_stats.m"
    {
#line 156 "prog_item_stats.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_14_31);
    }
#line 157 "prog_item_stats.m"
    {
#line 157 "prog_item_stats.m"
      parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho4_4_p_0(parse_tree__prog_item_stats__SrcItemBlocks_26, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_14_31, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_16_33);
    }
#line 159 "prog_item_stats.m"
    {
#line 159 "prog_item_stats.m"
      parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho3_4_p_0(parse_tree__prog_item_stats__DirectIntItemBlocks_27, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_16_33, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_18_35);
    }
#line 161 "prog_item_stats.m"
    {
#line 161 "prog_item_stats.m"
      parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho3_4_p_0(parse_tree__prog_item_stats__IndirectIntItemBlocks_28, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_18_35, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_20_37);
    }
#line 163 "prog_item_stats.m"
    {
#line 163 "prog_item_stats.m"
      parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho2_4_p_0(parse_tree__prog_item_stats__IntForOptItemBlocks_30, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_20_37, &parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_22_39);
    }
#line 165 "prog_item_stats.m"
    {
#line 165 "prog_item_stats.m"
      parse_tree__prog_item_stats__gather_stats_in_item_blocks__ho1_4_p_0(parse_tree__prog_item_stats__OptItemBlocks_29, parse_tree__prog_item_stats__STATE_VARIABLE_CompUnitStats_22_39, &parse_tree__prog_item_stats__CompUnitStats_8);
    }
#line 51 "prog_item_stats.m"
    parse_tree__prog_item_stats__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 0)));
#line 51 "prog_item_stats.m"
    parse_tree__prog_item_stats__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 1)));
#line 51 "prog_item_stats.m"
    parse_tree__prog_item_stats__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 2)));
#line 51 "prog_item_stats.m"
    parse_tree__prog_item_stats__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 3)));
#line 51 "prog_item_stats.m"
    parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 4)));
#line 51 "prog_item_stats.m"
    parse_tree__prog_item_stats__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 5)));
#line 51 "prog_item_stats.m"
    parse_tree__prog_item_stats__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 6)));
#line 51 "prog_item_stats.m"
    parse_tree__prog_item_stats__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__AugCompUnit_6, (MR_Integer) 7)));
#line 503 "prog_item_stats.m"
    {
#line 503 "prog_item_stats.m"
      parse_tree__prog_item_stats__V_69_69 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_item_stats__V_11_11);
    }
#line 503 "prog_item_stats.m"
    {
#line 503 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_5, (MR_String) "MODULE ");
    }
#line 503 "prog_item_stats.m"
    {
#line 503 "prog_item_stats.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &parse_tree__prog_item_stats_scalar_common_4[0], parse_tree__prog_item_stats__V_69_69, &parse_tree__prog_item_stats__V_83_83);
    }
#line 503 "prog_item_stats.m"
    {
#line 503 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__V_83_83);
    }
#line 503 "prog_item_stats.m"
    {
#line 503 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_5, (MR_String) "\n");
    }
#line 504 "prog_item_stats.m"
    {
#line 504 "prog_item_stats.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, parse_tree__prog_item_stats__CompUnitStats_8, &parse_tree__prog_item_stats__SectionStatPairs_64);
    }
#line 505 "prog_item_stats.m"
    {
#line 505 "prog_item_stats.m"
      parse_tree__prog_item_stats__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 505 "prog_item_stats.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_71_71, 0) = ((MR_Box) (&parse_tree__prog_item_stats_scalar_common_5[0]));
#line 505 "prog_item_stats.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_71_71, 1) = ((MR_Box) (parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0_1));
#line 505 "prog_item_stats.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 505 "prog_item_stats.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_71_71, 3) = ((MR_Box) (parse_tree__prog_item_stats__Stream_5));
#line 505 "prog_item_stats.m"
    }
#line 505 "prog_item_stats.m"
    {
#line 505 "prog_item_stats.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item_stats_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__prog_item_stats__V_71_71, parse_tree__prog_item_stats__SectionStatPairs_64, ((MR_Box) ((MR_Integer) 0)), &parse_tree__prog_item_stats__conv0_STATE_VARIABLE_IO_10);
    }
#line 49 "prog_item_stats.m"
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
