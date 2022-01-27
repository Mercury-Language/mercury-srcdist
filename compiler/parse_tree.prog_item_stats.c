/*
** Automatically generated from `prog_item_stats.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_item_stats__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_item_stats__type_ctor_info_section_stats_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_item_stats__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_item_stats__type_ctor_info_section_stats_0;

static const MR_PseudoTypeInfo parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_types_goal_stats_0_0[26];

static const MR_ConstString parse_tree__prog_item_stats__parse_tree__prog_item_stats__field_names_goal_stats_0_0[26];

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
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_81);

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
  NULL
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
  NULL
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
    MR_Integer parse_tree__prog_item_stats__CastX_81 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__2_2;
    MR_Integer parse_tree__prog_item_stats__CastY_82 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__3_3;

    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__CastX_81 == parse_tree__prog_item_stats__CastY_82);
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
        MR_Integer parse_tree__prog_item_stats__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_item_stats__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 20)));
        MR_Integer parse_tree__prog_item_stats__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 21)));
        MR_Integer parse_tree__prog_item_stats__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 22)));
        MR_Integer parse_tree__prog_item_stats__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 23)));
        MR_Integer parse_tree__prog_item_stats__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 24)));
        MR_Integer parse_tree__prog_item_stats__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__3_3, (MR_Integer) 25)));
        MR_Word parse_tree__prog_item_stats__V_56_56;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_56_56, parse_tree__prog_item_stats__V_4_4, parse_tree__prog_item_stats__V_30_30);
        }
        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_56_56 == (MR_Integer) 0);
        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
        if (parse_tree__prog_item_stats__succeeded)
          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_56_56;
        else
          {
            MR_Word parse_tree__prog_item_stats__V_57_57;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_57_57, parse_tree__prog_item_stats__V_5_5, parse_tree__prog_item_stats__V_31_31);
            }
            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_57_57 == (MR_Integer) 0);
            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
            if (parse_tree__prog_item_stats__succeeded)
              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_57_57;
            else
              {
                MR_Word parse_tree__prog_item_stats__V_58_58;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_58_58, parse_tree__prog_item_stats__V_6_6, parse_tree__prog_item_stats__V_32_32);
                }
                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_58_58 == (MR_Integer) 0);
                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                if (parse_tree__prog_item_stats__succeeded)
                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_58_58;
                else
                  {
                    MR_Word parse_tree__prog_item_stats__V_59_59;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_59_59, parse_tree__prog_item_stats__V_7_7, parse_tree__prog_item_stats__V_33_33);
                    }
                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_59_59 == (MR_Integer) 0);
                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                    if (parse_tree__prog_item_stats__succeeded)
                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_59_59;
                    else
                      {
                        MR_Word parse_tree__prog_item_stats__V_60_60;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_60_60, parse_tree__prog_item_stats__V_8_8, parse_tree__prog_item_stats__V_34_34);
                        }
                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_60_60 == (MR_Integer) 0);
                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                        if (parse_tree__prog_item_stats__succeeded)
                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_60_60;
                        else
                          {
                            MR_Word parse_tree__prog_item_stats__V_61_61;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_61_61, parse_tree__prog_item_stats__V_9_9, parse_tree__prog_item_stats__V_35_35);
                            }
                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_61_61 == (MR_Integer) 0);
                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                            if (parse_tree__prog_item_stats__succeeded)
                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_61_61;
                            else
                              {
                                MR_Word parse_tree__prog_item_stats__V_62_62;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_62_62, parse_tree__prog_item_stats__V_10_10, parse_tree__prog_item_stats__V_36_36);
                                }
                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_62_62 == (MR_Integer) 0);
                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                if (parse_tree__prog_item_stats__succeeded)
                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_62_62;
                                else
                                  {
                                    MR_Word parse_tree__prog_item_stats__V_63_63;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_63_63, parse_tree__prog_item_stats__V_11_11, parse_tree__prog_item_stats__V_37_37);
                                    }
                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_63_63 == (MR_Integer) 0);
                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                    if (parse_tree__prog_item_stats__succeeded)
                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_63_63;
                                    else
                                      {
                                        MR_Word parse_tree__prog_item_stats__V_64_64;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_64_64, parse_tree__prog_item_stats__V_12_12, parse_tree__prog_item_stats__V_38_38);
                                        }
                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_64_64 == (MR_Integer) 0);
                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                        if (parse_tree__prog_item_stats__succeeded)
                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_64_64;
                                        else
                                          {
                                            MR_Word parse_tree__prog_item_stats__V_65_65;

                                            {
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_65_65, parse_tree__prog_item_stats__V_13_13, parse_tree__prog_item_stats__V_39_39);
                                            }
                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_65_65 == (MR_Integer) 0);
                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                            if (parse_tree__prog_item_stats__succeeded)
                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_65_65;
                                            else
                                              {
                                                MR_Word parse_tree__prog_item_stats__V_66_66;

                                                {
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_66_66, parse_tree__prog_item_stats__V_14_14, parse_tree__prog_item_stats__V_40_40);
                                                }
                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_66_66 == (MR_Integer) 0);
                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                if (parse_tree__prog_item_stats__succeeded)
                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_66_66;
                                                else
                                                  {
                                                    MR_Word parse_tree__prog_item_stats__V_67_67;

                                                    {
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_67_67, parse_tree__prog_item_stats__V_15_15, parse_tree__prog_item_stats__V_41_41);
                                                    }
                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_67_67 == (MR_Integer) 0);
                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                    if (parse_tree__prog_item_stats__succeeded)
                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_67_67;
                                                    else
                                                      {
                                                        MR_Word parse_tree__prog_item_stats__V_68_68;

                                                        {
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_68_68, parse_tree__prog_item_stats__V_16_16, parse_tree__prog_item_stats__V_42_42);
                                                        }
                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_68_68 == (MR_Integer) 0);
                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                        if (parse_tree__prog_item_stats__succeeded)
                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_68_68;
                                                        else
                                                          {
                                                            MR_Word parse_tree__prog_item_stats__V_69_69;

                                                            {
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_69_69, parse_tree__prog_item_stats__V_17_17, parse_tree__prog_item_stats__V_43_43);
                                                            }
                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_69_69 == (MR_Integer) 0);
                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                            if (parse_tree__prog_item_stats__succeeded)
                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_69_69;
                                                            else
                                                              {
                                                                MR_Word parse_tree__prog_item_stats__V_70_70;

                                                                {
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_70_70, parse_tree__prog_item_stats__V_18_18, parse_tree__prog_item_stats__V_44_44);
                                                                }
                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_70_70 == (MR_Integer) 0);
                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_70_70;
                                                                else
                                                                  {
                                                                    MR_Word parse_tree__prog_item_stats__V_71_71;

                                                                    {
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_71_71, parse_tree__prog_item_stats__V_19_19, parse_tree__prog_item_stats__V_45_45);
                                                                    }
                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_71_71 == (MR_Integer) 0);
                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_71_71;
                                                                    else
                                                                      {
                                                                        MR_Word parse_tree__prog_item_stats__V_72_72;

                                                                        {
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_72_72, parse_tree__prog_item_stats__V_20_20, parse_tree__prog_item_stats__V_46_46);
                                                                        }
                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_72_72 == (MR_Integer) 0);
                                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_72_72;
                                                                        else
                                                                          {
                                                                            MR_Word parse_tree__prog_item_stats__V_73_73;

                                                                            {
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_73_73, parse_tree__prog_item_stats__V_21_21, parse_tree__prog_item_stats__V_47_47);
                                                                            }
                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_73_73 == (MR_Integer) 0);
                                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                            if (parse_tree__prog_item_stats__succeeded)
                                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_73_73;
                                                                            else
                                                                              {
                                                                                MR_Word parse_tree__prog_item_stats__V_74_74;

                                                                                {
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_74_74, parse_tree__prog_item_stats__V_22_22, parse_tree__prog_item_stats__V_48_48);
                                                                                }
                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_74_74 == (MR_Integer) 0);
                                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_74_74;
                                                                                else
                                                                                  {
                                                                                    MR_Word parse_tree__prog_item_stats__V_75_75;

                                                                                    {
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_75_75, parse_tree__prog_item_stats__V_23_23, parse_tree__prog_item_stats__V_49_49);
                                                                                    }
                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_75_75 == (MR_Integer) 0);
                                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_75_75;
                                                                                    else
                                                                                      {
                                                                                        MR_Word parse_tree__prog_item_stats__V_76_76;

                                                                                        {
                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_76_76, parse_tree__prog_item_stats__V_24_24, parse_tree__prog_item_stats__V_50_50);
                                                                                        }
                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_76_76 == (MR_Integer) 0);
                                                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_76_76;
                                                                                        else
                                                                                          {
                                                                                            MR_Word parse_tree__prog_item_stats__V_77_77;

                                                                                            {
                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_77_77, parse_tree__prog_item_stats__V_25_25, parse_tree__prog_item_stats__V_51_51);
                                                                                            }
                                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_77_77 == (MR_Integer) 0);
                                                                                            parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                            if (parse_tree__prog_item_stats__succeeded)
                                                                                              *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_77_77;
                                                                                            else
                                                                                              {
                                                                                                MR_Word parse_tree__prog_item_stats__V_78_78;

                                                                                                {
                                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_78_78, parse_tree__prog_item_stats__V_26_26, parse_tree__prog_item_stats__V_52_52);
                                                                                                }
                                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_78_78 == (MR_Integer) 0);
                                                                                                parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                                                  *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_78_78;
                                                                                                else
                                                                                                  {
                                                                                                    MR_Word parse_tree__prog_item_stats__V_79_79;

                                                                                                    {
                                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_79_79, parse_tree__prog_item_stats__V_27_27, parse_tree__prog_item_stats__V_53_53);
                                                                                                    }
                                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_79_79 == (MR_Integer) 0);
                                                                                                    parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                                                      *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_79_79;
                                                                                                    else
                                                                                                      {
                                                                                                        MR_Word parse_tree__prog_item_stats__V_80_80;

                                                                                                        {
                                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_item_stats__V_80_80, parse_tree__prog_item_stats__V_28_28, parse_tree__prog_item_stats__V_54_54);
                                                                                                        }
                                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_80_80 == (MR_Integer) 0);
                                                                                                        parse_tree__prog_item_stats__succeeded = !(parse_tree__prog_item_stats__succeeded);
                                                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                                                          *parse_tree__prog_item_stats__HeadVar__1_1 = parse_tree__prog_item_stats__V_80_80;
                                                                                                        else
                                                                                                          {
                                                                                                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_item_stats__HeadVar__1_1, parse_tree__prog_item_stats__V_29_29, parse_tree__prog_item_stats__V_55_55);
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
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
    MR_Integer parse_tree__prog_item_stats__CastX_55 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__1_1;
    MR_Integer parse_tree__prog_item_stats__CastY_56 = (MR_Integer) parse_tree__prog_item_stats__HeadVar__2_2;

    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__CastX_55 == parse_tree__prog_item_stats__CastY_56);
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
        MR_Integer parse_tree__prog_item_stats__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_item_stats__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 20)));
        MR_Integer parse_tree__prog_item_stats__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 21)));
        MR_Integer parse_tree__prog_item_stats__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 22)));
        MR_Integer parse_tree__prog_item_stats__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 23)));
        MR_Integer parse_tree__prog_item_stats__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 24)));
        MR_Integer parse_tree__prog_item_stats__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__HeadVar__2_2, (MR_Integer) 25)));

        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_3_3 == parse_tree__prog_item_stats__V_29_29);
        if (parse_tree__prog_item_stats__succeeded)
          {
            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_4_4 == parse_tree__prog_item_stats__V_30_30);
            if (parse_tree__prog_item_stats__succeeded)
              {
                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_5_5 == parse_tree__prog_item_stats__V_31_31);
                if (parse_tree__prog_item_stats__succeeded)
                  {
                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_6_6 == parse_tree__prog_item_stats__V_32_32);
                    if (parse_tree__prog_item_stats__succeeded)
                      {
                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_7_7 == parse_tree__prog_item_stats__V_33_33);
                        if (parse_tree__prog_item_stats__succeeded)
                          {
                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_8_8 == parse_tree__prog_item_stats__V_34_34);
                            if (parse_tree__prog_item_stats__succeeded)
                              {
                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_9_9 == parse_tree__prog_item_stats__V_35_35);
                                if (parse_tree__prog_item_stats__succeeded)
                                  {
                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_10_10 == parse_tree__prog_item_stats__V_36_36);
                                    if (parse_tree__prog_item_stats__succeeded)
                                      {
                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_11_11 == parse_tree__prog_item_stats__V_37_37);
                                        if (parse_tree__prog_item_stats__succeeded)
                                          {
                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_12_12 == parse_tree__prog_item_stats__V_38_38);
                                            if (parse_tree__prog_item_stats__succeeded)
                                              {
                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_13_13 == parse_tree__prog_item_stats__V_39_39);
                                                if (parse_tree__prog_item_stats__succeeded)
                                                  {
                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_14_14 == parse_tree__prog_item_stats__V_40_40);
                                                    if (parse_tree__prog_item_stats__succeeded)
                                                      {
                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_15_15 == parse_tree__prog_item_stats__V_41_41);
                                                        if (parse_tree__prog_item_stats__succeeded)
                                                          {
                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_16_16 == parse_tree__prog_item_stats__V_42_42);
                                                            if (parse_tree__prog_item_stats__succeeded)
                                                              {
                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_17_17 == parse_tree__prog_item_stats__V_43_43);
                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                  {
                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_18_18 == parse_tree__prog_item_stats__V_44_44);
                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                      {
                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_19_19 == parse_tree__prog_item_stats__V_45_45);
                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                          {
                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_20_20 == parse_tree__prog_item_stats__V_46_46);
                                                                            if (parse_tree__prog_item_stats__succeeded)
                                                                              {
                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_21_21 == parse_tree__prog_item_stats__V_47_47);
                                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                                  {
                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_22_22 == parse_tree__prog_item_stats__V_48_48);
                                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                                      {
                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_23_23 == parse_tree__prog_item_stats__V_49_49);
                                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                                          {
                                                                                            parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_24_24 == parse_tree__prog_item_stats__V_50_50);
                                                                                            if (parse_tree__prog_item_stats__succeeded)
                                                                                              {
                                                                                                parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_25_25 == parse_tree__prog_item_stats__V_51_51);
                                                                                                if (parse_tree__prog_item_stats__succeeded)
                                                                                                  {
                                                                                                    parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_26_26 == parse_tree__prog_item_stats__V_52_52);
                                                                                                    if (parse_tree__prog_item_stats__succeeded)
                                                                                                      {
                                                                                                        parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_27_27 == parse_tree__prog_item_stats__V_53_53);
                                                                                                        if (parse_tree__prog_item_stats__succeeded)
                                                                                                          parse_tree__prog_item_stats__succeeded = (parse_tree__prog_item_stats__V_28_28 == parse_tree__prog_item_stats__V_54_54);
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
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
      mercury__io__flush_output_2_p_0();
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
    MR_Integer parse_tree__prog_item_stats__Trace_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 16)));
    MR_Integer parse_tree__prog_item_stats__Atomic_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 17)));
    MR_Integer parse_tree__prog_item_stats__Try_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 18)));
    MR_Integer parse_tree__prog_item_stats__Implies_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 19)));
    MR_Integer parse_tree__prog_item_stats__Equivalent_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 20)));
    MR_Integer parse_tree__prog_item_stats__Not_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 21)));
    MR_Integer parse_tree__prog_item_stats__IfThenElse_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 22)));
    MR_Integer parse_tree__prog_item_stats__Event_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 23)));
    MR_Integer parse_tree__prog_item_stats__Call_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 24)));
    MR_Integer parse_tree__prog_item_stats__Unify_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__GoalStats_8, (MR_Integer) 25)));

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
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_trace", parse_tree__prog_item_stats__Trace_26);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_atomic", parse_tree__prog_item_stats__Atomic_27);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_try", parse_tree__prog_item_stats__Try_28);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_implies", parse_tree__prog_item_stats__Implies_29);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_equivalent", parse_tree__prog_item_stats__Equivalent_30);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_not", parse_tree__prog_item_stats__Not_31);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_if_then_else", parse_tree__prog_item_stats__IfThenElse_32);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_event", parse_tree__prog_item_stats__Event_33);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_call", parse_tree__prog_item_stats__Call_34);
    }
    {
      parse_tree__prog_item_stats__write_one_stat_6_p_0(parse_tree__prog_item_stats__Stream_6, parse_tree__prog_item_stats__SectionName_7, (MR_String) "goal_unify", parse_tree__prog_item_stats__Unify_35);
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
  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80,
  MR_Word * parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_81)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_item_stats__succeeded;
        MR_Integer parse_tree__prog_item_stats__V_1641_1641 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 25)));
        MR_Integer parse_tree__prog_item_stats__V_1642_1642 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 24)));
        MR_Integer parse_tree__prog_item_stats__V_1643_1643 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 23)));
        MR_Integer parse_tree__prog_item_stats__V_1644_1644 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 22)));
        MR_Integer parse_tree__prog_item_stats__V_1645_1645 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 21)));
        MR_Integer parse_tree__prog_item_stats__V_1646_1646 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 20)));
        MR_Integer parse_tree__prog_item_stats__V_1647_1647 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 19)));
        MR_Integer parse_tree__prog_item_stats__V_1648_1648 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 18)));
        MR_Integer parse_tree__prog_item_stats__V_1649_1649 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 17)));
        MR_Integer parse_tree__prog_item_stats__V_1650_1650 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 16)));
        MR_Integer parse_tree__prog_item_stats__V_1651_1651 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 15)));
        MR_Integer parse_tree__prog_item_stats__V_1652_1652 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 14)));
        MR_Integer parse_tree__prog_item_stats__V_1653_1653 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 13)));
        MR_Integer parse_tree__prog_item_stats__V_1654_1654 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 12)));
        MR_Integer parse_tree__prog_item_stats__V_1655_1655 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 11)));
        MR_Integer parse_tree__prog_item_stats__V_1656_1656 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 10)));
        MR_Integer parse_tree__prog_item_stats__V_1657_1657 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 9)));
        MR_Integer parse_tree__prog_item_stats__V_1658_1658 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 8)));
        MR_Integer parse_tree__prog_item_stats__V_1659_1659 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 7)));
        MR_Integer parse_tree__prog_item_stats__V_1660_1660 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 6)));
        MR_Integer parse_tree__prog_item_stats__V_1661_1661 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 5)));
        MR_Integer parse_tree__prog_item_stats__V_1662_1662 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 4)));
        MR_Integer parse_tree__prog_item_stats__V_1663_1663 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_item_stats__V_1664_1664 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 2)));
        MR_Integer parse_tree__prog_item_stats__V_1665_1665 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_item_stats__V_1666_1666 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80, (MR_Integer) 0)));

        switch (MR_tag((MR_Word) parse_tree__prog_item_stats__Goal_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer parse_tree__prog_item_stats__V_83_83 = (parse_tree__prog_item_stats__V_1641_1641 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_81 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_83_83));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer parse_tree__prog_item_stats__V_87_87 = (parse_tree__prog_item_stats__V_1642_1642 + (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_81 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_87_87));
                MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__prog_item_stats__SubGoalA_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
              MR_Word parse_tree__prog_item_stats__SubGoalB_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211;
              MR_Integer parse_tree__prog_item_stats__V_212_212 = (parse_tree__prog_item_stats__V_1666_1666 + (MR_Integer) 1);
              MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_215_215;
              MR_Word parse_tree__prog_item_stats__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 0)));

              {
                parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_212_212));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
              }
              {
                parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_7, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_211_211, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_215_215);
              }
              /* direct tailcall eliminated */
              {
                MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_8;
                MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_215_215;

                parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
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
                  MR_Integer parse_tree__prog_item_stats__V_202_202 = (parse_tree__prog_item_stats__V_1664_1664 + (MR_Integer) 1);

                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_81 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_202_202));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_item_stats__CondGoal_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94;
                  MR_Integer parse_tree__prog_item_stats__V_95_95 = (parse_tree__prog_item_stats__V_1644_1644 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98;
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_99_99;
                  MR_Word parse_tree__prog_item_stats__ThenGoal_235 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));
                  MR_Word parse_tree__prog_item_stats__ElseGoal_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__prog_item_stats__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_95_95));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__CondGoal_68, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_94_94, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98);
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__ThenGoal_235, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_98_98, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_99_99);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__ElseGoal_236;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_99_99;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195;
                  MR_Integer parse_tree__prog_item_stats__V_196_196 = (parse_tree__prog_item_stats__V_1663_1663 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_199_199;
                  MR_Word parse_tree__prog_item_stats__SubGoalA_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__SubGoalB_220 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_196_196));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_219, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_195_195, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_199_199);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_220;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_199_199;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101;
                  MR_Integer parse_tree__prog_item_stats__V_102_102 = (parse_tree__prog_item_stats__V_1645_1645 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_234 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_102_102));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_234;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_101_101;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Integer parse_tree__prog_item_stats__V_192_192 = (parse_tree__prog_item_stats__V_1662_1662 + (MR_Integer) 1);

                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_81 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_192_192));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205;
                  MR_Integer parse_tree__prog_item_stats__V_206_206 = (parse_tree__prog_item_stats__V_1665_1665 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_209_209;
                  MR_Word parse_tree__prog_item_stats__SubGoalA_217 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__SubGoalB_218 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_206_206));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_217, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_205_205, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_209_209);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_218;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_209_209;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
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
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186;
                  MR_Word parse_tree__prog_item_stats__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));

                  switch (parse_tree__prog_item_stats__QuantType_13) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      switch (parse_tree__prog_item_stats__QuantVarsKind_14) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Integer parse_tree__prog_item_stats__V_179_179 = (parse_tree__prog_item_stats__V_1660_1660 + (MR_Integer) 1);

                            {
                              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_179_179));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Integer parse_tree__prog_item_stats__V_175_175 = (parse_tree__prog_item_stats__V_1658_1658 + (MR_Integer) 1);

                            {
                              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_175_175));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
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
                            MR_Integer parse_tree__prog_item_stats__V_187_187 = (parse_tree__prog_item_stats__V_1661_1661 + (MR_Integer) 1);

                            {
                              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_187_187));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Integer parse_tree__prog_item_stats__V_183_183 = (parse_tree__prog_item_stats__V_1659_1659 + (MR_Integer) 1);

                            {
                              parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_183_183));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                            }
                          }
                          break;
                      }
                      break;
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_17;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_186_186;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169;
                  MR_Integer parse_tree__prog_item_stats__V_170_170 = (parse_tree__prog_item_stats__V_1657_1657 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_221 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_170_170));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_221;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_169_169;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164;
                  MR_Integer parse_tree__prog_item_stats__V_165_165 = (parse_tree__prog_item_stats__V_1656_1656 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_222 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__prog_item_stats__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_165_165));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_222;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_164_164;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159;
                  MR_Integer parse_tree__prog_item_stats__V_160_160 = (parse_tree__prog_item_stats__V_1655_1655 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_223 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__prog_item_stats__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_160_160));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_223;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_159_159;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154;
                  MR_Integer parse_tree__prog_item_stats__V_155_155 = (parse_tree__prog_item_stats__V_1654_1654 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_224 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__prog_item_stats__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_155_155));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_224;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_154_154;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149;
                  MR_Integer parse_tree__prog_item_stats__V_150_150 = (parse_tree__prog_item_stats__V_1653_1653 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_150_150));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_225;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_149_149;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144;
                  MR_Integer parse_tree__prog_item_stats__V_145_145 = (parse_tree__prog_item_stats__V_1652_1652 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_145_145));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_226;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_144_144;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139;
                  MR_Integer parse_tree__prog_item_stats__V_140_140 = (parse_tree__prog_item_stats__V_1651_1651 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_140_140));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_227;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_139_139;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134;
                  MR_Integer parse_tree__prog_item_stats__V_135_135 = (parse_tree__prog_item_stats__V_1650_1650 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__SubGoal_228 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__prog_item_stats__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_135_135));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoal_228;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_134_134;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Word parse_tree__prog_item_stats__MainGoal_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));
                  MR_Word parse_tree__prog_item_stats__OrElseGoals_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128;
                  MR_Integer parse_tree__prog_item_stats__V_129_129 = (parse_tree__prog_item_stats__V_1649_1649 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132;
                  MR_Word parse_tree__prog_item_stats__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_129_129));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__MainGoal_51, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_128_128, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132);
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goals_3_p_0(parse_tree__prog_item_stats__OrElseGoals_52, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_132_132, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_81);
                  }
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word parse_tree__prog_item_stats__ThenGoal_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 4)));
                  MR_Word parse_tree__prog_item_stats__MaybeElseGoal_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 5)));
                  MR_Word parse_tree__prog_item_stats__Catches_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 6)));
                  MR_Word parse_tree__prog_item_stats__MaybeCatchAny_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 7)));
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118;
                  MR_Integer parse_tree__prog_item_stats__V_119_119 = (parse_tree__prog_item_stats__V_1648_1648 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122;
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_123_123;
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_124_124;
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_125_125;
                  MR_Word parse_tree__prog_item_stats__MainGoal_229 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_item_stats__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_119_119));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__MainGoal_229, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_118_118, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122);
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__ThenGoal_55, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_122_122, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_123_123);
                  }
                  if ((parse_tree__prog_item_stats__MaybeElseGoal_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_124_124 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_123_123;
                  else
                    {
                      MR_Word parse_tree__prog_item_stats__ElseGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__MaybeElseGoal_56, (MR_Integer) 0)));

                      {
                        parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__ElseGoal_59, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_123_123, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_124_124);
                      }
                    }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_catch_exprs_3_p_0(parse_tree__prog_item_stats__Catches_57, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_124_124, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_125_125);
                  }
                  if ((parse_tree__prog_item_stats__MaybeCatchAny_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_81 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_125_125;
                  else
                    {
                      MR_Word parse_tree__prog_item_stats__CatchAnyGoal_61;
                      MR_Word parse_tree__prog_item_stats__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_item_stats__MaybeCatchAny_58, (MR_Integer) 0)));
                      MR_Word parse_tree__prog_item_stats__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_126_126, (MR_Integer) 0)));

                      parse_tree__prog_item_stats__CatchAnyGoal_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_126_126, (MR_Integer) 1)));
                      /* direct tailcall eliminated */
                      {
                        MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__CatchAnyGoal_61;
                        MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_125_125;

                        parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
                        parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112;
                  MR_Integer parse_tree__prog_item_stats__V_113_113 = (parse_tree__prog_item_stats__V_1647_1647 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116;
                  MR_Word parse_tree__prog_item_stats__SubGoalA_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__SubGoalB_231 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_113_113));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_230, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_112_112, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_231;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_116_116;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 18:
                {
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106;
                  MR_Integer parse_tree__prog_item_stats__V_107_107 = (parse_tree__prog_item_stats__V_1646_1646 + (MR_Integer) 1);
                  MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110;
                  MR_Word parse_tree__prog_item_stats__SubGoalA_232 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 2)));
                  MR_Word parse_tree__prog_item_stats__SubGoalB_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 3)));
                  MR_Word parse_tree__prog_item_stats__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_item_stats__Goal_4, (MR_Integer) 1)));

                  {
                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_107_107));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_1643_1643));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
                  }
                  {
                    parse_tree__prog_item_stats__gather_stats_in_goal_3_p_0(parse_tree__prog_item_stats__SubGoalA_232, parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_106_106, &parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word parse_tree__prog_item_stats__Goal__tmp_copy_4 = parse_tree__prog_item_stats__SubGoalB_233;
                    MR_Word parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_110_110;

                    parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0_80 = parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_0__tmp_copy_80;
                    parse_tree__prog_item_stats__Goal_4 = parse_tree__prog_item_stats__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 19:
                {
                  MR_Integer parse_tree__prog_item_stats__V_91_91 = (parse_tree__prog_item_stats__V_1643_1643 + (MR_Integer) 1);

                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 26 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_item_stats__STATE_VARIABLE_GoalStats_81 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_item_stats__V_1666_1666));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_item_stats__V_1665_1665));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_item_stats__V_1664_1664));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__prog_item_stats__V_1663_1663));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__prog_item_stats__V_1662_1662));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__prog_item_stats__V_1661_1661));
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__prog_item_stats__V_1660_1660));
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__prog_item_stats__V_1659_1659));
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__prog_item_stats__V_1658_1658));
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__prog_item_stats__V_1657_1657));
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__prog_item_stats__V_1656_1656));
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__prog_item_stats__V_1655_1655));
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__prog_item_stats__V_1654_1654));
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__prog_item_stats__V_1653_1653));
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__prog_item_stats__V_1652_1652));
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (parse_tree__prog_item_stats__V_1651_1651));
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (parse_tree__prog_item_stats__V_1650_1650));
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (parse_tree__prog_item_stats__V_1649_1649));
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (parse_tree__prog_item_stats__V_1648_1648));
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (parse_tree__prog_item_stats__V_1647_1647));
                    MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (parse_tree__prog_item_stats__V_1646_1646));
                    MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (parse_tree__prog_item_stats__V_1645_1645));
                    MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (parse_tree__prog_item_stats__V_1644_1644));
                    MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (parse_tree__prog_item_stats__V_91_91));
                    MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (parse_tree__prog_item_stats__V_1642_1642));
                    MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (parse_tree__prog_item_stats__V_1641_1641));
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
    MR_String parse_tree__prog_item_stats__V_83_83;
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
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &parse_tree__prog_item_stats_scalar_common_4[0], parse_tree__prog_item_stats__V_69_69, &parse_tree__prog_item_stats__V_83_83);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_5, parse_tree__prog_item_stats__V_83_83);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__prog_item_stats__Stream_5, (MR_String) "\n");
    }
    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_item_stats__parse_tree__prog_item_stats__type_ctor_info_section_stats_0, parse_tree__prog_item_stats__CompUnitStats_8, &parse_tree__prog_item_stats__SectionStatPairs_64);
    }
    {
      parse_tree__prog_item_stats__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_item_stats__V_71_71, 0) = ((MR_Box) (&parse_tree__prog_item_stats_scalar_common_5[0]));
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_item_stats. */
