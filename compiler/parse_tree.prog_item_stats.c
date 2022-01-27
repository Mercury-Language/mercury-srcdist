/*
** Automatically generated from `prog_item_stats.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 98 "parse_tree.prog_item_stats.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_item_stats__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_item_stats__type_ctor_info_section_stats_0;

#line 101 "parse_tree.prog_item_stats.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_item_stats__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_item_stats__type_ctor_info_section_stats_0;

#line 104 "parse_tree.prog_item_stats.c"
static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_goal_stats_0_0[26];

#line 107 "parse_tree.prog_item_stats.c"
static const MR_ConstString parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_goal_stats_0_0[26];

#line 110 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDesc parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_goal_stats_0_0;

#line 113 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_goal_stats_0_0[1];

#line 116 "parse_tree.prog_item_stats.c"
static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_goal_stats_0[1];

#line 119 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_goal_stats_0[1];

#line 122 "parse_tree.prog_item_stats.c"
static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_goal_stats_0[1];

#line 125 "parse_tree.prog_item_stats.c"
static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_item_stats_0_0[21];

#line 128 "parse_tree.prog_item_stats.c"
static const MR_ConstString parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_item_stats_0_0[21];

#line 131 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDesc parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_item_stats_0_0;

#line 134 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_item_stats_0_0[1];

#line 137 "parse_tree.prog_item_stats.c"
static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_item_stats_0[1];

#line 140 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_item_stats_0[1];

#line 143 "parse_tree.prog_item_stats.c"
static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_item_stats_0[1];

#line 146 "parse_tree.prog_item_stats.c"
static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_section_stats_0_0[2];

#line 149 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDesc parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_section_stats_0_0;

#line 152 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_section_stats_0_0[1];

#line 155 "parse_tree.prog_item_stats.c"
static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_section_stats_0[1];

#line 158 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_section_stats_0[1];

#line 161 "parse_tree.prog_item_stats.c"
static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_section_stats_0[1];

#line 164 "parse_tree.prog_item_stats.c"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0_10001(
#line 167 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 169 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2);

#line 172 "parse_tree.prog_item_stats.c"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0_10001(
#line 175 "parse_tree.prog_item_stats.c"
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
#line 177 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 179 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3);

#line 182 "parse_tree.prog_item_stats.c"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____goal_stats_0_0_10001(
#line 185 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 187 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2);

#line 190 "parse_tree.prog_item_stats.c"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____goal_stats_0_0_10001(
#line 193 "parse_tree.prog_item_stats.c"
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
#line 195 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 197 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3);

#line 200 "parse_tree.prog_item_stats.c"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____item_stats_0_0_10001(
#line 203 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 205 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2);

#line 208 "parse_tree.prog_item_stats.c"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____item_stats_0_0_10001(
#line 211 "parse_tree.prog_item_stats.c"
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
#line 213 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 215 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3);

#line 218 "parse_tree.prog_item_stats.c"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____section_stats_0_0_10001(
#line 221 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 223 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2);

#line 226 "parse_tree.prog_item_stats.c"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____section_stats_0_0_10001(
#line 229 "parse_tree.prog_item_stats.c"
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
#line 231 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 233 "parse_tree.prog_item_stats.c"
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

#line 599 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__write_one_stat_6_p_0(
#line 599 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Stream_7,
#line 599 "prog_item_stats.m"
  MR_String parse_tree__prog_item_stats__SectionName_8,
#line 599 "prog_item_stats.m"
  MR_String parse_tree__prog_item_stats__StatName_9,
#line 599 "prog_item_stats.m"
  MR_Integer parse_tree__prog_item_stats__StatNum_10);

#line 555 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__write_goal_stats_5_p_0(
#line 555 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Stream_6,
#line 555 "prog_item_stats.m"
  MR_String parse_tree__prog_item_stats__SectionName_7,
#line 555 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__GoalStats_8);

#line 516 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__write_section_stats_4_p_0(
#line 516 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Stream_5,
#line 516 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2);

#line 497 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_catch_exprs_3_p_0(
#line 497 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 497 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2,
#line 497 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3);

#line 354 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(
#line 354 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Goal_4,
#line 354 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80,
#line 354 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_81);

#line 346 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(
#line 346 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 346 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2,
#line 346 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3);

#line 278 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_pragma_3_p_0(
#line 278 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__ItemPragmaInfo_4,
#line 278 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43,
#line 278 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44);

#line 220 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_5_p_0(
#line 220 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Item_6,
#line 220 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33,
#line 220 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34,
#line 220 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35,
#line 220 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36);

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

#line 514 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0_1(
#line 514 "prog_item_stats.m"
  MR_Box parse_tree__prog_item_stats__closure_arg,
#line 514 "prog_item_stats.m"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 514 "prog_item_stats.m"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 514 "prog_item_stats.m"
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



#line 575 "parse_tree.prog_item_stats.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_item_stats__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_item_stats__type_ctor_info_section_stats_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0
  }
};

#line 584 "parse_tree.prog_item_stats.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_item_stats__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_item_stats__type_ctor_info_section_stats_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0
  }
};

#line 593 "parse_tree.prog_item_stats.c"
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

#line 610 "parse_tree.prog_item_stats.c"
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

#line 640 "parse_tree.prog_item_stats.c"
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

#line 670 "parse_tree.prog_item_stats.c"
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

#line 685 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_goal_stats_0_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_goal_stats_0_0
};

#line 690 "parse_tree.prog_item_stats.c"
static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_goal_stats_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_goal_stats_0_0
  }
};

#line 699 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_goal_stats_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_goal_stats_0_0
};

#line 704 "parse_tree.prog_item_stats.c"
static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_goal_stats_0[1] = {
  (MR_Integer) 0
};

#line 709 "parse_tree.prog_item_stats.c"
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

#line 726 "parse_tree.prog_item_stats.c"
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

#line 751 "parse_tree.prog_item_stats.c"
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

#line 776 "parse_tree.prog_item_stats.c"
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

#line 791 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_item_stats_0_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_item_stats_0_0
};

#line 796 "parse_tree.prog_item_stats.c"
static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_item_stats_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_item_stats_0_0
  }
};

#line 805 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_item_stats_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_item_stats_0_0
};

#line 810 "parse_tree.prog_item_stats.c"
static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_item_stats_0[1] = {
  (MR_Integer) 0
};

#line 815 "parse_tree.prog_item_stats.c"
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

#line 832 "parse_tree.prog_item_stats.c"
static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_section_stats_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_item_stats_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_goal_stats_0
};

#line 838 "parse_tree.prog_item_stats.c"
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

#line 853 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_section_stats_0_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_section_stats_0_0
};

#line 858 "parse_tree.prog_item_stats.c"
static const MR_DuPtagLayout parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_ptag_ordered_section_stats_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_stag_ordered_section_stats_0_0
  }
};

#line 867 "parse_tree.prog_item_stats.c"
static const MR_DuFunctorDescPtr parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_name_ordered_section_stats_0[1] = {
  &parse_tree__prog_item_stats__parse_tree__prog_item_stats__du_functor_desc_section_stats_0_0
};

#line 872 "parse_tree.prog_item_stats.c"
static const MR_Integer parse_tree__prog_item_stats__parse_tree__prog_item_stats__functor_number_map_section_stats_0[1] = {
  (MR_Integer) 0
};

#line 877 "parse_tree.prog_item_stats.c"
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

#line 894 "parse_tree.prog_item_stats.c"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0_10001(
#line 897 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 899 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2)
#line 901 "parse_tree.prog_item_stats.c"
{
#line 903 "parse_tree.prog_item_stats.c"
  {
#line 905 "parse_tree.prog_item_stats.c"
    MR_bool parse_tree__prog_item_stats__succeeded;

#line 908 "parse_tree.prog_item_stats.c"
    {
#line 910 "parse_tree.prog_item_stats.c"
      parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____comp_unit_stats_0_0(((MR_Word) parse_tree__prog_item_stats__wrapper_arg_1), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2));
    }
#line 913 "parse_tree.prog_item_stats.c"
    return parse_tree__prog_item_stats__succeeded;
#line 915 "parse_tree.prog_item_stats.c"
  }
#line 917 "parse_tree.prog_item_stats.c"
}

#line 920 "parse_tree.prog_item_stats.c"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0_10001(
#line 923 "parse_tree.prog_item_stats.c"
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
#line 925 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 927 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3)
#line 929 "parse_tree.prog_item_stats.c"
{
#line 931 "parse_tree.prog_item_stats.c"
  {
#line 933 "parse_tree.prog_item_stats.c"
    MR_Word parse_tree__prog_item_stats__conv0_HeadVar__1_1;

#line 936 "parse_tree.prog_item_stats.c"
    {
#line 938 "parse_tree.prog_item_stats.c"
      parse_tree__prog_item_stats____Compare____comp_unit_stats_0_0(&parse_tree__prog_item_stats__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_3));
    }
#line 941 "parse_tree.prog_item_stats.c"
    *parse_tree__prog_item_stats__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_item_stats__conv0_HeadVar__1_1));
#line 943 "parse_tree.prog_item_stats.c"
  }
#line 945 "parse_tree.prog_item_stats.c"
}

#line 948 "parse_tree.prog_item_stats.c"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____goal_stats_0_0_10001(
#line 951 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 953 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2)
#line 955 "parse_tree.prog_item_stats.c"
{
#line 957 "parse_tree.prog_item_stats.c"
  {
#line 959 "parse_tree.prog_item_stats.c"
    MR_bool parse_tree__prog_item_stats__succeeded;

#line 962 "parse_tree.prog_item_stats.c"
    {
#line 964 "parse_tree.prog_item_stats.c"
      parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____goal_stats_0_0(((MR_Word) parse_tree__prog_item_stats__wrapper_arg_1), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2));
    }
#line 967 "parse_tree.prog_item_stats.c"
    return parse_tree__prog_item_stats__succeeded;
#line 969 "parse_tree.prog_item_stats.c"
  }
#line 971 "parse_tree.prog_item_stats.c"
}

#line 974 "parse_tree.prog_item_stats.c"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____goal_stats_0_0_10001(
#line 977 "parse_tree.prog_item_stats.c"
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
#line 979 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 981 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3)
#line 983 "parse_tree.prog_item_stats.c"
{
#line 985 "parse_tree.prog_item_stats.c"
  {
#line 987 "parse_tree.prog_item_stats.c"
    MR_Word parse_tree__prog_item_stats__conv0_HeadVar__1_1;

#line 990 "parse_tree.prog_item_stats.c"
    {
#line 992 "parse_tree.prog_item_stats.c"
      parse_tree__prog_item_stats____Compare____goal_stats_0_0(&parse_tree__prog_item_stats__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_3));
    }
#line 995 "parse_tree.prog_item_stats.c"
    *parse_tree__prog_item_stats__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_item_stats__conv0_HeadVar__1_1));
#line 997 "parse_tree.prog_item_stats.c"
  }
#line 999 "parse_tree.prog_item_stats.c"
}

#line 1002 "parse_tree.prog_item_stats.c"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____item_stats_0_0_10001(
#line 1005 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 1007 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2)
#line 1009 "parse_tree.prog_item_stats.c"
{
#line 1011 "parse_tree.prog_item_stats.c"
  {
#line 1013 "parse_tree.prog_item_stats.c"
    MR_bool parse_tree__prog_item_stats__succeeded;

#line 1016 "parse_tree.prog_item_stats.c"
    {
#line 1018 "parse_tree.prog_item_stats.c"
      parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____item_stats_0_0(((MR_Word) parse_tree__prog_item_stats__wrapper_arg_1), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2));
    }
#line 1021 "parse_tree.prog_item_stats.c"
    return parse_tree__prog_item_stats__succeeded;
#line 1023 "parse_tree.prog_item_stats.c"
  }
#line 1025 "parse_tree.prog_item_stats.c"
}

#line 1028 "parse_tree.prog_item_stats.c"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____item_stats_0_0_10001(
#line 1031 "parse_tree.prog_item_stats.c"
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
#line 1033 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 1035 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3)
#line 1037 "parse_tree.prog_item_stats.c"
{
#line 1039 "parse_tree.prog_item_stats.c"
  {
#line 1041 "parse_tree.prog_item_stats.c"
    MR_Word parse_tree__prog_item_stats__conv0_HeadVar__1_1;

#line 1044 "parse_tree.prog_item_stats.c"
    {
#line 1046 "parse_tree.prog_item_stats.c"
      parse_tree__prog_item_stats____Compare____item_stats_0_0(&parse_tree__prog_item_stats__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_3));
    }
#line 1049 "parse_tree.prog_item_stats.c"
    *parse_tree__prog_item_stats__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_item_stats__conv0_HeadVar__1_1));
#line 1051 "parse_tree.prog_item_stats.c"
  }
#line 1053 "parse_tree.prog_item_stats.c"
}

#line 1056 "parse_tree.prog_item_stats.c"
static MR_bool MR_CALL 
parse_tree__prog_item_stats____Unify____section_stats_0_0_10001(
#line 1059 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 1061 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2)
#line 1063 "parse_tree.prog_item_stats.c"
{
#line 1065 "parse_tree.prog_item_stats.c"
  {
#line 1067 "parse_tree.prog_item_stats.c"
    MR_bool parse_tree__prog_item_stats__succeeded;

#line 1070 "parse_tree.prog_item_stats.c"
    {
#line 1072 "parse_tree.prog_item_stats.c"
      parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____section_stats_0_0(((MR_Word) parse_tree__prog_item_stats__wrapper_arg_1), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2));
    }
#line 1075 "parse_tree.prog_item_stats.c"
    return parse_tree__prog_item_stats__succeeded;
#line 1077 "parse_tree.prog_item_stats.c"
  }
#line 1079 "parse_tree.prog_item_stats.c"
}

#line 1082 "parse_tree.prog_item_stats.c"
static void MR_CALL 
parse_tree__prog_item_stats____Compare____section_stats_0_0_10001(
#line 1085 "parse_tree.prog_item_stats.c"
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_1,
#line 1087 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 1089 "parse_tree.prog_item_stats.c"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_3)
#line 1091 "parse_tree.prog_item_stats.c"
{
#line 1093 "parse_tree.prog_item_stats.c"
  {
#line 1095 "parse_tree.prog_item_stats.c"
    MR_Word parse_tree__prog_item_stats__conv0_HeadVar__1_1;

#line 1098 "parse_tree.prog_item_stats.c"
    {
#line 1100 "parse_tree.prog_item_stats.c"
      parse_tree__prog_item_stats____Compare____section_stats_0_0(&parse_tree__prog_item_stats__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_2), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_3));
    }
#line 1103 "parse_tree.prog_item_stats.c"
    *parse_tree__prog_item_stats__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_item_stats__conv0_HeadVar__1_1));
#line 1105 "parse_tree.prog_item_stats.c"
  }
#line 1107 "parse_tree.prog_item_stats.c"
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
#line 198 "prog_item_stats.m"
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
#line 198 "prog_item_stats.m"
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
#line 198 "prog_item_stats.m"
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
#line 198 "prog_item_stats.m"
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
#line 198 "prog_item_stats.m"
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
#line 198 "prog_item_stats.m"
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
#line 198 "prog_item_stats.m"
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
#line 198 "prog_item_stats.m"
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
#line 198 "prog_item_stats.m"
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
#line 198 "prog_item_stats.m"
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
#line 198 "prog_item_stats.m"
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
#line 198 "prog_item_stats.m"
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
#line 1844 "parse_tree.prog_item_stats.c"
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
#line 1866 "parse_tree.prog_item_stats.c"
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

#line 1925 "parse_tree.prog_item_stats.c"
        {
#line 1927 "parse_tree.prog_item_stats.c"
          parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____item_stats_0_0(parse_tree__prog_item_stats__V_3_3, parse_tree__prog_item_stats__V_5_5);
        }
#line 120 "prog_item_stats.m"
        if (parse_tree__prog_item_stats__succeeded)
#line 1932 "parse_tree.prog_item_stats.c"
          {
#line 1934 "parse_tree.prog_item_stats.c"
            parse_tree__prog_item_stats__succeeded = parse_tree__prog_item_stats____Unify____goal_stats_0_0(parse_tree__prog_item_stats__V_4_4, parse_tree__prog_item_stats__V_6_6);
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
#line 1970 "parse_tree.prog_item_stats.c"
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
#line 2068 "parse_tree.prog_item_stats.c"
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
#line 2088 "parse_tree.prog_item_stats.c"
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
#line 2108 "parse_tree.prog_item_stats.c"
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
#line 2128 "parse_tree.prog_item_stats.c"
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
#line 2148 "parse_tree.prog_item_stats.c"
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
#line 2168 "parse_tree.prog_item_stats.c"
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
#line 2188 "parse_tree.prog_item_stats.c"
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
#line 2208 "parse_tree.prog_item_stats.c"
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
#line 2228 "parse_tree.prog_item_stats.c"
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
#line 2248 "parse_tree.prog_item_stats.c"
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
#line 2268 "parse_tree.prog_item_stats.c"
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
#line 2288 "parse_tree.prog_item_stats.c"
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
#line 2308 "parse_tree.prog_item_stats.c"
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
#line 2328 "parse_tree.prog_item_stats.c"
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
#line 2348 "parse_tree.prog_item_stats.c"
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
#line 2368 "parse_tree.prog_item_stats.c"
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
#line 2388 "parse_tree.prog_item_stats.c"
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
#line 2408 "parse_tree.prog_item_stats.c"
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
#line 2428 "parse_tree.prog_item_stats.c"
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
#line 2448 "parse_tree.prog_item_stats.c"
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

#line 2621 "parse_tree.prog_item_stats.c"
        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_3_3 == parse_tree__prog_item_stats__V_24_24);
#line 56 "prog_item_stats.m"
        if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
          {
#line 2627 "parse_tree.prog_item_stats.c"
            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_4_4 == parse_tree__prog_item_stats__V_25_25);
#line 56 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
              {
#line 2633 "parse_tree.prog_item_stats.c"
                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_5_5 == parse_tree__prog_item_stats__V_26_26);
#line 56 "prog_item_stats.m"
                if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                  {
#line 2639 "parse_tree.prog_item_stats.c"
                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_6_6 == parse_tree__prog_item_stats__V_27_27);
#line 56 "prog_item_stats.m"
                    if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                      {
#line 2645 "parse_tree.prog_item_stats.c"
                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_7_7 == parse_tree__prog_item_stats__V_28_28);
#line 56 "prog_item_stats.m"
                        if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                          {
#line 2651 "parse_tree.prog_item_stats.c"
                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_8_8 == parse_tree__prog_item_stats__V_29_29);
#line 56 "prog_item_stats.m"
                            if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                              {
#line 2657 "parse_tree.prog_item_stats.c"
                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_9_9 == parse_tree__prog_item_stats__V_30_30);
#line 56 "prog_item_stats.m"
                                if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                  {
#line 2663 "parse_tree.prog_item_stats.c"
                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_10_10 == parse_tree__prog_item_stats__V_31_31);
#line 56 "prog_item_stats.m"
                                    if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                      {
#line 2669 "parse_tree.prog_item_stats.c"
                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_11_11 == parse_tree__prog_item_stats__V_32_32);
#line 56 "prog_item_stats.m"
                                        if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                          {
#line 2675 "parse_tree.prog_item_stats.c"
                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_12_12 == parse_tree__prog_item_stats__V_33_33);
#line 56 "prog_item_stats.m"
                                            if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                              {
#line 2681 "parse_tree.prog_item_stats.c"
                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_13_13 == parse_tree__prog_item_stats__V_34_34);
#line 56 "prog_item_stats.m"
                                                if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                  {
#line 2687 "parse_tree.prog_item_stats.c"
                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_14_14 == parse_tree__prog_item_stats__V_35_35);
#line 56 "prog_item_stats.m"
                                                    if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                      {
#line 2693 "parse_tree.prog_item_stats.c"
                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_15_15 == parse_tree__prog_item_stats__V_36_36);
#line 56 "prog_item_stats.m"
                                                        if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                          {
#line 2699 "parse_tree.prog_item_stats.c"
                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_16_16 == parse_tree__prog_item_stats__V_37_37);
#line 56 "prog_item_stats.m"
                                                            if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                              {
#line 2705 "parse_tree.prog_item_stats.c"
                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_17_17 == parse_tree__prog_item_stats__V_38_38);
#line 56 "prog_item_stats.m"
                                                                if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                                  {
#line 2711 "parse_tree.prog_item_stats.c"
                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_18_18 == parse_tree__prog_item_stats__V_39_39);
#line 56 "prog_item_stats.m"
                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                                      {
#line 2717 "parse_tree.prog_item_stats.c"
                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_19_19 == parse_tree__prog_item_stats__V_40_40);
#line 56 "prog_item_stats.m"
                                                                        if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                                          {
#line 2723 "parse_tree.prog_item_stats.c"
                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_20_20 == parse_tree__prog_item_stats__V_41_41);
#line 56 "prog_item_stats.m"
                                                                            if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                                              {
#line 2729 "parse_tree.prog_item_stats.c"
                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_21_21 == parse_tree__prog_item_stats__V_42_42);
#line 56 "prog_item_stats.m"
                                                                                if (parse_tree__prog_item_stats__succeeded)
#line 56 "prog_item_stats.m"
                                                                                  {
#line 2735 "parse_tree.prog_item_stats.c"
                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_22_22 == parse_tree__prog_item_stats__V_43_43);
#line 56 "prog_item_stats.m"
                                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 2739 "parse_tree.prog_item_stats.c"
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
#line 2812 "parse_tree.prog_item_stats.c"
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
#line 2930 "parse_tree.prog_item_stats.c"
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
#line 2950 "parse_tree.prog_item_stats.c"
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
#line 2970 "parse_tree.prog_item_stats.c"
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
#line 2990 "parse_tree.prog_item_stats.c"
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
#line 3010 "parse_tree.prog_item_stats.c"
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
#line 3030 "parse_tree.prog_item_stats.c"
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
#line 3050 "parse_tree.prog_item_stats.c"
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
#line 3070 "parse_tree.prog_item_stats.c"
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
#line 3090 "parse_tree.prog_item_stats.c"
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
#line 3110 "parse_tree.prog_item_stats.c"
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
#line 3130 "parse_tree.prog_item_stats.c"
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
#line 3150 "parse_tree.prog_item_stats.c"
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
#line 3170 "parse_tree.prog_item_stats.c"
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
#line 3190 "parse_tree.prog_item_stats.c"
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
#line 3210 "parse_tree.prog_item_stats.c"
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
#line 3230 "parse_tree.prog_item_stats.c"
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
#line 3250 "parse_tree.prog_item_stats.c"
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
#line 3270 "parse_tree.prog_item_stats.c"
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
#line 3290 "parse_tree.prog_item_stats.c"
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
#line 3310 "parse_tree.prog_item_stats.c"
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
#line 3330 "parse_tree.prog_item_stats.c"
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
#line 3350 "parse_tree.prog_item_stats.c"
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
#line 3370 "parse_tree.prog_item_stats.c"
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
#line 3390 "parse_tree.prog_item_stats.c"
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
#line 3410 "parse_tree.prog_item_stats.c"
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

#line 3613 "parse_tree.prog_item_stats.c"
        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_3_3 == parse_tree__prog_item_stats__V_29_29);
#line 88 "prog_item_stats.m"
        if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
          {
#line 3619 "parse_tree.prog_item_stats.c"
            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_4_4 == parse_tree__prog_item_stats__V_30_30);
#line 88 "prog_item_stats.m"
            if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
              {
#line 3625 "parse_tree.prog_item_stats.c"
                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_5_5 == parse_tree__prog_item_stats__V_31_31);
#line 88 "prog_item_stats.m"
                if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                  {
#line 3631 "parse_tree.prog_item_stats.c"
                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_6_6 == parse_tree__prog_item_stats__V_32_32);
#line 88 "prog_item_stats.m"
                    if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                      {
#line 3637 "parse_tree.prog_item_stats.c"
                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_7_7 == parse_tree__prog_item_stats__V_33_33);
#line 88 "prog_item_stats.m"
                        if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                          {
#line 3643 "parse_tree.prog_item_stats.c"
                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_8_8 == parse_tree__prog_item_stats__V_34_34);
#line 88 "prog_item_stats.m"
                            if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                              {
#line 3649 "parse_tree.prog_item_stats.c"
                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_9_9 == parse_tree__prog_item_stats__V_35_35);
#line 88 "prog_item_stats.m"
                                if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                  {
#line 3655 "parse_tree.prog_item_stats.c"
                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_10_10 == parse_tree__prog_item_stats__V_36_36);
#line 88 "prog_item_stats.m"
                                    if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                      {
#line 3661 "parse_tree.prog_item_stats.c"
                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_11_11 == parse_tree__prog_item_stats__V_37_37);
#line 88 "prog_item_stats.m"
                                        if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                          {
#line 3667 "parse_tree.prog_item_stats.c"
                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_12_12 == parse_tree__prog_item_stats__V_38_38);
#line 88 "prog_item_stats.m"
                                            if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                              {
#line 3673 "parse_tree.prog_item_stats.c"
                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_13_13 == parse_tree__prog_item_stats__V_39_39);
#line 88 "prog_item_stats.m"
                                                if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                  {
#line 3679 "parse_tree.prog_item_stats.c"
                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_14_14 == parse_tree__prog_item_stats__V_40_40);
#line 88 "prog_item_stats.m"
                                                    if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                      {
#line 3685 "parse_tree.prog_item_stats.c"
                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_15_15 == parse_tree__prog_item_stats__V_41_41);
#line 88 "prog_item_stats.m"
                                                        if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                          {
#line 3691 "parse_tree.prog_item_stats.c"
                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_16_16 == parse_tree__prog_item_stats__V_42_42);
#line 88 "prog_item_stats.m"
                                                            if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                              {
#line 3697 "parse_tree.prog_item_stats.c"
                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_17_17 == parse_tree__prog_item_stats__V_43_43);
#line 88 "prog_item_stats.m"
                                                                if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                  {
#line 3703 "parse_tree.prog_item_stats.c"
                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_18_18 == parse_tree__prog_item_stats__V_44_44);
#line 88 "prog_item_stats.m"
                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                      {
#line 3709 "parse_tree.prog_item_stats.c"
                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_19_19 == parse_tree__prog_item_stats__V_45_45);
#line 88 "prog_item_stats.m"
                                                                        if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                          {
#line 3715 "parse_tree.prog_item_stats.c"
                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_20_20 == parse_tree__prog_item_stats__V_46_46);
#line 88 "prog_item_stats.m"
                                                                            if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                              {
#line 3721 "parse_tree.prog_item_stats.c"
                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_21_21 == parse_tree__prog_item_stats__V_47_47);
#line 88 "prog_item_stats.m"
                                                                                if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                                  {
#line 3727 "parse_tree.prog_item_stats.c"
                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_22_22 == parse_tree__prog_item_stats__V_48_48);
#line 88 "prog_item_stats.m"
                                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                                      {
#line 3733 "parse_tree.prog_item_stats.c"
                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_23_23 == parse_tree__prog_item_stats__V_49_49);
#line 88 "prog_item_stats.m"
                                                                                        if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                                          {
#line 3739 "parse_tree.prog_item_stats.c"
                                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_24_24 == parse_tree__prog_item_stats__V_50_50);
#line 88 "prog_item_stats.m"
                                                                                            if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                                              {
#line 3745 "parse_tree.prog_item_stats.c"
                                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_25_25 == parse_tree__prog_item_stats__V_51_51);
#line 88 "prog_item_stats.m"
                                                                                                if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                                                  {
#line 3751 "parse_tree.prog_item_stats.c"
                                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_26_26 == parse_tree__prog_item_stats__V_52_52);
#line 88 "prog_item_stats.m"
                                                                                                    if (parse_tree__prog_item_stats__succeeded)
#line 88 "prog_item_stats.m"
                                                                                                      {
#line 3757 "parse_tree.prog_item_stats.c"
                                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_27_27 == parse_tree__prog_item_stats__V_53_53);
#line 88 "prog_item_stats.m"
                                                                                                        if (parse_tree__prog_item_stats__succeeded)
#line 3761 "parse_tree.prog_item_stats.c"
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
      parse_tree__prog_item_stats__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_item_stats_scalar_common_1[1], ((MR_Box) (parse_tree__prog_item_stats__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_item_stats__Cast_HeadVar2_4)));
    }
#line 123 "prog_item_stats.m"
    return parse_tree__prog_item_stats__succeeded;
#line 123 "prog_item_stats.m"
  }
#line 123 "prog_item_stats.m"
}

#line 599 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__write_one_stat_6_p_0(
#line 599 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Stream_7,
#line 599 "prog_item_stats.m"
  MR_String parse_tree__prog_item_stats__SectionName_8,
#line 599 "prog_item_stats.m"
  MR_String parse_tree__prog_item_stats__StatName_9,
#line 599 "prog_item_stats.m"
  MR_Integer parse_tree__prog_item_stats__StatNum_10)
#line 599 "prog_item_stats.m"
{
#line 602 "prog_item_stats.m"
  {
#line 602 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;

#line 603 "prog_item_stats.m"
    {
#line 603 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_7, parse_tree__prog_item_stats__SectionName_8);
    }
#line 604 "prog_item_stats.m"
    {
#line 604 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_7, (MR_String) " ");
    }
#line 605 "prog_item_stats.m"
    {
#line 605 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_7, parse_tree__prog_item_stats__StatName_9);
    }
#line 606 "prog_item_stats.m"
    {
#line 606 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_7, (MR_String) " ");
    }
#line 607 "prog_item_stats.m"
    {
#line 607 "prog_item_stats.m"
      mercury__io__write_int_4_p_0(parse_tree__prog_item_stats__Stream_7, parse_tree__prog_item_stats__StatNum_10);
    }
#line 608 "prog_item_stats.m"
    {
#line 608 "prog_item_stats.m"
      mercury__io__nl_3_p_0(parse_tree__prog_item_stats__Stream_7);
    }
#line 609 "prog_item_stats.m"
    {
#line 609 "prog_item_stats.m"
      mercury__io__flush_output_2_p_0();
    }
#line 602 "prog_item_stats.m"
  }
#line 599 "prog_item_stats.m"
}

#line 555 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__write_goal_stats_5_p_0(
#line 555 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Stream_6,
#line 555 "prog_item_stats.m"
  MR_String parse_tree__prog_item_stats__SectionName_7,
#line 555 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__GoalStats_8)
#line 555 "prog_item_stats.m"
{
#line 558 "prog_item_stats.m"
  {
#line 558 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Conj_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 0)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__ParConj_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 1)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__True_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 2)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Disj_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 3)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Fail_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 4)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Some_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 5)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__All_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 6)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__SomeStateVars_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 7)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__AllStateVars_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 8)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PromisePurity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 9)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PromiseEqvSolns_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 10)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PromiseEqvSolnSets_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 11)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PromiseArbitrary_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 12)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__ReqDetism_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 13)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__ReqComplSwitch_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 14)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__ReqSwitchArmDetism_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 15)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Trace_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 16)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Atomic_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 17)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Try_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 18)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Implies_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 19)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Equivalent_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 20)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Not_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 21)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__IfThenElse_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 22)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Event_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 23)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Call_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 24)));
#line 558 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Unify_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 25)));

#line 565 "prog_item_stats.m"
    {
#line 565 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_conj", parse_tree__prog_item_stats__Conj_10);
    }
#line 566 "prog_item_stats.m"
    {
#line 566 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_par_conj", parse_tree__prog_item_stats__ParConj_11);
    }
#line 567 "prog_item_stats.m"
    {
#line 567 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_true", parse_tree__prog_item_stats__True_12);
    }
#line 568 "prog_item_stats.m"
    {
#line 568 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_disj", parse_tree__prog_item_stats__Disj_13);
    }
#line 569 "prog_item_stats.m"
    {
#line 569 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_fail", parse_tree__prog_item_stats__Fail_14);
    }
#line 570 "prog_item_stats.m"
    {
#line 570 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_some", parse_tree__prog_item_stats__Some_15);
    }
#line 571 "prog_item_stats.m"
    {
#line 571 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_all", parse_tree__prog_item_stats__All_16);
    }
#line 572 "prog_item_stats.m"
    {
#line 572 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_some_state_vars", parse_tree__prog_item_stats__SomeStateVars_17);
    }
#line 574 "prog_item_stats.m"
    {
#line 574 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_all_state_vars", parse_tree__prog_item_stats__AllStateVars_18);
    }
#line 576 "prog_item_stats.m"
    {
#line 576 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_pro_purity", parse_tree__prog_item_stats__PromisePurity_19);
    }
#line 577 "prog_item_stats.m"
    {
#line 577 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_pro_eqv_solns", parse_tree__prog_item_stats__PromiseEqvSolns_20);
    }
#line 579 "prog_item_stats.m"
    {
#line 579 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_pro_eqv_soln_sets", parse_tree__prog_item_stats__PromiseEqvSolnSets_21);
    }
#line 581 "prog_item_stats.m"
    {
#line 581 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_pro_arbitrary", parse_tree__prog_item_stats__PromiseArbitrary_22);
    }
#line 583 "prog_item_stats.m"
    {
#line 583 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_req_detism", parse_tree__prog_item_stats__ReqDetism_23);
    }
#line 584 "prog_item_stats.m"
    {
#line 584 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_req_compl_switch", parse_tree__prog_item_stats__ReqComplSwitch_24);
    }
#line 586 "prog_item_stats.m"
    {
#line 586 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_req_arm_detism", parse_tree__prog_item_stats__ReqSwitchArmDetism_25);
    }
#line 588 "prog_item_stats.m"
    {
#line 588 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_trace", parse_tree__prog_item_stats__Trace_26);
    }
#line 589 "prog_item_stats.m"
    {
#line 589 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_atomic", parse_tree__prog_item_stats__Atomic_27);
    }
#line 590 "prog_item_stats.m"
    {
#line 590 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_try", parse_tree__prog_item_stats__Try_28);
    }
#line 591 "prog_item_stats.m"
    {
#line 591 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_implies", parse_tree__prog_item_stats__Implies_29);
    }
#line 592 "prog_item_stats.m"
    {
#line 592 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_equivalent", parse_tree__prog_item_stats__Equivalent_30);
    }
#line 593 "prog_item_stats.m"
    {
#line 593 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_not", parse_tree__prog_item_stats__Not_31);
    }
#line 594 "prog_item_stats.m"
    {
#line 594 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_if_then_else", parse_tree__prog_item_stats__IfThenElse_32);
    }
#line 595 "prog_item_stats.m"
    {
#line 595 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_event", parse_tree__prog_item_stats__Event_33);
    }
#line 596 "prog_item_stats.m"
    {
#line 596 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_call", parse_tree__prog_item_stats__Call_34);
    }
#line 597 "prog_item_stats.m"
    {
#line 597 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_unify", parse_tree__prog_item_stats__Unify_35);
    }
#line 558 "prog_item_stats.m"
  }
#line 555 "prog_item_stats.m"
}

#line 516 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__write_section_stats_4_p_0(
#line 516 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Stream_5,
#line 516 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__2_2)
#line 516 "prog_item_stats.m"
{
#line 519 "prog_item_stats.m"
  {
#line 519 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 519 "prog_item_stats.m"
    MR_String parse_tree__prog_item_stats__SectionName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
#line 519 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__SectionStats_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
#line 519 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__ItemStats_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_7, (MR_Integer) 0)));
#line 519 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__GoalStats_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__SectionStats_7, (MR_Integer) 1)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Clause_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 0)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__TypeDefn_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 1)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__InstDefn_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 2)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__ModeDefn_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 3)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PredDecl_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 4)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__ModeDecl_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 5)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaFIM_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 6)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaTerm_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 7)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaTerm2_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 8)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaExcp_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 9)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaTrail_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 10)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaMM_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 11)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaPass2_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 12)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__PragmaPass3_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 13)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Promise_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 14)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Typeclasse_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 15)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Instance_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 16)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Initialise_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 17)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Finalise_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 18)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Mutable_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 19)));
#line 519 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__Nothing_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemStats_9, (MR_Integer) 20)));

#line 532 "prog_item_stats.m"
    {
#line 532 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_clause", parse_tree__prog_item_stats__Clause_21);
    }
#line 533 "prog_item_stats.m"
    {
#line 533 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_type_defn", parse_tree__prog_item_stats__TypeDefn_22);
    }
#line 534 "prog_item_stats.m"
    {
#line 534 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_inst_defn", parse_tree__prog_item_stats__InstDefn_23);
    }
#line 535 "prog_item_stats.m"
    {
#line 535 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_mode_defn", parse_tree__prog_item_stats__ModeDefn_24);
    }
#line 536 "prog_item_stats.m"
    {
#line 536 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pred_decl", parse_tree__prog_item_stats__PredDecl_25);
    }
#line 537 "prog_item_stats.m"
    {
#line 537 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_mode_decl", parse_tree__prog_item_stats__ModeDecl_26);
    }
#line 538 "prog_item_stats.m"
    {
#line 538 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_fim", parse_tree__prog_item_stats__PragmaFIM_27);
    }
#line 539 "prog_item_stats.m"
    {
#line 539 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_term", parse_tree__prog_item_stats__PragmaTerm_28);
    }
#line 540 "prog_item_stats.m"
    {
#line 540 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_term2", parse_tree__prog_item_stats__PragmaTerm2_29);
    }
#line 541 "prog_item_stats.m"
    {
#line 541 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_excp", parse_tree__prog_item_stats__PragmaExcp_30);
    }
#line 542 "prog_item_stats.m"
    {
#line 542 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_trail", parse_tree__prog_item_stats__PragmaTrail_31);
    }
#line 543 "prog_item_stats.m"
    {
#line 543 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_mm", parse_tree__prog_item_stats__PragmaMM_32);
    }
#line 544 "prog_item_stats.m"
    {
#line 544 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_pass2", parse_tree__prog_item_stats__PragmaPass2_33);
    }
#line 545 "prog_item_stats.m"
    {
#line 545 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_pragma_pass3", parse_tree__prog_item_stats__PragmaPass3_34);
    }
#line 546 "prog_item_stats.m"
    {
#line 546 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_promise", parse_tree__prog_item_stats__Promise_35);
    }
#line 547 "prog_item_stats.m"
    {
#line 547 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_typeclass", parse_tree__prog_item_stats__Typeclasse_36);
    }
#line 548 "prog_item_stats.m"
    {
#line 548 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_instance", parse_tree__prog_item_stats__Instance_37);
    }
#line 549 "prog_item_stats.m"
    {
#line 549 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_promise", parse_tree__prog_item_stats__Promise_35);
    }
#line 550 "prog_item_stats.m"
    {
#line 550 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_initialise", parse_tree__prog_item_stats__Initialise_38);
    }
#line 551 "prog_item_stats.m"
    {
#line 551 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_finalise", parse_tree__prog_item_stats__Finalise_39);
    }
#line 552 "prog_item_stats.m"
    {
#line 552 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_mutable", parse_tree__prog_item_stats__Mutable_40);
    }
#line 553 "prog_item_stats.m"
    {
#line 553 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, (MR_String) "item_nothing", parse_tree__prog_item_stats__Nothing_41);
    }
#line 522 "prog_item_stats.m"
    {
#line 522 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_goal_stats_5_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__SectionName_6, parse_tree__prog_item_stats__GoalStats_10);
    }
#line 519 "prog_item_stats.m"
  }
#line 516 "prog_item_stats.m"
}

#line 497 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_catch_exprs_3_p_0(
#line 497 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 497 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2,
#line 497 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3)
#line 497 "prog_item_stats.m"
{
#line 500 "prog_item_stats.m"
  while (MR_TRUE)
#line 500 "prog_item_stats.m"
    {
#line 500 "prog_item_stats.m"
      /* tailcall optimized into a loop */
#line 500 "prog_item_stats.m"
      {
#line 500 "prog_item_stats.m"
        MR_bool parse_tree__prog_item_stats__succeeded;

#line 500 "prog_item_stats.m"
        if ((parse_tree__prog_item_stats__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 500 "prog_item_stats.m"
          *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2;
#line 500 "prog_item_stats.m"
        else
#line 501 "prog_item_stats.m"
          {
#line 501 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__CatchExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
#line 501 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__CatchExprs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
#line 501 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__CatchExpr_7, (MR_Integer) 1)));
#line 501 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_14_14;
#line 502 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__CatchExpr_7, (MR_Integer) 0)));

#line 503 "prog_item_stats.m"
            {
#line 503 "prog_item_stats.m"
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__Goal_11, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_14_14);
            }
#line 504 "prog_item_stats.m"
            /* direct tailcall eliminated */
#line 504 "prog_item_stats.m"
            {
#line 504 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1 = parse_tree__prog_item_stats__CatchExprs_8;
#line 504 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_2 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_14_14;

#line 504 "prog_item_stats.m"
              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_2;
#line 504 "prog_item_stats.m"
              parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1;
#line 504 "prog_item_stats.m"
            }
#line 504 "prog_item_stats.m"
            continue;
#line 501 "prog_item_stats.m"
          }
#line 500 "prog_item_stats.m"
      }
#line 500 "prog_item_stats.m"
      break;
#line 500 "prog_item_stats.m"
    }
#line 497 "prog_item_stats.m"
}

#line 354 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(
#line 354 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Goal_4,
#line 354 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80,
#line 354 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_81)
#line 354 "prog_item_stats.m"
{
#line 358 "prog_item_stats.m"
  while (MR_TRUE)
#line 358 "prog_item_stats.m"
    {
#line 358 "prog_item_stats.m"
      /* tailcall optimized into a loop */
#line 358 "prog_item_stats.m"
      {
#line 358 "prog_item_stats.m"
        MR_bool parse_tree__prog_item_stats__succeeded;
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1641_1641 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 25)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1642_1642 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 24)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1643_1643 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 23)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1644_1644 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 22)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1645_1645 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 21)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1646_1646 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 20)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1647_1647 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 19)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1648_1648 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 18)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1649_1649 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 17)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1650_1650 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 16)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1651_1651 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 15)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1652_1652 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 14)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1653_1653 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 13)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1654_1654 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 12)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1655_1655 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 11)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1656_1656 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 10)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1657_1657 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 9)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1658_1658 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 8)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1659_1659 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 7)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1660_1660 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 6)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1661_1661 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 5)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1662_1662 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 4)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1663_1663 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 3)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1664_1664 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 2)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1665_1665 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 1)));
#line 358 "prog_item_stats.m"
        MR_Integer parse_tree__prog_item_stats__V_1666_1666 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 0)));

#line 358 "prog_item_stats.m"
#line 358 "prog_item_stats.m"
        switch (MR_tag((MR_Word) parse_tree__prog_item_stats__Goal_4)) {
#line 358 "prog_item_stats.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 358 "prog_item_stats.m"
          case (MR_Integer) 0:
#line 493 "prog_item_stats.m"
            {
#line 493 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_83_83 = (parse_tree__prog_item_stats__V_1641_1641 + (MR_Integer) 1);

#line 494 "prog_item_stats.m"
              {
#line 494 "prog_item_stats.m"
                MR_Word base;
#line 494 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 494 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_81 = base;
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 494 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_83_83));
#line 494 "prog_item_stats.m"
              }
#line 493 "prog_item_stats.m"
            }
#line 358 "prog_item_stats.m"
            break;
#line 358 "prog_item_stats.m"
          case (MR_Integer) 1:
#line 490 "prog_item_stats.m"
            {
#line 490 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_87_87 = (parse_tree__prog_item_stats__V_1642_1642 + (MR_Integer) 1);

#line 491 "prog_item_stats.m"
              {
#line 491 "prog_item_stats.m"
                MR_Word base;
#line 491 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 491 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_81 = base;
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_87_87));
#line 491 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 491 "prog_item_stats.m"
              }
#line 490 "prog_item_stats.m"
            }
#line 358 "prog_item_stats.m"
            break;
#line 358 "prog_item_stats.m"
          case (MR_Integer) 2:
#line 358 "prog_item_stats.m"
            {
#line 358 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__SubGoalA_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 358 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__SubGoalB_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 358 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211;
#line 358 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_212_212 = (parse_tree__prog_item_stats__V_1666_1666 + (MR_Integer) 1);
#line 358 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_215_215;
#line 358 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 0)));

#line 359 "prog_item_stats.m"
              {
#line 359 "prog_item_stats.m"
                parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_212_212));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 359 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 359 "prog_item_stats.m"
              }
#line 360 "prog_item_stats.m"
              {
#line 360 "prog_item_stats.m"
                parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_7, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_215_215);
              }
#line 361 "prog_item_stats.m"
              /* direct tailcall eliminated */
#line 361 "prog_item_stats.m"
              {
#line 361 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_8;
#line 361 "prog_item_stats.m"
                MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_215_215;

#line 361 "prog_item_stats.m"
                parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
#line 361 "prog_item_stats.m"
                parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 361 "prog_item_stats.m"
              }
#line 361 "prog_item_stats.m"
              continue;
#line 358 "prog_item_stats.m"
            }
#line 358 "prog_item_stats.m"
            break;
#line 358 "prog_item_stats.m"
          case (MR_Integer) 3:
#line 358 "prog_item_stats.m"
#line 358 "prog_item_stats.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 0)))) {
#line 358 "prog_item_stats.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 358 "prog_item_stats.m"
              case (MR_Integer) 0:
#line 368 "prog_item_stats.m"
                {
#line 368 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_202_202 = (parse_tree__prog_item_stats__V_1664_1664 + (MR_Integer) 1);

#line 369 "prog_item_stats.m"
                  {
#line 369 "prog_item_stats.m"
                    MR_Word base;
#line 369 "prog_item_stats.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 369 "prog_item_stats.m"
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_81 = base;
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_202_202));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 369 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 369 "prog_item_stats.m"
                  }
#line 368 "prog_item_stats.m"
                }
#line 358 "prog_item_stats.m"
                break;
#line 358 "prog_item_stats.m"
              case (MR_Integer) 1:
#line 480 "prog_item_stats.m"
                {
#line 480 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__CondGoal_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 480 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94;
#line 480 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_95_95 = (parse_tree__prog_item_stats__V_1644_1644 + (MR_Integer) 1);
#line 480 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98;
#line 480 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_99_99;
#line 480 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__ThenGoal_235 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));
#line 480 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__ElseGoal_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 480 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 480 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 480 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));

#line 481 "prog_item_stats.m"
                  {
#line 481 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_95_95));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 481 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 481 "prog_item_stats.m"
                  }
#line 483 "prog_item_stats.m"
                  {
#line 483 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__CondGoal_68, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98);
                  }
#line 484 "prog_item_stats.m"
                  {
#line 484 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__ThenGoal_235, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_99_99);
                  }
#line 485 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 485 "prog_item_stats.m"
                  {
#line 485 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__ElseGoal_236;
#line 485 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_99_99;

#line 485 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
#line 485 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 485 "prog_item_stats.m"
                  }
#line 485 "prog_item_stats.m"
                  continue;
#line 480 "prog_item_stats.m"
                }
#line 358 "prog_item_stats.m"
                break;
#line 358 "prog_item_stats.m"
              case (MR_Integer) 2:
#line 371 "prog_item_stats.m"
                {
#line 371 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195;
#line 371 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_196_196 = (parse_tree__prog_item_stats__V_1663_1663 + (MR_Integer) 1);
#line 371 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_199_199;
#line 371 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalA_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 371 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalB_220 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 371 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

#line 372 "prog_item_stats.m"
                  {
#line 372 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_196_196));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 372 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 372 "prog_item_stats.m"
                  }
#line 373 "prog_item_stats.m"
                  {
#line 373 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_219, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_199_199);
                  }
#line 374 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 374 "prog_item_stats.m"
                  {
#line 374 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_220;
#line 374 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_199_199;

#line 374 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
#line 374 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 374 "prog_item_stats.m"
                  }
#line 374 "prog_item_stats.m"
                  continue;
#line 371 "prog_item_stats.m"
                }
#line 358 "prog_item_stats.m"
                break;
#line 358 "prog_item_stats.m"
              case (MR_Integer) 3:
#line 476 "prog_item_stats.m"
                {
#line 476 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101;
#line 476 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_102_102 = (parse_tree__prog_item_stats__V_1645_1645 + (MR_Integer) 1);
#line 476 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_234 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 476 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

#line 477 "prog_item_stats.m"
                  {
#line 477 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_102_102));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 477 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 477 "prog_item_stats.m"
                  }
#line 478 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 478 "prog_item_stats.m"
                  {
#line 478 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_234;
#line 478 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101;

#line 478 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
#line 478 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 478 "prog_item_stats.m"
                  }
#line 478 "prog_item_stats.m"
                  continue;
#line 476 "prog_item_stats.m"
                }
#line 358 "prog_item_stats.m"
                break;
#line 358 "prog_item_stats.m"
              case (MR_Integer) 4:
#line 376 "prog_item_stats.m"
                {
#line 376 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_192_192 = (parse_tree__prog_item_stats__V_1662_1662 + (MR_Integer) 1);

#line 377 "prog_item_stats.m"
                  {
#line 377 "prog_item_stats.m"
                    MR_Word base;
#line 377 "prog_item_stats.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 377 "prog_item_stats.m"
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_81 = base;
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_192_192));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 377 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 377 "prog_item_stats.m"
                  }
#line 376 "prog_item_stats.m"
                }
#line 358 "prog_item_stats.m"
                break;
#line 358 "prog_item_stats.m"
              case (MR_Integer) 5:
#line 363 "prog_item_stats.m"
                {
#line 363 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205;
#line 363 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_206_206 = (parse_tree__prog_item_stats__V_1665_1665 + (MR_Integer) 1);
#line 363 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_209_209;
#line 363 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalA_217 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 363 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalB_218 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 363 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

#line 364 "prog_item_stats.m"
                  {
#line 364 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_206_206));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 364 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 364 "prog_item_stats.m"
                  }
#line 365 "prog_item_stats.m"
                  {
#line 365 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_217, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_209_209);
                  }
#line 366 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 366 "prog_item_stats.m"
                  {
#line 366 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_218;
#line 366 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_209_209;

#line 366 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
#line 366 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 366 "prog_item_stats.m"
                  }
#line 366 "prog_item_stats.m"
                  continue;
#line 363 "prog_item_stats.m"
                }
#line 358 "prog_item_stats.m"
                break;
#line 358 "prog_item_stats.m"
              case (MR_Integer) 6:
#line 379 "prog_item_stats.m"
                {
#line 379 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__QuantType_13 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 379 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__QuantVarsKind_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 379 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 379 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186;
#line 379 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 379 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));

#line 384 "prog_item_stats.m"
#line 384 "prog_item_stats.m"
                  switch (parse_tree__prog_item_stats__QuantType_13) {
#line 384 "prog_item_stats.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 384 "prog_item_stats.m"
                    case (MR_Integer) 1:
#line 384 "prog_item_stats.m"
#line 384 "prog_item_stats.m"
                      switch (parse_tree__prog_item_stats__QuantVarsKind_14) {
#line 384 "prog_item_stats.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 384 "prog_item_stats.m"
                        case (MR_Integer) 0:
#line 390 "prog_item_stats.m"
                          {
#line 390 "prog_item_stats.m"
                            MR_Integer parse_tree__prog_item_stats__V_179_179 = (parse_tree__prog_item_stats__V_1660_1660 + (MR_Integer) 1);

#line 392 "prog_item_stats.m"
                            {
#line 392 "prog_item_stats.m"
                              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_179_179));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 392 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 392 "prog_item_stats.m"
                            }
#line 390 "prog_item_stats.m"
                          }
#line 384 "prog_item_stats.m"
                          break;
#line 384 "prog_item_stats.m"
                        case (MR_Integer) 1:
#line 394 "prog_item_stats.m"
                          {
#line 394 "prog_item_stats.m"
                            MR_Integer parse_tree__prog_item_stats__V_175_175 = (parse_tree__prog_item_stats__V_1658_1658 + (MR_Integer) 1);

#line 396 "prog_item_stats.m"
                            {
#line 396 "prog_item_stats.m"
                              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_175_175));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 396 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 396 "prog_item_stats.m"
                            }
#line 394 "prog_item_stats.m"
                          }
#line 384 "prog_item_stats.m"
                          break;
#line 384 "prog_item_stats.m"
                      }
#line 384 "prog_item_stats.m"
                      break;
#line 384 "prog_item_stats.m"
                    case (MR_Integer) 0:
#line 384 "prog_item_stats.m"
#line 384 "prog_item_stats.m"
                      switch (parse_tree__prog_item_stats__QuantVarsKind_14) {
#line 384 "prog_item_stats.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 384 "prog_item_stats.m"
                        case (MR_Integer) 0:
#line 381 "prog_item_stats.m"
                          {
#line 381 "prog_item_stats.m"
                            MR_Integer parse_tree__prog_item_stats__V_187_187 = (parse_tree__prog_item_stats__V_1661_1661 + (MR_Integer) 1);

#line 383 "prog_item_stats.m"
                            {
#line 383 "prog_item_stats.m"
                              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_187_187));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 383 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 383 "prog_item_stats.m"
                            }
#line 381 "prog_item_stats.m"
                          }
#line 384 "prog_item_stats.m"
                          break;
#line 384 "prog_item_stats.m"
                        case (MR_Integer) 1:
#line 385 "prog_item_stats.m"
                          {
#line 385 "prog_item_stats.m"
                            MR_Integer parse_tree__prog_item_stats__V_183_183 = (parse_tree__prog_item_stats__V_1659_1659 + (MR_Integer) 1);

#line 387 "prog_item_stats.m"
                            {
#line 387 "prog_item_stats.m"
                              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_183_183));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 387 "prog_item_stats.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 387 "prog_item_stats.m"
                            }
#line 385 "prog_item_stats.m"
                          }
#line 384 "prog_item_stats.m"
                          break;
#line 384 "prog_item_stats.m"
                      }
#line 384 "prog_item_stats.m"
                      break;
#line 384 "prog_item_stats.m"
                  }
#line 399 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 399 "prog_item_stats.m"
                  {
#line 399 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_17;
#line 399 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186;

#line 399 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
#line 399 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 399 "prog_item_stats.m"
                  }
#line 399 "prog_item_stats.m"
                  continue;
#line 379 "prog_item_stats.m"
                }
#line 358 "prog_item_stats.m"
                break;
#line 358 "prog_item_stats.m"
              case (MR_Integer) 7:
#line 401 "prog_item_stats.m"
                {
#line 401 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169;
#line 401 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_170_170 = (parse_tree__prog_item_stats__V_1657_1657 + (MR_Integer) 1);
#line 401 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_221 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 401 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 401 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

#line 402 "prog_item_stats.m"
                  {
#line 402 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_170_170));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 402 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 402 "prog_item_stats.m"
                  }
#line 404 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 404 "prog_item_stats.m"
                  {
#line 404 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_221;
#line 404 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169;

#line 404 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
#line 404 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 404 "prog_item_stats.m"
                  }
#line 404 "prog_item_stats.m"
                  continue;
#line 401 "prog_item_stats.m"
                }
#line 358 "prog_item_stats.m"
                break;
#line 358 "prog_item_stats.m"
              case (MR_Integer) 8:
#line 406 "prog_item_stats.m"
                {
#line 406 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164;
#line 406 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_165_165 = (parse_tree__prog_item_stats__V_1656_1656 + (MR_Integer) 1);
#line 406 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_222 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 406 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 406 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 406 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 406 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 406 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

#line 407 "prog_item_stats.m"
                  {
#line 407 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_165_165));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 407 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 407 "prog_item_stats.m"
                  }
#line 409 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 409 "prog_item_stats.m"
                  {
#line 409 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_222;
#line 409 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164;

#line 409 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
#line 409 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 409 "prog_item_stats.m"
                  }
#line 409 "prog_item_stats.m"
                  continue;
#line 406 "prog_item_stats.m"
                }
#line 358 "prog_item_stats.m"
                break;
#line 358 "prog_item_stats.m"
              case (MR_Integer) 9:
#line 411 "prog_item_stats.m"
                {
#line 411 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159;
#line 411 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_160_160 = (parse_tree__prog_item_stats__V_1655_1655 + (MR_Integer) 1);
#line 411 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_223 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 411 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 411 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 411 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 411 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 411 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

#line 412 "prog_item_stats.m"
                  {
#line 412 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_160_160));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 412 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 412 "prog_item_stats.m"
                  }
#line 414 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 414 "prog_item_stats.m"
                  {
#line 414 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_223;
#line 414 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159;

#line 414 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
#line 414 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 414 "prog_item_stats.m"
                  }
#line 414 "prog_item_stats.m"
                  continue;
#line 411 "prog_item_stats.m"
                }
#line 358 "prog_item_stats.m"
                break;
#line 358 "prog_item_stats.m"
              case (MR_Integer) 10:
#line 417 "prog_item_stats.m"
                {
#line 417 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154;
#line 417 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_155_155 = (parse_tree__prog_item_stats__V_1654_1654 + (MR_Integer) 1);
#line 417 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_224 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 416 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 416 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 416 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 416 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 416 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

#line 418 "prog_item_stats.m"
                  {
#line 418 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_155_155));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 418 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 418 "prog_item_stats.m"
                  }
#line 420 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 420 "prog_item_stats.m"
                  {
#line 420 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_224;
#line 420 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154;

#line 420 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
#line 420 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 420 "prog_item_stats.m"
                  }
#line 420 "prog_item_stats.m"
                  continue;
#line 417 "prog_item_stats.m"
                }
#line 358 "prog_item_stats.m"
                break;
#line 358 "prog_item_stats.m"
              case (MR_Integer) 11:
#line 422 "prog_item_stats.m"
                {
#line 422 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149;
#line 422 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_150_150 = (parse_tree__prog_item_stats__V_1653_1653 + (MR_Integer) 1);
#line 422 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 422 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 422 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

#line 423 "prog_item_stats.m"
                  {
#line 423 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_150_150));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 423 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 423 "prog_item_stats.m"
                  }
#line 425 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 425 "prog_item_stats.m"
                  {
#line 425 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_225;
#line 425 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149;

#line 425 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
#line 425 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 425 "prog_item_stats.m"
                  }
#line 425 "prog_item_stats.m"
                  continue;
#line 422 "prog_item_stats.m"
                }
#line 358 "prog_item_stats.m"
                break;
#line 358 "prog_item_stats.m"
              case (MR_Integer) 12:
#line 427 "prog_item_stats.m"
                {
#line 427 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144;
#line 427 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_145_145 = (parse_tree__prog_item_stats__V_1652_1652 + (MR_Integer) 1);
#line 427 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 427 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 427 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

#line 428 "prog_item_stats.m"
                  {
#line 428 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_145_145));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 428 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 428 "prog_item_stats.m"
                  }
#line 430 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 430 "prog_item_stats.m"
                  {
#line 430 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_226;
#line 430 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144;

#line 430 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
#line 430 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 430 "prog_item_stats.m"
                  }
#line 430 "prog_item_stats.m"
                  continue;
#line 427 "prog_item_stats.m"
                }
#line 358 "prog_item_stats.m"
                break;
#line 358 "prog_item_stats.m"
              case (MR_Integer) 13:
#line 432 "prog_item_stats.m"
                {
#line 432 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139;
#line 432 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_140_140 = (parse_tree__prog_item_stats__V_1651_1651 + (MR_Integer) 1);
#line 432 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 432 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 432 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 432 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));

#line 433 "prog_item_stats.m"
                  {
#line 433 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_140_140));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 433 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 433 "prog_item_stats.m"
                  }
#line 435 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 435 "prog_item_stats.m"
                  {
#line 435 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_227;
#line 435 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139;

#line 435 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
#line 435 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 435 "prog_item_stats.m"
                  }
#line 435 "prog_item_stats.m"
                  continue;
#line 432 "prog_item_stats.m"
                }
#line 358 "prog_item_stats.m"
                break;
#line 358 "prog_item_stats.m"
              case (MR_Integer) 14:
#line 437 "prog_item_stats.m"
                {
#line 437 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134;
#line 437 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_135_135 = (parse_tree__prog_item_stats__V_1650_1650 + (MR_Integer) 1);
#line 437 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoal_228 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 437 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 437 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 437 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 437 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 437 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

#line 438 "prog_item_stats.m"
                  {
#line 438 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_135_135));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 438 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 438 "prog_item_stats.m"
                  }
#line 439 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 439 "prog_item_stats.m"
                  {
#line 439 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_228;
#line 439 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134;

#line 439 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
#line 439 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 439 "prog_item_stats.m"
                  }
#line 439 "prog_item_stats.m"
                  continue;
#line 437 "prog_item_stats.m"
                }
#line 358 "prog_item_stats.m"
                break;
#line 358 "prog_item_stats.m"
              case (MR_Integer) 15:
#line 441 "prog_item_stats.m"
                {
#line 441 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__MainGoal_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));
#line 441 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__OrElseGoals_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 441 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128;
#line 441 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_129_129 = (parse_tree__prog_item_stats__V_1649_1649 + (MR_Integer) 1);
#line 441 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132;
#line 441 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 441 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 441 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 441 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));

#line 442 "prog_item_stats.m"
                  {
#line 442 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_129_129));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 442 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 442 "prog_item_stats.m"
                  }
#line 443 "prog_item_stats.m"
                  {
#line 443 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__MainGoal_51, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132);
                  }
#line 444 "prog_item_stats.m"
                  {
#line 444 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(parse_tree__prog_item_stats__OrElseGoals_52, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_81);
                  }
#line 441 "prog_item_stats.m"
                }
#line 358 "prog_item_stats.m"
                break;
#line 358 "prog_item_stats.m"
              case (MR_Integer) 16:
#line 447 "prog_item_stats.m"
                {
#line 447 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__ThenGoal_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
#line 447 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__MaybeElseGoal_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));
#line 447 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__Catches_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
#line 447 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__MaybeCatchAny_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 7)));
#line 447 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118;
#line 447 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_119_119 = (parse_tree__prog_item_stats__V_1648_1648 + (MR_Integer) 1);
#line 447 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122;
#line 447 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_123_123;
#line 447 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_124_124;
#line 447 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_125_125;
#line 447 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__MainGoal_229 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 446 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
#line 446 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

#line 448 "prog_item_stats.m"
                  {
#line 448 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_119_119));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 448 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 448 "prog_item_stats.m"
                  }
#line 449 "prog_item_stats.m"
                  {
#line 449 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__MainGoal_229, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122);
                  }
#line 450 "prog_item_stats.m"
                  {
#line 450 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__ThenGoal_55, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_123_123);
                  }
#line 454 "prog_item_stats.m"
                  if ((parse_tree__prog_item_stats__MaybeElseGoal_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 455 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_124_124 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_123_123;
#line 454 "prog_item_stats.m"
                  else
#line 452 "prog_item_stats.m"
                    {
#line 452 "prog_item_stats.m"
                      MR_Word parse_tree__prog_item_stats__ElseGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__MaybeElseGoal_56, (MR_Integer) 0)));

#line 453 "prog_item_stats.m"
                      {
#line 453 "prog_item_stats.m"
                        parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__ElseGoal_59, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_123_123, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_124_124);
                      }
#line 452 "prog_item_stats.m"
                    }
#line 457 "prog_item_stats.m"
                  {
#line 457 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_catch_exprs_3_p_0(parse_tree__prog_item_stats__Catches_57, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_124_124, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_125_125);
                  }
#line 461 "prog_item_stats.m"
                  if ((parse_tree__prog_item_stats__MaybeCatchAny_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 462 "prog_item_stats.m"
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_81 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_125_125;
#line 461 "prog_item_stats.m"
                  else
#line 459 "prog_item_stats.m"
                    {
#line 459 "prog_item_stats.m"
                      MR_Word parse_tree__prog_item_stats__CatchAnyGoal_61;
#line 459 "prog_item_stats.m"
                      MR_Word parse_tree__prog_item_stats__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__MaybeCatchAny_58, (MR_Integer) 0)));
#line 459 "prog_item_stats.m"
                      MR_Word parse_tree__prog_item_stats__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_126_126, (MR_Integer) 0)));

#line 459 "prog_item_stats.m"
                      parse_tree__prog_item_stats__CatchAnyGoal_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_126_126, (MR_Integer) 1)));
#line 460 "prog_item_stats.m"
                      /* direct tailcall eliminated */
#line 460 "prog_item_stats.m"
                      {
#line 460 "prog_item_stats.m"
                        MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__CatchAnyGoal_61;
#line 460 "prog_item_stats.m"
                        MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_125_125;

#line 460 "prog_item_stats.m"
                        parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
#line 460 "prog_item_stats.m"
                        parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 460 "prog_item_stats.m"
                      }
#line 460 "prog_item_stats.m"
                      continue;
#line 459 "prog_item_stats.m"
                    }
#line 447 "prog_item_stats.m"
                }
#line 358 "prog_item_stats.m"
                break;
#line 358 "prog_item_stats.m"
              case (MR_Integer) 17:
#line 465 "prog_item_stats.m"
                {
#line 465 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112;
#line 465 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_113_113 = (parse_tree__prog_item_stats__V_1647_1647 + (MR_Integer) 1);
#line 465 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116;
#line 465 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalA_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 465 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalB_231 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 465 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

#line 466 "prog_item_stats.m"
                  {
#line 466 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_113_113));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 466 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 466 "prog_item_stats.m"
                  }
#line 467 "prog_item_stats.m"
                  {
#line 467 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_230, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116);
                  }
#line 468 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 468 "prog_item_stats.m"
                  {
#line 468 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_231;
#line 468 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116;

#line 468 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
#line 468 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 468 "prog_item_stats.m"
                  }
#line 468 "prog_item_stats.m"
                  continue;
#line 465 "prog_item_stats.m"
                }
#line 358 "prog_item_stats.m"
                break;
#line 358 "prog_item_stats.m"
              case (MR_Integer) 18:
#line 470 "prog_item_stats.m"
                {
#line 470 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106;
#line 470 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_107_107 = (parse_tree__prog_item_stats__V_1646_1646 + (MR_Integer) 1);
#line 470 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110;
#line 470 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalA_232 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
#line 470 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__SubGoalB_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
#line 470 "prog_item_stats.m"
                  MR_Word parse_tree__prog_item_stats__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

#line 471 "prog_item_stats.m"
                  {
#line 471 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_107_107));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 471 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 471 "prog_item_stats.m"
                  }
#line 473 "prog_item_stats.m"
                  {
#line 473 "prog_item_stats.m"
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_232, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110);
                  }
#line 474 "prog_item_stats.m"
                  /* direct tailcall eliminated */
#line 474 "prog_item_stats.m"
                  {
#line 474 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_233;
#line 474 "prog_item_stats.m"
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110;

#line 474 "prog_item_stats.m"
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
#line 474 "prog_item_stats.m"
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
#line 474 "prog_item_stats.m"
                  }
#line 474 "prog_item_stats.m"
                  continue;
#line 470 "prog_item_stats.m"
                }
#line 358 "prog_item_stats.m"
                break;
#line 358 "prog_item_stats.m"
              case (MR_Integer) 19:
#line 487 "prog_item_stats.m"
                {
#line 487 "prog_item_stats.m"
                  MR_Integer parse_tree__prog_item_stats__V_91_91 = (parse_tree__prog_item_stats__V_1643_1643 + (MR_Integer) 1);

#line 488 "prog_item_stats.m"
                  {
#line 488 "prog_item_stats.m"
                    MR_Word base;
#line 488 "prog_item_stats.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
#line 488 "prog_item_stats.m"
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_81 = base;
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_91_91));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
#line 488 "prog_item_stats.m"
                    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
#line 488 "prog_item_stats.m"
                  }
#line 487 "prog_item_stats.m"
                }
#line 358 "prog_item_stats.m"
                break;
#line 358 "prog_item_stats.m"
            }
#line 358 "prog_item_stats.m"
            break;
#line 358 "prog_item_stats.m"
        }
#line 358 "prog_item_stats.m"
      }
#line 358 "prog_item_stats.m"
      break;
#line 358 "prog_item_stats.m"
    }
#line 354 "prog_item_stats.m"
}

#line 346 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(
#line 346 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__HeadVar__1_1,
#line 346 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2,
#line 346 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3)
#line 346 "prog_item_stats.m"
{
#line 349 "prog_item_stats.m"
  while (MR_TRUE)
#line 349 "prog_item_stats.m"
    {
#line 349 "prog_item_stats.m"
      /* tailcall optimized into a loop */
#line 349 "prog_item_stats.m"
      {
#line 349 "prog_item_stats.m"
        MR_bool parse_tree__prog_item_stats__succeeded;

#line 349 "prog_item_stats.m"
        if ((parse_tree__prog_item_stats__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 349 "prog_item_stats.m"
          *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_3 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2;
#line 349 "prog_item_stats.m"
        else
#line 350 "prog_item_stats.m"
          {
#line 350 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 0)));
#line 350 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__HeadVar__1_1, (MR_Integer) 1)));
#line 350 "prog_item_stats.m"
            MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_12_12;

#line 351 "prog_item_stats.m"
            {
#line 351 "prog_item_stats.m"
              parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__Goal_7, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_12_12);
            }
#line 352 "prog_item_stats.m"
            /* direct tailcall eliminated */
#line 352 "prog_item_stats.m"
            {
#line 352 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1 = parse_tree__prog_item_stats__Goals_8;
#line 352 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_2 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_12_12;

#line 352 "prog_item_stats.m"
              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_2 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_2;
#line 352 "prog_item_stats.m"
              parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__HeadVar__1__tmp_copy_1;
#line 352 "prog_item_stats.m"
            }
#line 352 "prog_item_stats.m"
            continue;
#line 350 "prog_item_stats.m"
          }
#line 349 "prog_item_stats.m"
      }
#line 349 "prog_item_stats.m"
      break;
#line 349 "prog_item_stats.m"
    }
#line 346 "prog_item_stats.m"
}

#line 278 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_pragma_3_p_0(
#line 278 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__ItemPragmaInfo_4,
#line 278 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43,
#line 278 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44)
#line 278 "prog_item_stats.m"
{
#line 281 "prog_item_stats.m"
  {
#line 281 "prog_item_stats.m"
    MR_bool parse_tree__prog_item_stats__succeeded;
#line 281 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__PragmaType_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemPragmaInfo_4, (MR_Integer) 0)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_405_405 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 20)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_406_406 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 19)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_407_407 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 18)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_408_408 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 17)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_409_409 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 16)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_410_410 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 15)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_411_411 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 14)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_412_412 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 13)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_413_413 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 12)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_414_414 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 11)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_415_415 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 10)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_416_416 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 9)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_417_417 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 8)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_418_418 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 7)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_419_419 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 6)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_420_420 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 5)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_421_421 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 4)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_422_422 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 3)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_423_423 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 2)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_424_424 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 1)));
#line 281 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_425_425 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_43, (MR_Integer) 0)));
#line 282 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemPragmaInfo_4, (MR_Integer) 1)));
#line 282 "prog_item_stats.m"
    MR_Word parse_tree__prog_item_stats__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemPragmaInfo_4, (MR_Integer) 2)));
#line 282 "prog_item_stats.m"
    MR_Integer parse_tree__prog_item_stats__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemPragmaInfo_4, (MR_Integer) 3)));

#line 287 "prog_item_stats.m"
#line 287 "prog_item_stats.m"
    switch (MR_tag((MR_Word) parse_tree__prog_item_stats__PragmaType_6)) {
#line 287 "prog_item_stats.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 287 "prog_item_stats.m"
      case (MR_Integer) 0:
#line 287 "prog_item_stats.m"
      case (MR_Integer) 1:
#line 326 "prog_item_stats.m"
        {
#line 326 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_50_50 = (parse_tree__prog_item_stats__V_413_413 + (MR_Integer) 1);

#line 327 "prog_item_stats.m"
          {
#line 327 "prog_item_stats.m"
            MR_Word base;
#line 327 "prog_item_stats.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 327 "prog_item_stats.m"
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_50_50));
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 327 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 327 "prog_item_stats.m"
          }
#line 326 "prog_item_stats.m"
        }
#line 287 "prog_item_stats.m"
        break;
#line 287 "prog_item_stats.m"
      case (MR_Integer) 2:
#line 339 "prog_item_stats.m"
        {
#line 339 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_46_46 = (parse_tree__prog_item_stats__V_412_412 + (MR_Integer) 1);

#line 340 "prog_item_stats.m"
          {
#line 340 "prog_item_stats.m"
            MR_Word base;
#line 340 "prog_item_stats.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 340 "prog_item_stats.m"
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_46_46));
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 340 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 340 "prog_item_stats.m"
          }
#line 339 "prog_item_stats.m"
        }
#line 287 "prog_item_stats.m"
        break;
#line 287 "prog_item_stats.m"
      case (MR_Integer) 3:
#line 287 "prog_item_stats.m"
#line 287 "prog_item_stats.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__PragmaType_6, (MR_Integer) 0)))) {
#line 287 "prog_item_stats.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 287 "prog_item_stats.m"
          case (MR_Integer) 0:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 4:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 13:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 14:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 15:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 25:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 26:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 28:
#line 339 "prog_item_stats.m"
            {
#line 339 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_46_46 = (parse_tree__prog_item_stats__V_412_412 + (MR_Integer) 1);

#line 340 "prog_item_stats.m"
              {
#line 340 "prog_item_stats.m"
                MR_Word base;
#line 340 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 340 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_46_46));
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 340 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 340 "prog_item_stats.m"
              }
#line 339 "prog_item_stats.m"
            }
#line 287 "prog_item_stats.m"
            break;
#line 287 "prog_item_stats.m"
          case (MR_Integer) 1:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 2:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 3:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 5:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 6:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 7:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 11:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 12:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 16:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 17:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 18:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 21:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 22:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 23:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 24:
#line 287 "prog_item_stats.m"
          case (MR_Integer) 29:
#line 326 "prog_item_stats.m"
            {
#line 326 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_50_50 = (parse_tree__prog_item_stats__V_413_413 + (MR_Integer) 1);

#line 327 "prog_item_stats.m"
              {
#line 327 "prog_item_stats.m"
                MR_Word base;
#line 327 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 327 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_50_50));
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 327 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 327 "prog_item_stats.m"
              }
#line 326 "prog_item_stats.m"
            }
#line 287 "prog_item_stats.m"
            break;
#line 287 "prog_item_stats.m"
          case (MR_Integer) 8:
#line 296 "prog_item_stats.m"
            {
#line 296 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_62_62 = (parse_tree__prog_item_stats__V_416_416 + (MR_Integer) 1);

#line 297 "prog_item_stats.m"
              {
#line 297 "prog_item_stats.m"
                MR_Word base;
#line 297 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 297 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_62_62));
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 297 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 297 "prog_item_stats.m"
              }
#line 296 "prog_item_stats.m"
            }
#line 287 "prog_item_stats.m"
            break;
#line 287 "prog_item_stats.m"
          case (MR_Integer) 9:
#line 300 "prog_item_stats.m"
            {
#line 300 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_58_58 = (parse_tree__prog_item_stats__V_415_415 + (MR_Integer) 1);

#line 301 "prog_item_stats.m"
              {
#line 301 "prog_item_stats.m"
                MR_Word base;
#line 301 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 301 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_58_58));
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 301 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 301 "prog_item_stats.m"
              }
#line 300 "prog_item_stats.m"
            }
#line 287 "prog_item_stats.m"
            break;
#line 287 "prog_item_stats.m"
          case (MR_Integer) 10:
#line 304 "prog_item_stats.m"
            {
#line 304 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_54_54 = (parse_tree__prog_item_stats__V_414_414 + (MR_Integer) 1);

#line 305 "prog_item_stats.m"
              {
#line 305 "prog_item_stats.m"
                MR_Word base;
#line 305 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 305 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_54_54));
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 305 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 305 "prog_item_stats.m"
              }
#line 304 "prog_item_stats.m"
            }
#line 287 "prog_item_stats.m"
            break;
#line 287 "prog_item_stats.m"
          case (MR_Integer) 19:
#line 288 "prog_item_stats.m"
            {
#line 288 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_70_70 = (parse_tree__prog_item_stats__V_418_418 + (MR_Integer) 1);

#line 289 "prog_item_stats.m"
              {
#line 289 "prog_item_stats.m"
                MR_Word base;
#line 289 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 289 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_70_70));
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 289 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 289 "prog_item_stats.m"
              }
#line 288 "prog_item_stats.m"
            }
#line 287 "prog_item_stats.m"
            break;
#line 287 "prog_item_stats.m"
          case (MR_Integer) 20:
#line 292 "prog_item_stats.m"
            {
#line 292 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_66_66 = (parse_tree__prog_item_stats__V_417_417 + (MR_Integer) 1);

#line 293 "prog_item_stats.m"
              {
#line 293 "prog_item_stats.m"
                MR_Word base;
#line 293 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 293 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_66_66));
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 293 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 293 "prog_item_stats.m"
              }
#line 292 "prog_item_stats.m"
            }
#line 287 "prog_item_stats.m"
            break;
#line 287 "prog_item_stats.m"
          case (MR_Integer) 27:
#line 284 "prog_item_stats.m"
            {
#line 284 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_74_74 = (parse_tree__prog_item_stats__V_419_419 + (MR_Integer) 1);

#line 285 "prog_item_stats.m"
              {
#line 285 "prog_item_stats.m"
                MR_Word base;
#line 285 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 285 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_44 = base;
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_74_74));
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_418_418));
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_417_417));
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_416_416));
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_415_415));
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_414_414));
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_413_413));
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_412_412));
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_411_411));
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_410_410));
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_409_409));
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_408_408));
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_407_407));
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_406_406));
#line 285 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_405_405));
#line 285 "prog_item_stats.m"
              }
#line 284 "prog_item_stats.m"
            }
#line 287 "prog_item_stats.m"
            break;
#line 287 "prog_item_stats.m"
        }
#line 287 "prog_item_stats.m"
        break;
#line 287 "prog_item_stats.m"
    }
#line 281 "prog_item_stats.m"
  }
#line 278 "prog_item_stats.m"
}

#line 220 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_stats_in_item_5_p_0(
#line 220 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__Item_6,
#line 220 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33,
#line 220 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34,
#line 220 "prog_item_stats.m"
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35,
#line 220 "prog_item_stats.m"
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36)
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
          MR_Word parse_tree__prog_item_stats__MaybeGoal_15;
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_87_87;
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_106_106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
#line 226 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_110_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));
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
          parse_tree__prog_item_stats__V_87_87 = (parse_tree__prog_item_stats__V_88_88 + (MR_Integer) 1);
#line 227 "prog_item_stats.m"
          {
#line 227 "prog_item_stats.m"
            MR_Word base;
#line 227 "prog_item_stats.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 227 "prog_item_stats.m"
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_87_87));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_91_91));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_92_92));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_93_93));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_94_94));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_95_95));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_96_96));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_97_97));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_98_98));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_99_99));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_100_100));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_101_101));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_102_102));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_103_103));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_104_104));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_105_105));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_106_106));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_107_107));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_108_108));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_109_109));
#line 227 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_110_110));
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
          parse_tree__prog_item_stats__MaybeGoal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 5)));
#line 229 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 6)));
#line 229 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__ItemClauseInfo_9, (MR_Integer) 7)));
#line 233 "prog_item_stats.m"
          if (((MR_tag((MR_Word) parse_tree__prog_item_stats__MaybeGoal_15)) == (MR_mktag((MR_Integer) 0))))
#line 234 "prog_item_stats.m"
            *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
#line 233 "prog_item_stats.m"
          else
#line 231 "prog_item_stats.m"
            {
#line 231 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__MaybeGoal_15, (MR_Integer) 0)));

#line 232 "prog_item_stats.m"
              {
#line 232 "prog_item_stats.m"
                parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__Goal_18, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36);
              }
#line 231 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
        }
#line 226 "prog_item_stats.m"
        break;
#line 226 "prog_item_stats.m"
      case (MR_Integer) 1:
#line 237 "prog_item_stats.m"
        {
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_83_83;
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_134_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_135_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_136_136 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_137_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_138_138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_139_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_140_140 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_141_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_142_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_143_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_144_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_145_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_147_147 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_148_148 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_149_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_150_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
#line 237 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_151_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

#line 238 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_83_83 = (parse_tree__prog_item_stats__V_84_84 + (MR_Integer) 1);
#line 238 "prog_item_stats.m"
          {
#line 238 "prog_item_stats.m"
            MR_Word base;
#line 238 "prog_item_stats.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 238 "prog_item_stats.m"
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_132_132));
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_83_83));
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_133_133));
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_134_134));
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_135_135));
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_136_136));
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_137_137));
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_138_138));
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_139_139));
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_140_140));
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_141_141));
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_142_142));
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_143_143));
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_144_144));
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_145_145));
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_146_146));
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_147_147));
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_148_148));
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_149_149));
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_150_150));
#line 238 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_151_151));
#line 238 "prog_item_stats.m"
          }
#line 237 "prog_item_stats.m"
          *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
#line 237 "prog_item_stats.m"
        }
#line 226 "prog_item_stats.m"
        break;
#line 226 "prog_item_stats.m"
      case (MR_Integer) 2:
#line 240 "prog_item_stats.m"
        {
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_79_79;
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_173_173 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_174_174 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_175_175 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_176_176 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_177_177 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_178_178 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_179_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_180_180 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_181_181 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_182_182 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_183_183 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_184_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_185_185 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_186_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_187_187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_188_188 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_189_189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_190_190 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_191_191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
#line 240 "prog_item_stats.m"
          MR_Integer parse_tree__prog_item_stats__V_192_192 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

#line 241 "prog_item_stats.m"
          parse_tree__prog_item_stats__V_79_79 = (parse_tree__prog_item_stats__V_80_80 + (MR_Integer) 1);
#line 241 "prog_item_stats.m"
          {
#line 241 "prog_item_stats.m"
            MR_Word base;
#line 241 "prog_item_stats.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 241 "prog_item_stats.m"
            *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_173_173));
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_174_174));
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_79_79));
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_175_175));
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_176_176));
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_177_177));
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_178_178));
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_179_179));
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_180_180));
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_181_181));
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_182_182));
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_183_183));
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_184_184));
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_185_185));
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_186_186));
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_187_187));
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_188_188));
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_189_189));
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_190_190));
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_191_191));
#line 241 "prog_item_stats.m"
            MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_192_192));
#line 241 "prog_item_stats.m"
          }
#line 240 "prog_item_stats.m"
          *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
#line 240 "prog_item_stats.m"
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
#line 243 "prog_item_stats.m"
            {
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_75_75;
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_214_214 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_215_215 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_216_216 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_217_217 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_218_218 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_219_219 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_220_220 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_221_221 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_222_222 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_223_223 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_224_224 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_225_225 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_226_226 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_227_227 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_228_228 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_229_229 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_230_230 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_231_231 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_232_232 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
#line 243 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_233_233 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

#line 244 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_75_75 = (parse_tree__prog_item_stats__V_76_76 + (MR_Integer) 1);
#line 244 "prog_item_stats.m"
              {
#line 244 "prog_item_stats.m"
                MR_Word base;
#line 244 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 244 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_214_214));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_215_215));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_216_216));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_75_75));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_217_217));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_218_218));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_219_219));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_220_220));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_221_221));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_222_222));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_223_223));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_224_224));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_225_225));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_226_226));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_227_227));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_228_228));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_229_229));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_230_230));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_231_231));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_232_232));
#line 244 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_233_233));
#line 244 "prog_item_stats.m"
              }
#line 243 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
#line 243 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
          case (MR_Integer) 1:
#line 246 "prog_item_stats.m"
            {
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_71_71;
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_255_255 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_256_256 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_257_257 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_258_258 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_259_259 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_260_260 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_261_261 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_262_262 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_263_263 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_264_264 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_265_265 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_266_266 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_267_267 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_268_268 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_269_269 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_270_270 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_271_271 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_272_272 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_273_273 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
#line 246 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_274_274 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

#line 247 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_71_71 = (parse_tree__prog_item_stats__V_72_72 + (MR_Integer) 1);
#line 247 "prog_item_stats.m"
              {
#line 247 "prog_item_stats.m"
                MR_Word base;
#line 247 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 247 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_255_255));
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_256_256));
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_257_257));
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_258_258));
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_71_71));
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_259_259));
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_260_260));
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_261_261));
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_262_262));
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_263_263));
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_264_264));
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_265_265));
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_266_266));
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_267_267));
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_268_268));
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_269_269));
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_270_270));
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_271_271));
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_272_272));
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_273_273));
#line 247 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_274_274));
#line 247 "prog_item_stats.m"
              }
#line 246 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
#line 246 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
          case (MR_Integer) 2:
#line 249 "prog_item_stats.m"
            {
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_67_67;
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_296_296 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_297_297 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_298_298 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_299_299 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_300_300 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_301_301 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_302_302 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_303_303 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_304_304 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_305_305 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_306_306 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_307_307 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_308_308 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_309_309 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_310_310 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_311_311 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_312_312 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_313_313 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_314_314 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
#line 249 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_315_315 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

#line 250 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_67_67 = (parse_tree__prog_item_stats__V_68_68 + (MR_Integer) 1);
#line 250 "prog_item_stats.m"
              {
#line 250 "prog_item_stats.m"
                MR_Word base;
#line 250 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 250 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_296_296));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_297_297));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_298_298));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_299_299));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_300_300));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_67_67));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_301_301));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_302_302));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_303_303));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_304_304));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_305_305));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_306_306));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_307_307));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_308_308));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_309_309));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_310_310));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_311_311));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_312_312));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_313_313));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_314_314));
#line 250 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_315_315));
#line 250 "prog_item_stats.m"
              }
#line 249 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
#line 249 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
          case (MR_Integer) 3:
#line 252 "prog_item_stats.m"
            {
#line 252 "prog_item_stats.m"
              MR_Word parse_tree__prog_item_stats__ItemPragmaInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Item_6, (MR_Integer) 1)));

#line 253 "prog_item_stats.m"
              {
#line 253 "prog_item_stats.m"
                parse_tree__prog_item_stats__gather_stats_in_item_pragma_3_p_0(parse_tree__prog_item_stats__ItemPragmaInfo_25, parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34);
              }
#line 252 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
#line 252 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
          case (MR_Integer) 4:
#line 255 "prog_item_stats.m"
            {
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_62_62;
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_337_337 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_338_338 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_339_339 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_340_340 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_341_341 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_342_342 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_343_343 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_344_344 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_345_345 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_346_346 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_347_347 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_348_348 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_349_349 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_350_350 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_351_351 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_352_352 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_353_353 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_354_354 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_355_355 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
#line 255 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_356_356 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

#line 256 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_62_62 = (parse_tree__prog_item_stats__V_63_63 + (MR_Integer) 1);
#line 256 "prog_item_stats.m"
              {
#line 256 "prog_item_stats.m"
                MR_Word base;
#line 256 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 256 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_337_337));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_338_338));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_339_339));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_340_340));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_341_341));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_342_342));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_343_343));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_344_344));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_345_345));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_346_346));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_347_347));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_348_348));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_349_349));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_350_350));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_62_62));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_351_351));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_352_352));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_353_353));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_354_354));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_355_355));
#line 256 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_356_356));
#line 256 "prog_item_stats.m"
              }
#line 255 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
#line 255 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
          case (MR_Integer) 5:
#line 258 "prog_item_stats.m"
            {
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_58_58;
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_378_378 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_379_379 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_380_380 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_381_381 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_382_382 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_383_383 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_384_384 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_385_385 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_386_386 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_387_387 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_388_388 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_389_389 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_390_390 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_391_391 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_392_392 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_393_393 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_394_394 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_395_395 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_396_396 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
#line 258 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_397_397 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

#line 259 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_58_58 = (parse_tree__prog_item_stats__V_59_59 + (MR_Integer) 1);
#line 259 "prog_item_stats.m"
              {
#line 259 "prog_item_stats.m"
                MR_Word base;
#line 259 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 259 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_378_378));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_379_379));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_380_380));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_381_381));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_382_382));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_383_383));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_384_384));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_385_385));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_386_386));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_387_387));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_388_388));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_389_389));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_390_390));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_391_391));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_392_392));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_58_58));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_393_393));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_394_394));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_395_395));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_396_396));
#line 259 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_397_397));
#line 259 "prog_item_stats.m"
              }
#line 258 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
#line 258 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
          case (MR_Integer) 6:
#line 261 "prog_item_stats.m"
            {
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_54_54;
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_419_419 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_420_420 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_421_421 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_422_422 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_423_423 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_424_424 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_425_425 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_426_426 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_427_427 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_428_428 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_429_429 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_430_430 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_431_431 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_432_432 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_433_433 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_434_434 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_435_435 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_436_436 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_437_437 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
#line 261 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_438_438 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

#line 262 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_54_54 = (parse_tree__prog_item_stats__V_55_55 + (MR_Integer) 1);
#line 262 "prog_item_stats.m"
              {
#line 262 "prog_item_stats.m"
                MR_Word base;
#line 262 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 262 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_419_419));
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_420_420));
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_421_421));
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_422_422));
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_423_423));
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_424_424));
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_425_425));
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_426_426));
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_427_427));
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_428_428));
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_429_429));
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_430_430));
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_431_431));
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_432_432));
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_433_433));
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_434_434));
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_54_54));
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_435_435));
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_436_436));
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_437_437));
#line 262 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_438_438));
#line 262 "prog_item_stats.m"
              }
#line 261 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
#line 261 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
          case (MR_Integer) 7:
#line 264 "prog_item_stats.m"
            {
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_50_50;
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_460_460 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_461_461 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_462_462 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_463_463 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_464_464 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_465_465 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_466_466 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_467_467 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_468_468 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_469_469 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_470_470 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_471_471 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_472_472 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_473_473 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_474_474 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_475_475 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_476_476 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_477_477 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_478_478 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
#line 264 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_479_479 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

#line 266 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_50_50 = (parse_tree__prog_item_stats__V_51_51 + (MR_Integer) 1);
#line 265 "prog_item_stats.m"
              {
#line 265 "prog_item_stats.m"
                MR_Word base;
#line 265 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 265 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_460_460));
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_461_461));
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_462_462));
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_463_463));
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_464_464));
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_465_465));
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_466_466));
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_467_467));
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_468_468));
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_469_469));
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_470_470));
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_471_471));
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_472_472));
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_473_473));
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_474_474));
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_475_475));
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_476_476));
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_50_50));
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_477_477));
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_478_478));
#line 265 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_479_479));
#line 265 "prog_item_stats.m"
              }
#line 264 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
#line 264 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
          case (MR_Integer) 8:
#line 268 "prog_item_stats.m"
            {
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_46_46;
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_501_501 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_502_502 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_503_503 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_504_504 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_505_505 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_506_506 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_507_507 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_508_508 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_509_509 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_510_510 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_511_511 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_512_512 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_513_513 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_514_514 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_515_515 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_516_516 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_517_517 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_518_518 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_519_519 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
#line 268 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_520_520 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

#line 269 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_46_46 = (parse_tree__prog_item_stats__V_47_47 + (MR_Integer) 1);
#line 269 "prog_item_stats.m"
              {
#line 269 "prog_item_stats.m"
                MR_Word base;
#line 269 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 269 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_501_501));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_502_502));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_503_503));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_504_504));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_505_505));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_506_506));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_507_507));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_508_508));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_509_509));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_510_510));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_511_511));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_512_512));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_513_513));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_514_514));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_515_515));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_516_516));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_517_517));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_518_518));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_46_46));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_519_519));
#line 269 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_520_520));
#line 269 "prog_item_stats.m"
              }
#line 268 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
#line 268 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
          case (MR_Integer) 9:
#line 271 "prog_item_stats.m"
            {
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_42_42;
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_542_542 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_543_543 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_544_544 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_545_545 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_546_546 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_547_547 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_548_548 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_549_549 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_550_550 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_551_551 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_552_552 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_553_553 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_554_554 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_555_555 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_556_556 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_557_557 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_558_558 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_559_559 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_560_560 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
#line 271 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_561_561 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));

#line 272 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_42_42 = (parse_tree__prog_item_stats__V_43_43 + (MR_Integer) 1);
#line 272 "prog_item_stats.m"
              {
#line 272 "prog_item_stats.m"
                MR_Word base;
#line 272 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 272 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_542_542));
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_543_543));
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_544_544));
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_545_545));
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_546_546));
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_547_547));
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_548_548));
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_549_549));
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_550_550));
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_551_551));
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_552_552));
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_553_553));
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_554_554));
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_555_555));
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_556_556));
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_557_557));
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_558_558));
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_559_559));
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_560_560));
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_42_42));
#line 272 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_561_561));
#line 272 "prog_item_stats.m"
              }
#line 271 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
#line 271 "prog_item_stats.m"
            }
#line 226 "prog_item_stats.m"
            break;
#line 226 "prog_item_stats.m"
          case (MR_Integer) 10:
#line 274 "prog_item_stats.m"
            {
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_38_38;
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 20)));
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_583_583 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 0)));
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_584_584 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 1)));
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_585_585 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 2)));
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_586_586 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 3)));
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_587_587 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 4)));
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_588_588 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 5)));
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_589_589 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 6)));
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_590_590 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 7)));
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_591_591 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 8)));
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_592_592 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 9)));
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_593_593 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 10)));
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_594_594 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 11)));
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_595_595 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 12)));
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_596_596 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 13)));
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_597_597 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 14)));
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_598_598 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 15)));
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_599_599 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 16)));
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_600_600 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 17)));
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_601_601 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 18)));
#line 274 "prog_item_stats.m"
              MR_Integer parse_tree__prog_item_stats__V_602_602 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_0_33, (MR_Integer) 19)));

#line 275 "prog_item_stats.m"
              parse_tree__prog_item_stats__V_38_38 = (parse_tree__prog_item_stats__V_39_39 + (MR_Integer) 1);
#line 275 "prog_item_stats.m"
              {
#line 275 "prog_item_stats.m"
                MR_Word base;
#line 275 "prog_item_stats.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 275 "prog_item_stats.m"
                *parse_tree__prog_item_stats__STATE_VARIABLE_ItemStats_34 = base;
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_583_583));
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_584_584));
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_585_585));
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_586_586));
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_587_587));
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_588_588));
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_589_589));
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_590_590));
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_591_591));
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_592_592));
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_593_593));
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_594_594));
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_595_595));
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_596_596));
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_597_597));
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_598_598));
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_599_599));
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_600_600));
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_601_601));
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_602_602));
#line 275 "prog_item_stats.m"
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_38_38));
#line 275 "prog_item_stats.m"
              }
#line 274 "prog_item_stats.m"
              *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_36 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_35;
#line 274 "prog_item_stats.m"
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

#line 514 "prog_item_stats.m"
static void MR_CALL 
parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0_1(
#line 514 "prog_item_stats.m"
  MR_Box parse_tree__prog_item_stats__closure_arg,
#line 514 "prog_item_stats.m"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_1,
#line 514 "prog_item_stats.m"
  MR_Box parse_tree__prog_item_stats__wrapper_arg_2,
#line 514 "prog_item_stats.m"
  MR_Box * parse_tree__prog_item_stats__wrapper_arg_3)
#line 514 "prog_item_stats.m"
{
#line 514 "prog_item_stats.m"
  {
#line 514 "prog_item_stats.m"
    MR_Box parse_tree__prog_item_stats__closure = parse_tree__prog_item_stats__closure_arg;

#line 514 "prog_item_stats.m"
    {
#line 514 "prog_item_stats.m"
      parse_tree__prog_item_stats__write_section_stats_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_item_stats__wrapper_arg_1));
    }
#line 514 "prog_item_stats.m"
  }
#line 514 "prog_item_stats.m"
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
#line 514 "prog_item_stats.m"
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
#line 512 "prog_item_stats.m"
    {
#line 512 "prog_item_stats.m"
      parse_tree__prog_item_stats__V_69_69 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_item_stats__V_11_11);
    }
#line 512 "prog_item_stats.m"
    {
#line 512 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_5, (MR_String) "MODULE ");
    }
#line 512 "prog_item_stats.m"
    {
#line 512 "prog_item_stats.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &parse_tree__prog_item_stats_scalar_common_4[0], parse_tree__prog_item_stats__V_69_69, &parse_tree__prog_item_stats__V_83_83);
    }
#line 512 "prog_item_stats.m"
    {
#line 512 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__V_83_83);
    }
#line 512 "prog_item_stats.m"
    {
#line 512 "prog_item_stats.m"
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_5, (MR_String) "\n");
    }
#line 513 "prog_item_stats.m"
    {
#line 513 "prog_item_stats.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, parse_tree__prog_item_stats__CompUnitStats_8, &parse_tree__prog_item_stats__SectionStatPairs_64);
    }
#line 514 "prog_item_stats.m"
    {
#line 514 "prog_item_stats.m"
      parse_tree__prog_item_stats__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 514 "prog_item_stats.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_71_71, 0) = ((MR_Box) (&parse_tree__prog_item_stats_scalar_common_5[0]));
#line 514 "prog_item_stats.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_71_71, 1) = ((MR_Box) (parse_tree__prog_item_stats__gather_and_write_item_stats_4_p_0_1));
#line 514 "prog_item_stats.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 514 "prog_item_stats.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_71_71, 3) = ((MR_Box) (parse_tree__prog_item_stats__Stream_5));
#line 514 "prog_item_stats.m"
    }
#line 514 "prog_item_stats.m"
    {
#line 514 "prog_item_stats.m"
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
