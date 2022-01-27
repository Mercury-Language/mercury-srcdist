/*
** Automatically generated from `prog_io_dcg.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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


/* :- module parse_tree.prog_io_dcg. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_dcg__init
ENDINIT
*/

#include "parse_tree.prog_io_dcg.mih"


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.globals.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "parse_tree.prog_io_goal.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 100 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 103 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 106 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 109 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 668 "prog_io_dcg.m"
static MR_bool MR_CALL 
parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
#line 668 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__List0_4,
#line 668 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_5,
#line 668 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__List_6);

#line 512 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__512__1_2_p_0(
#line 512 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_57,
#line 512 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_58);

#line 511 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__511__1_2_p_0(
#line 511 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_51,
#line 511 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_52);

#line 458 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__458__1_2_p_0(
#line 458 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_401,
#line 458 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_402);

#line 457 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__457__1_2_p_0(
#line 457 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_395,
#line 457 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_396);

#line 418 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__418__1_2_p_0(
#line 418 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_386,
#line 418 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_387);

#line 417 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__417__1_2_p_0(
#line 417 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_380,
#line 417 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_381);

#line 123 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal__123__1_2_p_0(
#line 123 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_67,
#line 123 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_68);

#line 77 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_clause__77__1_2_p_0(
#line 77 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_50,
#line 77 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_51);

#line 649 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(
#line 649 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__AddedGoal_5,
#line 649 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_6,
#line 649 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Disjunct0_7,
#line 649 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Disjunct_8);

#line 639 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__new_dcg_var_5_p_0(
#line 639 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_12,
#line 639 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_13,
#line 639 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_14,
#line 639 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_15,
#line 639 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__DCGVar_8);

#line 573 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(
#line 573 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__CondGoalTerm_13,
#line 573 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_14,
#line 573 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ElseGoalTerm_15,
#line 573 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_16,
#line 573 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_17,
#line 573 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_18,
#line 573 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_40,
#line 573 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_41,
#line 573 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_42,
#line 573 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_43,
#line 573 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Var0_21,
#line 573 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Var_22);

#line 539 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(
#line 539 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__CondGoalTerm_13,
#line 539 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_14,
#line 539 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_15,
#line 539 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_16,
#line 539 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsCond_17,
#line 539 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeThen_18,
#line 539 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 539 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 539 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 539 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 539 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Var0_21,
#line 539 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Var_22);

#line 512 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_2(
#line 512 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 512 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 512 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 511 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_1(
#line 511 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 511 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 511 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 485 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0(
#line 485 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_10,
#line 485 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
#line 485 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsGoal_12,
#line 485 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 485 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 485 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 485 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 485 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_34,
#line 485 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_35);

#line 458 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_4(
#line 458 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 458 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 458 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 457 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_3(
#line 457 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 457 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 457 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 418 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_2(
#line 418 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 418 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 418 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 417 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_1(
#line 417 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 417 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 417 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 164 "prog_io_dcg.m"
static MR_bool MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0(
#line 164 "prog_io_dcg.m"
  MR_String parse_tree__prog_io_dcg__Functor_12,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Args_13,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_14,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_15,
#line 164 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_16,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98,
#line 164 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100,
#line 164 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102,
#line 164 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103);

#line 123 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0_1(
#line 123 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 123 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 123 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

#line 106 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(
#line 106 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_10,
#line 106 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
#line 106 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_12,
#line 106 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 106 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 106 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 106 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 106 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_34,
#line 106 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_35);

#line 77 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0_1(
#line 77 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 77 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 77 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_1[9][2];

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_2[3][5];

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_3[8][3];

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_4[2][1];




static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_1[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In DCG clause head:"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_dcg__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_dcg__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_dcg__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_io_dcg__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_dcg__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_dcg__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_3[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[0])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[1])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "call"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "[|]"))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 576 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 584 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 592 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 600 "parse_tree.prog_io_dcg.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 668 "prog_io_dcg.m"
static MR_bool MR_CALL 
parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
#line 668 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__List0_4,
#line 668 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_5,
#line 668 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__List_6)
#line 668 "prog_io_dcg.m"
{
#line 674 "prog_io_dcg.m"
  {
#line 674 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__List0_4)) == (MR_mktag((MR_Integer) 0)));
#line 672 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_12_12;
#line 672 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__V_13_13;
#line 672 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_14_14;
#line 672 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg___Context_7;

#line 672 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 672 "prog_io_dcg.m"
      {
#line 672 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 0)));
#line 672 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 1)));
#line 672 "prog_io_dcg.m"
        parse_tree__prog_io_dcg___Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 2)));
#line 672 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 672 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 672 "prog_io_dcg.m"
          {
#line 672 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_12_12)) == (MR_mktag((MR_Integer) 0)));
#line 672 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 672 "prog_io_dcg.m"
              {
#line 672 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_12_12, (MR_Integer) 0)));
#line 672 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_13_13, (MR_String) "[]") == 0);
#line 672 "prog_io_dcg.m"
              }
#line 672 "prog_io_dcg.m"
          }
#line 672 "prog_io_dcg.m"
      }
#line 674 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 673 "prog_io_dcg.m"
      {
#line 673 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__List_6 = parse_tree__prog_io_dcg__Term_5;
#line 673 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 673 "prog_io_dcg.m"
      }
#line 674 "prog_io_dcg.m"
    else
#line 675 "prog_io_dcg.m"
      {
#line 675 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Head_8;
#line 675 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Tail0_9;
#line 675 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Context_10;
#line 675 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Tail_11;
#line 675 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_15_15;
#line 675 "prog_io_dcg.m"
        MR_String parse_tree__prog_io_dcg__V_16_16;
#line 675 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_17_17;
#line 675 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_18_18;
#line 675 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_19_19;
#line 675 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_22_22;
#line 675 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_23_23;
#line 675 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_24_24;

#line 675 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__List0_4)) == (MR_mktag((MR_Integer) 0)));
#line 675 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 675 "prog_io_dcg.m"
          {
#line 675 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 0)));
#line 675 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 1)));
#line 675 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 2)));
#line 675 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 675 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 675 "prog_io_dcg.m"
              {
#line 675 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_15_15, (MR_Integer) 0)));
#line 675 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_16_16, (MR_String) "[|]") == 0);
#line 675 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 675 "prog_io_dcg.m"
                  {
#line 675 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 675 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 675 "prog_io_dcg.m"
                      {
#line 675 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Head_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_17_17, (MR_Integer) 0)));
#line 675 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_17_17, (MR_Integer) 1)));
#line 675 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 675 "prog_io_dcg.m"
                        if (parse_tree__prog_io_dcg__succeeded)
#line 675 "prog_io_dcg.m"
                          {
#line 675 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Tail0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_18_18, (MR_Integer) 0)));
#line 675 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_18_18, (MR_Integer) 1)));
#line 675 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "prog_io_dcg.m"
                            if (parse_tree__prog_io_dcg__succeeded)
#line 675 "prog_io_dcg.m"
                              {
#line 676 "prog_io_dcg.m"
                                {
#line 676 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_dcg__Tail0_9, parse_tree__prog_io_dcg__Term_5, &parse_tree__prog_io_dcg__Tail_11);
                                }
#line 675 "prog_io_dcg.m"
                                if (parse_tree__prog_io_dcg__succeeded)
#line 675 "prog_io_dcg.m"
                                  {
#line 677 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 677 "prog_io_dcg.m"
                                    {
#line 677 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Tail_11));
#line 677 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_24_24));
#line 677 "prog_io_dcg.m"
                                    }
#line 677 "prog_io_dcg.m"
                                    {
#line 677 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Head_8));
#line 677 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_22_22, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_23_23));
#line 677 "prog_io_dcg.m"
                                    }
#line 677 "prog_io_dcg.m"
                                    {
#line 677 "prog_io_dcg.m"
                                      MR_Word base;
#line 677 "prog_io_dcg.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 677 "prog_io_dcg.m"
                                      *parse_tree__prog_io_dcg__List_6 = base;
#line 677 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_15_15));
#line 677 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_22_22));
#line 677 "prog_io_dcg.m"
                                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Context_10));
#line 677 "prog_io_dcg.m"
                                    }
#line 677 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 675 "prog_io_dcg.m"
                                  }
#line 675 "prog_io_dcg.m"
                              }
#line 675 "prog_io_dcg.m"
                          }
#line 675 "prog_io_dcg.m"
                      }
#line 675 "prog_io_dcg.m"
                  }
#line 675 "prog_io_dcg.m"
              }
#line 675 "prog_io_dcg.m"
          }
#line 675 "prog_io_dcg.m"
      }
#line 674 "prog_io_dcg.m"
    return parse_tree__prog_io_dcg__succeeded;
#line 674 "prog_io_dcg.m"
  }
#line 668 "prog_io_dcg.m"
}

#line 512 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__512__1_2_p_0(
#line 512 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_57,
#line 512 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_58)
#line 512 "prog_io_dcg.m"
{
#line 512 "prog_io_dcg.m"
  {
#line 512 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 512 "prog_io_dcg.m"
    {
#line 512 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_57, parse_tree__prog_io_dcg__HeadVar__2_58);
#line 512 "prog_io_dcg.m"
      return;
    }
#line 512 "prog_io_dcg.m"
  }
#line 512 "prog_io_dcg.m"
}

#line 511 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__511__1_2_p_0(
#line 511 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_51,
#line 511 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_52)
#line 511 "prog_io_dcg.m"
{
#line 511 "prog_io_dcg.m"
  {
#line 511 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 511 "prog_io_dcg.m"
    {
#line 511 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_51, parse_tree__prog_io_dcg__HeadVar__2_52);
#line 511 "prog_io_dcg.m"
      return;
    }
#line 511 "prog_io_dcg.m"
  }
#line 511 "prog_io_dcg.m"
}

#line 458 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__458__1_2_p_0(
#line 458 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_401,
#line 458 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_402)
#line 458 "prog_io_dcg.m"
{
#line 458 "prog_io_dcg.m"
  {
#line 458 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 458 "prog_io_dcg.m"
    {
#line 458 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_401, parse_tree__prog_io_dcg__HeadVar__2_402);
#line 458 "prog_io_dcg.m"
      return;
    }
#line 458 "prog_io_dcg.m"
  }
#line 458 "prog_io_dcg.m"
}

#line 457 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__457__1_2_p_0(
#line 457 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_395,
#line 457 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_396)
#line 457 "prog_io_dcg.m"
{
#line 457 "prog_io_dcg.m"
  {
#line 457 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 457 "prog_io_dcg.m"
    {
#line 457 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_395, parse_tree__prog_io_dcg__HeadVar__2_396);
#line 457 "prog_io_dcg.m"
      return;
    }
#line 457 "prog_io_dcg.m"
  }
#line 457 "prog_io_dcg.m"
}

#line 418 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__418__1_2_p_0(
#line 418 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_386,
#line 418 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_387)
#line 418 "prog_io_dcg.m"
{
#line 418 "prog_io_dcg.m"
  {
#line 418 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 418 "prog_io_dcg.m"
    {
#line 418 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_386, parse_tree__prog_io_dcg__HeadVar__2_387);
#line 418 "prog_io_dcg.m"
      return;
    }
#line 418 "prog_io_dcg.m"
  }
#line 418 "prog_io_dcg.m"
}

#line 417 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__417__1_2_p_0(
#line 417 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_380,
#line 417 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_381)
#line 417 "prog_io_dcg.m"
{
#line 417 "prog_io_dcg.m"
  {
#line 417 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 417 "prog_io_dcg.m"
    {
#line 417 "prog_io_dcg.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_380, parse_tree__prog_io_dcg__HeadVar__2_381);
#line 417 "prog_io_dcg.m"
      return;
    }
#line 417 "prog_io_dcg.m"
  }
#line 417 "prog_io_dcg.m"
}

#line 123 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal__123__1_2_p_0(
#line 123 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_67,
#line 123 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_68)
#line 123 "prog_io_dcg.m"
{
#line 123 "prog_io_dcg.m"
  {
#line 123 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 123 "prog_io_dcg.m"
    {
#line 123 "prog_io_dcg.m"
      mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_dcg__HeadVar__1_67, parse_tree__prog_io_dcg__HeadVar__2_68);
#line 123 "prog_io_dcg.m"
      return;
    }
#line 123 "prog_io_dcg.m"
  }
#line 123 "prog_io_dcg.m"
}

#line 77 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_clause__77__1_2_p_0(
#line 77 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_50,
#line 77 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_51)
#line 77 "prog_io_dcg.m"
{
#line 77 "prog_io_dcg.m"
  {
#line 77 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 77 "prog_io_dcg.m"
    {
#line 77 "prog_io_dcg.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_50, parse_tree__prog_io_dcg__HeadVar__2_51);
#line 77 "prog_io_dcg.m"
      return;
    }
#line 77 "prog_io_dcg.m"
  }
#line 77 "prog_io_dcg.m"
}

#line 649 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(
#line 649 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__AddedGoal_5,
#line 649 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_6,
#line 649 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Disjunct0_7,
#line 649 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Disjunct_8)
#line 649 "prog_io_dcg.m"
{
#line 659 "prog_io_dcg.m"
  {
#line 659 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_dcg__Disjunct0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Disjunct0_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 659 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Disjunct0Context_9;
#line 659 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__SubDisjunctA0_10;
#line 659 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__SubDisjunctB0_11;

#line 654 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 654 "prog_io_dcg.m"
      {
#line 654 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Disjunct0Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Disjunct0_7, (MR_Integer) 1)));
#line 654 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__SubDisjunctA0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Disjunct0_7, (MR_Integer) 2)));
#line 654 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__SubDisjunctB0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Disjunct0_7, (MR_Integer) 3)));
#line 656 "prog_io_dcg.m"
        {
#line 656 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__SubDisjunctA_12;
#line 656 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__SubDisjunctB_13;

#line 656 "prog_io_dcg.m"
          {
#line 656 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__AddedGoal_5, parse_tree__prog_io_dcg__Context_6, parse_tree__prog_io_dcg__SubDisjunctA0_10, &parse_tree__prog_io_dcg__SubDisjunctA_12);
          }
#line 657 "prog_io_dcg.m"
          {
#line 657 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__AddedGoal_5, parse_tree__prog_io_dcg__Context_6, parse_tree__prog_io_dcg__SubDisjunctB0_11, &parse_tree__prog_io_dcg__SubDisjunctB_13);
          }
#line 658 "prog_io_dcg.m"
          {
#line 658 "prog_io_dcg.m"
            MR_Word base;
#line 658 "prog_io_dcg.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 658 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__Disjunct_8 = base;
#line 658 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 658 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Disjunct0Context_9));
#line 658 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubDisjunctA_12));
#line 658 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubDisjunctB_13));
#line 658 "prog_io_dcg.m"
          }
#line 656 "prog_io_dcg.m"
        }
#line 654 "prog_io_dcg.m"
      }
#line 654 "prog_io_dcg.m"
    else
#line 660 "prog_io_dcg.m"
      {
#line 660 "prog_io_dcg.m"
        MR_Word base;
#line 660 "prog_io_dcg.m"
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 660 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__Disjunct_8 = base;
#line 660 "prog_io_dcg.m"
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_6));
#line 660 "prog_io_dcg.m"
        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Disjunct0_7));
#line 660 "prog_io_dcg.m"
        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__AddedGoal_5));
#line 660 "prog_io_dcg.m"
      }
#line 659 "prog_io_dcg.m"
  }
#line 649 "prog_io_dcg.m"
}

#line 639 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__new_dcg_var_5_p_0(
#line 639 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_12,
#line 639 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_13,
#line 639 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_14,
#line 639 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_15,
#line 639 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__DCGVar_8)
#line 639 "prog_io_dcg.m"
{
#line 642 "prog_io_dcg.m"
  {
#line 642 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 642 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_20;
#line 642 "prog_io_dcg.m"
    MR_Integer parse_tree__prog_io_dcg__N_9;
#line 642 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__StringN_10;
#line 642 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__VarName_11;
#line 642 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18;

#line 643 "prog_io_dcg.m"
    {
#line 643 "prog_io_dcg.m"
      mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_9, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_14, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_15);
    }
#line 644 "prog_io_dcg.m"
    {
#line 644 "prog_io_dcg.m"
      mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_9, &parse_tree__prog_io_dcg__StringN_10);
    }
#line 645 "prog_io_dcg.m"
    {
#line 645 "prog_io_dcg.m"
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_10, &parse_tree__prog_io_dcg__VarName_11);
    }
#line 1176 "parse_tree.prog_io_dcg.c"
    parse_tree__prog_io_dcg__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 646 "prog_io_dcg.m"
    {
#line 646 "prog_io_dcg.m"
      mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_20, parse_tree__prog_io_dcg__DCGVar_8, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_12, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18);
    }
#line 647 "prog_io_dcg.m"
    {
#line 647 "prog_io_dcg.m"
      mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_20, *parse_tree__prog_io_dcg__DCGVar_8, parse_tree__prog_io_dcg__VarName_11, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_13);
#line 647 "prog_io_dcg.m"
      return;
    }
#line 642 "prog_io_dcg.m"
  }
#line 639 "prog_io_dcg.m"
}

#line 573 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(
#line 573 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__CondGoalTerm_13,
#line 573 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_14,
#line 573 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ElseGoalTerm_15,
#line 573 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_16,
#line 573 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_17,
#line 573 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_18,
#line 573 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_40,
#line 573 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_41,
#line 573 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_42,
#line 573 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_43,
#line 573 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Var0_21,
#line 573 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Var_22)
#line 573 "prog_io_dcg.m"
{
#line 579 "prog_io_dcg.m"
  {
#line 579 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 579 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeVarsCond_23;
#line 579 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeThen1_24;
#line 579 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__VarThen_25;
#line 579 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeElse1_26;
#line 579 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__VarElse_27;
#line 579 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_44_44;
#line 579 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_45_45;
#line 623 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Vars_28;
#line 623 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__StateVars_29;
#line 623 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Cond_30;
#line 623 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Then1_31;
#line 623 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Else1_32;

#line 580 "prog_io_dcg.m"
    {
#line 580 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(parse_tree__prog_io_dcg__CondGoalTerm_13, parse_tree__prog_io_dcg__ThenGoalTerm_14, parse_tree__prog_io_dcg__Context_16, parse_tree__prog_io_dcg__ContextPieces_17, &parse_tree__prog_io_dcg__MaybeVarsCond_23, &parse_tree__prog_io_dcg__MaybeThen1_24, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_40, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_44_44, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_42, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_45_45, parse_tree__prog_io_dcg__Var0_21, &parse_tree__prog_io_dcg__VarThen_25);
    }
#line 582 "prog_io_dcg.m"
    {
#line 582 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ElseGoalTerm_15, parse_tree__prog_io_dcg__ContextPieces_17, &parse_tree__prog_io_dcg__MaybeElse1_26, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_44_44, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_41, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_45_45, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_43, parse_tree__prog_io_dcg__Var0_21, &parse_tree__prog_io_dcg__VarElse_27);
    }
#line 585 "prog_io_dcg.m"
    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeVarsCond_23)) == (MR_mktag((MR_Integer) 1)));
#line 585 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 585 "prog_io_dcg.m"
      {
#line 585 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_23, (MR_Integer) 0)));
#line 585 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__StateVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_23, (MR_Integer) 1)));
#line 585 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Cond_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_23, (MR_Integer) 2)));
#line 586 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeThen1_24)) == (MR_mktag((MR_Integer) 1)));
#line 586 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 586 "prog_io_dcg.m"
          {
#line 586 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Then1_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeThen1_24, (MR_Integer) 0)));
#line 587 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeElse1_26)) == (MR_mktag((MR_Integer) 1)));
#line 587 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 587 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Else1_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeElse1_26, (MR_Integer) 0)));
#line 586 "prog_io_dcg.m"
          }
#line 585 "prog_io_dcg.m"
      }
#line 623 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 620 "prog_io_dcg.m"
      {
#line 620 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Then_33;
#line 620 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Else_34;
#line 620 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Goal_36;
#line 589 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_62_62;

#line 589 "prog_io_dcg.m"
        {
#line 589 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarThen_25)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
        }
#line 589 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 589 "prog_io_dcg.m"
          {
#line 1315 "parse_tree.prog_io_dcg.c"
            parse_tree__prog_io_dcg__TypeInfo_62_62 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 589 "prog_io_dcg.m"
            {
#line 589 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_dcg__TypeInfo_62_62, ((MR_Box) (parse_tree__prog_io_dcg__VarElse_27)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
            }
#line 589 "prog_io_dcg.m"
          }
#line 593 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 590 "prog_io_dcg.m"
          {
#line 590 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var0_21;
#line 591 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Then_33 = parse_tree__prog_io_dcg__Then1_31;
#line 592 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Else_34 = parse_tree__prog_io_dcg__Else1_32;
#line 590 "prog_io_dcg.m"
          }
#line 593 "prog_io_dcg.m"
        else
#line 600 "prog_io_dcg.m"
          {
#line 593 "prog_io_dcg.m"
            {
#line 593 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarThen_25)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
            }
#line 600 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 594 "prog_io_dcg.m"
              {
#line 594 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__Unify_35;
#line 594 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_48_48;
#line 594 "prog_io_dcg.m"
                MR_Word parse_tree__prog_io_dcg__V_49_49;

#line 594 "prog_io_dcg.m"
                *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__VarElse_27;
#line 596 "prog_io_dcg.m"
                {
#line 596 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_48_48, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__Var_22));
#line 596 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_48_48, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 596 "prog_io_dcg.m"
                }
#line 596 "prog_io_dcg.m"
                {
#line 596 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarThen_25));
#line 596 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_49_49, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 596 "prog_io_dcg.m"
                }
#line 595 "prog_io_dcg.m"
                {
#line 595 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Unify_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 595 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_35, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 595 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_35, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_48_48));
#line 595 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_35, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_49_49));
#line 595 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_35, 3) = ((MR_Box) ((MR_Integer) 0));
#line 595 "prog_io_dcg.m"
                }
#line 598 "prog_io_dcg.m"
                {
#line 598 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Then_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 598 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Then_33, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 598 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Then_33, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Then1_31));
#line 598 "prog_io_dcg.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Then_33, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Unify_35));
#line 598 "prog_io_dcg.m"
                }
#line 599 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__Else_34 = parse_tree__prog_io_dcg__Else1_32;
#line 594 "prog_io_dcg.m"
              }
#line 600 "prog_io_dcg.m"
            else
#line 607 "prog_io_dcg.m"
              {
#line 600 "prog_io_dcg.m"
                {
#line 600 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarElse_27)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
                }
#line 607 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 601 "prog_io_dcg.m"
                  {
#line 601 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__V_51_51;
#line 601 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__V_52_52;
#line 601 "prog_io_dcg.m"
                    MR_Word parse_tree__prog_io_dcg__Unify_56;

#line 601 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__VarThen_25;
#line 602 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Then_33 = parse_tree__prog_io_dcg__Then1_31;
#line 604 "prog_io_dcg.m"
                    {
#line 604 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_51_51, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__Var_22));
#line 604 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 604 "prog_io_dcg.m"
                    }
#line 604 "prog_io_dcg.m"
                    {
#line 604 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarElse_27));
#line 604 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 604 "prog_io_dcg.m"
                    }
#line 603 "prog_io_dcg.m"
                    {
#line 603 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__Unify_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 603 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_56, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 603 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_56, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_51_51));
#line 603 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_56, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_52_52));
#line 603 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_56, 3) = ((MR_Box) ((MR_Integer) 0));
#line 603 "prog_io_dcg.m"
                    }
#line 606 "prog_io_dcg.m"
                    {
#line 606 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__Else_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 606 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Else_34, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 606 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Else_34, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Else1_32));
#line 606 "prog_io_dcg.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Else_34, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Unify_56));
#line 606 "prog_io_dcg.m"
                    }
#line 601 "prog_io_dcg.m"
                  }
#line 607 "prog_io_dcg.m"
                else
#line 617 "prog_io_dcg.m"
                  {
#line 617 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__VarElse_27;
#line 618 "prog_io_dcg.m"
                    {
#line 618 "prog_io_dcg.m"
                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_io_dcg__VarThen_25, parse_tree__prog_io_dcg__VarElse_27, parse_tree__prog_io_dcg__Then1_31, &parse_tree__prog_io_dcg__Then_33);
                    }
#line 619 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Else_34 = parse_tree__prog_io_dcg__Else1_32;
#line 617 "prog_io_dcg.m"
                  }
#line 607 "prog_io_dcg.m"
              }
#line 600 "prog_io_dcg.m"
          }
#line 621 "prog_io_dcg.m"
        {
#line 621 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__Goal_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 621 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 621 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
#line 621 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_28));
#line 621 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 3) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_29));
#line 621 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 4) = ((MR_Box) (parse_tree__prog_io_dcg__Cond_30));
#line 621 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 5) = ((MR_Box) (parse_tree__prog_io_dcg__Then_33));
#line 621 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 6) = ((MR_Box) (parse_tree__prog_io_dcg__Else_34));
#line 621 "prog_io_dcg.m"
        }
#line 622 "prog_io_dcg.m"
        {
#line 622 "prog_io_dcg.m"
          MR_Word base;
#line 622 "prog_io_dcg.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 622 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeGoal_18 = base;
#line 622 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_36));
#line 622 "prog_io_dcg.m"
        }
#line 620 "prog_io_dcg.m"
      }
#line 623 "prog_io_dcg.m"
    else
#line 624 "prog_io_dcg.m"
      {
#line 624 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_58_58 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3];
#line 624 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 624 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_60_60;
#line 624 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__CondSpecs_37;
#line 624 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ThenSpecs_38;
#line 624 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ElseSpecs_39;
#line 624 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_54_54;
#line 624 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_55_55;

#line 624 "prog_io_dcg.m"
        {
#line 624 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__CondSpecs_37 = parse_tree__prog_io_util__get_any_errors3_1_f_0(parse_tree__prog_io_dcg__TypeInfo_58_58, parse_tree__prog_io_dcg__TypeInfo_58_58, parse_tree__prog_io_dcg__TypeCtorInfo_59_59, parse_tree__prog_io_dcg__MaybeVarsCond_23);
        }
#line 625 "prog_io_dcg.m"
        {
#line 625 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__ThenSpecs_38 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_59_59, parse_tree__prog_io_dcg__MaybeThen1_24);
        }
#line 626 "prog_io_dcg.m"
        {
#line 626 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__ElseSpecs_39 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_59_59, parse_tree__prog_io_dcg__MaybeElse1_26);
        }
#line 1569 "parse_tree.prog_io_dcg.c"
        parse_tree__prog_io_dcg__TypeCtorInfo_60_60 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 627 "prog_io_dcg.m"
        {
#line 627 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_55_55 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_60_60, parse_tree__prog_io_dcg__ThenSpecs_38, parse_tree__prog_io_dcg__ElseSpecs_39);
        }
#line 627 "prog_io_dcg.m"
        {
#line 627 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_54_54 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_60_60, parse_tree__prog_io_dcg__CondSpecs_37, parse_tree__prog_io_dcg__V_55_55);
        }
#line 627 "prog_io_dcg.m"
        {
#line 627 "prog_io_dcg.m"
          MR_Word base;
#line 627 "prog_io_dcg.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 627 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeGoal_18 = base;
#line 627 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_54_54));
#line 627 "prog_io_dcg.m"
        }
#line 628 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var0_21;
#line 624 "prog_io_dcg.m"
      }
#line 579 "prog_io_dcg.m"
  }
#line 573 "prog_io_dcg.m"
}

#line 539 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(
#line 539 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__CondGoalTerm_13,
#line 539 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_14,
#line 539 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_15,
#line 539 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_16,
#line 539 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsCond_17,
#line 539 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeThen_18,
#line 539 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 539 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 539 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 539 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 539 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Var0_21,
#line 539 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__Var_22)
#line 539 "prog_io_dcg.m"
{
#line 546 "prog_io_dcg.m"
  {
#line 546 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 546 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Var1_23;
#line 546 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeThen1_24;
#line 546 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Var2_25;
#line 546 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_34_34;
#line 546 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_35_35;
#line 546 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36;
#line 546 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37;
#line 552 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeInfo_44_44;

#line 547 "prog_io_dcg.m"
    {
#line 547 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0(parse_tree__prog_io_dcg__CondGoalTerm_13, parse_tree__prog_io_dcg__ContextPieces_16, parse_tree__prog_io_dcg__MaybeVarsCond_17, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_34_34, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_35_35, parse_tree__prog_io_dcg__Var0_21, &parse_tree__prog_io_dcg__Var1_23);
    }
#line 549 "prog_io_dcg.m"
    {
#line 549 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ThenGoalTerm_14, parse_tree__prog_io_dcg__ContextPieces_16, &parse_tree__prog_io_dcg__MaybeThen1_24, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_34_34, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_35_35, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37, parse_tree__prog_io_dcg__Var1_23, &parse_tree__prog_io_dcg__Var2_25);
    }
#line 552 "prog_io_dcg.m"
    {
#line 552 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)), ((MR_Box) (parse_tree__prog_io_dcg__Var1_23)));
    }
#line 552 "prog_io_dcg.m"
    parse_tree__prog_io_dcg__succeeded = !(parse_tree__prog_io_dcg__succeeded);
#line 552 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 552 "prog_io_dcg.m"
      {
#line 1673 "parse_tree.prog_io_dcg.c"
        parse_tree__prog_io_dcg__TypeInfo_44_44 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 553 "prog_io_dcg.m"
        {
#line 553 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_dcg__TypeInfo_44_44, ((MR_Box) (parse_tree__prog_io_dcg__Var1_23)), ((MR_Box) (parse_tree__prog_io_dcg__Var2_25)));
        }
#line 552 "prog_io_dcg.m"
      }
#line 568 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 563 "prog_io_dcg.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeThen1_24)) == (MR_mktag((MR_Integer) 0))))
#line 564 "prog_io_dcg.m"
        {
#line 565 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeThen_18 = parse_tree__prog_io_dcg__MaybeThen1_24;
#line 566 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var2_25;
#line 564 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36;
#line 564 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37;
#line 564 "prog_io_dcg.m"
        }
#line 563 "prog_io_dcg.m"
      else
#line 556 "prog_io_dcg.m"
        {
#line 556 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_59;
#line 556 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__Then1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeThen1_24, (MR_Integer) 0)));
#line 556 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__Unify_27;
#line 556 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__Then_28;
#line 556 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__V_40_40;
#line 556 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__V_41_41;
#line 556 "prog_io_dcg.m"
          MR_Integer parse_tree__prog_io_dcg__N_52;
#line 556 "prog_io_dcg.m"
          MR_String parse_tree__prog_io_dcg__StringN_53;
#line 556 "prog_io_dcg.m"
          MR_String parse_tree__prog_io_dcg__VarName_54;
#line 556 "prog_io_dcg.m"
          MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_57;

#line 643 "prog_io_dcg.m"
          {
#line 643 "prog_io_dcg.m"
            mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_52, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33);
          }
#line 644 "prog_io_dcg.m"
          {
#line 644 "prog_io_dcg.m"
            mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_52, &parse_tree__prog_io_dcg__StringN_53);
          }
#line 645 "prog_io_dcg.m"
          {
#line 645 "prog_io_dcg.m"
            mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_53, &parse_tree__prog_io_dcg__VarName_54);
          }
#line 1738 "parse_tree.prog_io_dcg.c"
          parse_tree__prog_io_dcg__TypeCtorInfo_20_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 646 "prog_io_dcg.m"
          {
#line 646 "prog_io_dcg.m"
            mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_59, parse_tree__prog_io_dcg__Var_22, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_57);
          }
#line 647 "prog_io_dcg.m"
          {
#line 647 "prog_io_dcg.m"
            mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_59, *parse_tree__prog_io_dcg__Var_22, parse_tree__prog_io_dcg__VarName_54, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_57, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31);
          }
#line 559 "prog_io_dcg.m"
          {
#line 559 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__Var_22));
#line 559 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
#line 559 "prog_io_dcg.m"
          }
#line 559 "prog_io_dcg.m"
          {
#line 559 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Var2_25));
#line 559 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
#line 559 "prog_io_dcg.m"
          }
#line 558 "prog_io_dcg.m"
          {
#line 558 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Unify_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 558 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_27, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
#line 558 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_27, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_40_40));
#line 558 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_27, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_41_41));
#line 558 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_27, 3) = ((MR_Box) ((MR_Integer) 0));
#line 558 "prog_io_dcg.m"
          }
#line 561 "prog_io_dcg.m"
          {
#line 561 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Then_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 561 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Then_28, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
#line 561 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Then_28, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Then1_26));
#line 561 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Then_28, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Unify_27));
#line 561 "prog_io_dcg.m"
          }
#line 562 "prog_io_dcg.m"
          {
#line 562 "prog_io_dcg.m"
            MR_Word base;
#line 562 "prog_io_dcg.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 562 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__MaybeThen_18 = base;
#line 562 "prog_io_dcg.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Then_28));
#line 562 "prog_io_dcg.m"
          }
#line 556 "prog_io_dcg.m"
        }
#line 568 "prog_io_dcg.m"
    else
#line 569 "prog_io_dcg.m"
      {
#line 569 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__MaybeThen_18 = parse_tree__prog_io_dcg__MaybeThen1_24;
#line 570 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var2_25;
#line 569 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37;
#line 569 "prog_io_dcg.m"
        *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36;
#line 569 "prog_io_dcg.m"
      }
#line 546 "prog_io_dcg.m"
  }
#line 539 "prog_io_dcg.m"
}

#line 512 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_2(
#line 512 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 512 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 512 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 512 "prog_io_dcg.m"
{
#line 512 "prog_io_dcg.m"
  {
#line 512 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 512 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv1_HeadVar__2_58;

#line 512 "prog_io_dcg.m"
    {
#line 512 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__512__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv1_HeadVar__2_58);
    }
#line 512 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv1_HeadVar__2_58));
#line 512 "prog_io_dcg.m"
  }
#line 512 "prog_io_dcg.m"
}

#line 511 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_1(
#line 511 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 511 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 511 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 511 "prog_io_dcg.m"
{
#line 511 "prog_io_dcg.m"
  {
#line 511 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 511 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_52;

#line 511 "prog_io_dcg.m"
    {
#line 511 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__511__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_52);
    }
#line 511 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_52));
#line 511 "prog_io_dcg.m"
  }
#line 511 "prog_io_dcg.m"
}

#line 485 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0(
#line 485 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_10,
#line 485 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
#line 485 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsGoal_12,
#line 485 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 485 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 485 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 485 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 485 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_34,
#line 485 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_35)
#line 485 "prog_io_dcg.m"
{
#line 491 "prog_io_dcg.m"
  {
#line 491 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 491 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeVars_20;
#line 491 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__GoalTerm_21;
#line 491 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeGoal_22;
#line 501 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__VarsTerm_16;
#line 501 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__SubGoalTerm_17;
#line 493 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_36_36;
#line 493 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__V_37_37;
#line 493 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_38_38;
#line 493 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_39_39;
#line 493 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_40_40;
#line 493 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg___Context_18;
#line 514 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Vars0_23;
#line 514 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__StateVars0_24;
#line 514 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Goal_25;

#line 493 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 493 "prog_io_dcg.m"
      {
#line 493 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 0)));
#line 493 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 1)));
#line 493 "prog_io_dcg.m"
        parse_tree__prog_io_dcg___Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 2)));
#line 493 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 493 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 493 "prog_io_dcg.m"
          {
#line 493 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_36_36, (MR_Integer) 0)));
#line 493 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_37_37, (MR_String) "some") == 0);
#line 493 "prog_io_dcg.m"
            if (parse_tree__prog_io_dcg__succeeded)
#line 493 "prog_io_dcg.m"
              {
#line 493 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 493 "prog_io_dcg.m"
                if (parse_tree__prog_io_dcg__succeeded)
#line 493 "prog_io_dcg.m"
                  {
#line 493 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__VarsTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_38_38, (MR_Integer) 0)));
#line 493 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_38_38, (MR_Integer) 1)));
#line 493 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 493 "prog_io_dcg.m"
                    if (parse_tree__prog_io_dcg__succeeded)
#line 493 "prog_io_dcg.m"
                      {
#line 493 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__SubGoalTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_39_39, (MR_Integer) 0)));
#line 493 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_39_39, (MR_Integer) 1)));
#line 493 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 493 "prog_io_dcg.m"
                      }
#line 493 "prog_io_dcg.m"
                  }
#line 493 "prog_io_dcg.m"
              }
#line 493 "prog_io_dcg.m"
          }
#line 493 "prog_io_dcg.m"
      }
#line 501 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 497 "prog_io_dcg.m"
      {
#line 497 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_50_50 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 497 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__GenericVarSet_19;

#line 497 "prog_io_dcg.m"
        {
#line 497 "prog_io_dcg.m"
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__TypeCtorInfo_50_50, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30, &parse_tree__prog_io_dcg__GenericVarSet_19);
        }
#line 498 "prog_io_dcg.m"
        {
#line 498 "prog_io_dcg.m"
          parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_50_50, parse_tree__prog_io_dcg__VarsTerm_16, parse_tree__prog_io_dcg__GenericVarSet_19, parse_tree__prog_io_dcg__ContextPieces_11, &parse_tree__prog_io_dcg__MaybeVars_20);
        }
#line 500 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__GoalTerm_21 = parse_tree__prog_io_dcg__SubGoalTerm_17;
#line 497 "prog_io_dcg.m"
      }
#line 501 "prog_io_dcg.m"
    else
#line 502 "prog_io_dcg.m"
      {
#line 502 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__MaybeVars_20 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[8]);
#line 503 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__GoalTerm_21 = parse_tree__prog_io_dcg__Term_10;
#line 502 "prog_io_dcg.m"
      }
#line 505 "prog_io_dcg.m"
    {
#line 505 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__GoalTerm_21, parse_tree__prog_io_dcg__ContextPieces_11, &parse_tree__prog_io_dcg__MaybeGoal_22, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_34, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_35);
    }
#line 508 "prog_io_dcg.m"
    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeVars_20)) == (MR_mktag((MR_Integer) 1)));
#line 508 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 508 "prog_io_dcg.m"
      {
#line 508 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Vars0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVars_20, (MR_Integer) 0)));
#line 508 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__StateVars0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVars_20, (MR_Integer) 1)));
#line 509 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal_22)) == (MR_mktag((MR_Integer) 1)));
#line 509 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 509 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__Goal_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal_22, (MR_Integer) 0)));
#line 508 "prog_io_dcg.m"
      }
#line 514 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 511 "prog_io_dcg.m"
      {
#line 511 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_55_55 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[4];
#line 511 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_56_56 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 511 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Vars_26;
#line 511 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__StateVars_27;

#line 511 "prog_io_dcg.m"
        {
#line 511 "prog_io_dcg.m"
          mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_55_55, parse_tree__prog_io_dcg__TypeInfo_56_56, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[6], parse_tree__prog_io_dcg__Vars0_23, &parse_tree__prog_io_dcg__Vars_26);
        }
#line 512 "prog_io_dcg.m"
        {
#line 512 "prog_io_dcg.m"
          mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_55_55, parse_tree__prog_io_dcg__TypeInfo_56_56, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[7], parse_tree__prog_io_dcg__StateVars0_24, &parse_tree__prog_io_dcg__StateVars_27);
        }
#line 513 "prog_io_dcg.m"
        {
#line 513 "prog_io_dcg.m"
          MR_Word base;
#line 513 "prog_io_dcg.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 513 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeVarsGoal_12 = base;
#line 513 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_26));
#line 513 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_27));
#line 513 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_25));
#line 513 "prog_io_dcg.m"
        }
#line 511 "prog_io_dcg.m"
      }
#line 514 "prog_io_dcg.m"
    else
#line 515 "prog_io_dcg.m"
      {
#line 515 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_61_61 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[5];
#line 515 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__VarsSpecs_28;
#line 515 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__GoalSpecs_29;
#line 515 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_48_48;

#line 515 "prog_io_dcg.m"
        {
#line 515 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__VarsSpecs_28 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_dcg__TypeInfo_61_61, parse_tree__prog_io_dcg__TypeInfo_61_61, parse_tree__prog_io_dcg__MaybeVars_20);
        }
#line 516 "prog_io_dcg.m"
        {
#line 516 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__GoalSpecs_29 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, parse_tree__prog_io_dcg__MaybeGoal_22);
        }
#line 517 "prog_io_dcg.m"
        {
#line 517 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_48_48 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__VarsSpecs_28, parse_tree__prog_io_dcg__GoalSpecs_29);
        }
#line 517 "prog_io_dcg.m"
        {
#line 517 "prog_io_dcg.m"
          MR_Word base;
#line 517 "prog_io_dcg.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 517 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeVarsGoal_12 = base;
#line 517 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_48_48));
#line 517 "prog_io_dcg.m"
        }
#line 515 "prog_io_dcg.m"
      }
#line 491 "prog_io_dcg.m"
  }
#line 485 "prog_io_dcg.m"
}

#line 458 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_4(
#line 458 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 458 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 458 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 458 "prog_io_dcg.m"
{
#line 458 "prog_io_dcg.m"
  {
#line 458 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 458 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv3_HeadVar__2_402;

#line 458 "prog_io_dcg.m"
    {
#line 458 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__458__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv3_HeadVar__2_402);
    }
#line 458 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv3_HeadVar__2_402));
#line 458 "prog_io_dcg.m"
  }
#line 458 "prog_io_dcg.m"
}

#line 457 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_3(
#line 457 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 457 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 457 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 457 "prog_io_dcg.m"
{
#line 457 "prog_io_dcg.m"
  {
#line 457 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 457 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv2_HeadVar__2_396;

#line 457 "prog_io_dcg.m"
    {
#line 457 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__457__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv2_HeadVar__2_396);
    }
#line 457 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv2_HeadVar__2_396));
#line 457 "prog_io_dcg.m"
  }
#line 457 "prog_io_dcg.m"
}

#line 418 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_2(
#line 418 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 418 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 418 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 418 "prog_io_dcg.m"
{
#line 418 "prog_io_dcg.m"
  {
#line 418 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 418 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv1_HeadVar__2_387;

#line 418 "prog_io_dcg.m"
    {
#line 418 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__418__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv1_HeadVar__2_387);
    }
#line 418 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv1_HeadVar__2_387));
#line 418 "prog_io_dcg.m"
  }
#line 418 "prog_io_dcg.m"
}

#line 417 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_1(
#line 417 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 417 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 417 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 417 "prog_io_dcg.m"
{
#line 417 "prog_io_dcg.m"
  {
#line 417 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 417 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_381;

#line 417 "prog_io_dcg.m"
    {
#line 417 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__417__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_381);
    }
#line 417 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_381));
#line 417 "prog_io_dcg.m"
  }
#line 417 "prog_io_dcg.m"
}

#line 164 "prog_io_dcg.m"
static MR_bool MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0(
#line 164 "prog_io_dcg.m"
  MR_String parse_tree__prog_io_dcg__Functor_12,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Args_13,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_14,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_15,
#line 164 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_16,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98,
#line 164 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100,
#line 164 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101,
#line 164 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102,
#line 164 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103)
#line 164 "prog_io_dcg.m"
{
#line 173 "prog_io_dcg.m"
  {
#line 173 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;

#line 173 "prog_io_dcg.m"
    {
#line 173 "prog_io_dcg.m"
      MR_Integer parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) -1;

#line 173 "prog_io_dcg.m"
#line 173 "prog_io_dcg.m"
      switch (MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 0)) {
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 38:
#line 173 "prog_io_dcg.m"
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "&"))
#line 173 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 0;
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 44:
#line 173 "prog_io_dcg.m"
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) ","))
#line 173 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 1;
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 58:
#line 173 "prog_io_dcg.m"
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) ":="))
#line 173 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 2;
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 59:
#line 173 "prog_io_dcg.m"
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) ";"))
#line 173 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 3;
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 61:
#line 173 "prog_io_dcg.m"
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "="))
#line 173 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 4;
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 91:
#line 173 "prog_io_dcg.m"
#line 173 "prog_io_dcg.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 1)) {
#line 173 "prog_io_dcg.m"
            case (MR_Integer) 93:
#line 173 "prog_io_dcg.m"
              if (MR_offset_streq(2, parse_tree__prog_io_dcg__Functor_12, (MR_String) "[]"))
#line 173 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 5;
#line 173 "prog_io_dcg.m"
              break;
#line 173 "prog_io_dcg.m"
            case (MR_Integer) 124:
#line 173 "prog_io_dcg.m"
              if (MR_offset_streq(2, parse_tree__prog_io_dcg__Functor_12, (MR_String) "[|]"))
#line 173 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 6;
#line 173 "prog_io_dcg.m"
              break;
#line 173 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 92:
#line 173 "prog_io_dcg.m"
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "\\+"))
#line 173 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 7;
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 97:
#line 173 "prog_io_dcg.m"
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "all"))
#line 173 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 8;
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 101:
#line 173 "prog_io_dcg.m"
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "else"))
#line 173 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 9;
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 105:
#line 173 "prog_io_dcg.m"
#line 173 "prog_io_dcg.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 1)) {
#line 173 "prog_io_dcg.m"
            case (MR_Integer) 102:
#line 173 "prog_io_dcg.m"
              if (MR_offset_streq(2, parse_tree__prog_io_dcg__Functor_12, (MR_String) "if"))
#line 173 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 10;
#line 173 "prog_io_dcg.m"
              break;
#line 173 "prog_io_dcg.m"
            case (MR_Integer) 109:
#line 173 "prog_io_dcg.m"
              if (MR_offset_streq(2, parse_tree__prog_io_dcg__Functor_12, (MR_String) "impure"))
#line 173 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 11;
#line 173 "prog_io_dcg.m"
              break;
#line 173 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 110:
#line 173 "prog_io_dcg.m"
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "not"))
#line 173 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 7;
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 112:
#line 173 "prog_io_dcg.m"
          if (((((((((((((((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 1)) == (MR_Integer) 114)) && (((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 7)) == (MR_Integer) 95))))
#line 173 "prog_io_dcg.m"
#line 173 "prog_io_dcg.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 8)) {
#line 173 "prog_io_dcg.m"
              case (MR_Integer) 105:
#line 173 "prog_io_dcg.m"
                if (MR_offset_streq(9, parse_tree__prog_io_dcg__Functor_12, (MR_String) "promise_impure"))
#line 173 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 12;
#line 173 "prog_io_dcg.m"
                break;
#line 173 "prog_io_dcg.m"
              case (MR_Integer) 112:
#line 173 "prog_io_dcg.m"
                if (MR_offset_streq(9, parse_tree__prog_io_dcg__Functor_12, (MR_String) "promise_pure"))
#line 173 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 13;
#line 173 "prog_io_dcg.m"
                break;
#line 173 "prog_io_dcg.m"
              case (MR_Integer) 115:
#line 173 "prog_io_dcg.m"
                if (MR_offset_streq(9, parse_tree__prog_io_dcg__Functor_12, (MR_String) "promise_semipure"))
#line 173 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 14;
#line 173 "prog_io_dcg.m"
                break;
#line 173 "prog_io_dcg.m"
            }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 115:
#line 173 "prog_io_dcg.m"
#line 173 "prog_io_dcg.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 1)) {
#line 173 "prog_io_dcg.m"
            case (MR_Integer) 101:
#line 173 "prog_io_dcg.m"
              if (MR_offset_streq(2, parse_tree__prog_io_dcg__Functor_12, (MR_String) "semipure"))
#line 173 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 15;
#line 173 "prog_io_dcg.m"
              break;
#line 173 "prog_io_dcg.m"
            case (MR_Integer) 111:
#line 173 "prog_io_dcg.m"
              if (MR_offset_streq(2, parse_tree__prog_io_dcg__Functor_12, (MR_String) "some"))
#line 173 "prog_io_dcg.m"
                parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 16;
#line 173 "prog_io_dcg.m"
              break;
#line 173 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 123:
#line 173 "prog_io_dcg.m"
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "{}"))
#line 173 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 17;
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
      }
#line 173 "prog_io_dcg.m"
#line 173 "prog_io_dcg.m"
      switch (parse_tree__prog_io_dcg__case_num_0) {
#line 173 "prog_io_dcg.m"
        default:
#line 173 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__succeeded = MR_FALSE;
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 0:
#line 308 "prog_io_dcg.m"
          {
#line 308 "prog_io_dcg.m"
            /* case "&" */
#line 308 "prog_io_dcg.m"
            {
#line 308 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_163_163;
#line 308 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_164_164;
#line 308 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_165_165;
#line 308 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_166_166;
#line 308 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_167_167;
#line 308 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTermA_261;
#line 308 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTermB_262;
#line 308 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__MaybeSubGoalA_263;
#line 308 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__MaybeSubGoalB_264;
#line 320 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalA_256;
#line 320 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalB_257;

#line 309 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 309 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 309 "prog_io_dcg.m"
                {
#line 309 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__SubGoalTermA_261 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 309 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 309 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_163_163)) == (MR_mktag((MR_Integer) 1)));
#line 309 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 309 "prog_io_dcg.m"
                    {
#line 309 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__SubGoalTermB_262 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_163_163, (MR_Integer) 0)));
#line 309 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_163_163, (MR_Integer) 1)));
#line 309 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_164_164 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 308 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 308 "prog_io_dcg.m"
                        {
#line 310 "prog_io_dcg.m"
                          {
#line 310 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTermA_261, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoalA_263, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_165_165, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_166_166, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102, &parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_167_167);
                          }
#line 312 "prog_io_dcg.m"
                          {
#line 312 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTermB_262, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoalB_264, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_165_165, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_166_166, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_167_167, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103);
                          }
#line 315 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoalA_263)) == (MR_mktag((MR_Integer) 1)));
#line 315 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 315 "prog_io_dcg.m"
                            {
#line 315 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__SubGoalA_256 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoalA_263, (MR_Integer) 0)));
#line 316 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoalB_264)) == (MR_mktag((MR_Integer) 1)));
#line 316 "prog_io_dcg.m"
                              if (parse_tree__prog_io_dcg__succeeded)
#line 316 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__SubGoalB_257 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoalB_264, (MR_Integer) 0)));
#line 315 "prog_io_dcg.m"
                            }
#line 320 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 318 "prog_io_dcg.m"
                            {
#line 318 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__Goal_252;

#line 318 "prog_io_dcg.m"
                              {
#line 318 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__Goal_252 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 318 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_252, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 318 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_252, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 318 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_252, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalA_256));
#line 318 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_252, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalB_257));
#line 318 "prog_io_dcg.m"
                              }
#line 319 "prog_io_dcg.m"
                              {
#line 319 "prog_io_dcg.m"
                                MR_Word base;
#line 319 "prog_io_dcg.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 319 "prog_io_dcg.m"
                                *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 319 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_252));
#line 319 "prog_io_dcg.m"
                              }
#line 318 "prog_io_dcg.m"
                            }
#line 320 "prog_io_dcg.m"
                          else
#line 321 "prog_io_dcg.m"
                            {
#line 321 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_374_374 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 321 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__V_171_171;
#line 321 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__SpecsA_253;
#line 321 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__SpecsB_254;

#line 321 "prog_io_dcg.m"
                              {
#line 321 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__SpecsA_253 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_374_374, parse_tree__prog_io_dcg__MaybeSubGoalA_263);
                              }
#line 322 "prog_io_dcg.m"
                              {
#line 322 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__SpecsB_254 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_374_374, parse_tree__prog_io_dcg__MaybeSubGoalB_264);
                              }
#line 323 "prog_io_dcg.m"
                              {
#line 323 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__V_171_171 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__SpecsA_253, parse_tree__prog_io_dcg__SpecsB_254);
                              }
#line 323 "prog_io_dcg.m"
                              {
#line 323 "prog_io_dcg.m"
                                MR_Word base;
#line 323 "prog_io_dcg.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 323 "prog_io_dcg.m"
                                *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 323 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_171_171));
#line 323 "prog_io_dcg.m"
                              }
#line 321 "prog_io_dcg.m"
                            }
#line 320 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 308 "prog_io_dcg.m"
                        }
#line 309 "prog_io_dcg.m"
                    }
#line 309 "prog_io_dcg.m"
                }
#line 308 "prog_io_dcg.m"
            }
#line 308 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 1:
#line 289 "prog_io_dcg.m"
          {
#line 289 "prog_io_dcg.m"
            /* case "," */
#line 289 "prog_io_dcg.m"
            {
#line 289 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTermA_51;
#line 289 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTermB_52;
#line 289 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__MaybeSubGoalA_53;
#line 289 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__MaybeSubGoalB_54;
#line 289 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_172_172;
#line 289 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_173_173;
#line 289 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_174_174;
#line 289 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_175_175;
#line 289 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_176_176;
#line 302 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalA_55;
#line 302 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalB_56;

#line 290 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 290 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 290 "prog_io_dcg.m"
                {
#line 290 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__SubGoalTermA_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 290 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 290 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_172_172)) == (MR_mktag((MR_Integer) 1)));
#line 290 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 290 "prog_io_dcg.m"
                    {
#line 290 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__SubGoalTermB_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_172_172, (MR_Integer) 0)));
#line 290 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_172_172, (MR_Integer) 1)));
#line 290 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_173_173 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 289 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 289 "prog_io_dcg.m"
                        {
#line 292 "prog_io_dcg.m"
                          {
#line 292 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTermA_51, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoalA_53, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_174_174, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_175_175, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102, &parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_176_176);
                          }
#line 294 "prog_io_dcg.m"
                          {
#line 294 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTermB_52, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoalB_54, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_174_174, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_175_175, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_176_176, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103);
                          }
#line 297 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoalA_53)) == (MR_mktag((MR_Integer) 1)));
#line 297 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 297 "prog_io_dcg.m"
                            {
#line 297 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__SubGoalA_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoalA_53, (MR_Integer) 0)));
#line 298 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoalB_54)) == (MR_mktag((MR_Integer) 1)));
#line 298 "prog_io_dcg.m"
                              if (parse_tree__prog_io_dcg__succeeded)
#line 298 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__SubGoalB_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoalB_54, (MR_Integer) 0)));
#line 297 "prog_io_dcg.m"
                            }
#line 302 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 300 "prog_io_dcg.m"
                            {
#line 300 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__Goal_249;

#line 300 "prog_io_dcg.m"
                              {
#line 300 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__Goal_249 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 300 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Goal_249, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 300 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Goal_249, 1) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalA_55));
#line 300 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Goal_249, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalB_56));
#line 300 "prog_io_dcg.m"
                              }
#line 301 "prog_io_dcg.m"
                              {
#line 301 "prog_io_dcg.m"
                                MR_Word base;
#line 301 "prog_io_dcg.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 301 "prog_io_dcg.m"
                                *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 301 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_249));
#line 301 "prog_io_dcg.m"
                              }
#line 300 "prog_io_dcg.m"
                            }
#line 302 "prog_io_dcg.m"
                          else
#line 303 "prog_io_dcg.m"
                            {
#line 303 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_372_372 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 303 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__SpecsA_57;
#line 303 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__SpecsB_58;
#line 303 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__V_180_180;

#line 303 "prog_io_dcg.m"
                              {
#line 303 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__SpecsA_57 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_372_372, parse_tree__prog_io_dcg__MaybeSubGoalA_53);
                              }
#line 304 "prog_io_dcg.m"
                              {
#line 304 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__SpecsB_58 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_372_372, parse_tree__prog_io_dcg__MaybeSubGoalB_54);
                              }
#line 305 "prog_io_dcg.m"
                              {
#line 305 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__V_180_180 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__SpecsA_57, parse_tree__prog_io_dcg__SpecsB_58);
                              }
#line 305 "prog_io_dcg.m"
                              {
#line 305 "prog_io_dcg.m"
                                MR_Word base;
#line 305 "prog_io_dcg.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 305 "prog_io_dcg.m"
                                *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 305 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_180_180));
#line 305 "prog_io_dcg.m"
                              }
#line 303 "prog_io_dcg.m"
                            }
#line 302 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 289 "prog_io_dcg.m"
                        }
#line 290 "prog_io_dcg.m"
                    }
#line 290 "prog_io_dcg.m"
                }
#line 289 "prog_io_dcg.m"
            }
#line 289 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 2:
#line 250 "prog_io_dcg.m"
          {
#line 250 "prog_io_dcg.m"
            /* case ":=" */
#line 250 "prog_io_dcg.m"
            {
#line 250 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_367_367;
#line 250 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_368_368;
#line 250 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_195_195;
#line 250 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_199_199;
#line 250 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_200_200;
#line 250 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__Goal_240;
#line 250 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__Arg0_242;
#line 250 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__Arg_243;

#line 251 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 251 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 251 "prog_io_dcg.m"
                {
#line 251 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Arg0_242 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 251 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 251 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_195_195 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 250 "prog_io_dcg.m"
                    {
#line 253 "prog_io_dcg.m"
                      {
#line 253 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__new_dcg_var_5_p_0(parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103);
                      }
#line 2898 "parse_tree.prog_io_dcg.c"
                      parse_tree__prog_io_dcg__TypeCtorInfo_367_367 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 2900 "parse_tree.prog_io_dcg.c"
                      parse_tree__prog_io_dcg__TypeCtorInfo_368_368 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 255 "prog_io_dcg.m"
                      {
#line 255 "prog_io_dcg.m"
                        mercury__term__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_367_367, parse_tree__prog_io_dcg__TypeCtorInfo_368_368, parse_tree__prog_io_dcg__Arg0_242, &parse_tree__prog_io_dcg__Arg_243);
                      }
#line 257 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_200_200 = (MR_Integer) 0;
#line 256 "prog_io_dcg.m"
                      {
#line 256 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_199_199, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103));
#line 256 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_199_199, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 256 "prog_io_dcg.m"
                      }
#line 256 "prog_io_dcg.m"
                      {
#line 256 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Goal_240 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 256 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_240, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 256 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_240, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Arg_243));
#line 256 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_240, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_199_199));
#line 256 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_240, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_200_200));
#line 256 "prog_io_dcg.m"
                      }
#line 258 "prog_io_dcg.m"
                      {
#line 258 "prog_io_dcg.m"
                        MR_Word base;
#line 258 "prog_io_dcg.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 258 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 258 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_240));
#line 258 "prog_io_dcg.m"
                      }
#line 258 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 250 "prog_io_dcg.m"
                    }
#line 251 "prog_io_dcg.m"
                }
#line 250 "prog_io_dcg.m"
            }
#line 250 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 3:
#line 326 "prog_io_dcg.m"
          {
#line 326 "prog_io_dcg.m"
            /* case ";" */
#line 326 "prog_io_dcg.m"
            {
#line 326 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_140_140;
#line 326 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_141_141;
#line 326 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTermA_305;
#line 326 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTermB_306;
#line 335 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__CondGoalTerm_296;
#line 335 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_297;
#line 330 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_142_142;
#line 330 "prog_io_dcg.m"
              MR_String parse_tree__prog_io_dcg__V_143_143;
#line 330 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_144_144;
#line 330 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_145_145;
#line 330 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_146_146;
#line 330 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg___Context_59;

#line 327 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 327 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 327 "prog_io_dcg.m"
                {
#line 327 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__SubGoalTermA_305 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 327 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 327 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_140_140)) == (MR_mktag((MR_Integer) 1)));
#line 327 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 327 "prog_io_dcg.m"
                    {
#line 327 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__SubGoalTermB_306 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_140_140, (MR_Integer) 0)));
#line 327 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_140_140, (MR_Integer) 1)));
#line 327 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_141_141 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 326 "prog_io_dcg.m"
                        {
#line 330 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__SubGoalTermA_305)) == (MR_mktag((MR_Integer) 0)));
#line 330 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 330 "prog_io_dcg.m"
                            {
#line 330 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SubGoalTermA_305, (MR_Integer) 0)));
#line 330 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SubGoalTermA_305, (MR_Integer) 1)));
#line 330 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg___Context_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SubGoalTermA_305, (MR_Integer) 2)));
#line 330 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_142_142)) == (MR_mktag((MR_Integer) 0)));
#line 330 "prog_io_dcg.m"
                              if (parse_tree__prog_io_dcg__succeeded)
#line 330 "prog_io_dcg.m"
                                {
#line 330 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__V_143_143 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_142_142, (MR_Integer) 0)));
#line 330 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_143_143, (MR_String) "->") == 0);
#line 330 "prog_io_dcg.m"
                                  if (parse_tree__prog_io_dcg__succeeded)
#line 330 "prog_io_dcg.m"
                                    {
#line 331 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_144_144)) == (MR_mktag((MR_Integer) 1)));
#line 331 "prog_io_dcg.m"
                                      if (parse_tree__prog_io_dcg__succeeded)
#line 331 "prog_io_dcg.m"
                                        {
#line 331 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__CondGoalTerm_296 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_144_144, (MR_Integer) 0)));
#line 331 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_144_144, (MR_Integer) 1)));
#line 331 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_145_145)) == (MR_mktag((MR_Integer) 1)));
#line 331 "prog_io_dcg.m"
                                          if (parse_tree__prog_io_dcg__succeeded)
#line 331 "prog_io_dcg.m"
                                            {
#line 331 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__ThenGoalTerm_297 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_145_145, (MR_Integer) 0)));
#line 331 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_145_145, (MR_Integer) 1)));
#line 331 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_146_146 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "prog_io_dcg.m"
                                            }
#line 331 "prog_io_dcg.m"
                                        }
#line 330 "prog_io_dcg.m"
                                    }
#line 330 "prog_io_dcg.m"
                                }
#line 330 "prog_io_dcg.m"
                            }
#line 335 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 333 "prog_io_dcg.m"
                            {
#line 333 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(parse_tree__prog_io_dcg__CondGoalTerm_296, parse_tree__prog_io_dcg__ThenGoalTerm_297, parse_tree__prog_io_dcg__SubGoalTermB_306, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__MaybeGoal_16, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103);
                            }
#line 335 "prog_io_dcg.m"
                          else
#line 336 "prog_io_dcg.m"
                            {
#line 336 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__MaybeSubGoalA0_61;
#line 336 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__VarA_62;
#line 336 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__MaybeSubGoalB0_63;
#line 336 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__VarB_64;
#line 336 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_150_150;
#line 336 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_151_151;
#line 371 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__SubGoalA0_65;
#line 371 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__SubGoalB0_66;

#line 337 "prog_io_dcg.m"
                              {
#line 337 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTermA_305, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoalA0_61, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_150_150, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_151_151, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102, &parse_tree__prog_io_dcg__VarA_62);
                              }
#line 339 "prog_io_dcg.m"
                              {
#line 339 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTermB_306, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoalB0_63, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_150_150, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_151_151, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102, &parse_tree__prog_io_dcg__VarB_64);
                              }
#line 342 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoalA0_61)) == (MR_mktag((MR_Integer) 1)));
#line 342 "prog_io_dcg.m"
                              if (parse_tree__prog_io_dcg__succeeded)
#line 342 "prog_io_dcg.m"
                                {
#line 342 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__SubGoalA0_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoalA0_61, (MR_Integer) 0)));
#line 343 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoalB0_63)) == (MR_mktag((MR_Integer) 1)));
#line 343 "prog_io_dcg.m"
                                  if (parse_tree__prog_io_dcg__succeeded)
#line 343 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__SubGoalB0_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoalB0_63, (MR_Integer) 0)));
#line 342 "prog_io_dcg.m"
                                }
#line 371 "prog_io_dcg.m"
                              if (parse_tree__prog_io_dcg__succeeded)
#line 368 "prog_io_dcg.m"
                                {
#line 368 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__Goal_280;
#line 345 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__TypeInfo_443_443;

#line 345 "prog_io_dcg.m"
                                  {
#line 345 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarA_62)), ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102)));
                                  }
#line 345 "prog_io_dcg.m"
                                  if (parse_tree__prog_io_dcg__succeeded)
#line 345 "prog_io_dcg.m"
                                    {
#line 3146 "parse_tree.prog_io_dcg.c"
                                      parse_tree__prog_io_dcg__TypeInfo_443_443 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 345 "prog_io_dcg.m"
                                      {
#line 345 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_dcg__TypeInfo_443_443, ((MR_Box) (parse_tree__prog_io_dcg__VarB_64)), ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102)));
                                      }
#line 345 "prog_io_dcg.m"
                                    }
#line 348 "prog_io_dcg.m"
                                  if (parse_tree__prog_io_dcg__succeeded)
#line 346 "prog_io_dcg.m"
                                    {
#line 346 "prog_io_dcg.m"
                                      *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102;
#line 347 "prog_io_dcg.m"
                                      {
#line 347 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__Goal_280 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 347 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_280, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 347 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_280, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 347 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_280, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalA0_65));
#line 347 "prog_io_dcg.m"
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_280, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalB0_66));
#line 347 "prog_io_dcg.m"
                                      }
#line 346 "prog_io_dcg.m"
                                    }
#line 348 "prog_io_dcg.m"
                                  else
#line 356 "prog_io_dcg.m"
                                    {
#line 348 "prog_io_dcg.m"
                                      {
#line 348 "prog_io_dcg.m"
                                        parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarA_62)), ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102)));
                                      }
#line 356 "prog_io_dcg.m"
                                      if (parse_tree__prog_io_dcg__succeeded)
#line 349 "prog_io_dcg.m"
                                        {
#line 349 "prog_io_dcg.m"
                                          MR_Word parse_tree__prog_io_dcg__Unify_68;
#line 349 "prog_io_dcg.m"
                                          MR_Word parse_tree__prog_io_dcg__V_154_154;
#line 349 "prog_io_dcg.m"
                                          MR_Word parse_tree__prog_io_dcg__V_155_155;
#line 349 "prog_io_dcg.m"
                                          MR_Word parse_tree__prog_io_dcg__SubGoalA_269;

#line 349 "prog_io_dcg.m"
                                          *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103 = parse_tree__prog_io_dcg__VarB_64;
#line 351 "prog_io_dcg.m"
                                          {
#line 351 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_154_154, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103));
#line 351 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_154_154, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 351 "prog_io_dcg.m"
                                          }
#line 352 "prog_io_dcg.m"
                                          {
#line 352 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_155_155, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarA_62));
#line 352 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_155_155, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 352 "prog_io_dcg.m"
                                          }
#line 350 "prog_io_dcg.m"
                                          {
#line 350 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__Unify_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 350 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_68, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 350 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_68, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_154_154));
#line 350 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_68, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_155_155));
#line 350 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_68, 3) = ((MR_Box) ((MR_Integer) 0));
#line 350 "prog_io_dcg.m"
                                          }
#line 354 "prog_io_dcg.m"
                                          {
#line 354 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__Unify_68, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__SubGoalA0_65, &parse_tree__prog_io_dcg__SubGoalA_269);
                                          }
#line 355 "prog_io_dcg.m"
                                          {
#line 355 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__Goal_280 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 355 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_280, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 355 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_280, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 355 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_280, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalA_269));
#line 355 "prog_io_dcg.m"
                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_280, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalB0_66));
#line 355 "prog_io_dcg.m"
                                          }
#line 349 "prog_io_dcg.m"
                                        }
#line 356 "prog_io_dcg.m"
                                      else
#line 364 "prog_io_dcg.m"
                                        {
#line 356 "prog_io_dcg.m"
                                          {
#line 356 "prog_io_dcg.m"
                                            parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_dcg__VarB_64)), ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102)));
                                          }
#line 364 "prog_io_dcg.m"
                                          if (parse_tree__prog_io_dcg__succeeded)
#line 357 "prog_io_dcg.m"
                                            {
#line 357 "prog_io_dcg.m"
                                              MR_Word parse_tree__prog_io_dcg__V_157_157;
#line 357 "prog_io_dcg.m"
                                              MR_Word parse_tree__prog_io_dcg__V_158_158;
#line 357 "prog_io_dcg.m"
                                              MR_Word parse_tree__prog_io_dcg__SubGoalB_270;
#line 357 "prog_io_dcg.m"
                                              MR_Word parse_tree__prog_io_dcg__Unify_271;

#line 357 "prog_io_dcg.m"
                                              *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103 = parse_tree__prog_io_dcg__VarA_62;
#line 359 "prog_io_dcg.m"
                                              {
#line 359 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "prog_io_dcg.m"
                                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_157_157, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103));
#line 359 "prog_io_dcg.m"
                                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_157_157, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 359 "prog_io_dcg.m"
                                              }
#line 360 "prog_io_dcg.m"
                                              {
#line 360 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "prog_io_dcg.m"
                                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_158_158, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarB_64));
#line 360 "prog_io_dcg.m"
                                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_158_158, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 360 "prog_io_dcg.m"
                                              }
#line 358 "prog_io_dcg.m"
                                              {
#line 358 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__Unify_271 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 358 "prog_io_dcg.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_271, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 358 "prog_io_dcg.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_271, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_157_157));
#line 358 "prog_io_dcg.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_271, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_158_158));
#line 358 "prog_io_dcg.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_271, 3) = ((MR_Box) ((MR_Integer) 0));
#line 358 "prog_io_dcg.m"
                                              }
#line 362 "prog_io_dcg.m"
                                              {
#line 362 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__Unify_271, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__SubGoalB0_66, &parse_tree__prog_io_dcg__SubGoalB_270);
                                              }
#line 363 "prog_io_dcg.m"
                                              {
#line 363 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__Goal_280 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 363 "prog_io_dcg.m"
                                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_280, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 363 "prog_io_dcg.m"
                                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_280, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 363 "prog_io_dcg.m"
                                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_280, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalA0_65));
#line 363 "prog_io_dcg.m"
                                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_280, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalB_270));
#line 363 "prog_io_dcg.m"
                                              }
#line 357 "prog_io_dcg.m"
                                            }
#line 364 "prog_io_dcg.m"
                                          else
#line 365 "prog_io_dcg.m"
                                            {
#line 365 "prog_io_dcg.m"
                                              MR_Word parse_tree__prog_io_dcg__SubGoalA_272;

#line 365 "prog_io_dcg.m"
                                              *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103 = parse_tree__prog_io_dcg__VarB_64;
#line 366 "prog_io_dcg.m"
                                              {
#line 366 "prog_io_dcg.m"
                                                parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_io_dcg__VarA_62, parse_tree__prog_io_dcg__VarB_64, parse_tree__prog_io_dcg__SubGoalA0_65, &parse_tree__prog_io_dcg__SubGoalA_272);
                                              }
#line 367 "prog_io_dcg.m"
                                              {
#line 367 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__Goal_280 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 367 "prog_io_dcg.m"
                                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_280, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 367 "prog_io_dcg.m"
                                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_280, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 367 "prog_io_dcg.m"
                                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_280, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalA_272));
#line 367 "prog_io_dcg.m"
                                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_280, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalB0_66));
#line 367 "prog_io_dcg.m"
                                              }
#line 365 "prog_io_dcg.m"
                                            }
#line 364 "prog_io_dcg.m"
                                        }
#line 356 "prog_io_dcg.m"
                                    }
#line 370 "prog_io_dcg.m"
                                  {
#line 370 "prog_io_dcg.m"
                                    MR_Word base;
#line 370 "prog_io_dcg.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 370 "prog_io_dcg.m"
                                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 370 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_280));
#line 370 "prog_io_dcg.m"
                                  }
#line 368 "prog_io_dcg.m"
                                }
#line 371 "prog_io_dcg.m"
                              else
#line 372 "prog_io_dcg.m"
                                {
#line 372 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_376_376;
#line 372 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__V_162_162;
#line 372 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__SpecsA_283;
#line 372 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__SpecsB_284;

#line 372 "prog_io_dcg.m"
                                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103 = parse_tree__prog_io_dcg__VarA_62;
#line 3398 "parse_tree.prog_io_dcg.c"
                                  parse_tree__prog_io_dcg__TypeCtorInfo_376_376 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 373 "prog_io_dcg.m"
                                  {
#line 373 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__SpecsA_283 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_376_376, parse_tree__prog_io_dcg__MaybeSubGoalA0_61);
                                  }
#line 374 "prog_io_dcg.m"
                                  {
#line 374 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__SpecsB_284 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_376_376, parse_tree__prog_io_dcg__MaybeSubGoalB0_63);
                                  }
#line 375 "prog_io_dcg.m"
                                  {
#line 375 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__V_162_162 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__SpecsA_283, parse_tree__prog_io_dcg__SpecsB_284);
                                  }
#line 375 "prog_io_dcg.m"
                                  {
#line 375 "prog_io_dcg.m"
                                    MR_Word base;
#line 375 "prog_io_dcg.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 375 "prog_io_dcg.m"
                                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 375 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_162_162));
#line 375 "prog_io_dcg.m"
                                  }
#line 372 "prog_io_dcg.m"
                                }
#line 336 "prog_io_dcg.m"
                            }
#line 335 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 326 "prog_io_dcg.m"
                        }
#line 327 "prog_io_dcg.m"
                    }
#line 327 "prog_io_dcg.m"
                }
#line 326 "prog_io_dcg.m"
            }
#line 326 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 4:
#line 242 "prog_io_dcg.m"
          {
#line 242 "prog_io_dcg.m"
            /* case "=" */
#line 242 "prog_io_dcg.m"
            {
#line 242 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_365_365;
#line 242 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_366_366;
#line 242 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__Arg0_37;
#line 242 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__Arg_38;
#line 242 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_201_201;
#line 242 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_202_202;
#line 242 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_203_203;
#line 242 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__Goal_239;

#line 243 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 243 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 243 "prog_io_dcg.m"
                {
#line 243 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__Arg0_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 243 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 243 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_201_201 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 242 "prog_io_dcg.m"
                    {
#line 3486 "parse_tree.prog_io_dcg.c"
                      parse_tree__prog_io_dcg__TypeCtorInfo_365_365 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 3488 "parse_tree.prog_io_dcg.c"
                      parse_tree__prog_io_dcg__TypeCtorInfo_366_366 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 245 "prog_io_dcg.m"
                      {
#line 245 "prog_io_dcg.m"
                        mercury__term__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_365_365, parse_tree__prog_io_dcg__TypeCtorInfo_366_366, parse_tree__prog_io_dcg__Arg0_37, &parse_tree__prog_io_dcg__Arg_38);
                      }
#line 247 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_203_203 = (MR_Integer) 0;
#line 242 "prog_io_dcg.m"
                      *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98;
#line 242 "prog_io_dcg.m"
                      *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100;
#line 242 "prog_io_dcg.m"
                      *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102;
#line 246 "prog_io_dcg.m"
                      {
#line 246 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_202_202, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102));
#line 246 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_202_202, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 246 "prog_io_dcg.m"
                      }
#line 246 "prog_io_dcg.m"
                      {
#line 246 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__Goal_239 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 246 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_239, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 246 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_239, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Arg_38));
#line 246 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_239, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_202_202));
#line 246 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_239, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_203_203));
#line 246 "prog_io_dcg.m"
                      }
#line 248 "prog_io_dcg.m"
                      {
#line 248 "prog_io_dcg.m"
                        MR_Word base;
#line 248 "prog_io_dcg.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 248 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 248 "prog_io_dcg.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_239));
#line 248 "prog_io_dcg.m"
                      }
#line 248 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 242 "prog_io_dcg.m"
                    }
#line 243 "prog_io_dcg.m"
                }
#line 242 "prog_io_dcg.m"
            }
#line 242 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 5:
#line 217 "prog_io_dcg.m"
          {
#line 217 "prog_io_dcg.m"
            /* case "[]" */
#line 217 "prog_io_dcg.m"
            {
#line 217 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_220_220;
#line 217 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_221_221;
#line 217 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_222_222;
#line 217 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__Goal_235;

#line 218 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 217 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 217 "prog_io_dcg.m"
                {
#line 221 "prog_io_dcg.m"
                  {
#line 221 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__new_dcg_var_5_p_0(parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103);
                  }
#line 225 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_222_222 = (MR_Integer) 0;
#line 224 "prog_io_dcg.m"
                  {
#line 224 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_220_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_220_220, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102));
#line 224 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_220_220, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 224 "prog_io_dcg.m"
                  }
#line 224 "prog_io_dcg.m"
                  {
#line 224 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_221_221, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103));
#line 224 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_221_221, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 224 "prog_io_dcg.m"
                  }
#line 223 "prog_io_dcg.m"
                  {
#line 223 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__Goal_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 223 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_235, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 223 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_235, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_220_220));
#line 223 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_235, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_221_221));
#line 223 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_235, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_222_222));
#line 223 "prog_io_dcg.m"
                  }
#line 226 "prog_io_dcg.m"
                  {
#line 226 "prog_io_dcg.m"
                    MR_Word base;
#line 226 "prog_io_dcg.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 226 "prog_io_dcg.m"
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 226 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_235));
#line 226 "prog_io_dcg.m"
                  }
#line 226 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 217 "prog_io_dcg.m"
                }
#line 217 "prog_io_dcg.m"
            }
#line 217 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 6:
#line 228 "prog_io_dcg.m"
          {
#line 228 "prog_io_dcg.m"
            /* case "[|]" */
#line 228 "prog_io_dcg.m"
            {
#line 228 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_363_363;
#line 228 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_364_364;
#line 228 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__ConsTerm0_34;
#line 228 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__ConsTerm_35;
#line 228 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__Term_36;
#line 228 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_204_204;
#line 228 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_205_205;
#line 228 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_209_209;
#line 228 "prog_io_dcg.m"
              MR_String parse_tree__prog_io_dcg__V_210_210;
#line 228 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_214_214;
#line 228 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_215_215;
#line 228 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_216_216;
#line 228 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__Goal_236;
#line 229 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__X_32;
#line 229 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__Xs_33;

#line 229 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 229 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 229 "prog_io_dcg.m"
                {
#line 229 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__X_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 229 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 229 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_204_204)) == (MR_mktag((MR_Integer) 1)));
#line 229 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 229 "prog_io_dcg.m"
                    {
#line 229 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__Xs_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_204_204, (MR_Integer) 0)));
#line 229 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_204_204, (MR_Integer) 1)));
#line 229 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_205_205 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 228 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 228 "prog_io_dcg.m"
                        {
#line 233 "prog_io_dcg.m"
                          {
#line 233 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__new_dcg_var_5_p_0(parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103);
                          }
#line 235 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_210_210 = (MR_String) "[|]";
#line 3709 "parse_tree.prog_io_dcg.c"
                          parse_tree__prog_io_dcg__TypeCtorInfo_363_363 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 3711 "parse_tree.prog_io_dcg.c"
                          parse_tree__prog_io_dcg__TypeCtorInfo_364_364 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 235 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_209_209 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_4[1];
#line 235 "prog_io_dcg.m"
                          {
#line 235 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__ConsTerm0_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 235 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ConsTerm0_34, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_209_209));
#line 235 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ConsTerm0_34, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Args_13));
#line 235 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ConsTerm0_34, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 235 "prog_io_dcg.m"
                          }
#line 236 "prog_io_dcg.m"
                          {
#line 236 "prog_io_dcg.m"
                            mercury__term__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_363_363, parse_tree__prog_io_dcg__TypeCtorInfo_364_364, parse_tree__prog_io_dcg__ConsTerm0_34, &parse_tree__prog_io_dcg__ConsTerm_35);
                          }
#line 237 "prog_io_dcg.m"
                          {
#line 237 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__V_214_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_214_214, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103));
#line 237 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_214_214, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 237 "prog_io_dcg.m"
                          }
#line 237 "prog_io_dcg.m"
                          {
#line 237 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_dcg__ConsTerm_35, parse_tree__prog_io_dcg__V_214_214, &parse_tree__prog_io_dcg__Term_36);
                          }
#line 228 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 228 "prog_io_dcg.m"
                            {
#line 239 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__V_216_216 = (MR_Integer) 0;
#line 238 "prog_io_dcg.m"
                              {
#line 238 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__V_215_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_215_215, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102));
#line 238 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_215_215, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 238 "prog_io_dcg.m"
                              }
#line 238 "prog_io_dcg.m"
                              {
#line 238 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__Goal_236 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 238 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_236, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 238 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_236, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_215_215));
#line 238 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_236, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Term_36));
#line 238 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_236, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_216_216));
#line 238 "prog_io_dcg.m"
                              }
#line 240 "prog_io_dcg.m"
                              {
#line 240 "prog_io_dcg.m"
                                MR_Word base;
#line 240 "prog_io_dcg.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 240 "prog_io_dcg.m"
                                *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 240 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_236));
#line 240 "prog_io_dcg.m"
                              }
#line 240 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 228 "prog_io_dcg.m"
                            }
#line 228 "prog_io_dcg.m"
                        }
#line 229 "prog_io_dcg.m"
                    }
#line 229 "prog_io_dcg.m"
                }
#line 228 "prog_io_dcg.m"
            }
#line 228 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 7:
#line 391 "prog_io_dcg.m"
          {
#line 391 "prog_io_dcg.m"
            /* case "\+", "not" */
#line 391 "prog_io_dcg.m"
            {
#line 391 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_122_122;
#line 391 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTermA_321;
#line 391 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__MaybeSubGoalA_322;
#line 393 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_73_73;

#line 392 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 392 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 392 "prog_io_dcg.m"
                {
#line 392 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__SubGoalTermA_321 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 392 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 392 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_122_122 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 391 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 391 "prog_io_dcg.m"
                    {
#line 393 "prog_io_dcg.m"
                      {
#line 393 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTermA_321, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoalA_322, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102, &parse_tree__prog_io_dcg__V_73_73);
                      }
#line 399 "prog_io_dcg.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoalA_322)) == (MR_mktag((MR_Integer) 0))))
#line 401 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = parse_tree__prog_io_dcg__MaybeSubGoalA_322;
#line 399 "prog_io_dcg.m"
                      else
#line 396 "prog_io_dcg.m"
                        {
#line 396 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__Goal_313;
#line 396 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__SubGoalA_314 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoalA_322, (MR_Integer) 0)));

#line 397 "prog_io_dcg.m"
                          {
#line 397 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Goal_313 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 397 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_313, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 397 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_313, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 397 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_313, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalA_314));
#line 397 "prog_io_dcg.m"
                          }
#line 398 "prog_io_dcg.m"
                          {
#line 398 "prog_io_dcg.m"
                            MR_Word base;
#line 398 "prog_io_dcg.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 398 "prog_io_dcg.m"
                            *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 398 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_313));
#line 398 "prog_io_dcg.m"
                          }
#line 396 "prog_io_dcg.m"
                        }
#line 391 "prog_io_dcg.m"
                      *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102;
#line 391 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 391 "prog_io_dcg.m"
                    }
#line 392 "prog_io_dcg.m"
                }
#line 391 "prog_io_dcg.m"
            }
#line 391 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 8:
#line 404 "prog_io_dcg.m"
          {
#line 404 "prog_io_dcg.m"
            /* case "all" */
#line 404 "prog_io_dcg.m"
            {
#line 404 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_378_378;
#line 404 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_379_379;
#line 404 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__QVarsTerm_74;
#line 404 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__GenericVarSet_75;
#line 404 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__MaybeStateVarsAndVars_76;
#line 404 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__MaybeSubGoal_77;
#line 404 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_113_113;
#line 404 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_114_114;
#line 404 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_332;
#line 438 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__Vars0_78;
#line 438 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__StateVars0_79;
#line 438 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoal_327;

#line 405 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 405 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 405 "prog_io_dcg.m"
                {
#line 405 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__QVarsTerm_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 405 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 405 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_113_113)) == (MR_mktag((MR_Integer) 1)));
#line 405 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 405 "prog_io_dcg.m"
                    {
#line 405 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__SubGoalTerm_332 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_113_113, (MR_Integer) 0)));
#line 405 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_113_113, (MR_Integer) 1)));
#line 405 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_114_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 404 "prog_io_dcg.m"
                        {
#line 3955 "parse_tree.prog_io_dcg.c"
                          parse_tree__prog_io_dcg__TypeCtorInfo_378_378 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 3957 "parse_tree.prog_io_dcg.c"
                          parse_tree__prog_io_dcg__TypeCtorInfo_379_379 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 408 "prog_io_dcg.m"
                          {
#line 408 "prog_io_dcg.m"
                            mercury__varset__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_378_378, parse_tree__prog_io_dcg__TypeCtorInfo_379_379, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98, &parse_tree__prog_io_dcg__GenericVarSet_75);
                          }
#line 409 "prog_io_dcg.m"
                          {
#line 409 "prog_io_dcg.m"
                            parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_379_379, parse_tree__prog_io_dcg__QVarsTerm_74, parse_tree__prog_io_dcg__GenericVarSet_75, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeStateVarsAndVars_76);
                          }
#line 411 "prog_io_dcg.m"
                          {
#line 411 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_332, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoal_77, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103);
                          }
#line 414 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeStateVarsAndVars_76)) == (MR_mktag((MR_Integer) 1)));
#line 414 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 414 "prog_io_dcg.m"
                            {
#line 414 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__Vars0_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_76, (MR_Integer) 0)));
#line 414 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__StateVars0_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_76, (MR_Integer) 1)));
#line 415 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoal_77)) == (MR_mktag((MR_Integer) 1)));
#line 415 "prog_io_dcg.m"
                              if (parse_tree__prog_io_dcg__succeeded)
#line 415 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__SubGoal_327 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoal_77, (MR_Integer) 0)));
#line 414 "prog_io_dcg.m"
                            }
#line 438 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 417 "prog_io_dcg.m"
                            {
#line 417 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__TypeInfo_384_384 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[4];
#line 417 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__TypeInfo_385_385 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 417 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__Goal_324;
#line 417 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__Vars_325;
#line 417 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__StateVars_326;

#line 417 "prog_io_dcg.m"
                              {
#line 417 "prog_io_dcg.m"
                                mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_384_384, parse_tree__prog_io_dcg__TypeInfo_385_385, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[2], parse_tree__prog_io_dcg__StateVars0_79, &parse_tree__prog_io_dcg__StateVars_326);
                              }
#line 418 "prog_io_dcg.m"
                              {
#line 418 "prog_io_dcg.m"
                                mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_384_384, parse_tree__prog_io_dcg__TypeInfo_385_385, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[3], parse_tree__prog_io_dcg__Vars0_78, &parse_tree__prog_io_dcg__Vars_325);
                              }
#line 423 "prog_io_dcg.m"
                              if ((parse_tree__prog_io_dcg__Vars_325 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 423 "prog_io_dcg.m"
                                if ((parse_tree__prog_io_dcg__StateVars_326 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 420 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__Goal_324 = parse_tree__prog_io_dcg__SubGoal_327;
#line 423 "prog_io_dcg.m"
                                else
#line 426 "prog_io_dcg.m"
                                  {
#line 426 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__Goal_324 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 426 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_324, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 426 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_324, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 426 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_324, 2) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_326));
#line 426 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_324, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_327));
#line 426 "prog_io_dcg.m"
                                  }
#line 423 "prog_io_dcg.m"
                              else
#line 423 "prog_io_dcg.m"
                              if ((parse_tree__prog_io_dcg__StateVars_326 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 430 "prog_io_dcg.m"
                                {
#line 430 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__Goal_324 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 430 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_324, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 430 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_324, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 430 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_324, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_325));
#line 430 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_324, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_327));
#line 430 "prog_io_dcg.m"
                                }
#line 423 "prog_io_dcg.m"
                              else
#line 432 "prog_io_dcg.m"
                                {
#line 432 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__V_120_120;

#line 435 "prog_io_dcg.m"
                                  {
#line 435 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__V_120_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 435 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_120_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 435 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_120_120, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 435 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_120_120, 2) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_326));
#line 435 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_120_120, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_327));
#line 435 "prog_io_dcg.m"
                                  }
#line 434 "prog_io_dcg.m"
                                  {
#line 434 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__Goal_324 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 434 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_324, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 434 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_324, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 434 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_324, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_325));
#line 434 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_324, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_120_120));
#line 434 "prog_io_dcg.m"
                                  }
#line 432 "prog_io_dcg.m"
                                }
#line 437 "prog_io_dcg.m"
                              {
#line 437 "prog_io_dcg.m"
                                MR_Word base;
#line 437 "prog_io_dcg.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 437 "prog_io_dcg.m"
                                *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 437 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_324));
#line 437 "prog_io_dcg.m"
                              }
#line 417 "prog_io_dcg.m"
                            }
#line 438 "prog_io_dcg.m"
                          else
#line 439 "prog_io_dcg.m"
                            {
#line 439 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__TypeInfo_390_390 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[5];
#line 439 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__VarsSpecs_88;
#line 439 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__SubGoalSpecs_89;
#line 439 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__V_121_121;

#line 439 "prog_io_dcg.m"
                              {
#line 439 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__VarsSpecs_88 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_dcg__TypeInfo_390_390, parse_tree__prog_io_dcg__TypeInfo_390_390, parse_tree__prog_io_dcg__MaybeStateVarsAndVars_76);
                              }
#line 440 "prog_io_dcg.m"
                              {
#line 440 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__SubGoalSpecs_89 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, parse_tree__prog_io_dcg__MaybeSubGoal_77);
                              }
#line 441 "prog_io_dcg.m"
                              {
#line 441 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__V_121_121 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__VarsSpecs_88, parse_tree__prog_io_dcg__SubGoalSpecs_89);
                              }
#line 441 "prog_io_dcg.m"
                              {
#line 441 "prog_io_dcg.m"
                                MR_Word base;
#line 441 "prog_io_dcg.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 441 "prog_io_dcg.m"
                                *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 441 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_121_121));
#line 441 "prog_io_dcg.m"
                              }
#line 439 "prog_io_dcg.m"
                            }
#line 438 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 404 "prog_io_dcg.m"
                        }
#line 405 "prog_io_dcg.m"
                    }
#line 405 "prog_io_dcg.m"
                }
#line 404 "prog_io_dcg.m"
            }
#line 404 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 9:
#line 379 "prog_io_dcg.m"
          {
#line 379 "prog_io_dcg.m"
            /* case "else" */
#line 379 "prog_io_dcg.m"
            {
#line 379 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__CondThenTerm_69;
#line 379 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__ElseGoalTerm_70;
#line 379 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__CondContext_72;
#line 379 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_125_125;
#line 379 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_126_126;
#line 379 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_127_127;
#line 379 "prog_io_dcg.m"
              MR_String parse_tree__prog_io_dcg__V_128_128;
#line 379 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_129_129;
#line 379 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_130_130;
#line 379 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_131_131;
#line 379 "prog_io_dcg.m"
              MR_String parse_tree__prog_io_dcg__V_132_132;
#line 379 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_133_133;
#line 379 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_134_134;
#line 379 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_135_135;
#line 379 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_136_136;
#line 379 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__CondGoalTerm_311;
#line 379 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_312;
#line 383 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_71_71;

#line 380 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 380 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 380 "prog_io_dcg.m"
                {
#line 380 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__CondThenTerm_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 380 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 380 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_125_125)) == (MR_mktag((MR_Integer) 1)));
#line 380 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 380 "prog_io_dcg.m"
                    {
#line 380 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__ElseGoalTerm_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_125_125, (MR_Integer) 0)));
#line 380 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_125_125, (MR_Integer) 1)));
#line 380 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_126_126 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 379 "prog_io_dcg.m"
                        {
#line 382 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__CondThenTerm_69)) == (MR_mktag((MR_Integer) 0)));
#line 382 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 382 "prog_io_dcg.m"
                            {
#line 382 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__CondThenTerm_69, (MR_Integer) 0)));
#line 382 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__CondThenTerm_69, (MR_Integer) 1)));
#line 382 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__CondContext_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__CondThenTerm_69, (MR_Integer) 2)));
#line 382 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_127_127)) == (MR_mktag((MR_Integer) 0)));
#line 382 "prog_io_dcg.m"
                              if (parse_tree__prog_io_dcg__succeeded)
#line 382 "prog_io_dcg.m"
                                {
#line 382 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__V_128_128 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_127_127, (MR_Integer) 0)));
#line 382 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_128_128, (MR_String) "if") == 0);
#line 379 "prog_io_dcg.m"
                                  if (parse_tree__prog_io_dcg__succeeded)
#line 379 "prog_io_dcg.m"
                                    {
#line 384 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_129_129)) == (MR_mktag((MR_Integer) 1)));
#line 384 "prog_io_dcg.m"
                                      if (parse_tree__prog_io_dcg__succeeded)
#line 384 "prog_io_dcg.m"
                                        {
#line 384 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_129_129, (MR_Integer) 0)));
#line 384 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_129_129, (MR_Integer) 1)));
#line 384 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_136_136 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "prog_io_dcg.m"
                                          if (parse_tree__prog_io_dcg__succeeded)
#line 379 "prog_io_dcg.m"
                                            {
#line 383 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_130_130)) == (MR_mktag((MR_Integer) 0)));
#line 383 "prog_io_dcg.m"
                                              if (parse_tree__prog_io_dcg__succeeded)
#line 383 "prog_io_dcg.m"
                                                {
#line 383 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_130_130, (MR_Integer) 0)));
#line 383 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_130_130, (MR_Integer) 1)));
#line 383 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_130_130, (MR_Integer) 2)));
#line 383 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_131_131)) == (MR_mktag((MR_Integer) 0)));
#line 383 "prog_io_dcg.m"
                                                  if (parse_tree__prog_io_dcg__succeeded)
#line 383 "prog_io_dcg.m"
                                                    {
#line 383 "prog_io_dcg.m"
                                                      parse_tree__prog_io_dcg__V_132_132 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_131_131, (MR_Integer) 0)));
#line 383 "prog_io_dcg.m"
                                                      parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_132_132, (MR_String) "then") == 0);
#line 379 "prog_io_dcg.m"
                                                      if (parse_tree__prog_io_dcg__succeeded)
#line 379 "prog_io_dcg.m"
                                                        {
#line 384 "prog_io_dcg.m"
                                                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_133_133)) == (MR_mktag((MR_Integer) 1)));
#line 384 "prog_io_dcg.m"
                                                          if (parse_tree__prog_io_dcg__succeeded)
#line 384 "prog_io_dcg.m"
                                                            {
#line 384 "prog_io_dcg.m"
                                                              parse_tree__prog_io_dcg__CondGoalTerm_311 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_133_133, (MR_Integer) 0)));
#line 384 "prog_io_dcg.m"
                                                              parse_tree__prog_io_dcg__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_133_133, (MR_Integer) 1)));
#line 384 "prog_io_dcg.m"
                                                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_134_134)) == (MR_mktag((MR_Integer) 1)));
#line 384 "prog_io_dcg.m"
                                                              if (parse_tree__prog_io_dcg__succeeded)
#line 384 "prog_io_dcg.m"
                                                                {
#line 384 "prog_io_dcg.m"
                                                                  parse_tree__prog_io_dcg__ThenGoalTerm_312 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_134_134, (MR_Integer) 0)));
#line 384 "prog_io_dcg.m"
                                                                  parse_tree__prog_io_dcg__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_134_134, (MR_Integer) 1)));
#line 384 "prog_io_dcg.m"
                                                                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_135_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "prog_io_dcg.m"
                                                                  if (parse_tree__prog_io_dcg__succeeded)
#line 379 "prog_io_dcg.m"
                                                                    {
#line 386 "prog_io_dcg.m"
                                                                      {
#line 386 "prog_io_dcg.m"
                                                                        parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(parse_tree__prog_io_dcg__CondGoalTerm_311, parse_tree__prog_io_dcg__ThenGoalTerm_312, parse_tree__prog_io_dcg__ElseGoalTerm_70, parse_tree__prog_io_dcg__CondContext_72, parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__MaybeGoal_16, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103);
                                                                      }
#line 386 "prog_io_dcg.m"
                                                                      parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 379 "prog_io_dcg.m"
                                                                    }
#line 384 "prog_io_dcg.m"
                                                                }
#line 384 "prog_io_dcg.m"
                                                            }
#line 379 "prog_io_dcg.m"
                                                        }
#line 383 "prog_io_dcg.m"
                                                    }
#line 383 "prog_io_dcg.m"
                                                }
#line 379 "prog_io_dcg.m"
                                            }
#line 384 "prog_io_dcg.m"
                                        }
#line 379 "prog_io_dcg.m"
                                    }
#line 382 "prog_io_dcg.m"
                                }
#line 382 "prog_io_dcg.m"
                            }
#line 379 "prog_io_dcg.m"
                        }
#line 380 "prog_io_dcg.m"
                    }
#line 380 "prog_io_dcg.m"
                }
#line 379 "prog_io_dcg.m"
            }
#line 379 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 10:
#line 260 "prog_io_dcg.m"
          {
#line 260 "prog_io_dcg.m"
            /* case "if" */
#line 260 "prog_io_dcg.m"
            {
#line 260 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__CondGoalTerm_39;
#line 260 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_40;
#line 260 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__MaybeVarsCondGoal_42;
#line 260 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__MaybeThenGoal_43;
#line 260 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_181_181;
#line 260 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_182_182;
#line 260 "prog_io_dcg.m"
              MR_String parse_tree__prog_io_dcg__V_183_183;
#line 260 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_184_184;
#line 260 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_185_185;
#line 260 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_186_186;
#line 260 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_187_187;
#line 261 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_41_41;
#line 283 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__Vars_44;
#line 283 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__StateVars_45;
#line 283 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__CondGoal_46;
#line 283 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__ThenGoal_47;

#line 262 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 262 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 262 "prog_io_dcg.m"
                {
#line 262 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 262 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 262 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_187_187 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 260 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 260 "prog_io_dcg.m"
                    {
#line 261 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_181_181)) == (MR_mktag((MR_Integer) 0)));
#line 261 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 261 "prog_io_dcg.m"
                        {
#line 261 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_181_181, (MR_Integer) 0)));
#line 261 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_181_181, (MR_Integer) 1)));
#line 261 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_181_181, (MR_Integer) 2)));
#line 261 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_182_182)) == (MR_mktag((MR_Integer) 0)));
#line 261 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 261 "prog_io_dcg.m"
                            {
#line 261 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__V_183_183 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_182_182, (MR_Integer) 0)));
#line 261 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_183_183, (MR_String) "then") == 0);
#line 260 "prog_io_dcg.m"
                              if (parse_tree__prog_io_dcg__succeeded)
#line 260 "prog_io_dcg.m"
                                {
#line 262 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_184_184)) == (MR_mktag((MR_Integer) 1)));
#line 262 "prog_io_dcg.m"
                                  if (parse_tree__prog_io_dcg__succeeded)
#line 262 "prog_io_dcg.m"
                                    {
#line 262 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__CondGoalTerm_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_184_184, (MR_Integer) 0)));
#line 262 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_184_184, (MR_Integer) 1)));
#line 262 "prog_io_dcg.m"
                                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_185_185)) == (MR_mktag((MR_Integer) 1)));
#line 262 "prog_io_dcg.m"
                                      if (parse_tree__prog_io_dcg__succeeded)
#line 262 "prog_io_dcg.m"
                                        {
#line 262 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__ThenGoalTerm_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_185_185, (MR_Integer) 0)));
#line 262 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_185_185, (MR_Integer) 1)));
#line 262 "prog_io_dcg.m"
                                          parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_186_186 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 260 "prog_io_dcg.m"
                                          if (parse_tree__prog_io_dcg__succeeded)
#line 260 "prog_io_dcg.m"
                                            {
#line 265 "prog_io_dcg.m"
                                              {
#line 265 "prog_io_dcg.m"
                                                parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(parse_tree__prog_io_dcg__CondGoalTerm_39, parse_tree__prog_io_dcg__ThenGoalTerm_40, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeVarsCondGoal_42, &parse_tree__prog_io_dcg__MaybeThenGoal_43, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103);
                                              }
#line 269 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeVarsCondGoal_42)) == (MR_mktag((MR_Integer) 1)));
#line 269 "prog_io_dcg.m"
                                              if (parse_tree__prog_io_dcg__succeeded)
#line 269 "prog_io_dcg.m"
                                                {
#line 269 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__Vars_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCondGoal_42, (MR_Integer) 0)));
#line 269 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__StateVars_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCondGoal_42, (MR_Integer) 1)));
#line 269 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__CondGoal_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCondGoal_42, (MR_Integer) 2)));
#line 270 "prog_io_dcg.m"
                                                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeThenGoal_43)) == (MR_mktag((MR_Integer) 1)));
#line 270 "prog_io_dcg.m"
                                                  if (parse_tree__prog_io_dcg__succeeded)
#line 270 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__ThenGoal_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeThenGoal_43, (MR_Integer) 0)));
#line 269 "prog_io_dcg.m"
                                                }
#line 283 "prog_io_dcg.m"
                                              if (parse_tree__prog_io_dcg__succeeded)
#line 279 "prog_io_dcg.m"
                                                {
#line 279 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__ElseGoal_48;
#line 279 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__Goal_244;

#line 272 "prog_io_dcg.m"
                                                  {
#line 272 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2], ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103)), ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102)));
                                                  }
#line 274 "prog_io_dcg.m"
                                                  if (parse_tree__prog_io_dcg__succeeded)
#line 273 "prog_io_dcg.m"
                                                    {
#line 273 "prog_io_dcg.m"
                                                      parse_tree__prog_io_dcg__ElseGoal_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "prog_io_dcg.m"
                                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__ElseGoal_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 273 "prog_io_dcg.m"
                                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__ElseGoal_48, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 273 "prog_io_dcg.m"
                                                    }
#line 274 "prog_io_dcg.m"
                                                  else
#line 275 "prog_io_dcg.m"
                                                    {
#line 275 "prog_io_dcg.m"
                                                      MR_Word parse_tree__prog_io_dcg__V_191_191;
#line 275 "prog_io_dcg.m"
                                                      MR_Word parse_tree__prog_io_dcg__V_192_192;

#line 276 "prog_io_dcg.m"
                                                      {
#line 276 "prog_io_dcg.m"
                                                        parse_tree__prog_io_dcg__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_191_191, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103));
#line 276 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_191_191, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 276 "prog_io_dcg.m"
                                                      }
#line 277 "prog_io_dcg.m"
                                                      {
#line 277 "prog_io_dcg.m"
                                                        parse_tree__prog_io_dcg__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_192_192, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102));
#line 277 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_192_192, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 277 "prog_io_dcg.m"
                                                      }
#line 275 "prog_io_dcg.m"
                                                      {
#line 275 "prog_io_dcg.m"
                                                        parse_tree__prog_io_dcg__ElseGoal_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 275 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ElseGoal_48, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 275 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ElseGoal_48, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_191_191));
#line 275 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ElseGoal_48, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_192_192));
#line 275 "prog_io_dcg.m"
                                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ElseGoal_48, 3) = ((MR_Box) ((MR_Integer) 0));
#line 275 "prog_io_dcg.m"
                                                      }
#line 275 "prog_io_dcg.m"
                                                    }
#line 280 "prog_io_dcg.m"
                                                  {
#line 280 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__Goal_244 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 280 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_244, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 280 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_244, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 280 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_244, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_44));
#line 280 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_244, 3) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_45));
#line 280 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_244, 4) = ((MR_Box) (parse_tree__prog_io_dcg__CondGoal_46));
#line 280 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_244, 5) = ((MR_Box) (parse_tree__prog_io_dcg__ThenGoal_47));
#line 280 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_244, 6) = ((MR_Box) (parse_tree__prog_io_dcg__ElseGoal_48));
#line 280 "prog_io_dcg.m"
                                                  }
#line 282 "prog_io_dcg.m"
                                                  {
#line 282 "prog_io_dcg.m"
                                                    MR_Word base;
#line 282 "prog_io_dcg.m"
                                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prog_io_dcg.m"
                                                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 282 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_244));
#line 282 "prog_io_dcg.m"
                                                  }
#line 279 "prog_io_dcg.m"
                                                }
#line 283 "prog_io_dcg.m"
                                              else
#line 284 "prog_io_dcg.m"
                                                {
#line 284 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__TypeInfo_369_369 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3];
#line 284 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_370_370 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 284 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__CondSpecs_49;
#line 284 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__ThenSpecs_50;
#line 284 "prog_io_dcg.m"
                                                  MR_Word parse_tree__prog_io_dcg__V_194_194;

#line 284 "prog_io_dcg.m"
                                                  {
#line 284 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__CondSpecs_49 = parse_tree__prog_io_util__get_any_errors3_1_f_0(parse_tree__prog_io_dcg__TypeInfo_369_369, parse_tree__prog_io_dcg__TypeInfo_369_369, parse_tree__prog_io_dcg__TypeCtorInfo_370_370, parse_tree__prog_io_dcg__MaybeVarsCondGoal_42);
                                                  }
#line 285 "prog_io_dcg.m"
                                                  {
#line 285 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__ThenSpecs_50 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_370_370, parse_tree__prog_io_dcg__MaybeThenGoal_43);
                                                  }
#line 286 "prog_io_dcg.m"
                                                  {
#line 286 "prog_io_dcg.m"
                                                    parse_tree__prog_io_dcg__V_194_194 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__CondSpecs_49, parse_tree__prog_io_dcg__ThenSpecs_50);
                                                  }
#line 286 "prog_io_dcg.m"
                                                  {
#line 286 "prog_io_dcg.m"
                                                    MR_Word base;
#line 286 "prog_io_dcg.m"
                                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 286 "prog_io_dcg.m"
                                                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 286 "prog_io_dcg.m"
                                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_194_194));
#line 286 "prog_io_dcg.m"
                                                  }
#line 284 "prog_io_dcg.m"
                                                }
#line 283 "prog_io_dcg.m"
                                              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 260 "prog_io_dcg.m"
                                            }
#line 262 "prog_io_dcg.m"
                                        }
#line 262 "prog_io_dcg.m"
                                    }
#line 260 "prog_io_dcg.m"
                                }
#line 261 "prog_io_dcg.m"
                            }
#line 261 "prog_io_dcg.m"
                        }
#line 260 "prog_io_dcg.m"
                    }
#line 262 "prog_io_dcg.m"
                }
#line 260 "prog_io_dcg.m"
            }
#line 260 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 11:
#line 188 "prog_io_dcg.m"
          {
#line 188 "prog_io_dcg.m"
            /* case "impure" */
#line 188 "prog_io_dcg.m"
            {
#line 188 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_24;
#line 188 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__MaybeGoal0_25;
#line 188 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_227_227;

#line 189 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 189 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 189 "prog_io_dcg.m"
                {
#line 189 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__SubGoalTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 189 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 189 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_227_227 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 188 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 188 "prog_io_dcg.m"
                    {
#line 190 "prog_io_dcg.m"
                      {
#line 190 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_24, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeGoal0_25, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103);
                      }
#line 192 "prog_io_dcg.m"
                      {
#line 192 "prog_io_dcg.m"
                        parse_tree__prog_io_goal__apply_purity_marker_to_maybe_goal_4_p_0(parse_tree__prog_io_dcg__SubGoalTerm_24, (MR_Integer) 2, parse_tree__prog_io_dcg__MaybeGoal0_25, parse_tree__prog_io_dcg__MaybeGoal_16);
                      }
#line 192 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 188 "prog_io_dcg.m"
                    }
#line 189 "prog_io_dcg.m"
                }
#line 188 "prog_io_dcg.m"
            }
#line 188 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 12:
#line 204 "prog_io_dcg.m"
          {
#line 204 "prog_io_dcg.m"
            /* case "promise_impure" */
#line 204 "prog_io_dcg.m"
            {
#line 204 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_223_223;
#line 204 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_233;
#line 204 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__MaybeGoal0_234;

#line 205 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 205 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 205 "prog_io_dcg.m"
                {
#line 205 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__SubGoalTerm_233 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 205 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 205 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_223_223 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 204 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 204 "prog_io_dcg.m"
                    {
#line 206 "prog_io_dcg.m"
                      {
#line 206 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_233, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeGoal0_234, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103);
                      }
#line 212 "prog_io_dcg.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal0_234)) == (MR_mktag((MR_Integer) 0))))
#line 214 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = parse_tree__prog_io_dcg__MaybeGoal0_234;
#line 212 "prog_io_dcg.m"
                      else
#line 209 "prog_io_dcg.m"
                        {
#line 209 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal0_234, (MR_Integer) 0)));
#line 209 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__Goal_28;

#line 210 "prog_io_dcg.m"
                          {
#line 210 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Goal_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 210 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 210 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_28, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 210 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_28, 2) = ((MR_Box) ((MR_Integer) 2));
#line 210 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_28, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Goal0_27));
#line 210 "prog_io_dcg.m"
                          }
#line 211 "prog_io_dcg.m"
                          {
#line 211 "prog_io_dcg.m"
                            MR_Word base;
#line 211 "prog_io_dcg.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_io_dcg.m"
                            *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 211 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_28));
#line 211 "prog_io_dcg.m"
                          }
#line 209 "prog_io_dcg.m"
                        }
#line 212 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 204 "prog_io_dcg.m"
                    }
#line 205 "prog_io_dcg.m"
                }
#line 204 "prog_io_dcg.m"
            }
#line 204 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 13:
#line 204 "prog_io_dcg.m"
          {
#line 204 "prog_io_dcg.m"
            /* case "promise_pure" */
#line 204 "prog_io_dcg.m"
            {
#line 204 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_418_418;
#line 204 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_419;
#line 204 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__MaybeGoal0_420;

#line 205 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 205 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 205 "prog_io_dcg.m"
                {
#line 205 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__SubGoalTerm_419 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 205 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_418_418 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 205 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_418_418 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 204 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 204 "prog_io_dcg.m"
                    {
#line 206 "prog_io_dcg.m"
                      {
#line 206 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_419, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeGoal0_420, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103);
                      }
#line 212 "prog_io_dcg.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal0_420)) == (MR_mktag((MR_Integer) 0))))
#line 214 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = parse_tree__prog_io_dcg__MaybeGoal0_420;
#line 212 "prog_io_dcg.m"
                      else
#line 209 "prog_io_dcg.m"
                        {
#line 209 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__Goal0_409 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal0_420, (MR_Integer) 0)));
#line 209 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__Goal_410;

#line 210 "prog_io_dcg.m"
                          {
#line 210 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Goal_410 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 210 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_410, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 210 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_410, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 210 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_410, 2) = ((MR_Box) ((MR_Integer) 0));
#line 210 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_410, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Goal0_409));
#line 210 "prog_io_dcg.m"
                          }
#line 211 "prog_io_dcg.m"
                          {
#line 211 "prog_io_dcg.m"
                            MR_Word base;
#line 211 "prog_io_dcg.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_io_dcg.m"
                            *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 211 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_410));
#line 211 "prog_io_dcg.m"
                          }
#line 209 "prog_io_dcg.m"
                        }
#line 212 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 204 "prog_io_dcg.m"
                    }
#line 205 "prog_io_dcg.m"
                }
#line 204 "prog_io_dcg.m"
            }
#line 204 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 14:
#line 204 "prog_io_dcg.m"
          {
#line 204 "prog_io_dcg.m"
            /* case "promise_semipure" */
#line 204 "prog_io_dcg.m"
            {
#line 204 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_431_431;
#line 204 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_432;
#line 204 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__MaybeGoal0_433;

#line 205 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 205 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 205 "prog_io_dcg.m"
                {
#line 205 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__SubGoalTerm_432 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 205 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_431_431 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 205 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_431_431 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 204 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 204 "prog_io_dcg.m"
                    {
#line 206 "prog_io_dcg.m"
                      {
#line 206 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_432, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeGoal0_433, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103);
                      }
#line 212 "prog_io_dcg.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal0_433)) == (MR_mktag((MR_Integer) 0))))
#line 214 "prog_io_dcg.m"
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = parse_tree__prog_io_dcg__MaybeGoal0_433;
#line 212 "prog_io_dcg.m"
                      else
#line 209 "prog_io_dcg.m"
                        {
#line 209 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__Goal0_422 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal0_433, (MR_Integer) 0)));
#line 209 "prog_io_dcg.m"
                          MR_Word parse_tree__prog_io_dcg__Goal_423;

#line 210 "prog_io_dcg.m"
                          {
#line 210 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__Goal_423 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 210 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_423, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 210 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_423, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 210 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_423, 2) = ((MR_Box) ((MR_Integer) 1));
#line 210 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_423, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Goal0_422));
#line 210 "prog_io_dcg.m"
                          }
#line 211 "prog_io_dcg.m"
                          {
#line 211 "prog_io_dcg.m"
                            MR_Word base;
#line 211 "prog_io_dcg.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_io_dcg.m"
                            *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 211 "prog_io_dcg.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_423));
#line 211 "prog_io_dcg.m"
                          }
#line 209 "prog_io_dcg.m"
                        }
#line 212 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 204 "prog_io_dcg.m"
                    }
#line 205 "prog_io_dcg.m"
                }
#line 204 "prog_io_dcg.m"
            }
#line 204 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 15:
#line 188 "prog_io_dcg.m"
          {
#line 188 "prog_io_dcg.m"
            /* case "semipure" */
#line 188 "prog_io_dcg.m"
            {
#line 188 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_435;
#line 188 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__MaybeGoal0_436;
#line 188 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_437_437;

#line 189 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 189 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 189 "prog_io_dcg.m"
                {
#line 189 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__SubGoalTerm_435 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 189 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_437_437 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 189 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_437_437 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 188 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 188 "prog_io_dcg.m"
                    {
#line 190 "prog_io_dcg.m"
                      {
#line 190 "prog_io_dcg.m"
                        parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_435, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeGoal0_436, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103);
                      }
#line 192 "prog_io_dcg.m"
                      {
#line 192 "prog_io_dcg.m"
                        parse_tree__prog_io_goal__apply_purity_marker_to_maybe_goal_4_p_0(parse_tree__prog_io_dcg__SubGoalTerm_435, (MR_Integer) 1, parse_tree__prog_io_dcg__MaybeGoal0_436, parse_tree__prog_io_dcg__MaybeGoal_16);
                      }
#line 192 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 188 "prog_io_dcg.m"
                    }
#line 189 "prog_io_dcg.m"
                }
#line 188 "prog_io_dcg.m"
            }
#line 188 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 16:
#line 444 "prog_io_dcg.m"
          {
#line 444 "prog_io_dcg.m"
            /* case "some" */
#line 444 "prog_io_dcg.m"
            {
#line 444 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_393_393;
#line 444 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_394_394;
#line 444 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_104_104;
#line 444 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_105_105;
#line 444 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_350;
#line 444 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__QVarsTerm_354;
#line 444 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__GenericVarSet_355;
#line 444 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__MaybeStateVarsAndVars_356;
#line 444 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__MaybeSubGoal_357;
#line 478 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoal_341;
#line 478 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__Vars0_345;
#line 478 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__StateVars0_346;

#line 445 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 445 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 445 "prog_io_dcg.m"
                {
#line 445 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__QVarsTerm_354 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 445 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 445 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_104_104)) == (MR_mktag((MR_Integer) 1)));
#line 445 "prog_io_dcg.m"
                  if (parse_tree__prog_io_dcg__succeeded)
#line 445 "prog_io_dcg.m"
                    {
#line 445 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__SubGoalTerm_350 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_104_104, (MR_Integer) 0)));
#line 445 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_104_104, (MR_Integer) 1)));
#line 445 "prog_io_dcg.m"
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_105_105 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "prog_io_dcg.m"
                      if (parse_tree__prog_io_dcg__succeeded)
#line 444 "prog_io_dcg.m"
                        {
#line 5109 "parse_tree.prog_io_dcg.c"
                          parse_tree__prog_io_dcg__TypeCtorInfo_393_393 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 5111 "parse_tree.prog_io_dcg.c"
                          parse_tree__prog_io_dcg__TypeCtorInfo_394_394 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 448 "prog_io_dcg.m"
                          {
#line 448 "prog_io_dcg.m"
                            mercury__varset__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_393_393, parse_tree__prog_io_dcg__TypeCtorInfo_394_394, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98, &parse_tree__prog_io_dcg__GenericVarSet_355);
                          }
#line 449 "prog_io_dcg.m"
                          {
#line 449 "prog_io_dcg.m"
                            parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_394_394, parse_tree__prog_io_dcg__QVarsTerm_354, parse_tree__prog_io_dcg__GenericVarSet_355, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeStateVarsAndVars_356);
                          }
#line 451 "prog_io_dcg.m"
                          {
#line 451 "prog_io_dcg.m"
                            parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_350, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoal_357, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103);
                          }
#line 454 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeStateVarsAndVars_356)) == (MR_mktag((MR_Integer) 1)));
#line 454 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 454 "prog_io_dcg.m"
                            {
#line 454 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__Vars0_345 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_356, (MR_Integer) 0)));
#line 454 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__StateVars0_346 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_356, (MR_Integer) 1)));
#line 455 "prog_io_dcg.m"
                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoal_357)) == (MR_mktag((MR_Integer) 1)));
#line 455 "prog_io_dcg.m"
                              if (parse_tree__prog_io_dcg__succeeded)
#line 455 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__SubGoal_341 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoal_357, (MR_Integer) 0)));
#line 454 "prog_io_dcg.m"
                            }
#line 478 "prog_io_dcg.m"
                          if (parse_tree__prog_io_dcg__succeeded)
#line 457 "prog_io_dcg.m"
                            {
#line 457 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__TypeInfo_399_399 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[4];
#line 457 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__TypeInfo_400_400 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
#line 457 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__Goal_336;
#line 457 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__Vars_337;
#line 457 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__StateVars_338;

#line 457 "prog_io_dcg.m"
                              {
#line 457 "prog_io_dcg.m"
                                mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_399_399, parse_tree__prog_io_dcg__TypeInfo_400_400, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[4], parse_tree__prog_io_dcg__StateVars0_346, &parse_tree__prog_io_dcg__StateVars_338);
                              }
#line 458 "prog_io_dcg.m"
                              {
#line 458 "prog_io_dcg.m"
                                mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_399_399, parse_tree__prog_io_dcg__TypeInfo_400_400, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[5], parse_tree__prog_io_dcg__Vars0_345, &parse_tree__prog_io_dcg__Vars_337);
                              }
#line 463 "prog_io_dcg.m"
                              if ((parse_tree__prog_io_dcg__Vars_337 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 463 "prog_io_dcg.m"
                                if ((parse_tree__prog_io_dcg__StateVars_338 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 460 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__Goal_336 = parse_tree__prog_io_dcg__SubGoal_341;
#line 463 "prog_io_dcg.m"
                                else
#line 466 "prog_io_dcg.m"
                                  {
#line 466 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__Goal_336 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 466 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_336, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 466 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_336, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 466 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_336, 2) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_338));
#line 466 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_336, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_341));
#line 466 "prog_io_dcg.m"
                                  }
#line 463 "prog_io_dcg.m"
                              else
#line 463 "prog_io_dcg.m"
                              if ((parse_tree__prog_io_dcg__StateVars_338 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 470 "prog_io_dcg.m"
                                {
#line 470 "prog_io_dcg.m"
                                  parse_tree__prog_io_dcg__Goal_336 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 470 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_336, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 470 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_336, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 470 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_336, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_337));
#line 470 "prog_io_dcg.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_336, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_341));
#line 470 "prog_io_dcg.m"
                                }
#line 463 "prog_io_dcg.m"
                              else
#line 472 "prog_io_dcg.m"
                                {
#line 472 "prog_io_dcg.m"
                                  MR_Word parse_tree__prog_io_dcg__V_111_111;

#line 475 "prog_io_dcg.m"
                                  {
#line 475 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__V_111_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 475 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_111_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 475 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_111_111, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 475 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_111_111, 2) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_338));
#line 475 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_111_111, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_341));
#line 475 "prog_io_dcg.m"
                                  }
#line 474 "prog_io_dcg.m"
                                  {
#line 474 "prog_io_dcg.m"
                                    parse_tree__prog_io_dcg__Goal_336 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 474 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_336, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 474 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_336, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
#line 474 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_336, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_337));
#line 474 "prog_io_dcg.m"
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_336, 3) = ((MR_Box) (parse_tree__prog_io_dcg__V_111_111));
#line 474 "prog_io_dcg.m"
                                  }
#line 472 "prog_io_dcg.m"
                                }
#line 477 "prog_io_dcg.m"
                              {
#line 477 "prog_io_dcg.m"
                                MR_Word base;
#line 477 "prog_io_dcg.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 477 "prog_io_dcg.m"
                                *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 477 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_336));
#line 477 "prog_io_dcg.m"
                              }
#line 457 "prog_io_dcg.m"
                            }
#line 478 "prog_io_dcg.m"
                          else
#line 479 "prog_io_dcg.m"
                            {
#line 479 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__TypeInfo_405_405 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[5];
#line 479 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__V_112_112;
#line 479 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__VarsSpecs_339;
#line 479 "prog_io_dcg.m"
                              MR_Word parse_tree__prog_io_dcg__SubGoalSpecs_340;

#line 479 "prog_io_dcg.m"
                              {
#line 479 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__VarsSpecs_339 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_dcg__TypeInfo_405_405, parse_tree__prog_io_dcg__TypeInfo_405_405, parse_tree__prog_io_dcg__MaybeStateVarsAndVars_356);
                              }
#line 480 "prog_io_dcg.m"
                              {
#line 480 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__SubGoalSpecs_340 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, parse_tree__prog_io_dcg__MaybeSubGoal_357);
                              }
#line 481 "prog_io_dcg.m"
                              {
#line 481 "prog_io_dcg.m"
                                parse_tree__prog_io_dcg__V_112_112 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__VarsSpecs_339, parse_tree__prog_io_dcg__SubGoalSpecs_340);
                              }
#line 481 "prog_io_dcg.m"
                              {
#line 481 "prog_io_dcg.m"
                                MR_Word base;
#line 481 "prog_io_dcg.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 481 "prog_io_dcg.m"
                                *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
#line 481 "prog_io_dcg.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_112_112));
#line 481 "prog_io_dcg.m"
                              }
#line 479 "prog_io_dcg.m"
                            }
#line 478 "prog_io_dcg.m"
                          parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 444 "prog_io_dcg.m"
                        }
#line 445 "prog_io_dcg.m"
                    }
#line 445 "prog_io_dcg.m"
                }
#line 444 "prog_io_dcg.m"
            }
#line 444 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
        case (MR_Integer) 17:
#line 173 "prog_io_dcg.m"
          {
#line 173 "prog_io_dcg.m"
            /* case "{}" */
#line 173 "prog_io_dcg.m"
            {
#line 173 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_362_362;
#line 173 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__HeadGoal_20;
#line 173 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__TailGoals_21;
#line 173 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__SubGoal_22;
#line 173 "prog_io_dcg.m"
              MR_Word parse_tree__prog_io_dcg__V_231_231;

#line 174 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 174 "prog_io_dcg.m"
              if (parse_tree__prog_io_dcg__succeeded)
#line 174 "prog_io_dcg.m"
                {
#line 174 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__HeadGoal_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
#line 174 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__TailGoals_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
#line 5347 "parse_tree.prog_io_dcg.c"
                  parse_tree__prog_io_dcg__TypeCtorInfo_362_362 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 178 "prog_io_dcg.m"
                  {
#line 178 "prog_io_dcg.m"
                    parse_tree__prog_io_dcg__V_231_231 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 178 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_231_231, 0) = ((MR_Box) (parse_tree__prog_io_dcg__HeadGoal_20));
#line 178 "prog_io_dcg.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_231_231, 1) = ((MR_Box) (parse_tree__prog_io_dcg__TailGoals_21));
#line 178 "prog_io_dcg.m"
                  }
#line 178 "prog_io_dcg.m"
                  {
#line 178 "prog_io_dcg.m"
                    parse_tree__prog_io_util__one_or_more_to_conjunction_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_362_362, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__V_231_231, &parse_tree__prog_io_dcg__SubGoal_22);
                  }
#line 180 "prog_io_dcg.m"
                  {
#line 180 "prog_io_dcg.m"
                    parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io_dcg__SubGoal_22, parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__MaybeGoal_16, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_98, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_99);
                  }
#line 173 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_101 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_100;
#line 173 "prog_io_dcg.m"
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_103 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_102;
#line 173 "prog_io_dcg.m"
                  parse_tree__prog_io_dcg__succeeded = MR_TRUE;
#line 174 "prog_io_dcg.m"
                }
#line 173 "prog_io_dcg.m"
            }
#line 173 "prog_io_dcg.m"
          }
#line 173 "prog_io_dcg.m"
          break;
#line 173 "prog_io_dcg.m"
      }
#line 173 "prog_io_dcg.m"
    }
#line 173 "prog_io_dcg.m"
    return parse_tree__prog_io_dcg__succeeded;
#line 173 "prog_io_dcg.m"
  }
#line 164 "prog_io_dcg.m"
}

#line 123 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0_1(
#line 123 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 123 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 123 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 123 "prog_io_dcg.m"
{
#line 123 "prog_io_dcg.m"
  {
#line 123 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 123 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_68;

#line 123 "prog_io_dcg.m"
    {
#line 123 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal__123__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_68);
    }
#line 123 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_68));
#line 123 "prog_io_dcg.m"
  }
#line 123 "prog_io_dcg.m"
}

#line 106 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(
#line 106 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Term_10,
#line 106 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
#line 106 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_12,
#line 106 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
#line 106 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
#line 106 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
#line 106 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
#line 106 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_34,
#line 106 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_35)
#line 106 "prog_io_dcg.m"
{
#line 110 "prog_io_dcg.m"
  {
#line 110 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 110 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Context_18;
#line 141 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__SymName_21;
#line 141 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Args0_22;
#line 117 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_66_66;
#line 117 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__ProgTerm_20;

#line 113 "prog_io_dcg.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__Term_10)) == (MR_mktag((MR_Integer) 0))))
#line 112 "prog_io_dcg.m"
      {
#line 112 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 0)));
#line 112 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 1)));

#line 112 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 2)));
#line 112 "prog_io_dcg.m"
      }
#line 113 "prog_io_dcg.m"
    else
#line 113 "prog_io_dcg.m"
      {
#line 113 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 0)));

#line 113 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 1)));
#line 113 "prog_io_dcg.m"
      }
#line 5486 "parse_tree.prog_io_dcg.c"
    parse_tree__prog_io_dcg__TypeCtorInfo_66_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 117 "prog_io_dcg.m"
    {
#line 117 "prog_io_dcg.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_dcg__TypeCtorInfo_66_66, parse_tree__prog_io_dcg__Term_10, &parse_tree__prog_io_dcg__ProgTerm_20);
    }
#line 118 "prog_io_dcg.m"
    {
#line 118 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_66_66, parse_tree__prog_io_dcg__ProgTerm_20, &parse_tree__prog_io_dcg__SymName_21, &parse_tree__prog_io_dcg__Args0_22);
    }
#line 141 "prog_io_dcg.m"
    if (parse_tree__prog_io_dcg__succeeded)
#line 128 "prog_io_dcg.m"
      {
#line 128 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeGoalPrime_25;
#line 128 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_37_37;
#line 128 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_38_38;
#line 128 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_39_39;
#line 122 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_71_71;
#line 122 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__TypeInfo_72_72;
#line 122 "prog_io_dcg.m"
        MR_String parse_tree__prog_io_dcg__Functor_23;
#line 122 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Args1_24;
#line 122 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_36_36;

#line 122 "prog_io_dcg.m"
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__SymName_21)) == (MR_mktag((MR_Integer) 0)));
#line 122 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 122 "prog_io_dcg.m"
          {
#line 122 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Functor_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SymName_21, (MR_Integer) 0)));
#line 123 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__V_36_36 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[1];
#line 5531 "parse_tree.prog_io_dcg.c"
            parse_tree__prog_io_dcg__TypeInfo_71_71 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[1];
#line 5533 "parse_tree.prog_io_dcg.c"
            parse_tree__prog_io_dcg__TypeInfo_72_72 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[0];
#line 123 "prog_io_dcg.m"
            {
#line 123 "prog_io_dcg.m"
              mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_71_71, parse_tree__prog_io_dcg__TypeInfo_72_72, parse_tree__prog_io_dcg__V_36_36, parse_tree__prog_io_dcg__Args0_22, &parse_tree__prog_io_dcg__Args1_24);
            }
#line 124 "prog_io_dcg.m"
            {
#line 124 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0(parse_tree__prog_io_dcg__Functor_23, parse_tree__prog_io_dcg__Args1_24, parse_tree__prog_io_dcg__Context_18, parse_tree__prog_io_dcg__ContextPieces_11, &parse_tree__prog_io_dcg__MaybeGoalPrime_25, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_37_37, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_38_38, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_34, &parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_39_39);
            }
#line 122 "prog_io_dcg.m"
          }
#line 128 "prog_io_dcg.m"
        if (parse_tree__prog_io_dcg__succeeded)
#line 127 "prog_io_dcg.m"
          {
#line 127 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_35 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_39_39;
#line 127 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_38_38;
#line 127 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_37_37;
#line 127 "prog_io_dcg.m"
            *parse_tree__prog_io_dcg__MaybeGoal_12 = parse_tree__prog_io_dcg__MaybeGoalPrime_25;
#line 127 "prog_io_dcg.m"
          }
#line 128 "prog_io_dcg.m"
        else
#line 132 "prog_io_dcg.m"
          {
#line 132 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_90;
#line 132 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Args_28;
#line 132 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Goal_29;
#line 132 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_43_43;
#line 132 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_44_44;
#line 132 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_45_45;
#line 132 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_46_46;
#line 132 "prog_io_dcg.m"
            MR_Integer parse_tree__prog_io_dcg__N_83;
#line 132 "prog_io_dcg.m"
            MR_String parse_tree__prog_io_dcg__StringN_84;
#line 132 "prog_io_dcg.m"
            MR_String parse_tree__prog_io_dcg__VarName_85;
#line 132 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_88;

#line 643 "prog_io_dcg.m"
            {
#line 643 "prog_io_dcg.m"
              mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_83, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33);
            }
#line 644 "prog_io_dcg.m"
            {
#line 644 "prog_io_dcg.m"
              mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_83, &parse_tree__prog_io_dcg__StringN_84);
            }
#line 645 "prog_io_dcg.m"
            {
#line 645 "prog_io_dcg.m"
              mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_84, &parse_tree__prog_io_dcg__VarName_85);
            }
#line 5603 "parse_tree.prog_io_dcg.c"
            parse_tree__prog_io_dcg__TypeCtorInfo_20_90 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 646 "prog_io_dcg.m"
            {
#line 646 "prog_io_dcg.m"
              mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_90, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_35, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_88);
            }
#line 647 "prog_io_dcg.m"
            {
#line 647 "prog_io_dcg.m"
              mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_90, *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_35, parse_tree__prog_io_dcg__VarName_85, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_88, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31);
            }
#line 136 "prog_io_dcg.m"
            {
#line 136 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 136 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_34));
#line 136 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_44_44, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 136 "prog_io_dcg.m"
            }
#line 137 "prog_io_dcg.m"
            {
#line 137 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 137 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_46_46, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_35));
#line 137 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_46_46, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 137 "prog_io_dcg.m"
            }
#line 137 "prog_io_dcg.m"
            {
#line 137 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 137 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_46_46));
#line 137 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 137 "prog_io_dcg.m"
            }
#line 136 "prog_io_dcg.m"
            {
#line 136 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 136 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_44_44));
#line 136 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_45_45));
#line 136 "prog_io_dcg.m"
            }
#line 135 "prog_io_dcg.m"
            {
#line 135 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Args_28 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[1], parse_tree__prog_io_dcg__Args0_22, parse_tree__prog_io_dcg__V_43_43);
            }
#line 138 "prog_io_dcg.m"
            {
#line 138 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Goal_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 138 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Goal_29, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 138 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Goal_29, 1) = ((MR_Box) (parse_tree__prog_io_dcg__SymName_21));
#line 138 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Goal_29, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Args_28));
#line 138 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Goal_29, 3) = ((MR_Box) ((MR_Integer) 0));
#line 138 "prog_io_dcg.m"
            }
#line 139 "prog_io_dcg.m"
            {
#line 139 "prog_io_dcg.m"
              MR_Word base;
#line 139 "prog_io_dcg.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 139 "prog_io_dcg.m"
              *parse_tree__prog_io_dcg__MaybeGoal_12 = base;
#line 139 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_29));
#line 139 "prog_io_dcg.m"
            }
#line 132 "prog_io_dcg.m"
          }
#line 128 "prog_io_dcg.m"
      }
#line 141 "prog_io_dcg.m"
    else
#line 145 "prog_io_dcg.m"
      {
#line 145 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_54_54;
#line 145 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_55_55;
#line 145 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_56_56;
#line 145 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_57_57;
#line 145 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__V_58_58;
#line 145 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__ProgTerm_61;
#line 145 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Goal_64;

#line 146 "prog_io_dcg.m"
        {
#line 146 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__new_dcg_var_5_p_0(parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_35);
        }
#line 148 "prog_io_dcg.m"
        {
#line 148 "prog_io_dcg.m"
          mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__Term_10, &parse_tree__prog_io_dcg__ProgTerm_61);
        }
#line 150 "prog_io_dcg.m"
        {
#line 150 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_34));
#line 150 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 150 "prog_io_dcg.m"
        }
#line 150 "prog_io_dcg.m"
        {
#line 150 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_58_58, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_35));
#line 150 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 150 "prog_io_dcg.m"
        }
#line 150 "prog_io_dcg.m"
        {
#line 150 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_58_58));
#line 150 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 150 "prog_io_dcg.m"
        }
#line 150 "prog_io_dcg.m"
        {
#line 150 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_56_56));
#line 150 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_55_55, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_57_57));
#line 150 "prog_io_dcg.m"
        }
#line 150 "prog_io_dcg.m"
        {
#line 150 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_dcg__ProgTerm_61));
#line 150 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_55_55));
#line 150 "prog_io_dcg.m"
        }
#line 149 "prog_io_dcg.m"
        {
#line 149 "prog_io_dcg.m"
          parse_tree__prog_io_dcg__Goal_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 149 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Goal_64, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_18));
#line 149 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Goal_64, 1) = ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_4[0]));
#line 149 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Goal_64, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_54_54));
#line 149 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Goal_64, 3) = ((MR_Box) ((MR_Integer) 0));
#line 149 "prog_io_dcg.m"
        }
#line 152 "prog_io_dcg.m"
        {
#line 152 "prog_io_dcg.m"
          MR_Word base;
#line 152 "prog_io_dcg.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 152 "prog_io_dcg.m"
          *parse_tree__prog_io_dcg__MaybeGoal_12 = base;
#line 152 "prog_io_dcg.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_64));
#line 152 "prog_io_dcg.m"
        }
#line 145 "prog_io_dcg.m"
      }
#line 110 "prog_io_dcg.m"
  }
#line 106 "prog_io_dcg.m"
}

#line 45 "prog_io_dcg.m"
void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_pred_goal_7_p_0(
#line 45 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__GoalTerm_8,
#line 45 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ContextPieces_9,
#line 45 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_10,
#line 45 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__DCGVar0_11,
#line 45 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__DCGVar_12,
#line 45 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_16,
#line 45 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_17)
#line 45 "prog_io_dcg.m"
{
#line 97 "prog_io_dcg.m"
  {
#line 97 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 97 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_36;
#line 97 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Counter0_14;
#line 97 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18;
#line 97 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_19_19;
#line 97 "prog_io_dcg.m"
    MR_Integer parse_tree__prog_io_dcg__N_29;
#line 97 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__StringN_30;
#line 97 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__VarName_31;
#line 97 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_34;
#line 99 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg___Counter_15;

#line 98 "prog_io_dcg.m"
    {
#line 98 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__V_19_19 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 643 "prog_io_dcg.m"
    {
#line 643 "prog_io_dcg.m"
      mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_29, parse_tree__prog_io_dcg__V_19_19, &parse_tree__prog_io_dcg__Counter0_14);
    }
#line 644 "prog_io_dcg.m"
    {
#line 644 "prog_io_dcg.m"
      mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_29, &parse_tree__prog_io_dcg__StringN_30);
    }
#line 645 "prog_io_dcg.m"
    {
#line 645 "prog_io_dcg.m"
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_30, &parse_tree__prog_io_dcg__VarName_31);
    }
#line 5864 "parse_tree.prog_io_dcg.c"
    parse_tree__prog_io_dcg__TypeCtorInfo_20_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 646 "prog_io_dcg.m"
    {
#line 646 "prog_io_dcg.m"
      mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_36, parse_tree__prog_io_dcg__DCGVar0_11, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_16, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_34);
    }
#line 647 "prog_io_dcg.m"
    {
#line 647 "prog_io_dcg.m"
      mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_36, *parse_tree__prog_io_dcg__DCGVar0_11, parse_tree__prog_io_dcg__VarName_31, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_34, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18);
    }
#line 99 "prog_io_dcg.m"
    {
#line 99 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__GoalTerm_8, parse_tree__prog_io_dcg__ContextPieces_9, parse_tree__prog_io_dcg__MaybeGoal_10, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_17, parse_tree__prog_io_dcg__Counter0_14, &parse_tree__prog_io_dcg___Counter_15, *parse_tree__prog_io_dcg__DCGVar0_11, parse_tree__prog_io_dcg__DCGVar_12);
    }
#line 97 "prog_io_dcg.m"
  }
#line 45 "prog_io_dcg.m"
}

#line 77 "prog_io_dcg.m"
static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0_1(
#line 77 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__closure_arg,
#line 77 "prog_io_dcg.m"
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
#line 77 "prog_io_dcg.m"
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
#line 77 "prog_io_dcg.m"
{
#line 77 "prog_io_dcg.m"
  {
#line 77 "prog_io_dcg.m"
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
#line 77 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_51;

#line 77 "prog_io_dcg.m"
    {
#line 77 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_clause__77__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_51);
    }
#line 77 "prog_io_dcg.m"
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_51));
#line 77 "prog_io_dcg.m"
  }
#line 77 "prog_io_dcg.m"
}

#line 37 "prog_io_dcg.m"
void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0(
#line 37 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__ModuleName_8,
#line 37 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__VarSet0_9,
#line 37 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__DCG_Head_10,
#line 37 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__DCG_Body_11,
#line 37 "prog_io_dcg.m"
  MR_Word parse_tree__prog_io_dcg__Context_12,
#line 37 "prog_io_dcg.m"
  MR_Integer parse_tree__prog_io_dcg__SeqNum_13,
#line 37 "prog_io_dcg.m"
  MR_Word * parse_tree__prog_io_dcg__MaybeItem_14)
#line 37 "prog_io_dcg.m"
{
#line 62 "prog_io_dcg.m"
  {
#line 62 "prog_io_dcg.m"
    MR_bool parse_tree__prog_io_dcg__succeeded;
#line 62 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_48_48 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 62 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_70;
#line 62 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__ProgVarSet0_15;
#line 62 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__ProgVarSet1_16;
#line 62 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__Counter0_17;
#line 62 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__DCGVar0_18;
#line 62 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__MaybeBody_20;
#line 62 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__ProgVarSet_21;
#line 62 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__DCGVar_23;
#line 62 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__V_34_34;
#line 62 "prog_io_dcg.m"
    MR_Integer parse_tree__prog_io_dcg__N_63;
#line 62 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__StringN_64;
#line 62 "prog_io_dcg.m"
    MR_String parse_tree__prog_io_dcg__VarName_65;
#line 62 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_68;
#line 68 "prog_io_dcg.m"
    MR_Word parse_tree__prog_io_dcg___Counter_22;

#line 63 "prog_io_dcg.m"
    {
#line 63 "prog_io_dcg.m"
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_48_48, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__VarSet0_9, &parse_tree__prog_io_dcg__ProgVarSet0_15);
    }
#line 64 "prog_io_dcg.m"
    {
#line 64 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__V_34_34 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 643 "prog_io_dcg.m"
    {
#line 643 "prog_io_dcg.m"
      mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_63, parse_tree__prog_io_dcg__V_34_34, &parse_tree__prog_io_dcg__Counter0_17);
    }
#line 644 "prog_io_dcg.m"
    {
#line 644 "prog_io_dcg.m"
      mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_63, &parse_tree__prog_io_dcg__StringN_64);
    }
#line 645 "prog_io_dcg.m"
    {
#line 645 "prog_io_dcg.m"
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_64, &parse_tree__prog_io_dcg__VarName_65);
    }
#line 5995 "parse_tree.prog_io_dcg.c"
    parse_tree__prog_io_dcg__TypeCtorInfo_20_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 646 "prog_io_dcg.m"
    {
#line 646 "prog_io_dcg.m"
      mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_70, &parse_tree__prog_io_dcg__DCGVar0_18, parse_tree__prog_io_dcg__ProgVarSet0_15, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_68);
    }
#line 647 "prog_io_dcg.m"
    {
#line 647 "prog_io_dcg.m"
      mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_70, parse_tree__prog_io_dcg__DCGVar0_18, parse_tree__prog_io_dcg__VarName_65, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_68, &parse_tree__prog_io_dcg__ProgVarSet1_16);
    }
#line 68 "prog_io_dcg.m"
    {
#line 68 "prog_io_dcg.m"
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__DCG_Body_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_dcg__MaybeBody_20, parse_tree__prog_io_dcg__ProgVarSet1_16, &parse_tree__prog_io_dcg__ProgVarSet_21, parse_tree__prog_io_dcg__Counter0_17, &parse_tree__prog_io_dcg___Counter_22, parse_tree__prog_io_dcg__DCGVar0_18, &parse_tree__prog_io_dcg__DCGVar_23);
    }
#line 89 "prog_io_dcg.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeBody_20)) == (MR_mktag((MR_Integer) 0))))
#line 91 "prog_io_dcg.m"
      *parse_tree__prog_io_dcg__MaybeItem_14 = (MR_Word) parse_tree__prog_io_dcg__MaybeBody_20;
#line 89 "prog_io_dcg.m"
    else
#line 71 "prog_io_dcg.m"
      {
#line 71 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__Body_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeBody_20, (MR_Integer) 0)));
#line 71 "prog_io_dcg.m"
        MR_Word parse_tree__prog_io_dcg__MaybeFunctor_26;

#line 73 "prog_io_dcg.m"
        {
#line 73 "prog_io_dcg.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_48_48, parse_tree__prog_io_dcg__ModuleName_8, parse_tree__prog_io_dcg__DCG_Head_10, parse_tree__prog_io_dcg__VarSet0_9, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[7]), &parse_tree__prog_io_dcg__MaybeFunctor_26);
        }
#line 85 "prog_io_dcg.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeFunctor_26)) == (MR_mktag((MR_Integer) 0))))
#line 86 "prog_io_dcg.m"
          {
#line 86 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Specs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__MaybeFunctor_26, (MR_Integer) 0)));

#line 87 "prog_io_dcg.m"
            {
#line 87 "prog_io_dcg.m"
              MR_Word base;
#line 87 "prog_io_dcg.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 87 "prog_io_dcg.m"
              *parse_tree__prog_io_dcg__MaybeItem_14 = base;
#line 87 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_33));
#line 87 "prog_io_dcg.m"
            }
#line 86 "prog_io_dcg.m"
          }
#line 85 "prog_io_dcg.m"
        else
#line 76 "prog_io_dcg.m"
          {
#line 76 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__TypeInfo_55_55 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[1];
#line 76 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Name_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeFunctor_26, (MR_Integer) 0)));
#line 76 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Args0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeFunctor_26, (MR_Integer) 1)));
#line 76 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Args1_29;
#line 76 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Args_30;
#line 76 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__ItemClause_31;
#line 76 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__Item_32;
#line 76 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_40_40;
#line 76 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_41_41;
#line 76 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_42_42;
#line 76 "prog_io_dcg.m"
            MR_Word parse_tree__prog_io_dcg__V_43_43;

#line 77 "prog_io_dcg.m"
            {
#line 77 "prog_io_dcg.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[0], parse_tree__prog_io_dcg__TypeInfo_55_55, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[0], parse_tree__prog_io_dcg__Args0_28, &parse_tree__prog_io_dcg__Args1_29);
            }
#line 79 "prog_io_dcg.m"
            {
#line 79 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 79 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_dcg__DCGVar0_18));
#line 79 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_12));
#line 79 "prog_io_dcg.m"
            }
#line 80 "prog_io_dcg.m"
            {
#line 80 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 80 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_dcg__DCGVar_23));
#line 80 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_12));
#line 80 "prog_io_dcg.m"
            }
#line 80 "prog_io_dcg.m"
            {
#line 80 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 80 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_43_43));
#line 80 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 80 "prog_io_dcg.m"
            }
#line 79 "prog_io_dcg.m"
            {
#line 79 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 79 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_41_41));
#line 79 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_42_42));
#line 79 "prog_io_dcg.m"
            }
#line 78 "prog_io_dcg.m"
            {
#line 78 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__Args_30 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeInfo_55_55, parse_tree__prog_io_dcg__Args1_29, parse_tree__prog_io_dcg__V_40_40);
            }
#line 81 "prog_io_dcg.m"
            {
#line 81 "prog_io_dcg.m"
              parse_tree__prog_io_dcg__ItemClause_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 81 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_31, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Name_27));
#line 81 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_31, 1) = ((MR_Box) ((MR_Integer) 0));
#line 81 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_31, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Args_30));
#line 81 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_31, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 81 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_31, 4) = ((MR_Box) (parse_tree__prog_io_dcg__ProgVarSet_21));
#line 81 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_31, 5) = ((MR_Box) (parse_tree__prog_io_dcg__Body_24));
#line 81 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_31, 6) = ((MR_Box) (parse_tree__prog_io_dcg__Context_12));
#line 81 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_31, 7) = ((MR_Box) (parse_tree__prog_io_dcg__SeqNum_13));
#line 81 "prog_io_dcg.m"
            }
#line 83 "prog_io_dcg.m"
            parse_tree__prog_io_dcg__Item_32 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_dcg__ItemClause_31);
#line 84 "prog_io_dcg.m"
            {
#line 84 "prog_io_dcg.m"
              MR_Word base;
#line 84 "prog_io_dcg.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 84 "prog_io_dcg.m"
              *parse_tree__prog_io_dcg__MaybeItem_14 = base;
#line 84 "prog_io_dcg.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Item_32));
#line 84 "prog_io_dcg.m"
            }
#line 76 "prog_io_dcg.m"
          }
#line 71 "prog_io_dcg.m"
      }
#line 62 "prog_io_dcg.m"
  }
#line 37 "prog_io_dcg.m"
}

void mercury__parse_tree__prog_io_dcg__init(void)
{
}

void mercury__parse_tree__prog_io_dcg__init_type_tables(void)
{
}

void mercury__parse_tree__prog_io_dcg__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_dcg. */
