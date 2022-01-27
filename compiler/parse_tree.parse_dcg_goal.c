/*
** Automatically generated from `parse_dcg_goal.m'
** by the Mercury compiler,
** version rotd-2016-05-13
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


/* :- module parse_tree.parse_dcg_goal. */
/* :- implementation. */

/*
INIT mercury__parse_tree__parse_dcg_goal__init
ENDINIT
*/

#include "parse_tree.parse_dcg_goal.mih"


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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_goal.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.parse_vars.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_bool MR_CALL 
parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
  MR_Word parse_tree__parse_dcg_goal__List0_4,
  MR_Word parse_tree__parse_dcg_goal__Term_5,
  MR_Word * parse_tree__parse_dcg_goal__List_6);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__636__1_2_p_0(
  MR_Word parse_tree__parse_dcg_goal__HeadVar__1_74,
  MR_Word * parse_tree__parse_dcg_goal__HeadVar__2_75);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__635__1_2_p_0(
  MR_Word parse_tree__parse_dcg_goal__HeadVar__1_68,
  MR_Word * parse_tree__parse_dcg_goal__HeadVar__2_69);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__280__2_2_p_0(
  MR_Word parse_tree__parse_dcg_goal__HeadVar__1_789,
  MR_Word * parse_tree__parse_dcg_goal__HeadVar__2_790);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__279__2_2_p_0(
  MR_Word parse_tree__parse_dcg_goal__HeadVar__1_783,
  MR_Word * parse_tree__parse_dcg_goal__HeadVar__2_784);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__280__1_2_p_0(
  MR_Word parse_tree__parse_dcg_goal__HeadVar__1_667,
  MR_Word * parse_tree__parse_dcg_goal__HeadVar__2_668);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__279__1_2_p_0(
  MR_Word parse_tree__parse_dcg_goal__HeadVar__1_661,
  MR_Word * parse_tree__parse_dcg_goal__HeadVar__2_662);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__597__1_2_p_0(
  MR_Word parse_tree__parse_dcg_goal__HeadVar__1_690,
  MR_Word * parse_tree__parse_dcg_goal__HeadVar__2_691);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal__119__1_2_p_0(
  MR_Word parse_tree__parse_dcg_goal__HeadVar__1_47,
  MR_Word * parse_tree__parse_dcg_goal__HeadVar__2_48);

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_clause__80__1_2_p_0(
  MR_Word parse_tree__parse_dcg_goal__HeadVar__1_51,
  MR_Word * parse_tree__parse_dcg_goal__HeadVar__2_52);

static void MR_CALL 
parse_tree__parse_dcg_goal__append_to_disjunct_4_p_0(
  MR_Word parse_tree__parse_dcg_goal__AddedGoal_5,
  MR_Word parse_tree__parse_dcg_goal__Context_6,
  MR_Word parse_tree__parse_dcg_goal__Disjunct0_7,
  MR_Word * parse_tree__parse_dcg_goal__Disjunct_8);

static void MR_CALL 
parse_tree__parse_dcg_goal__new_dcg_var_5_p_0(
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_12,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_13,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_14,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_15,
  MR_Word * parse_tree__parse_dcg_goal__DCGVar_8);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_if_then_else_12_p_0(
  MR_Word parse_tree__parse_dcg_goal__CondGoalTerm_13,
  MR_Word parse_tree__parse_dcg_goal__ThenGoalTerm_14,
  MR_Word parse_tree__parse_dcg_goal__ElseGoalTerm_15,
  MR_Word parse_tree__parse_dcg_goal__Context_16,
  MR_Word parse_tree__parse_dcg_goal__ContextPieces_17,
  MR_Word * parse_tree__parse_dcg_goal__MaybeGoal_18,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_38,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_39,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_40,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_41,
  MR_Word parse_tree__parse_dcg_goal__Var0_21,
  MR_Word * parse_tree__parse_dcg_goal__Var_22);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_if_then_12_p_0(
  MR_Word parse_tree__parse_dcg_goal__CondGoalTerm_13,
  MR_Word parse_tree__parse_dcg_goal__ThenGoalTerm_14,
  MR_Word parse_tree__parse_dcg_goal__Context_15,
  MR_Word parse_tree__parse_dcg_goal__ContextPieces_16,
  MR_Word * parse_tree__parse_dcg_goal__MaybeVarsCond_17,
  MR_Word * parse_tree__parse_dcg_goal__MaybeThen_18,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_30,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_31,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_32,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_33,
  MR_Word parse_tree__parse_dcg_goal__Var0_21,
  MR_Word * parse_tree__parse_dcg_goal__Var_22);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0_2(
  MR_Box parse_tree__parse_dcg_goal__closure_arg,
  MR_Box parse_tree__parse_dcg_goal__wrapper_arg_1,
  MR_Box * parse_tree__parse_dcg_goal__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0_1(
  MR_Box parse_tree__parse_dcg_goal__closure_arg,
  MR_Box parse_tree__parse_dcg_goal__wrapper_arg_1,
  MR_Box * parse_tree__parse_dcg_goal__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0(
  MR_Word parse_tree__parse_dcg_goal__Term_10,
  MR_Word parse_tree__parse_dcg_goal__ContextPieces_11,
  MR_Word * parse_tree__parse_dcg_goal__MaybeVarsGoal_12,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_31,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_32,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_33,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_34,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_35,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_36);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_5(
  MR_Box parse_tree__parse_dcg_goal__closure_arg,
  MR_Box parse_tree__parse_dcg_goal__wrapper_arg_1,
  MR_Box * parse_tree__parse_dcg_goal__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_4(
  MR_Box parse_tree__parse_dcg_goal__closure_arg,
  MR_Box parse_tree__parse_dcg_goal__wrapper_arg_1,
  MR_Box * parse_tree__parse_dcg_goal__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_3(
  MR_Box parse_tree__parse_dcg_goal__closure_arg,
  MR_Box parse_tree__parse_dcg_goal__wrapper_arg_1,
  MR_Box * parse_tree__parse_dcg_goal__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_2(
  MR_Box parse_tree__parse_dcg_goal__closure_arg,
  MR_Box parse_tree__parse_dcg_goal__wrapper_arg_1,
  MR_Box * parse_tree__parse_dcg_goal__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_1(
  MR_Box parse_tree__parse_dcg_goal__closure_arg,
  MR_Box parse_tree__parse_dcg_goal__wrapper_arg_1,
  MR_Box * parse_tree__parse_dcg_goal__wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0(
  MR_String parse_tree__parse_dcg_goal__Functor_12,
  MR_Word parse_tree__parse_dcg_goal__Args_13,
  MR_Word parse_tree__parse_dcg_goal__Context_14,
  MR_Word parse_tree__parse_dcg_goal__ContextPieces_15,
  MR_Word * parse_tree__parse_dcg_goal__MaybeGoal_16,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98);

static void MR_CALL 
parse_tree__parse_dcg_goal__make_dcg_call_10_p_0(
  MR_Word parse_tree__parse_dcg_goal__SymName_11,
  MR_Word parse_tree__parse_dcg_goal__Args0_12,
  MR_Word parse_tree__parse_dcg_goal__Context_13,
  MR_Word * parse_tree__parse_dcg_goal__Goal_14,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_21,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_22,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_23,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_24,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_25,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_26);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0_1(
  MR_Box parse_tree__parse_dcg_goal__closure_arg,
  MR_Box parse_tree__parse_dcg_goal__wrapper_arg_1,
  MR_Box * parse_tree__parse_dcg_goal__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(
  MR_Word parse_tree__parse_dcg_goal__Term_10,
  MR_Word parse_tree__parse_dcg_goal__ContextPieces_11,
  MR_Word * parse_tree__parse_dcg_goal__MaybeGoal_12,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_25,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_26,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_27,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_28,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_29,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_30);

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_clause_7_p_0_1(
  MR_Box parse_tree__parse_dcg_goal__closure_arg,
  MR_Box parse_tree__parse_dcg_goal__wrapper_arg_1,
  MR_Box * parse_tree__parse_dcg_goal__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_1[69][2];

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_2[3][5];

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_3[9][3];

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_4[9][1];




static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_1[69][2] = {
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
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_vars_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_1[3]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and must therefore be used with arity 0."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "against a list of zero items,"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may only be used to match the input"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "operator"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "[]"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: in DCG clauses,"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "at the end of the list."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[6])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: there is no"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and must therefore be used with arity 2."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[6])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "against a list of one or more items,"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "[|]"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "all"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In first argument of"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[6])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "( if goal then goal else goal )"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should occur in expressions of the form"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[49])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the "))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[37])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "between the curly braces."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[6])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: there should be at least one goal"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In DCG clause head:"))
  },
  /* row 63 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_4[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 64 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_4[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 65 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_4[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 66 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_4[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 67 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_4[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_dcg_goal__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_dcg_goal__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_dcg_goal__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__parse_dcg_goal__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_dcg_goal__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_dcg_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_3[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_2[0])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_dcg_clause_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_2[1])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_2[0])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_2[2])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_2[2])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_2[2])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_2[2])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_2[2])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_2[2])),
    ((MR_Box) (parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_dcg_goal_scalar_common_4[9][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "call"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ":="))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[20])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "[|]"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[25])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[35])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[53])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[61])))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_1[68]))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_dcg_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static MR_bool MR_CALL 
parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
  MR_Word parse_tree__parse_dcg_goal__List0_4,
  MR_Word parse_tree__parse_dcg_goal__Term_5,
  MR_Word * parse_tree__parse_dcg_goal__List_6)
{
  {
    MR_bool parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__List0_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_dcg_goal__V_12_12;
    MR_String parse_tree__parse_dcg_goal__V_13_13;
    MR_Word parse_tree__parse_dcg_goal__V_14_14;
    MR_Word parse_tree__parse_dcg_goal___Context_7;

    if (parse_tree__parse_dcg_goal__succeeded)
      {
        parse_tree__parse_dcg_goal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__List0_4, (MR_Integer) 0)));
        parse_tree__parse_dcg_goal__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__List0_4, (MR_Integer) 1)));
        parse_tree__parse_dcg_goal___Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__List0_4, (MR_Integer) 2)));
        parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_dcg_goal__succeeded)
          {
            parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_12_12)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_dcg_goal__succeeded)
              {
                parse_tree__parse_dcg_goal__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_12_12, (MR_Integer) 0)));
                parse_tree__parse_dcg_goal__succeeded = (strcmp(parse_tree__parse_dcg_goal__V_13_13, (MR_String) "[]") == 0);
              }
          }
      }
    if (parse_tree__parse_dcg_goal__succeeded)
      {
        *parse_tree__parse_dcg_goal__List_6 = parse_tree__parse_dcg_goal__Term_5;
        parse_tree__parse_dcg_goal__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word parse_tree__parse_dcg_goal__Head_8;
        MR_Word parse_tree__parse_dcg_goal__Tail0_9;
        MR_Word parse_tree__parse_dcg_goal__Context_10;
        MR_Word parse_tree__parse_dcg_goal__Tail_11;
        MR_Word parse_tree__parse_dcg_goal__V_15_15;
        MR_String parse_tree__parse_dcg_goal__V_16_16;
        MR_Word parse_tree__parse_dcg_goal__V_17_17;
        MR_Word parse_tree__parse_dcg_goal__V_18_18;
        MR_Word parse_tree__parse_dcg_goal__V_19_19;
        MR_Word parse_tree__parse_dcg_goal__V_22_22;
        MR_Word parse_tree__parse_dcg_goal__V_23_23;
        MR_Word parse_tree__parse_dcg_goal__V_24_24;

        parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__List0_4)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_dcg_goal__succeeded)
          {
            parse_tree__parse_dcg_goal__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__List0_4, (MR_Integer) 0)));
            parse_tree__parse_dcg_goal__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__List0_4, (MR_Integer) 1)));
            parse_tree__parse_dcg_goal__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__List0_4, (MR_Integer) 2)));
            parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_15_15)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_dcg_goal__succeeded)
              {
                parse_tree__parse_dcg_goal__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_15_15, (MR_Integer) 0)));
                parse_tree__parse_dcg_goal__succeeded = (strcmp(parse_tree__parse_dcg_goal__V_16_16, (MR_String) "[|]") == 0);
                if (parse_tree__parse_dcg_goal__succeeded)
                  {
                    parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_17_17)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_dcg_goal__succeeded)
                      {
                        parse_tree__parse_dcg_goal__Head_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_17_17, (MR_Integer) 0)));
                        parse_tree__parse_dcg_goal__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_17_17, (MR_Integer) 1)));
                        parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_dcg_goal__succeeded)
                          {
                            parse_tree__parse_dcg_goal__Tail0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_18_18, (MR_Integer) 0)));
                            parse_tree__parse_dcg_goal__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_18_18, (MR_Integer) 1)));
                            parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (parse_tree__parse_dcg_goal__succeeded)
                              {
                                {
                                  parse_tree__parse_dcg_goal__succeeded = parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(parse_tree__parse_dcg_goal__Tail0_9, parse_tree__parse_dcg_goal__Term_5, &parse_tree__parse_dcg_goal__Tail_11);
                                }
                                if (parse_tree__parse_dcg_goal__succeeded)
                                  {
                                    parse_tree__parse_dcg_goal__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                    {
                                      parse_tree__parse_dcg_goal__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_23_23, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Tail_11));
                                      MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_23_23, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__V_24_24));
                                    }
                                    {
                                      parse_tree__parse_dcg_goal__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_22_22, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Head_8));
                                      MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_22_22, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__V_23_23));
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                      *parse_tree__parse_dcg_goal__List_6 = base;
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_15_15));
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__V_22_22));
                                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_10));
                                    }
                                    parse_tree__parse_dcg_goal__succeeded = MR_TRUE;
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return parse_tree__parse_dcg_goal__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__636__1_2_p_0(
  MR_Word parse_tree__parse_dcg_goal__HeadVar__1_74,
  MR_Word * parse_tree__parse_dcg_goal__HeadVar__2_75)
{
  {
    MR_bool parse_tree__parse_dcg_goal__succeeded;

    {
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_dcg_goal__HeadVar__1_74, parse_tree__parse_dcg_goal__HeadVar__2_75);
    }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__635__1_2_p_0(
  MR_Word parse_tree__parse_dcg_goal__HeadVar__1_68,
  MR_Word * parse_tree__parse_dcg_goal__HeadVar__2_69)
{
  {
    MR_bool parse_tree__parse_dcg_goal__succeeded;

    {
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_dcg_goal__HeadVar__1_68, parse_tree__parse_dcg_goal__HeadVar__2_69);
    }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__280__2_2_p_0(
  MR_Word parse_tree__parse_dcg_goal__HeadVar__1_789,
  MR_Word * parse_tree__parse_dcg_goal__HeadVar__2_790)
{
  {
    MR_bool parse_tree__parse_dcg_goal__succeeded;

    {
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_dcg_goal__HeadVar__1_789, parse_tree__parse_dcg_goal__HeadVar__2_790);
    }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__279__2_2_p_0(
  MR_Word parse_tree__parse_dcg_goal__HeadVar__1_783,
  MR_Word * parse_tree__parse_dcg_goal__HeadVar__2_784)
{
  {
    MR_bool parse_tree__parse_dcg_goal__succeeded;

    {
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_dcg_goal__HeadVar__1_783, parse_tree__parse_dcg_goal__HeadVar__2_784);
    }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__280__1_2_p_0(
  MR_Word parse_tree__parse_dcg_goal__HeadVar__1_667,
  MR_Word * parse_tree__parse_dcg_goal__HeadVar__2_668)
{
  {
    MR_bool parse_tree__parse_dcg_goal__succeeded;

    {
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_dcg_goal__HeadVar__1_667, parse_tree__parse_dcg_goal__HeadVar__2_668);
    }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__279__1_2_p_0(
  MR_Word parse_tree__parse_dcg_goal__HeadVar__1_661,
  MR_Word * parse_tree__parse_dcg_goal__HeadVar__2_662)
{
  {
    MR_bool parse_tree__parse_dcg_goal__succeeded;

    {
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_dcg_goal__HeadVar__1_661, parse_tree__parse_dcg_goal__HeadVar__2_662);
    }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__597__1_2_p_0(
  MR_Word parse_tree__parse_dcg_goal__HeadVar__1_690,
  MR_Word * parse_tree__parse_dcg_goal__HeadVar__2_691)
{
  {
    MR_bool parse_tree__parse_dcg_goal__succeeded;

    {
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_dcg_goal__HeadVar__1_690, parse_tree__parse_dcg_goal__HeadVar__2_691);
    }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal__119__1_2_p_0(
  MR_Word parse_tree__parse_dcg_goal__HeadVar__1_47,
  MR_Word * parse_tree__parse_dcg_goal__HeadVar__2_48)
{
  {
    MR_bool parse_tree__parse_dcg_goal__succeeded;

    {
      mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_dcg_goal__HeadVar__1_47, parse_tree__parse_dcg_goal__HeadVar__2_48);
    }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_clause__80__1_2_p_0(
  MR_Word parse_tree__parse_dcg_goal__HeadVar__1_51,
  MR_Word * parse_tree__parse_dcg_goal__HeadVar__2_52)
{
  {
    MR_bool parse_tree__parse_dcg_goal__succeeded;

    {
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_dcg_goal__HeadVar__1_51, parse_tree__parse_dcg_goal__HeadVar__2_52);
    }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__append_to_disjunct_4_p_0(
  MR_Word parse_tree__parse_dcg_goal__AddedGoal_5,
  MR_Word parse_tree__parse_dcg_goal__Context_6,
  MR_Word parse_tree__parse_dcg_goal__Disjunct0_7,
  MR_Word * parse_tree__parse_dcg_goal__Disjunct_8)
{
  {
    MR_bool parse_tree__parse_dcg_goal__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_dcg_goal__Disjunct0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Disjunct0_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word parse_tree__parse_dcg_goal__Disjunct0Context_9;
    MR_Word parse_tree__parse_dcg_goal__SubDisjunctA0_10;
    MR_Word parse_tree__parse_dcg_goal__SubDisjunctB0_11;

    if (parse_tree__parse_dcg_goal__succeeded)
      {
        parse_tree__parse_dcg_goal__Disjunct0Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Disjunct0_7, (MR_Integer) 1)));
        parse_tree__parse_dcg_goal__SubDisjunctA0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Disjunct0_7, (MR_Integer) 2)));
        parse_tree__parse_dcg_goal__SubDisjunctB0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Disjunct0_7, (MR_Integer) 3)));
        {
          MR_Word parse_tree__parse_dcg_goal__SubDisjunctA_12;
          MR_Word parse_tree__parse_dcg_goal__SubDisjunctB_13;

          {
            parse_tree__parse_dcg_goal__append_to_disjunct_4_p_0(parse_tree__parse_dcg_goal__AddedGoal_5, parse_tree__parse_dcg_goal__Context_6, parse_tree__parse_dcg_goal__SubDisjunctA0_10, &parse_tree__parse_dcg_goal__SubDisjunctA_12);
          }
          {
            parse_tree__parse_dcg_goal__append_to_disjunct_4_p_0(parse_tree__parse_dcg_goal__AddedGoal_5, parse_tree__parse_dcg_goal__Context_6, parse_tree__parse_dcg_goal__SubDisjunctB0_11, &parse_tree__parse_dcg_goal__SubDisjunctB_13);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__parse_dcg_goal__Disjunct_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Disjunct0Context_9));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__SubDisjunctA_12));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__parse_dcg_goal__SubDisjunctB_13));
          }
        }
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        *parse_tree__parse_dcg_goal__Disjunct_8 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_6));
        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Disjunct0_7));
        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__AddedGoal_5));
      }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__new_dcg_var_5_p_0(
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_12,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_13,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_14,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_15,
  MR_Word * parse_tree__parse_dcg_goal__DCGVar_8)
{
  {
    MR_bool parse_tree__parse_dcg_goal__succeeded;
    MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_20_20;
    MR_Integer parse_tree__parse_dcg_goal__N_9;
    MR_String parse_tree__parse_dcg_goal__StringN_10;
    MR_String parse_tree__parse_dcg_goal__VarName_11;
    MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_18_18;

    {
      mercury__counter__allocate_3_p_0(&parse_tree__parse_dcg_goal__N_9, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_14, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_15);
    }
    {
      mercury__string__int_to_string_2_p_0(parse_tree__parse_dcg_goal__N_9, &parse_tree__parse_dcg_goal__StringN_10);
    }
    {
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__parse_dcg_goal__StringN_10, &parse_tree__parse_dcg_goal__VarName_11);
    }
    parse_tree__parse_dcg_goal__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__new_var_3_p_0(parse_tree__parse_dcg_goal__TypeCtorInfo_20_20, parse_tree__parse_dcg_goal__DCGVar_8, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_12, &parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_18_18);
    }
    {
      mercury__varset__name_var_4_p_0(parse_tree__parse_dcg_goal__TypeCtorInfo_20_20, *parse_tree__parse_dcg_goal__DCGVar_8, parse_tree__parse_dcg_goal__VarName_11, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_18_18, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_13);
    }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_if_then_else_12_p_0(
  MR_Word parse_tree__parse_dcg_goal__CondGoalTerm_13,
  MR_Word parse_tree__parse_dcg_goal__ThenGoalTerm_14,
  MR_Word parse_tree__parse_dcg_goal__ElseGoalTerm_15,
  MR_Word parse_tree__parse_dcg_goal__Context_16,
  MR_Word parse_tree__parse_dcg_goal__ContextPieces_17,
  MR_Word * parse_tree__parse_dcg_goal__MaybeGoal_18,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_38,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_39,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_40,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_41,
  MR_Word parse_tree__parse_dcg_goal__Var0_21,
  MR_Word * parse_tree__parse_dcg_goal__Var_22)
{
  {
    MR_bool parse_tree__parse_dcg_goal__succeeded;
    MR_Word parse_tree__parse_dcg_goal__MaybeVarsCond_23;
    MR_Word parse_tree__parse_dcg_goal__MaybeThen1_24;
    MR_Word parse_tree__parse_dcg_goal__VarThen_25;
    MR_Word parse_tree__parse_dcg_goal__MaybeElse1_26;
    MR_Word parse_tree__parse_dcg_goal__VarElse_27;
    MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_42_42;
    MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_43_43;
    MR_Word parse_tree__parse_dcg_goal__Vars_28;
    MR_Word parse_tree__parse_dcg_goal__StateVars_29;
    MR_Word parse_tree__parse_dcg_goal__Cond_30;
    MR_Word parse_tree__parse_dcg_goal__Then1_31;
    MR_Word parse_tree__parse_dcg_goal__Else1_32;

    {
      parse_tree__parse_dcg_goal__parse_dcg_if_then_12_p_0(parse_tree__parse_dcg_goal__CondGoalTerm_13, parse_tree__parse_dcg_goal__ThenGoalTerm_14, parse_tree__parse_dcg_goal__Context_16, parse_tree__parse_dcg_goal__ContextPieces_17, &parse_tree__parse_dcg_goal__MaybeVarsCond_23, &parse_tree__parse_dcg_goal__MaybeThen1_24, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_38, &parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_42_42, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_40, &parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_43_43, parse_tree__parse_dcg_goal__Var0_21, &parse_tree__parse_dcg_goal__VarThen_25);
    }
    {
      parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(parse_tree__parse_dcg_goal__ElseGoalTerm_15, parse_tree__parse_dcg_goal__ContextPieces_17, &parse_tree__parse_dcg_goal__MaybeElse1_26, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_42_42, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_39, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_43_43, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_41, parse_tree__parse_dcg_goal__Var0_21, &parse_tree__parse_dcg_goal__VarElse_27);
    }
    parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeVarsCond_23)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_dcg_goal__succeeded)
      {
        parse_tree__parse_dcg_goal__Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeVarsCond_23, (MR_Integer) 0)));
        parse_tree__parse_dcg_goal__StateVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeVarsCond_23, (MR_Integer) 1)));
        parse_tree__parse_dcg_goal__Cond_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeVarsCond_23, (MR_Integer) 2)));
        parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeThen1_24)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_dcg_goal__succeeded)
          {
            parse_tree__parse_dcg_goal__Then1_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeThen1_24, (MR_Integer) 0)));
            parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeElse1_26)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_dcg_goal__succeeded)
              parse_tree__parse_dcg_goal__Else1_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeElse1_26, (MR_Integer) 0)));
          }
      }
    if (parse_tree__parse_dcg_goal__succeeded)
      {
        MR_Word parse_tree__parse_dcg_goal__Then_33;
        MR_Word parse_tree__parse_dcg_goal__Else_34;
        MR_Word parse_tree__parse_dcg_goal__Goal_36;
        MR_Word parse_tree__parse_dcg_goal__TypeInfo_62_62;

        {
          parse_tree__parse_dcg_goal__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[3], ((MR_Box) (parse_tree__parse_dcg_goal__VarThen_25)), ((MR_Box) (parse_tree__parse_dcg_goal__Var0_21)));
        }
        if (parse_tree__parse_dcg_goal__succeeded)
          {
            parse_tree__parse_dcg_goal__TypeInfo_62_62 = (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[3];
            {
              parse_tree__parse_dcg_goal__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_dcg_goal__TypeInfo_62_62, ((MR_Box) (parse_tree__parse_dcg_goal__VarElse_27)), ((MR_Box) (parse_tree__parse_dcg_goal__Var0_21)));
            }
          }
        if (parse_tree__parse_dcg_goal__succeeded)
          {
            *parse_tree__parse_dcg_goal__Var_22 = parse_tree__parse_dcg_goal__Var0_21;
            parse_tree__parse_dcg_goal__Then_33 = parse_tree__parse_dcg_goal__Then1_31;
            parse_tree__parse_dcg_goal__Else_34 = parse_tree__parse_dcg_goal__Else1_32;
          }
        else
          {
            {
              parse_tree__parse_dcg_goal__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[3], ((MR_Box) (parse_tree__parse_dcg_goal__VarThen_25)), ((MR_Box) (parse_tree__parse_dcg_goal__Var0_21)));
            }
            if (parse_tree__parse_dcg_goal__succeeded)
              {
                MR_Word parse_tree__parse_dcg_goal__Unify_35;
                MR_Word parse_tree__parse_dcg_goal__V_46_46;
                MR_Word parse_tree__parse_dcg_goal__V_47_47;

                *parse_tree__parse_dcg_goal__Var_22 = parse_tree__parse_dcg_goal__VarElse_27;
                {
                  parse_tree__parse_dcg_goal__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_46_46, 0) = ((MR_Box) (*parse_tree__parse_dcg_goal__Var_22));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_46_46, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_16));
                }
                {
                  parse_tree__parse_dcg_goal__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_47_47, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__VarThen_25));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_47_47, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_16));
                }
                {
                  parse_tree__parse_dcg_goal__Unify_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Unify_35, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_16));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Unify_35, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__V_46_46));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Unify_35, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__V_47_47));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Unify_35, 3) = ((MR_Box) ((MR_Integer) 0));
                }
                {
                  parse_tree__parse_dcg_goal__Then_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), parse_tree__parse_dcg_goal__Then_33, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_16));
                  MR_hl_field(MR_mktag(2), parse_tree__parse_dcg_goal__Then_33, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Then1_31));
                  MR_hl_field(MR_mktag(2), parse_tree__parse_dcg_goal__Then_33, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__Unify_35));
                }
                parse_tree__parse_dcg_goal__Else_34 = parse_tree__parse_dcg_goal__Else1_32;
              }
            else
              {
                {
                  parse_tree__parse_dcg_goal__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[3], ((MR_Box) (parse_tree__parse_dcg_goal__VarElse_27)), ((MR_Box) (parse_tree__parse_dcg_goal__Var0_21)));
                }
                if (parse_tree__parse_dcg_goal__succeeded)
                  {
                    MR_Word parse_tree__parse_dcg_goal__V_49_49;
                    MR_Word parse_tree__parse_dcg_goal__V_50_50;
                    MR_Word parse_tree__parse_dcg_goal__Unify_56;

                    *parse_tree__parse_dcg_goal__Var_22 = parse_tree__parse_dcg_goal__VarThen_25;
                    parse_tree__parse_dcg_goal__Then_33 = parse_tree__parse_dcg_goal__Then1_31;
                    {
                      parse_tree__parse_dcg_goal__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_49_49, 0) = ((MR_Box) (*parse_tree__parse_dcg_goal__Var_22));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_49_49, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_16));
                    }
                    {
                      parse_tree__parse_dcg_goal__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_50_50, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__VarElse_27));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_50_50, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_16));
                    }
                    {
                      parse_tree__parse_dcg_goal__Unify_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Unify_56, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_16));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Unify_56, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__V_49_49));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Unify_56, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__V_50_50));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Unify_56, 3) = ((MR_Box) ((MR_Integer) 0));
                    }
                    {
                      parse_tree__parse_dcg_goal__Else_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), parse_tree__parse_dcg_goal__Else_34, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_16));
                      MR_hl_field(MR_mktag(2), parse_tree__parse_dcg_goal__Else_34, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Else1_32));
                      MR_hl_field(MR_mktag(2), parse_tree__parse_dcg_goal__Else_34, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__Unify_56));
                    }
                  }
                else
                  {
                    *parse_tree__parse_dcg_goal__Var_22 = parse_tree__parse_dcg_goal__VarElse_27;
                    {
                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__parse_dcg_goal__VarThen_25, parse_tree__parse_dcg_goal__VarElse_27, parse_tree__parse_dcg_goal__Then1_31, &parse_tree__parse_dcg_goal__Then_33);
                    }
                    parse_tree__parse_dcg_goal__Else_34 = parse_tree__parse_dcg_goal__Else1_32;
                  }
              }
          }
        {
          parse_tree__parse_dcg_goal__Goal_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_36, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_16));
          MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_36, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__Vars_28));
          MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_36, 3) = ((MR_Box) (parse_tree__parse_dcg_goal__StateVars_29));
          MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_36, 4) = ((MR_Box) (parse_tree__parse_dcg_goal__Cond_30));
          MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_36, 5) = ((MR_Box) (parse_tree__parse_dcg_goal__Then_33));
          MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_36, 6) = ((MR_Box) (parse_tree__parse_dcg_goal__Else_34));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_dcg_goal__MaybeGoal_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal_36));
        }
      }
    else
      {
        MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
        MR_Word parse_tree__parse_dcg_goal__TypeInfo_59_59 = (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[5];
        MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_60_60 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
        MR_Word parse_tree__parse_dcg_goal__Specs_37;
        MR_Word parse_tree__parse_dcg_goal__V_52_52;
        MR_Word parse_tree__parse_dcg_goal__V_53_53;
        MR_Word parse_tree__parse_dcg_goal__V_54_54;
        MR_Word parse_tree__parse_dcg_goal__V_55_55;

        {
          parse_tree__parse_dcg_goal__V_52_52 = parse_tree__maybe_error__get_any_errors3_1_f_0(parse_tree__parse_dcg_goal__TypeInfo_59_59, parse_tree__parse_dcg_goal__TypeInfo_59_59, parse_tree__parse_dcg_goal__TypeCtorInfo_60_60, parse_tree__parse_dcg_goal__MaybeVarsCond_23);
        }
        {
          parse_tree__parse_dcg_goal__V_54_54 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_dcg_goal__TypeCtorInfo_60_60, parse_tree__parse_dcg_goal__MaybeThen1_24);
        }
        {
          parse_tree__parse_dcg_goal__V_55_55 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_dcg_goal__TypeCtorInfo_60_60, parse_tree__parse_dcg_goal__MaybeElse1_26);
        }
        {
          parse_tree__parse_dcg_goal__V_53_53 = mercury__list__f_43_43_2_f_0(parse_tree__parse_dcg_goal__TypeCtorInfo_58_58, parse_tree__parse_dcg_goal__V_54_54, parse_tree__parse_dcg_goal__V_55_55);
        }
        {
          parse_tree__parse_dcg_goal__Specs_37 = mercury__list__f_43_43_2_f_0(parse_tree__parse_dcg_goal__TypeCtorInfo_58_58, parse_tree__parse_dcg_goal__V_52_52, parse_tree__parse_dcg_goal__V_53_53);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_dcg_goal__MaybeGoal_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Specs_37));
        }
        *parse_tree__parse_dcg_goal__Var_22 = parse_tree__parse_dcg_goal__Var0_21;
      }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_if_then_12_p_0(
  MR_Word parse_tree__parse_dcg_goal__CondGoalTerm_13,
  MR_Word parse_tree__parse_dcg_goal__ThenGoalTerm_14,
  MR_Word parse_tree__parse_dcg_goal__Context_15,
  MR_Word parse_tree__parse_dcg_goal__ContextPieces_16,
  MR_Word * parse_tree__parse_dcg_goal__MaybeVarsCond_17,
  MR_Word * parse_tree__parse_dcg_goal__MaybeThen_18,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_30,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_31,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_32,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_33,
  MR_Word parse_tree__parse_dcg_goal__Var0_21,
  MR_Word * parse_tree__parse_dcg_goal__Var_22)
{
  {
    MR_bool parse_tree__parse_dcg_goal__succeeded;
    MR_Word parse_tree__parse_dcg_goal__Var1_23;
    MR_Word parse_tree__parse_dcg_goal__MaybeThen1_24;
    MR_Word parse_tree__parse_dcg_goal__Var2_25;
    MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_34_34;
    MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_35_35;
    MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_36_36;
    MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_37_37;
    MR_Word parse_tree__parse_dcg_goal__TypeInfo_44_44;

    {
      parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0(parse_tree__parse_dcg_goal__CondGoalTerm_13, parse_tree__parse_dcg_goal__ContextPieces_16, parse_tree__parse_dcg_goal__MaybeVarsCond_17, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_30, &parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_34_34, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_32, &parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_35_35, parse_tree__parse_dcg_goal__Var0_21, &parse_tree__parse_dcg_goal__Var1_23);
    }
    {
      parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(parse_tree__parse_dcg_goal__ThenGoalTerm_14, parse_tree__parse_dcg_goal__ContextPieces_16, &parse_tree__parse_dcg_goal__MaybeThen1_24, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_34_34, &parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_36_36, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_35_35, &parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_37_37, parse_tree__parse_dcg_goal__Var1_23, &parse_tree__parse_dcg_goal__Var2_25);
    }
    {
      parse_tree__parse_dcg_goal__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[3], ((MR_Box) (parse_tree__parse_dcg_goal__Var0_21)), ((MR_Box) (parse_tree__parse_dcg_goal__Var1_23)));
    }
    parse_tree__parse_dcg_goal__succeeded = !(parse_tree__parse_dcg_goal__succeeded);
    if (parse_tree__parse_dcg_goal__succeeded)
      {
        parse_tree__parse_dcg_goal__TypeInfo_44_44 = (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[3];
        {
          parse_tree__parse_dcg_goal__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_dcg_goal__TypeInfo_44_44, ((MR_Box) (parse_tree__parse_dcg_goal__Var1_23)), ((MR_Box) (parse_tree__parse_dcg_goal__Var2_25)));
        }
      }
    if (parse_tree__parse_dcg_goal__succeeded)
      if (((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeThen1_24)) == (MR_mktag((MR_Integer) 0))))
        {
          *parse_tree__parse_dcg_goal__MaybeThen_18 = parse_tree__parse_dcg_goal__MaybeThen1_24;
          *parse_tree__parse_dcg_goal__Var_22 = parse_tree__parse_dcg_goal__Var2_25;
          *parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_31 = parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_36_36;
          *parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_33 = parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_37_37;
        }
      else
        {
          MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_20_59;
          MR_Word parse_tree__parse_dcg_goal__Then1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeThen1_24, (MR_Integer) 0)));
          MR_Word parse_tree__parse_dcg_goal__Unify_27;
          MR_Word parse_tree__parse_dcg_goal__Then_28;
          MR_Word parse_tree__parse_dcg_goal__V_40_40;
          MR_Word parse_tree__parse_dcg_goal__V_41_41;
          MR_Integer parse_tree__parse_dcg_goal__N_52;
          MR_String parse_tree__parse_dcg_goal__StringN_53;
          MR_String parse_tree__parse_dcg_goal__VarName_54;
          MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_18_57;

          {
            mercury__counter__allocate_3_p_0(&parse_tree__parse_dcg_goal__N_52, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_37_37, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_33);
          }
          {
            mercury__string__int_to_string_2_p_0(parse_tree__parse_dcg_goal__N_52, &parse_tree__parse_dcg_goal__StringN_53);
          }
          {
            mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__parse_dcg_goal__StringN_53, &parse_tree__parse_dcg_goal__VarName_54);
          }
          parse_tree__parse_dcg_goal__TypeCtorInfo_20_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            mercury__varset__new_var_3_p_0(parse_tree__parse_dcg_goal__TypeCtorInfo_20_59, parse_tree__parse_dcg_goal__Var_22, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_36_36, &parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_18_57);
          }
          {
            mercury__varset__name_var_4_p_0(parse_tree__parse_dcg_goal__TypeCtorInfo_20_59, *parse_tree__parse_dcg_goal__Var_22, parse_tree__parse_dcg_goal__VarName_54, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_18_57, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_31);
          }
          {
            parse_tree__parse_dcg_goal__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_40_40, 0) = ((MR_Box) (*parse_tree__parse_dcg_goal__Var_22));
            MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_40_40, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_15));
          }
          {
            parse_tree__parse_dcg_goal__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_41_41, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Var2_25));
            MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_41_41, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_15));
          }
          {
            parse_tree__parse_dcg_goal__Unify_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Unify_27, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_15));
            MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Unify_27, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__V_40_40));
            MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Unify_27, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__V_41_41));
            MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Unify_27, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            parse_tree__parse_dcg_goal__Then_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), parse_tree__parse_dcg_goal__Then_28, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_15));
            MR_hl_field(MR_mktag(2), parse_tree__parse_dcg_goal__Then_28, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Then1_26));
            MR_hl_field(MR_mktag(2), parse_tree__parse_dcg_goal__Then_28, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__Unify_27));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__parse_dcg_goal__MaybeThen_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Then_28));
          }
        }
    else
      {
        *parse_tree__parse_dcg_goal__MaybeThen_18 = parse_tree__parse_dcg_goal__MaybeThen1_24;
        *parse_tree__parse_dcg_goal__Var_22 = parse_tree__parse_dcg_goal__Var2_25;
        *parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_33 = parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_37_37;
        *parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_31 = parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_36_36;
      }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0_2(
  MR_Box parse_tree__parse_dcg_goal__closure_arg,
  MR_Box parse_tree__parse_dcg_goal__wrapper_arg_1,
  MR_Box * parse_tree__parse_dcg_goal__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_dcg_goal__closure = parse_tree__parse_dcg_goal__closure_arg;
    MR_Word parse_tree__parse_dcg_goal__conv1_HeadVar__2_75;

    {
      parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__636__1_2_p_0(((MR_Word) parse_tree__parse_dcg_goal__wrapper_arg_1), &parse_tree__parse_dcg_goal__conv1_HeadVar__2_75);
    }
    *parse_tree__parse_dcg_goal__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_dcg_goal__conv1_HeadVar__2_75));
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0_1(
  MR_Box parse_tree__parse_dcg_goal__closure_arg,
  MR_Box parse_tree__parse_dcg_goal__wrapper_arg_1,
  MR_Box * parse_tree__parse_dcg_goal__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_dcg_goal__closure = parse_tree__parse_dcg_goal__closure_arg;
    MR_Word parse_tree__parse_dcg_goal__conv0_HeadVar__2_69;

    {
      parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_some_vars_dcg_goal__635__1_2_p_0(((MR_Word) parse_tree__parse_dcg_goal__wrapper_arg_1), &parse_tree__parse_dcg_goal__conv0_HeadVar__2_69);
    }
    *parse_tree__parse_dcg_goal__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_dcg_goal__conv0_HeadVar__2_69));
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_some_vars_dcg_goal_9_p_0(
  MR_Word parse_tree__parse_dcg_goal__Term_10,
  MR_Word parse_tree__parse_dcg_goal__ContextPieces_11,
  MR_Word * parse_tree__parse_dcg_goal__MaybeVarsGoal_12,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_31,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_32,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_33,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_34,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_35,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_36)
{
  {
    MR_bool parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__Term_10)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_dcg_goal__MaybeVars_22;
    MR_Word parse_tree__parse_dcg_goal__GoalTerm_23;
    MR_Word parse_tree__parse_dcg_goal__MaybeGoal_24;
    MR_Word parse_tree__parse_dcg_goal__VarsTerm_16;
    MR_Word parse_tree__parse_dcg_goal__SubGoalTerm_17;
    MR_Word parse_tree__parse_dcg_goal__V_37_37;
    MR_String parse_tree__parse_dcg_goal__V_38_38;
    MR_Word parse_tree__parse_dcg_goal__V_39_39;
    MR_Word parse_tree__parse_dcg_goal__V_40_40;
    MR_Word parse_tree__parse_dcg_goal__V_41_41;
    MR_Word parse_tree__parse_dcg_goal___Context_18;
    MR_Word parse_tree__parse_dcg_goal__Vars0_25;
    MR_Word parse_tree__parse_dcg_goal__StateVars0_26;
    MR_Word parse_tree__parse_dcg_goal__Goal_27;
    MR_Word parse_tree__parse_dcg_goal__V_60_60;

    if (parse_tree__parse_dcg_goal__succeeded)
      {
        parse_tree__parse_dcg_goal__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Term_10, (MR_Integer) 0)));
        parse_tree__parse_dcg_goal__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Term_10, (MR_Integer) 1)));
        parse_tree__parse_dcg_goal___Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Term_10, (MR_Integer) 2)));
        parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_37_37)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_dcg_goal__succeeded)
          {
            parse_tree__parse_dcg_goal__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_37_37, (MR_Integer) 0)));
            parse_tree__parse_dcg_goal__succeeded = (strcmp(parse_tree__parse_dcg_goal__V_38_38, (MR_String) "some") == 0);
            if (parse_tree__parse_dcg_goal__succeeded)
              {
                parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_39_39)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_dcg_goal__succeeded)
                  {
                    parse_tree__parse_dcg_goal__VarsTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_39_39, (MR_Integer) 0)));
                    parse_tree__parse_dcg_goal__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_39_39, (MR_Integer) 1)));
                    parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_40_40)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_dcg_goal__succeeded)
                      {
                        parse_tree__parse_dcg_goal__SubGoalTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_40_40, (MR_Integer) 0)));
                        parse_tree__parse_dcg_goal__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_40_40, (MR_Integer) 1)));
                        parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_dcg_goal__succeeded)
      {
        MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_66_66 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_67_67;
        MR_Word parse_tree__parse_dcg_goal__GenericVarSet_19;
        MR_Word parse_tree__parse_dcg_goal__VarsContextPieces_21;
        MR_Word parse_tree__parse_dcg_goal__V_53_53;

        {
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_dcg_goal__TypeCtorInfo_66_66, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_31, &parse_tree__parse_dcg_goal__GenericVarSet_19);
        }
        parse_tree__parse_dcg_goal__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          parse_tree__parse_dcg_goal__V_53_53 = mercury__cord__from_list_1_f_0(parse_tree__parse_dcg_goal__TypeCtorInfo_67_67, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[57]));
        }
        {
          parse_tree__parse_dcg_goal__VarsContextPieces_21 = mercury__cord__f_43_43_2_f_0(parse_tree__parse_dcg_goal__TypeCtorInfo_67_67, parse_tree__parse_dcg_goal__ContextPieces_11, parse_tree__parse_dcg_goal__V_53_53);
        }
        {
          parse_tree__parse_vars__parse_vars_state_vars_4_p_0(parse_tree__parse_dcg_goal__TypeCtorInfo_66_66, parse_tree__parse_dcg_goal__VarsTerm_16, parse_tree__parse_dcg_goal__GenericVarSet_19, parse_tree__parse_dcg_goal__VarsContextPieces_21, &parse_tree__parse_dcg_goal__MaybeVars_22);
        }
        parse_tree__parse_dcg_goal__GoalTerm_23 = parse_tree__parse_dcg_goal__SubGoalTerm_17;
      }
    else
      {
        parse_tree__parse_dcg_goal__MaybeVars_22 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_4[8]);
        parse_tree__parse_dcg_goal__GoalTerm_23 = parse_tree__parse_dcg_goal__Term_10;
      }
    {
      parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(parse_tree__parse_dcg_goal__GoalTerm_23, parse_tree__parse_dcg_goal__ContextPieces_11, &parse_tree__parse_dcg_goal__MaybeGoal_24, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_31, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_32, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_33, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_34, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_35, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_36);
    }
    parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeVars_22)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_dcg_goal__succeeded)
      {
        parse_tree__parse_dcg_goal__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeVars_22, (MR_Integer) 0)));
        parse_tree__parse_dcg_goal__Vars0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_60_60, (MR_Integer) 0)));
        parse_tree__parse_dcg_goal__StateVars0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_60_60, (MR_Integer) 1)));
        parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeGoal_24)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_dcg_goal__succeeded)
          parse_tree__parse_dcg_goal__Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeGoal_24, (MR_Integer) 0)));
      }
    if (parse_tree__parse_dcg_goal__succeeded)
      {
        MR_Word parse_tree__parse_dcg_goal__TypeInfo_72_72 = (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[2];
        MR_Word parse_tree__parse_dcg_goal__TypeInfo_73_73 = (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[3];
        MR_Word parse_tree__parse_dcg_goal__Vars_28;
        MR_Word parse_tree__parse_dcg_goal__StateVars_29;

        {
          mercury__list__map_3_p_0(parse_tree__parse_dcg_goal__TypeInfo_72_72, parse_tree__parse_dcg_goal__TypeInfo_73_73, (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_3[7], parse_tree__parse_dcg_goal__Vars0_25, &parse_tree__parse_dcg_goal__Vars_28);
        }
        {
          mercury__list__map_3_p_0(parse_tree__parse_dcg_goal__TypeInfo_72_72, parse_tree__parse_dcg_goal__TypeInfo_73_73, (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_3[8], parse_tree__parse_dcg_goal__StateVars0_26, &parse_tree__parse_dcg_goal__StateVars_29);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_dcg_goal__MaybeVarsGoal_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Vars_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__StateVars_29));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal_27));
        }
      }
    else
      {
        MR_Word parse_tree__parse_dcg_goal__Specs_30;
        MR_Word parse_tree__parse_dcg_goal__V_63_63;
        MR_Word parse_tree__parse_dcg_goal__V_64_64;

        {
          parse_tree__parse_dcg_goal__V_63_63 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[4], parse_tree__parse_dcg_goal__MaybeVars_22);
        }
        {
          parse_tree__parse_dcg_goal__V_64_64 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, parse_tree__parse_dcg_goal__MaybeGoal_24);
        }
        {
          parse_tree__parse_dcg_goal__Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_dcg_goal__V_63_63, parse_tree__parse_dcg_goal__V_64_64);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_dcg_goal__MaybeVarsGoal_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Specs_30));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_5(
  MR_Box parse_tree__parse_dcg_goal__closure_arg,
  MR_Box parse_tree__parse_dcg_goal__wrapper_arg_1,
  MR_Box * parse_tree__parse_dcg_goal__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_dcg_goal__closure = parse_tree__parse_dcg_goal__closure_arg;
    MR_Word parse_tree__parse_dcg_goal__conv4_HeadVar__2_790;

    {
      parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__280__2_2_p_0(((MR_Word) parse_tree__parse_dcg_goal__wrapper_arg_1), &parse_tree__parse_dcg_goal__conv4_HeadVar__2_790);
    }
    *parse_tree__parse_dcg_goal__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_dcg_goal__conv4_HeadVar__2_790));
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_4(
  MR_Box parse_tree__parse_dcg_goal__closure_arg,
  MR_Box parse_tree__parse_dcg_goal__wrapper_arg_1,
  MR_Box * parse_tree__parse_dcg_goal__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_dcg_goal__closure = parse_tree__parse_dcg_goal__closure_arg;
    MR_Word parse_tree__parse_dcg_goal__conv3_HeadVar__2_784;

    {
      parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__279__2_2_p_0(((MR_Word) parse_tree__parse_dcg_goal__wrapper_arg_1), &parse_tree__parse_dcg_goal__conv3_HeadVar__2_784);
    }
    *parse_tree__parse_dcg_goal__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_dcg_goal__conv3_HeadVar__2_784));
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_3(
  MR_Box parse_tree__parse_dcg_goal__closure_arg,
  MR_Box parse_tree__parse_dcg_goal__wrapper_arg_1,
  MR_Box * parse_tree__parse_dcg_goal__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_dcg_goal__closure = parse_tree__parse_dcg_goal__closure_arg;
    MR_Word parse_tree__parse_dcg_goal__conv2_HeadVar__2_668;

    {
      parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__280__1_2_p_0(((MR_Word) parse_tree__parse_dcg_goal__wrapper_arg_1), &parse_tree__parse_dcg_goal__conv2_HeadVar__2_668);
    }
    *parse_tree__parse_dcg_goal__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_dcg_goal__conv2_HeadVar__2_668));
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_2(
  MR_Box parse_tree__parse_dcg_goal__closure_arg,
  MR_Box parse_tree__parse_dcg_goal__wrapper_arg_1,
  MR_Box * parse_tree__parse_dcg_goal__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_dcg_goal__closure = parse_tree__parse_dcg_goal__closure_arg;
    MR_Word parse_tree__parse_dcg_goal__conv1_HeadVar__2_662;

    {
      parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__279__1_2_p_0(((MR_Word) parse_tree__parse_dcg_goal__wrapper_arg_1), &parse_tree__parse_dcg_goal__conv1_HeadVar__2_662);
    }
    *parse_tree__parse_dcg_goal__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_dcg_goal__conv1_HeadVar__2_662));
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0_1(
  MR_Box parse_tree__parse_dcg_goal__closure_arg,
  MR_Box parse_tree__parse_dcg_goal__wrapper_arg_1,
  MR_Box * parse_tree__parse_dcg_goal__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_dcg_goal__closure = parse_tree__parse_dcg_goal__closure_arg;
    MR_Word parse_tree__parse_dcg_goal__conv0_HeadVar__2_691;

    {
      parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_non_call_dcg_goal__597__1_2_p_0(((MR_Word) parse_tree__parse_dcg_goal__wrapper_arg_1), &parse_tree__parse_dcg_goal__conv0_HeadVar__2_691);
    }
    *parse_tree__parse_dcg_goal__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_dcg_goal__conv0_HeadVar__2_691));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0(
  MR_String parse_tree__parse_dcg_goal__Functor_12,
  MR_Word parse_tree__parse_dcg_goal__Args_13,
  MR_Word parse_tree__parse_dcg_goal__Context_14,
  MR_Word parse_tree__parse_dcg_goal__ContextPieces_15,
  MR_Word * parse_tree__parse_dcg_goal__MaybeGoal_16,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98)
{
  {
    MR_bool parse_tree__parse_dcg_goal__succeeded;

    {
      MR_Integer parse_tree__parse_dcg_goal__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(parse_tree__parse_dcg_goal__Functor_12, 0)) {
        case (MR_Integer) 38:
          if (MR_offset_streq(1, parse_tree__parse_dcg_goal__Functor_12, (MR_String) "&"))
            parse_tree__parse_dcg_goal__case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 44:
          if (MR_offset_streq(1, parse_tree__parse_dcg_goal__Functor_12, (MR_String) ","))
            parse_tree__parse_dcg_goal__case_num_0 = (MR_Integer) 1;
          break;
        case (MR_Integer) 58:
          if (MR_offset_streq(1, parse_tree__parse_dcg_goal__Functor_12, (MR_String) ":="))
            parse_tree__parse_dcg_goal__case_num_0 = (MR_Integer) 2;
          break;
        case (MR_Integer) 59:
          if (MR_offset_streq(1, parse_tree__parse_dcg_goal__Functor_12, (MR_String) ";"))
            parse_tree__parse_dcg_goal__case_num_0 = (MR_Integer) 3;
          break;
        case (MR_Integer) 61:
          if (MR_offset_streq(1, parse_tree__parse_dcg_goal__Functor_12, (MR_String) "="))
            parse_tree__parse_dcg_goal__case_num_0 = (MR_Integer) 4;
          break;
        case (MR_Integer) 91:
          switch (MR_nth_code_unit(parse_tree__parse_dcg_goal__Functor_12, 1)) {
            case (MR_Integer) 93:
              if (MR_offset_streq(2, parse_tree__parse_dcg_goal__Functor_12, (MR_String) "[]"))
                parse_tree__parse_dcg_goal__case_num_0 = (MR_Integer) 5;
              break;
            case (MR_Integer) 124:
              if (MR_offset_streq(2, parse_tree__parse_dcg_goal__Functor_12, (MR_String) "[|]"))
                parse_tree__parse_dcg_goal__case_num_0 = (MR_Integer) 6;
              break;
          }
          break;
        case (MR_Integer) 92:
          if (MR_offset_streq(1, parse_tree__parse_dcg_goal__Functor_12, (MR_String) "\\+"))
            parse_tree__parse_dcg_goal__case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 97:
          if (MR_offset_streq(1, parse_tree__parse_dcg_goal__Functor_12, (MR_String) "all"))
            parse_tree__parse_dcg_goal__case_num_0 = (MR_Integer) 8;
          break;
        case (MR_Integer) 101:
          if (MR_offset_streq(1, parse_tree__parse_dcg_goal__Functor_12, (MR_String) "else"))
            parse_tree__parse_dcg_goal__case_num_0 = (MR_Integer) 9;
          break;
        case (MR_Integer) 105:
          switch (MR_nth_code_unit(parse_tree__parse_dcg_goal__Functor_12, 1)) {
            case (MR_Integer) 102:
              if (MR_offset_streq(2, parse_tree__parse_dcg_goal__Functor_12, (MR_String) "if"))
                parse_tree__parse_dcg_goal__case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 109:
              if (MR_offset_streq(2, parse_tree__parse_dcg_goal__Functor_12, (MR_String) "impure"))
                parse_tree__parse_dcg_goal__case_num_0 = (MR_Integer) 11;
              break;
          }
          break;
        case (MR_Integer) 110:
          if (MR_offset_streq(1, parse_tree__parse_dcg_goal__Functor_12, (MR_String) "not"))
            parse_tree__parse_dcg_goal__case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 112:
          if (((((((((((((((MR_nth_code_unit(parse_tree__parse_dcg_goal__Functor_12, 1)) == (MR_Integer) 114)) && (((MR_nth_code_unit(parse_tree__parse_dcg_goal__Functor_12, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(parse_tree__parse_dcg_goal__Functor_12, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(parse_tree__parse_dcg_goal__Functor_12, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__parse_dcg_goal__Functor_12, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__parse_dcg_goal__Functor_12, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__parse_dcg_goal__Functor_12, 7)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(parse_tree__parse_dcg_goal__Functor_12, 8)) {
              case (MR_Integer) 105:
                if (MR_offset_streq(9, parse_tree__parse_dcg_goal__Functor_12, (MR_String) "promise_impure"))
                  parse_tree__parse_dcg_goal__case_num_0 = (MR_Integer) 12;
                break;
              case (MR_Integer) 112:
                if (MR_offset_streq(9, parse_tree__parse_dcg_goal__Functor_12, (MR_String) "promise_pure"))
                  parse_tree__parse_dcg_goal__case_num_0 = (MR_Integer) 13;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(9, parse_tree__parse_dcg_goal__Functor_12, (MR_String) "promise_semipure"))
                  parse_tree__parse_dcg_goal__case_num_0 = (MR_Integer) 14;
                break;
            }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(parse_tree__parse_dcg_goal__Functor_12, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, parse_tree__parse_dcg_goal__Functor_12, (MR_String) "semipure"))
                parse_tree__parse_dcg_goal__case_num_0 = (MR_Integer) 15;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, parse_tree__parse_dcg_goal__Functor_12, (MR_String) "some"))
                parse_tree__parse_dcg_goal__case_num_0 = (MR_Integer) 16;
              break;
          }
          break;
        case (MR_Integer) 123:
          if (MR_offset_streq(1, parse_tree__parse_dcg_goal__Functor_12, (MR_String) "{}"))
            parse_tree__parse_dcg_goal__case_num_0 = (MR_Integer) 17;
          break;
      }
      switch (parse_tree__parse_dcg_goal__case_num_0) {
        default:
          parse_tree__parse_dcg_goal__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            /* case "&" */
            {
              MR_Word parse_tree__parse_dcg_goal__SubGoalTermA_498;
              MR_Word parse_tree__parse_dcg_goal__SubGoalTermB_499;
              MR_Word parse_tree__parse_dcg_goal__V_354_354;
              MR_Word parse_tree__parse_dcg_goal__V_355_355;

              parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  parse_tree__parse_dcg_goal__SubGoalTermA_498 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 0)));
                  parse_tree__parse_dcg_goal__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 1)));
                  parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_354_354)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      parse_tree__parse_dcg_goal__SubGoalTermB_499 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_354_354, (MR_Integer) 0)));
                      parse_tree__parse_dcg_goal__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_354_354, (MR_Integer) 1)));
                      parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_355_355 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                }
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_356_356;
                  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_357_357;
                  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_358_358;
                  MR_Word parse_tree__parse_dcg_goal__MaybeSubGoalA_490;
                  MR_Word parse_tree__parse_dcg_goal__MaybeSubGoalB_491;
                  MR_Word parse_tree__parse_dcg_goal__SubGoalA_486;
                  MR_Word parse_tree__parse_dcg_goal__SubGoalB_487;

                  {
                    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(parse_tree__parse_dcg_goal__SubGoalTermA_498, parse_tree__parse_dcg_goal__ContextPieces_15, &parse_tree__parse_dcg_goal__MaybeSubGoalA_490, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, &parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_356_356, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95, &parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_357_357, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97, &parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_358_358);
                  }
                  {
                    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(parse_tree__parse_dcg_goal__SubGoalTermB_499, parse_tree__parse_dcg_goal__ContextPieces_15, &parse_tree__parse_dcg_goal__MaybeSubGoalB_491, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_356_356, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_357_357, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_358_358, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98);
                  }
                  parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeSubGoalA_490)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      parse_tree__parse_dcg_goal__SubGoalA_486 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeSubGoalA_490, (MR_Integer) 0)));
                      parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeSubGoalB_491)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__parse_dcg_goal__succeeded)
                        parse_tree__parse_dcg_goal__SubGoalB_487 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeSubGoalB_491, (MR_Integer) 0)));
                    }
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      MR_Word parse_tree__parse_dcg_goal__Goal_482;

                      {
                        parse_tree__parse_dcg_goal__Goal_482 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_482, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_482, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_482, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__SubGoalA_486));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_482, 3) = ((MR_Box) (parse_tree__parse_dcg_goal__SubGoalB_487));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal_482));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_677_677 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
                      MR_Word parse_tree__parse_dcg_goal__V_362_362;
                      MR_Word parse_tree__parse_dcg_goal__V_363_363;
                      MR_Word parse_tree__parse_dcg_goal__Specs_483;

                      {
                        parse_tree__parse_dcg_goal__V_362_362 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_dcg_goal__TypeCtorInfo_677_677, parse_tree__parse_dcg_goal__MaybeSubGoalA_490);
                      }
                      {
                        parse_tree__parse_dcg_goal__V_363_363 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_dcg_goal__TypeCtorInfo_677_677, parse_tree__parse_dcg_goal__MaybeSubGoalB_491);
                      }
                      {
                        parse_tree__parse_dcg_goal__Specs_483 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_dcg_goal__V_362_362, parse_tree__parse_dcg_goal__V_363_363);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Specs_483));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__parse_dcg_goal__V_364_364;
                  MR_Word parse_tree__parse_dcg_goal__Spec_494;

                  {
                    parse_tree__parse_dcg_goal__Spec_494 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(parse_tree__parse_dcg_goal__ContextPieces_15, parse_tree__parse_dcg_goal__Context_14, parse_tree__parse_dcg_goal__Functor_12);
                  }
                  {
                    parse_tree__parse_dcg_goal__V_364_364 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_364_364, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Spec_494));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_364_364, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_364_364));
                  }
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96 = parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94 = parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__parse_dcg_goal__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            /* case "," */
            {
              MR_Word parse_tree__parse_dcg_goal__SubGoalTermA_47;
              MR_Word parse_tree__parse_dcg_goal__SubGoalTermB_48;
              MR_Word parse_tree__parse_dcg_goal__V_366_366;
              MR_Word parse_tree__parse_dcg_goal__V_367_367;

              parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  parse_tree__parse_dcg_goal__SubGoalTermA_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 0)));
                  parse_tree__parse_dcg_goal__V_366_366 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 1)));
                  parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_366_366)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      parse_tree__parse_dcg_goal__SubGoalTermB_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_366_366, (MR_Integer) 0)));
                      parse_tree__parse_dcg_goal__V_367_367 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_366_366, (MR_Integer) 1)));
                      parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_367_367 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                }
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  MR_Word parse_tree__parse_dcg_goal__MaybeSubGoalA_49;
                  MR_Word parse_tree__parse_dcg_goal__MaybeSubGoalB_50;
                  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_368_368;
                  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_369_369;
                  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_370_370;
                  MR_Word parse_tree__parse_dcg_goal__SubGoalA_51;
                  MR_Word parse_tree__parse_dcg_goal__SubGoalB_52;

                  {
                    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(parse_tree__parse_dcg_goal__SubGoalTermA_47, parse_tree__parse_dcg_goal__ContextPieces_15, &parse_tree__parse_dcg_goal__MaybeSubGoalA_49, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, &parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_368_368, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95, &parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_369_369, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97, &parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_370_370);
                  }
                  {
                    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(parse_tree__parse_dcg_goal__SubGoalTermB_48, parse_tree__parse_dcg_goal__ContextPieces_15, &parse_tree__parse_dcg_goal__MaybeSubGoalB_50, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_368_368, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_369_369, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_370_370, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98);
                  }
                  parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeSubGoalA_49)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      parse_tree__parse_dcg_goal__SubGoalA_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeSubGoalA_49, (MR_Integer) 0)));
                      parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeSubGoalB_50)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__parse_dcg_goal__succeeded)
                        parse_tree__parse_dcg_goal__SubGoalB_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeSubGoalB_50, (MR_Integer) 0)));
                    }
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      MR_Word parse_tree__parse_dcg_goal__Goal_469;

                      {
                        parse_tree__parse_dcg_goal__Goal_469 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), parse_tree__parse_dcg_goal__Goal_469, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                        MR_hl_field(MR_mktag(2), parse_tree__parse_dcg_goal__Goal_469, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__SubGoalA_51));
                        MR_hl_field(MR_mktag(2), parse_tree__parse_dcg_goal__Goal_469, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__SubGoalB_52));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal_469));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_675_675 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
                      MR_Word parse_tree__parse_dcg_goal__V_374_374;
                      MR_Word parse_tree__parse_dcg_goal__V_375_375;
                      MR_Word parse_tree__parse_dcg_goal__Specs_470;

                      {
                        parse_tree__parse_dcg_goal__V_374_374 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_dcg_goal__TypeCtorInfo_675_675, parse_tree__parse_dcg_goal__MaybeSubGoalA_49);
                      }
                      {
                        parse_tree__parse_dcg_goal__V_375_375 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_dcg_goal__TypeCtorInfo_675_675, parse_tree__parse_dcg_goal__MaybeSubGoalB_50);
                      }
                      {
                        parse_tree__parse_dcg_goal__Specs_470 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_dcg_goal__V_374_374, parse_tree__parse_dcg_goal__V_375_375);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Specs_470));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__parse_dcg_goal__V_376_376;
                  MR_Word parse_tree__parse_dcg_goal__Spec_475;

                  {
                    parse_tree__parse_dcg_goal__Spec_475 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(parse_tree__parse_dcg_goal__ContextPieces_15, parse_tree__parse_dcg_goal__Context_14, parse_tree__parse_dcg_goal__Functor_12);
                  }
                  {
                    parse_tree__parse_dcg_goal__V_376_376 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_376_376, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Spec_475));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_376_376, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_376_376));
                  }
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96 = parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94 = parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__parse_dcg_goal__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            /* case ":=" */
            {
              MR_Word parse_tree__parse_dcg_goal__Arg0_651;
              MR_Word parse_tree__parse_dcg_goal__V_99_99;

              parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  parse_tree__parse_dcg_goal__Arg0_651 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 0)));
                  parse_tree__parse_dcg_goal__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 1)));
                  parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_99_99 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  MR_Word parse_tree__parse_dcg_goal__Goal_643;
                  MR_Word parse_tree__parse_dcg_goal__OutVarTerm_645;
                  MR_Word parse_tree__parse_dcg_goal__Arg_646;

                  {
                    parse_tree__parse_dcg_goal__new_dcg_var_5_p_0(parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98);
                  }
                  {
                    mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_dcg_goal__Arg0_651, &parse_tree__parse_dcg_goal__Arg_646);
                  }
                  {
                    parse_tree__parse_dcg_goal__OutVarTerm_645 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__OutVarTerm_645, 0) = ((MR_Box) (*parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__OutVarTerm_645, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                  }
                  {
                    parse_tree__parse_dcg_goal__Goal_643 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Goal_643, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Goal_643, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Arg_646));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Goal_643, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__OutVarTerm_645));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Goal_643, 3) = ((MR_Box) ((MR_Integer) 0));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal_643));
                  }
                }
              else
                {
                  MR_Word parse_tree__parse_dcg_goal__ProgArgs_92;
                  MR_Word parse_tree__parse_dcg_goal__Goal_647;

                  {
                    mercury__list__map_3_p_0((MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[0], (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[1], (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_3[2], parse_tree__parse_dcg_goal__Args_13, &parse_tree__parse_dcg_goal__ProgArgs_92);
                  }
                  {
                    parse_tree__parse_dcg_goal__make_dcg_call_10_p_0((MR_Word) &parse_tree__parse_dcg_goal_scalar_common_4[1], parse_tree__parse_dcg_goal__ProgArgs_92, parse_tree__parse_dcg_goal__Context_14, &parse_tree__parse_dcg_goal__Goal_647, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal_647));
                  }
                }
              parse_tree__parse_dcg_goal__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            /* case ";" */
            {
              MR_Word parse_tree__parse_dcg_goal__SubGoalTermA_544;
              MR_Word parse_tree__parse_dcg_goal__SubGoalTermB_545;
              MR_Word parse_tree__parse_dcg_goal__V_328_328;
              MR_Word parse_tree__parse_dcg_goal__V_329_329;

              parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  parse_tree__parse_dcg_goal__SubGoalTermA_544 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 0)));
                  parse_tree__parse_dcg_goal__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 1)));
                  parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_328_328)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      parse_tree__parse_dcg_goal__SubGoalTermB_545 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_328_328, (MR_Integer) 0)));
                      parse_tree__parse_dcg_goal__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_328_328, (MR_Integer) 1)));
                      parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_329_329 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                }
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  MR_Word parse_tree__parse_dcg_goal__CondGoalTerm_53;
                  MR_Word parse_tree__parse_dcg_goal__ThenGoalTerm_54;
                  MR_Word parse_tree__parse_dcg_goal__V_330_330;
                  MR_String parse_tree__parse_dcg_goal__V_331_331;
                  MR_Word parse_tree__parse_dcg_goal__V_332_332;
                  MR_Word parse_tree__parse_dcg_goal__V_333_333;
                  MR_Word parse_tree__parse_dcg_goal__V_334_334;
                  MR_Word parse_tree__parse_dcg_goal___Context_55;

                  parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__SubGoalTermA_544)) == (MR_mktag((MR_Integer) 0)));
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      parse_tree__parse_dcg_goal__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__SubGoalTermA_544, (MR_Integer) 0)));
                      parse_tree__parse_dcg_goal__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__SubGoalTermA_544, (MR_Integer) 1)));
                      parse_tree__parse_dcg_goal___Context_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__SubGoalTermA_544, (MR_Integer) 2)));
                      parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_330_330)) == (MR_mktag((MR_Integer) 0)));
                      if (parse_tree__parse_dcg_goal__succeeded)
                        {
                          parse_tree__parse_dcg_goal__V_331_331 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_330_330, (MR_Integer) 0)));
                          parse_tree__parse_dcg_goal__succeeded = (strcmp(parse_tree__parse_dcg_goal__V_331_331, (MR_String) "->") == 0);
                          if (parse_tree__parse_dcg_goal__succeeded)
                            {
                              parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_332_332)) == (MR_mktag((MR_Integer) 1)));
                              if (parse_tree__parse_dcg_goal__succeeded)
                                {
                                  parse_tree__parse_dcg_goal__CondGoalTerm_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_332_332, (MR_Integer) 0)));
                                  parse_tree__parse_dcg_goal__V_333_333 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_332_332, (MR_Integer) 1)));
                                  parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_333_333)) == (MR_mktag((MR_Integer) 1)));
                                  if (parse_tree__parse_dcg_goal__succeeded)
                                    {
                                      parse_tree__parse_dcg_goal__ThenGoalTerm_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_333_333, (MR_Integer) 0)));
                                      parse_tree__parse_dcg_goal__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_333_333, (MR_Integer) 1)));
                                      parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_334_334 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    }
                                }
                            }
                        }
                    }
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      parse_tree__parse_dcg_goal__parse_dcg_if_then_else_12_p_0(parse_tree__parse_dcg_goal__CondGoalTerm_53, parse_tree__parse_dcg_goal__ThenGoalTerm_54, parse_tree__parse_dcg_goal__SubGoalTermB_545, parse_tree__parse_dcg_goal__Context_14, parse_tree__parse_dcg_goal__ContextPieces_15, parse_tree__parse_dcg_goal__MaybeGoal_16, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98);
                    }
                  else
                    {
                      MR_Word parse_tree__parse_dcg_goal__MaybeSubGoalA0_57;
                      MR_Word parse_tree__parse_dcg_goal__VarA_58;
                      MR_Word parse_tree__parse_dcg_goal__MaybeSubGoalB0_59;
                      MR_Word parse_tree__parse_dcg_goal__VarB_60;
                      MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_338_338;
                      MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_339_339;
                      MR_Word parse_tree__parse_dcg_goal__SubGoalA0_61;
                      MR_Word parse_tree__parse_dcg_goal__SubGoalB0_62;

                      {
                        parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(parse_tree__parse_dcg_goal__SubGoalTermA_544, parse_tree__parse_dcg_goal__ContextPieces_15, &parse_tree__parse_dcg_goal__MaybeSubGoalA0_57, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, &parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_338_338, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95, &parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_339_339, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97, &parse_tree__parse_dcg_goal__VarA_58);
                      }
                      {
                        parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(parse_tree__parse_dcg_goal__SubGoalTermB_545, parse_tree__parse_dcg_goal__ContextPieces_15, &parse_tree__parse_dcg_goal__MaybeSubGoalB0_59, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_338_338, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_339_339, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97, &parse_tree__parse_dcg_goal__VarB_60);
                      }
                      parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeSubGoalA0_57)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__parse_dcg_goal__succeeded)
                        {
                          parse_tree__parse_dcg_goal__SubGoalA0_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeSubGoalA0_57, (MR_Integer) 0)));
                          parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeSubGoalB0_59)) == (MR_mktag((MR_Integer) 1)));
                          if (parse_tree__parse_dcg_goal__succeeded)
                            parse_tree__parse_dcg_goal__SubGoalB0_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeSubGoalB0_59, (MR_Integer) 0)));
                        }
                      if (parse_tree__parse_dcg_goal__succeeded)
                        {
                          MR_Word parse_tree__parse_dcg_goal__Goal_524;
                          MR_Word parse_tree__parse_dcg_goal__TypeInfo_994_994;

                          {
                            parse_tree__parse_dcg_goal__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[3], ((MR_Box) (parse_tree__parse_dcg_goal__VarA_58)), ((MR_Box) (parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97)));
                          }
                          if (parse_tree__parse_dcg_goal__succeeded)
                            {
                              parse_tree__parse_dcg_goal__TypeInfo_994_994 = (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[3];
                              {
                                parse_tree__parse_dcg_goal__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_dcg_goal__TypeInfo_994_994, ((MR_Box) (parse_tree__parse_dcg_goal__VarB_60)), ((MR_Box) (parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97)));
                              }
                            }
                          if (parse_tree__parse_dcg_goal__succeeded)
                            {
                              *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97;
                              {
                                parse_tree__parse_dcg_goal__Goal_524 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_524, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_524, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                                MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_524, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__SubGoalA0_61));
                                MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_524, 3) = ((MR_Box) (parse_tree__parse_dcg_goal__SubGoalB0_62));
                              }
                            }
                          else
                            {
                              {
                                parse_tree__parse_dcg_goal__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[3], ((MR_Box) (parse_tree__parse_dcg_goal__VarA_58)), ((MR_Box) (parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97)));
                              }
                              if (parse_tree__parse_dcg_goal__succeeded)
                                {
                                  MR_Word parse_tree__parse_dcg_goal__Unify_64;
                                  MR_Word parse_tree__parse_dcg_goal__V_342_342;
                                  MR_Word parse_tree__parse_dcg_goal__V_343_343;
                                  MR_Word parse_tree__parse_dcg_goal__SubGoalA_513;

                                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__VarB_60;
                                  {
                                    parse_tree__parse_dcg_goal__V_342_342 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_342_342, 0) = ((MR_Box) (*parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98));
                                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_342_342, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                                  }
                                  {
                                    parse_tree__parse_dcg_goal__V_343_343 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_343_343, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__VarA_58));
                                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_343_343, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                                  }
                                  {
                                    parse_tree__parse_dcg_goal__Unify_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Unify_64, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Unify_64, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__V_342_342));
                                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Unify_64, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__V_343_343));
                                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Unify_64, 3) = ((MR_Box) ((MR_Integer) 0));
                                  }
                                  {
                                    parse_tree__parse_dcg_goal__append_to_disjunct_4_p_0(parse_tree__parse_dcg_goal__Unify_64, parse_tree__parse_dcg_goal__Context_14, parse_tree__parse_dcg_goal__SubGoalA0_61, &parse_tree__parse_dcg_goal__SubGoalA_513);
                                  }
                                  {
                                    parse_tree__parse_dcg_goal__Goal_524 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_524, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                    MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_524, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                                    MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_524, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__SubGoalA_513));
                                    MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_524, 3) = ((MR_Box) (parse_tree__parse_dcg_goal__SubGoalB0_62));
                                  }
                                }
                              else
                                {
                                  {
                                    parse_tree__parse_dcg_goal__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[3], ((MR_Box) (parse_tree__parse_dcg_goal__VarB_60)), ((MR_Box) (parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97)));
                                  }
                                  if (parse_tree__parse_dcg_goal__succeeded)
                                    {
                                      MR_Word parse_tree__parse_dcg_goal__V_345_345;
                                      MR_Word parse_tree__parse_dcg_goal__V_346_346;
                                      MR_Word parse_tree__parse_dcg_goal__SubGoalB_514;
                                      MR_Word parse_tree__parse_dcg_goal__Unify_515;

                                      *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__VarA_58;
                                      {
                                        parse_tree__parse_dcg_goal__V_345_345 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_345_345, 0) = ((MR_Box) (*parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98));
                                        MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_345_345, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                                      }
                                      {
                                        parse_tree__parse_dcg_goal__V_346_346 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_346_346, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__VarB_60));
                                        MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_346_346, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                                      }
                                      {
                                        parse_tree__parse_dcg_goal__Unify_515 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Unify_515, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                                        MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Unify_515, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__V_345_345));
                                        MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Unify_515, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__V_346_346));
                                        MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Unify_515, 3) = ((MR_Box) ((MR_Integer) 0));
                                      }
                                      {
                                        parse_tree__parse_dcg_goal__append_to_disjunct_4_p_0(parse_tree__parse_dcg_goal__Unify_515, parse_tree__parse_dcg_goal__Context_14, parse_tree__parse_dcg_goal__SubGoalB0_62, &parse_tree__parse_dcg_goal__SubGoalB_514);
                                      }
                                      {
                                        parse_tree__parse_dcg_goal__Goal_524 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_524, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_524, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_524, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__SubGoalA0_61));
                                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_524, 3) = ((MR_Box) (parse_tree__parse_dcg_goal__SubGoalB_514));
                                      }
                                    }
                                  else
                                    {
                                      MR_Word parse_tree__parse_dcg_goal__SubGoalA_516;

                                      *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__VarB_60;
                                      {
                                        parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__parse_dcg_goal__VarA_58, parse_tree__parse_dcg_goal__VarB_60, parse_tree__parse_dcg_goal__SubGoalA0_61, &parse_tree__parse_dcg_goal__SubGoalA_516);
                                      }
                                      {
                                        parse_tree__parse_dcg_goal__Goal_524 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_524, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_524, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_524, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__SubGoalA_516));
                                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_524, 3) = ((MR_Box) (parse_tree__parse_dcg_goal__SubGoalB0_62));
                                      }
                                    }
                                }
                            }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal_524));
                          }
                        }
                      else
                        {
                          MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_679_679;
                          MR_Word parse_tree__parse_dcg_goal__V_350_350;
                          MR_Word parse_tree__parse_dcg_goal__V_351_351;
                          MR_Word parse_tree__parse_dcg_goal__Specs_527;

                          *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__VarA_58;
                          parse_tree__parse_dcg_goal__TypeCtorInfo_679_679 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
                          {
                            parse_tree__parse_dcg_goal__V_350_350 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_dcg_goal__TypeCtorInfo_679_679, parse_tree__parse_dcg_goal__MaybeSubGoalA0_57);
                          }
                          {
                            parse_tree__parse_dcg_goal__V_351_351 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_dcg_goal__TypeCtorInfo_679_679, parse_tree__parse_dcg_goal__MaybeSubGoalB0_59);
                          }
                          {
                            parse_tree__parse_dcg_goal__Specs_527 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_dcg_goal__V_350_350, parse_tree__parse_dcg_goal__V_351_351);
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Specs_527));
                          }
                        }
                    }
                }
              else
                {
                  MR_Word parse_tree__parse_dcg_goal__V_352_352;
                  MR_Word parse_tree__parse_dcg_goal__Spec_540;

                  {
                    parse_tree__parse_dcg_goal__Spec_540 = parse_tree__parse_goal__should_have_two_goals_infix_3_f_0(parse_tree__parse_dcg_goal__ContextPieces_15, parse_tree__parse_dcg_goal__Context_14, parse_tree__parse_dcg_goal__Functor_12);
                  }
                  {
                    parse_tree__parse_dcg_goal__V_352_352 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_352_352, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Spec_540));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_352_352, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_352_352));
                  }
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96 = parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94 = parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__parse_dcg_goal__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            /* case "=" */
            {
              MR_Word parse_tree__parse_dcg_goal__Arg0_88;
              MR_Word parse_tree__parse_dcg_goal__V_109_109;

              parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  parse_tree__parse_dcg_goal__Arg0_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 0)));
                  parse_tree__parse_dcg_goal__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 1)));
                  parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_109_109 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  MR_Word parse_tree__parse_dcg_goal__Arg_89;
                  MR_Word parse_tree__parse_dcg_goal__DCGVarTerm_90;
                  MR_Word parse_tree__parse_dcg_goal__Goal_637;

                  {
                    mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_dcg_goal__Arg0_88, &parse_tree__parse_dcg_goal__Arg_89);
                  }
                  {
                    parse_tree__parse_dcg_goal__DCGVarTerm_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__DCGVarTerm_90, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__DCGVarTerm_90, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                  }
                  {
                    parse_tree__parse_dcg_goal__Goal_637 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Goal_637, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Goal_637, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Arg_89));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Goal_637, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__DCGVarTerm_90));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Goal_637, 3) = ((MR_Box) ((MR_Integer) 0));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal_637));
                  }
                }
              else
                {
                  MR_Word parse_tree__parse_dcg_goal__V_111_111;
                  MR_Word parse_tree__parse_dcg_goal__Spec_638;

                  {
                    parse_tree__parse_dcg_goal__Spec_638 = parse_tree__parse_goal__should_have_two_terms_infix_3_f_0(parse_tree__parse_dcg_goal__ContextPieces_15, parse_tree__parse_dcg_goal__Context_14, parse_tree__parse_dcg_goal__Functor_12);
                  }
                  {
                    parse_tree__parse_dcg_goal__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_111_111, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Spec_638));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_111_111));
                  }
                }
              *parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94 = parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93;
              *parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96 = parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95;
              *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97;
              parse_tree__parse_dcg_goal__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            /* case "[]" */
            if ((parse_tree__parse_dcg_goal__Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word parse_tree__parse_dcg_goal__V_215_215;
                MR_Word parse_tree__parse_dcg_goal__V_216_216;
                MR_Word parse_tree__parse_dcg_goal__Goal_599;

                {
                  parse_tree__parse_dcg_goal__new_dcg_var_5_p_0(parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98);
                }
                {
                  parse_tree__parse_dcg_goal__V_215_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_215_215, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_215_215, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                }
                {
                  parse_tree__parse_dcg_goal__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_216_216, 0) = ((MR_Box) (*parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_216_216, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                }
                {
                  parse_tree__parse_dcg_goal__Goal_599 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Goal_599, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Goal_599, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__V_215_215));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Goal_599, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__V_216_216));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Goal_599, 3) = ((MR_Box) ((MR_Integer) 0));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal_599));
                }
              }
            else
              {
                MR_Word parse_tree__parse_dcg_goal__V_204_204;
                MR_Word parse_tree__parse_dcg_goal__V_205_205;
                MR_Word parse_tree__parse_dcg_goal__V_210_210;
                MR_Word parse_tree__parse_dcg_goal__Spec_602;

                {
                  parse_tree__parse_dcg_goal__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_205_205, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_205_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[63])));
                }
                {
                  parse_tree__parse_dcg_goal__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_204_204, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_205_205));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_dcg_goal__Spec_602 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Spec_602, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Spec_602, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Spec_602, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__V_204_204));
                }
                {
                  parse_tree__parse_dcg_goal__V_210_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_210_210, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Spec_602));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_210_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_210_210));
                }
                *parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94 = parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93;
                *parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96 = parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95;
                *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97;
              }
            parse_tree__parse_dcg_goal__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            /* case "[|]" */
            {
              MR_Word parse_tree__parse_dcg_goal__V_113_113;
              MR_Word parse_tree__parse_dcg_goal__V_114_114;
              MR_Word parse_tree__parse_dcg_goal__X_82;
              MR_Word parse_tree__parse_dcg_goal__Xs_83;

              parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  parse_tree__parse_dcg_goal__X_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 0)));
                  parse_tree__parse_dcg_goal__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 1)));
                  parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_113_113)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      parse_tree__parse_dcg_goal__Xs_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_113_113, (MR_Integer) 0)));
                      parse_tree__parse_dcg_goal__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_113_113, (MR_Integer) 1)));
                      parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_114_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                }
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  MR_Word parse_tree__parse_dcg_goal__ConsTerm0_84;
                  MR_Word parse_tree__parse_dcg_goal__ConsTerm_85;
                  MR_Word parse_tree__parse_dcg_goal__OutVarTerm_86;
                  MR_Word parse_tree__parse_dcg_goal__Term_87;

                  {
                    parse_tree__parse_dcg_goal__new_dcg_var_5_p_0(parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98);
                  }
                  {
                    parse_tree__parse_dcg_goal__ConsTerm0_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__ConsTerm0_84, 0) = ((MR_Box) (&parse_tree__parse_dcg_goal_scalar_common_4[3]));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__ConsTerm0_84, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Args_13));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__ConsTerm0_84, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                  }
                  {
                    mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_dcg_goal__ConsTerm0_84, &parse_tree__parse_dcg_goal__ConsTerm_85);
                  }
                  {
                    parse_tree__parse_dcg_goal__OutVarTerm_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__OutVarTerm_86, 0) = ((MR_Box) (*parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__OutVarTerm_86, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                  }
                  {
                    parse_tree__parse_dcg_goal__succeeded = parse_tree__parse_dcg_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(parse_tree__parse_dcg_goal__ConsTerm_85, parse_tree__parse_dcg_goal__OutVarTerm_86, &parse_tree__parse_dcg_goal__Term_87);
                  }
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      MR_Word parse_tree__parse_dcg_goal__V_123_123;
                      MR_Word parse_tree__parse_dcg_goal__Goal_614;

                      {
                        parse_tree__parse_dcg_goal__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_123_123, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_123_123, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                      }
                      {
                        parse_tree__parse_dcg_goal__Goal_614 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Goal_614, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Goal_614, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__V_123_123));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Goal_614, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__Term_87));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Goal_614, 3) = ((MR_Box) ((MR_Integer) 0));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal_614));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__parse_dcg_goal__V_138_138;
                      MR_Word parse_tree__parse_dcg_goal__V_139_139;
                      MR_Word parse_tree__parse_dcg_goal__V_144_144;
                      MR_Word parse_tree__parse_dcg_goal__Spec_615;

                      {
                        parse_tree__parse_dcg_goal__V_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_139_139, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[64])));
                      }
                      {
                        parse_tree__parse_dcg_goal__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_138_138, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_139_139));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        parse_tree__parse_dcg_goal__Spec_615 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Spec_615, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Spec_615, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Spec_615, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__V_138_138));
                      }
                      {
                        parse_tree__parse_dcg_goal__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_144_144, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Spec_615));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_144_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_144_144));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__parse_dcg_goal__V_171_171;
                  MR_Word parse_tree__parse_dcg_goal__V_172_172;
                  MR_Word parse_tree__parse_dcg_goal__V_177_177;
                  MR_Word parse_tree__parse_dcg_goal__Spec_625;

                  {
                    parse_tree__parse_dcg_goal__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_172_172, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_172_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[65])));
                  }
                  {
                    parse_tree__parse_dcg_goal__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_171_171, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_172_172));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_171_171, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_dcg_goal__Spec_625 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Spec_625, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Spec_625, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Spec_625, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__V_171_171));
                  }
                  {
                    parse_tree__parse_dcg_goal__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_177_177, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Spec_625));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_177_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_177_177));
                  }
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96 = parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94 = parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__parse_dcg_goal__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 7:
          {
            /* case "\+", "not" */
            {
              MR_Word parse_tree__parse_dcg_goal__SubGoalTerm_443;
              MR_Word parse_tree__parse_dcg_goal__V_416_416;

              parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  parse_tree__parse_dcg_goal__SubGoalTerm_443 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 0)));
                  parse_tree__parse_dcg_goal__V_416_416 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 1)));
                  parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_416_416 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  MR_Word parse_tree__parse_dcg_goal__MaybeSubGoal_28;
                  MR_Word parse_tree__parse_dcg_goal__V_29_29;

                  {
                    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(parse_tree__parse_dcg_goal__SubGoalTerm_443, parse_tree__parse_dcg_goal__ContextPieces_15, &parse_tree__parse_dcg_goal__MaybeSubGoal_28, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97, &parse_tree__parse_dcg_goal__V_29_29);
                  }
                  if (((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeSubGoal_28)) == (MR_mktag((MR_Integer) 0))))
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = parse_tree__parse_dcg_goal__MaybeSubGoal_28;
                  else
                    {
                      MR_Word parse_tree__parse_dcg_goal__SubGoal_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeSubGoal_28, (MR_Integer) 0)));
                      MR_Word parse_tree__parse_dcg_goal__V_419_419;

                      {
                        parse_tree__parse_dcg_goal__V_419_419 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__V_419_419, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__V_419_419, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__V_419_419, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__SubGoal_30));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_419_419));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__parse_dcg_goal__V_420_420;
                  MR_Word parse_tree__parse_dcg_goal__Spec_442;

                  {
                    parse_tree__parse_dcg_goal__Spec_442 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(parse_tree__parse_dcg_goal__ContextPieces_15, parse_tree__parse_dcg_goal__Context_14, parse_tree__parse_dcg_goal__Functor_12);
                  }
                  {
                    parse_tree__parse_dcg_goal__V_420_420 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_420_420, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Spec_442));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_420_420, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_420_420));
                  }
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96 = parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94 = parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93;
                }
              *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97;
              parse_tree__parse_dcg_goal__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 8:
          {
            /* case "all" */
            {
              MR_Word parse_tree__parse_dcg_goal__QVarsTerm_34;
              MR_Word parse_tree__parse_dcg_goal__SubGoalTerm_457;
              MR_Word parse_tree__parse_dcg_goal__V_400_400;
              MR_Word parse_tree__parse_dcg_goal__V_401_401;

              parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  parse_tree__parse_dcg_goal__QVarsTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 0)));
                  parse_tree__parse_dcg_goal__V_400_400 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 1)));
                  parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_400_400)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      parse_tree__parse_dcg_goal__SubGoalTerm_457 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_400_400, (MR_Integer) 0)));
                      parse_tree__parse_dcg_goal__V_401_401 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_400_400, (MR_Integer) 1)));
                      parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_401_401 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                }
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_659_659 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                  MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_660_660;
                  MR_Word parse_tree__parse_dcg_goal__GenericVarSet_35;
                  MR_Word parse_tree__parse_dcg_goal__VarsContextPieces_36;
                  MR_Word parse_tree__parse_dcg_goal__MaybeVars_37;
                  MR_Word parse_tree__parse_dcg_goal__V_402_402;
                  MR_Word parse_tree__parse_dcg_goal__MaybeSubGoal_454;
                  MR_Word parse_tree__parse_dcg_goal__Vars0_38;
                  MR_Word parse_tree__parse_dcg_goal__StateVars0_39;
                  MR_Word parse_tree__parse_dcg_goal__SubGoal_451;
                  MR_Word parse_tree__parse_dcg_goal__V_406_406;

                  {
                    mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_dcg_goal__TypeCtorInfo_659_659, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, &parse_tree__parse_dcg_goal__GenericVarSet_35);
                  }
                  parse_tree__parse_dcg_goal__TypeCtorInfo_660_660 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                  {
                    parse_tree__parse_dcg_goal__V_402_402 = mercury__cord__from_list_1_f_0(parse_tree__parse_dcg_goal__TypeCtorInfo_660_660, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[42]));
                  }
                  {
                    parse_tree__parse_dcg_goal__VarsContextPieces_36 = mercury__cord__f_43_43_2_f_0(parse_tree__parse_dcg_goal__TypeCtorInfo_660_660, parse_tree__parse_dcg_goal__ContextPieces_15, parse_tree__parse_dcg_goal__V_402_402);
                  }
                  {
                    parse_tree__parse_vars__parse_vars_state_vars_4_p_0(parse_tree__parse_dcg_goal__TypeCtorInfo_659_659, parse_tree__parse_dcg_goal__QVarsTerm_34, parse_tree__parse_dcg_goal__GenericVarSet_35, parse_tree__parse_dcg_goal__VarsContextPieces_36, &parse_tree__parse_dcg_goal__MaybeVars_37);
                  }
                  {
                    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(parse_tree__parse_dcg_goal__SubGoalTerm_457, parse_tree__parse_dcg_goal__ContextPieces_15, &parse_tree__parse_dcg_goal__MaybeSubGoal_454, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98);
                  }
                  parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeVars_37)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      parse_tree__parse_dcg_goal__V_406_406 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeVars_37, (MR_Integer) 0)));
                      parse_tree__parse_dcg_goal__Vars0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_406_406, (MR_Integer) 0)));
                      parse_tree__parse_dcg_goal__StateVars0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_406_406, (MR_Integer) 1)));
                      parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeSubGoal_454)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__parse_dcg_goal__succeeded)
                        parse_tree__parse_dcg_goal__SubGoal_451 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeSubGoal_454, (MR_Integer) 0)));
                    }
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      MR_Word parse_tree__parse_dcg_goal__TypeInfo_665_665 = (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[2];
                      MR_Word parse_tree__parse_dcg_goal__TypeInfo_666_666 = (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[3];
                      MR_Word parse_tree__parse_dcg_goal__StateVars_40;
                      MR_Word parse_tree__parse_dcg_goal__Vars_41;
                      MR_Word parse_tree__parse_dcg_goal__Goal1_42;
                      MR_Word parse_tree__parse_dcg_goal__Goal_447;

                      {
                        mercury__list__map_3_p_0(parse_tree__parse_dcg_goal__TypeInfo_665_665, parse_tree__parse_dcg_goal__TypeInfo_666_666, (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_3[3], parse_tree__parse_dcg_goal__StateVars0_39, &parse_tree__parse_dcg_goal__StateVars_40);
                      }
                      {
                        mercury__list__map_3_p_0(parse_tree__parse_dcg_goal__TypeInfo_665_665, parse_tree__parse_dcg_goal__TypeInfo_666_666, (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_3[4], parse_tree__parse_dcg_goal__Vars0_38, &parse_tree__parse_dcg_goal__Vars_41);
                      }
                      if ((parse_tree__parse_dcg_goal__StateVars_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        parse_tree__parse_dcg_goal__Goal1_42 = parse_tree__parse_dcg_goal__SubGoal_451;
                      else
                        {
                          {
                            parse_tree__parse_dcg_goal__Goal1_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal1_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal1_42, 1) = ((MR_Box) (((MR_Integer) 1 | (((MR_Integer) 1 << (MR_Integer) 1)))));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal1_42, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal1_42, 3) = ((MR_Box) (parse_tree__parse_dcg_goal__StateVars_40));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal1_42, 4) = ((MR_Box) (parse_tree__parse_dcg_goal__SubGoal_451));
                          }
                        }
                      if ((parse_tree__parse_dcg_goal__Vars_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        parse_tree__parse_dcg_goal__Goal_447 = parse_tree__parse_dcg_goal__Goal1_42;
                      else
                        {
                          {
                            parse_tree__parse_dcg_goal__Goal_447 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_447, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_447, 1) = ((MR_Box) (((MR_Integer) 1 | (((MR_Integer) 0 << (MR_Integer) 1)))));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_447, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_447, 3) = ((MR_Box) (parse_tree__parse_dcg_goal__Vars_41));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_447, 4) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal1_42));
                          }
                        }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal_447));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__parse_dcg_goal__V_411_411;
                      MR_Word parse_tree__parse_dcg_goal__V_412_412;
                      MR_Word parse_tree__parse_dcg_goal__Specs_448;

                      {
                        parse_tree__parse_dcg_goal__V_411_411 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[4], parse_tree__parse_dcg_goal__MaybeVars_37);
                      }
                      {
                        parse_tree__parse_dcg_goal__V_412_412 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, parse_tree__parse_dcg_goal__MaybeSubGoal_454);
                      }
                      {
                        parse_tree__parse_dcg_goal__Specs_448 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_dcg_goal__V_411_411, parse_tree__parse_dcg_goal__V_412_412);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Specs_448));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__parse_dcg_goal__V_414_414;
                  MR_Word parse_tree__parse_dcg_goal__Spec_456;

                  {
                    parse_tree__parse_dcg_goal__Spec_456 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(parse_tree__parse_dcg_goal__ContextPieces_15, parse_tree__parse_dcg_goal__Context_14, (MR_String) "a list of variables", parse_tree__parse_dcg_goal__Functor_12);
                  }
                  {
                    parse_tree__parse_dcg_goal__V_414_414 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_414_414, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Spec_456));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_414_414, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_414_414));
                  }
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96 = parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94 = parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__parse_dcg_goal__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 9:
          {
            /* case "else" */
            {
              MR_Word parse_tree__parse_dcg_goal__ElseGoalTerm_66;
              MR_Word parse_tree__parse_dcg_goal__CondContext_68;
              MR_Word parse_tree__parse_dcg_goal__CondGoalTerm_557;
              MR_Word parse_tree__parse_dcg_goal__ThenGoalTerm_558;
              MR_Word parse_tree__parse_dcg_goal__CondThenTerm_65;
              MR_Word parse_tree__parse_dcg_goal__V_283_283;
              MR_Word parse_tree__parse_dcg_goal__V_284_284;
              MR_Word parse_tree__parse_dcg_goal__V_285_285;
              MR_String parse_tree__parse_dcg_goal__V_286_286;
              MR_Word parse_tree__parse_dcg_goal__V_287_287;
              MR_Word parse_tree__parse_dcg_goal__V_288_288;
              MR_Word parse_tree__parse_dcg_goal__V_289_289;
              MR_String parse_tree__parse_dcg_goal__V_290_290;
              MR_Word parse_tree__parse_dcg_goal__V_291_291;
              MR_Word parse_tree__parse_dcg_goal__V_292_292;
              MR_Word parse_tree__parse_dcg_goal__V_293_293;
              MR_Word parse_tree__parse_dcg_goal__V_294_294;
              MR_Word parse_tree__parse_dcg_goal__V_67_67;

              parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  parse_tree__parse_dcg_goal__CondThenTerm_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 0)));
                  parse_tree__parse_dcg_goal__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 1)));
                  parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_283_283)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      parse_tree__parse_dcg_goal__ElseGoalTerm_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_283_283, (MR_Integer) 0)));
                      parse_tree__parse_dcg_goal__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_283_283, (MR_Integer) 1)));
                      parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_284_284 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (parse_tree__parse_dcg_goal__succeeded)
                        {
                          parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__CondThenTerm_65)) == (MR_mktag((MR_Integer) 0)));
                          if (parse_tree__parse_dcg_goal__succeeded)
                            {
                              parse_tree__parse_dcg_goal__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__CondThenTerm_65, (MR_Integer) 0)));
                              parse_tree__parse_dcg_goal__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__CondThenTerm_65, (MR_Integer) 1)));
                              parse_tree__parse_dcg_goal__CondContext_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__CondThenTerm_65, (MR_Integer) 2)));
                              parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_285_285)) == (MR_mktag((MR_Integer) 0)));
                              if (parse_tree__parse_dcg_goal__succeeded)
                                {
                                  parse_tree__parse_dcg_goal__V_286_286 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_285_285, (MR_Integer) 0)));
                                  parse_tree__parse_dcg_goal__succeeded = (strcmp(parse_tree__parse_dcg_goal__V_286_286, (MR_String) "if") == 0);
                                  if (parse_tree__parse_dcg_goal__succeeded)
                                    {
                                      parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_287_287)) == (MR_mktag((MR_Integer) 1)));
                                      if (parse_tree__parse_dcg_goal__succeeded)
                                        {
                                          parse_tree__parse_dcg_goal__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_287_287, (MR_Integer) 0)));
                                          parse_tree__parse_dcg_goal__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_287_287, (MR_Integer) 1)));
                                          parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_294_294 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                          if (parse_tree__parse_dcg_goal__succeeded)
                                            {
                                              parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_288_288)) == (MR_mktag((MR_Integer) 0)));
                                              if (parse_tree__parse_dcg_goal__succeeded)
                                                {
                                                  parse_tree__parse_dcg_goal__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_288_288, (MR_Integer) 0)));
                                                  parse_tree__parse_dcg_goal__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_288_288, (MR_Integer) 1)));
                                                  parse_tree__parse_dcg_goal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_288_288, (MR_Integer) 2)));
                                                  parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_289_289)) == (MR_mktag((MR_Integer) 0)));
                                                  if (parse_tree__parse_dcg_goal__succeeded)
                                                    {
                                                      parse_tree__parse_dcg_goal__V_290_290 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_289_289, (MR_Integer) 0)));
                                                      parse_tree__parse_dcg_goal__succeeded = (strcmp(parse_tree__parse_dcg_goal__V_290_290, (MR_String) "then") == 0);
                                                      if (parse_tree__parse_dcg_goal__succeeded)
                                                        {
                                                          parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_291_291)) == (MR_mktag((MR_Integer) 1)));
                                                          if (parse_tree__parse_dcg_goal__succeeded)
                                                            {
                                                              parse_tree__parse_dcg_goal__CondGoalTerm_557 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_291_291, (MR_Integer) 0)));
                                                              parse_tree__parse_dcg_goal__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_291_291, (MR_Integer) 1)));
                                                              parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_292_292)) == (MR_mktag((MR_Integer) 1)));
                                                              if (parse_tree__parse_dcg_goal__succeeded)
                                                                {
                                                                  parse_tree__parse_dcg_goal__ThenGoalTerm_558 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_292_292, (MR_Integer) 0)));
                                                                  parse_tree__parse_dcg_goal__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_292_292, (MR_Integer) 1)));
                                                                  parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_293_293 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  parse_tree__parse_dcg_goal__parse_dcg_if_then_else_12_p_0(parse_tree__parse_dcg_goal__CondGoalTerm_557, parse_tree__parse_dcg_goal__ThenGoalTerm_558, parse_tree__parse_dcg_goal__ElseGoalTerm_66, parse_tree__parse_dcg_goal__CondContext_68, parse_tree__parse_dcg_goal__ContextPieces_15, parse_tree__parse_dcg_goal__MaybeGoal_16, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98);
                }
              else
                {
                  MR_Word parse_tree__parse_dcg_goal__V_320_320;
                  MR_Word parse_tree__parse_dcg_goal__V_321_321;
                  MR_Word parse_tree__parse_dcg_goal__V_326_326;
                  MR_Word parse_tree__parse_dcg_goal__Spec_555;

                  {
                    parse_tree__parse_dcg_goal__V_321_321 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_321_321, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_321_321, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[66])));
                  }
                  {
                    parse_tree__parse_dcg_goal__V_320_320 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_320_320, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_321_321));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_320_320, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_dcg_goal__Spec_555 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Spec_555, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Spec_555, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Spec_555, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__V_320_320));
                  }
                  {
                    parse_tree__parse_dcg_goal__V_326_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_326_326, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Spec_555));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_326_326, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_326_326));
                  }
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96 = parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94 = parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__parse_dcg_goal__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 10:
          {
            /* case "if" */
            {
              MR_Word parse_tree__parse_dcg_goal__CondGoalTerm_579;
              MR_Word parse_tree__parse_dcg_goal__ThenGoalTerm_580;
              MR_Word parse_tree__parse_dcg_goal__V_238_238;
              MR_Word parse_tree__parse_dcg_goal__V_239_239;
              MR_String parse_tree__parse_dcg_goal__V_240_240;
              MR_Word parse_tree__parse_dcg_goal__V_241_241;
              MR_Word parse_tree__parse_dcg_goal__V_242_242;
              MR_Word parse_tree__parse_dcg_goal__V_243_243;
              MR_Word parse_tree__parse_dcg_goal__V_244_244;
              MR_Word parse_tree__parse_dcg_goal__V_70_70;

              parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  parse_tree__parse_dcg_goal__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 0)));
                  parse_tree__parse_dcg_goal__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 1)));
                  parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_244_244 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_238_238)) == (MR_mktag((MR_Integer) 0)));
                      if (parse_tree__parse_dcg_goal__succeeded)
                        {
                          parse_tree__parse_dcg_goal__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_238_238, (MR_Integer) 0)));
                          parse_tree__parse_dcg_goal__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_238_238, (MR_Integer) 1)));
                          parse_tree__parse_dcg_goal__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_238_238, (MR_Integer) 2)));
                          parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_239_239)) == (MR_mktag((MR_Integer) 0)));
                          if (parse_tree__parse_dcg_goal__succeeded)
                            {
                              parse_tree__parse_dcg_goal__V_240_240 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_239_239, (MR_Integer) 0)));
                              parse_tree__parse_dcg_goal__succeeded = (strcmp(parse_tree__parse_dcg_goal__V_240_240, (MR_String) "then") == 0);
                              if (parse_tree__parse_dcg_goal__succeeded)
                                {
                                  parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_241_241)) == (MR_mktag((MR_Integer) 1)));
                                  if (parse_tree__parse_dcg_goal__succeeded)
                                    {
                                      parse_tree__parse_dcg_goal__CondGoalTerm_579 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_241_241, (MR_Integer) 0)));
                                      parse_tree__parse_dcg_goal__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_241_241, (MR_Integer) 1)));
                                      parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_242_242)) == (MR_mktag((MR_Integer) 1)));
                                      if (parse_tree__parse_dcg_goal__succeeded)
                                        {
                                          parse_tree__parse_dcg_goal__ThenGoalTerm_580 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_242_242, (MR_Integer) 0)));
                                          parse_tree__parse_dcg_goal__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_242_242, (MR_Integer) 1)));
                                          parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_243_243 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  MR_Word parse_tree__parse_dcg_goal__MaybeVarsCondGoal_72;
                  MR_Word parse_tree__parse_dcg_goal__MaybeThenGoal_73;
                  MR_Word parse_tree__parse_dcg_goal__CondGoal_75;
                  MR_Word parse_tree__parse_dcg_goal__ThenGoal_76;
                  MR_Word parse_tree__parse_dcg_goal__StateVars_566;
                  MR_Word parse_tree__parse_dcg_goal__Vars_567;

                  {
                    parse_tree__parse_dcg_goal__parse_dcg_if_then_12_p_0(parse_tree__parse_dcg_goal__CondGoalTerm_579, parse_tree__parse_dcg_goal__ThenGoalTerm_580, parse_tree__parse_dcg_goal__Context_14, parse_tree__parse_dcg_goal__ContextPieces_15, &parse_tree__parse_dcg_goal__MaybeVarsCondGoal_72, &parse_tree__parse_dcg_goal__MaybeThenGoal_73, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98);
                  }
                  parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeVarsCondGoal_72)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      parse_tree__parse_dcg_goal__Vars_567 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeVarsCondGoal_72, (MR_Integer) 0)));
                      parse_tree__parse_dcg_goal__StateVars_566 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeVarsCondGoal_72, (MR_Integer) 1)));
                      parse_tree__parse_dcg_goal__CondGoal_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeVarsCondGoal_72, (MR_Integer) 2)));
                      parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeThenGoal_73)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__parse_dcg_goal__succeeded)
                        parse_tree__parse_dcg_goal__ThenGoal_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeThenGoal_73, (MR_Integer) 0)));
                    }
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      MR_Word parse_tree__parse_dcg_goal__ElseGoal_77;
                      MR_Word parse_tree__parse_dcg_goal__Goal_562;

                      {
                        parse_tree__parse_dcg_goal__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[3], ((MR_Box) (*parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98)), ((MR_Box) (parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97)));
                      }
                      if (parse_tree__parse_dcg_goal__succeeded)
                        {
                          parse_tree__parse_dcg_goal__ElseGoal_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__ElseGoal_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__ElseGoal_77, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                        }
                      else
                        {
                          MR_Word parse_tree__parse_dcg_goal__V_248_248;
                          MR_Word parse_tree__parse_dcg_goal__V_249_249;

                          {
                            parse_tree__parse_dcg_goal__V_248_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_248_248, 0) = ((MR_Box) (*parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_248_248, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                          }
                          {
                            parse_tree__parse_dcg_goal__V_249_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_249_249, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_249_249, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                          }
                          {
                            parse_tree__parse_dcg_goal__ElseGoal_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__ElseGoal_77, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                            MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__ElseGoal_77, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__V_248_248));
                            MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__ElseGoal_77, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__V_249_249));
                            MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__ElseGoal_77, 3) = ((MR_Box) ((MR_Integer) 0));
                          }
                        }
                      {
                        parse_tree__parse_dcg_goal__Goal_562 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_562, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_562, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_562, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__Vars_567));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_562, 3) = ((MR_Box) (parse_tree__parse_dcg_goal__StateVars_566));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_562, 4) = ((MR_Box) (parse_tree__parse_dcg_goal__CondGoal_75));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_562, 5) = ((MR_Box) (parse_tree__parse_dcg_goal__ThenGoal_76));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_562, 6) = ((MR_Box) (parse_tree__parse_dcg_goal__ElseGoal_77));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal_562));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__parse_dcg_goal__TypeInfo_681_681 = (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[5];
                      MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_682_682 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
                      MR_Word parse_tree__parse_dcg_goal__V_251_251;
                      MR_Word parse_tree__parse_dcg_goal__V_252_252;
                      MR_Word parse_tree__parse_dcg_goal__Specs_563;

                      {
                        parse_tree__parse_dcg_goal__V_251_251 = parse_tree__maybe_error__get_any_errors3_1_f_0(parse_tree__parse_dcg_goal__TypeInfo_681_681, parse_tree__parse_dcg_goal__TypeInfo_681_681, parse_tree__parse_dcg_goal__TypeCtorInfo_682_682, parse_tree__parse_dcg_goal__MaybeVarsCondGoal_72);
                      }
                      {
                        parse_tree__parse_dcg_goal__V_252_252 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_dcg_goal__TypeCtorInfo_682_682, parse_tree__parse_dcg_goal__MaybeThenGoal_73);
                      }
                      {
                        parse_tree__parse_dcg_goal__Specs_563 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_dcg_goal__V_251_251, parse_tree__parse_dcg_goal__V_252_252);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Specs_563));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__parse_dcg_goal__V_275_275;
                  MR_Word parse_tree__parse_dcg_goal__V_276_276;
                  MR_Word parse_tree__parse_dcg_goal__V_281_281;
                  MR_Word parse_tree__parse_dcg_goal__Spec_572;

                  {
                    parse_tree__parse_dcg_goal__V_276_276 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_276_276, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_276_276, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[66])));
                  }
                  {
                    parse_tree__parse_dcg_goal__V_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_275_275, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_276_276));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_275_275, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_dcg_goal__Spec_572 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Spec_572, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Spec_572, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Spec_572, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__V_275_275));
                  }
                  {
                    parse_tree__parse_dcg_goal__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_281_281, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Spec_572));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_281_281, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_281_281));
                  }
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96 = parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94 = parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__parse_dcg_goal__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 11:
          {
            /* case "impure" */
            {
              MR_Word parse_tree__parse_dcg_goal__SubGoalTerm_21;
              MR_Word parse_tree__parse_dcg_goal__V_428_428;

              parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  parse_tree__parse_dcg_goal__SubGoalTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 0)));
                  parse_tree__parse_dcg_goal__V_428_428 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 1)));
                  parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_428_428 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  MR_Word parse_tree__parse_dcg_goal__MaybeGoal0_22;

                  {
                    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(parse_tree__parse_dcg_goal__SubGoalTerm_21, parse_tree__parse_dcg_goal__ContextPieces_15, &parse_tree__parse_dcg_goal__MaybeGoal0_22, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98);
                  }
                  {
                    parse_tree__parse_goal__apply_purity_marker_to_maybe_goal_4_p_0(parse_tree__parse_dcg_goal__SubGoalTerm_21, (MR_Integer) 2, parse_tree__parse_dcg_goal__MaybeGoal0_22, parse_tree__parse_dcg_goal__MaybeGoal_16);
                  }
                }
              else
                {
                  MR_Word parse_tree__parse_dcg_goal__Spec_23;
                  MR_Word parse_tree__parse_dcg_goal__V_432_432;

                  {
                    parse_tree__parse_dcg_goal__Spec_23 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(parse_tree__parse_dcg_goal__ContextPieces_15, parse_tree__parse_dcg_goal__Context_14, parse_tree__parse_dcg_goal__Functor_12);
                  }
                  {
                    parse_tree__parse_dcg_goal__V_432_432 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_432_432, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Spec_23));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_432_432, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_432_432));
                  }
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96 = parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94 = parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__parse_dcg_goal__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            /* case "promise_impure" */
            {
              MR_Word parse_tree__parse_dcg_goal__SubGoalTerm_436;
              MR_Word parse_tree__parse_dcg_goal__V_422_422;

              parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  parse_tree__parse_dcg_goal__SubGoalTerm_436 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 0)));
                  parse_tree__parse_dcg_goal__V_422_422 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 1)));
                  parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_422_422 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  MR_Word parse_tree__parse_dcg_goal__MaybeGoal0_434;

                  {
                    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(parse_tree__parse_dcg_goal__SubGoalTerm_436, parse_tree__parse_dcg_goal__ContextPieces_15, &parse_tree__parse_dcg_goal__MaybeGoal0_434, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98);
                  }
                  if (((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeGoal0_434)) == (MR_mktag((MR_Integer) 0))))
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = parse_tree__parse_dcg_goal__MaybeGoal0_434;
                  else
                    {
                      MR_Word parse_tree__parse_dcg_goal__Goal0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeGoal0_434, (MR_Integer) 0)));
                      MR_Word parse_tree__parse_dcg_goal__Goal_26;

                      {
                        parse_tree__parse_dcg_goal__Goal_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_26, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_26, 2) = ((MR_Box) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_26, 3) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal0_25));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal_26));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__parse_dcg_goal__V_426_426;
                  MR_Word parse_tree__parse_dcg_goal__Spec_435;

                  {
                    parse_tree__parse_dcg_goal__Spec_435 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(parse_tree__parse_dcg_goal__ContextPieces_15, parse_tree__parse_dcg_goal__Context_14, parse_tree__parse_dcg_goal__Functor_12);
                  }
                  {
                    parse_tree__parse_dcg_goal__V_426_426 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_426_426, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Spec_435));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_426_426, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_426_426));
                  }
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96 = parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94 = parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__parse_dcg_goal__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 13:
          {
            /* case "promise_pure" */
            {
              MR_Word parse_tree__parse_dcg_goal__SubGoalTerm_718;
              MR_Word parse_tree__parse_dcg_goal__V_696_696;

              parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  parse_tree__parse_dcg_goal__SubGoalTerm_718 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 0)));
                  parse_tree__parse_dcg_goal__V_696_696 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 1)));
                  parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_696_696 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  MR_Word parse_tree__parse_dcg_goal__MaybeGoal0_706;

                  {
                    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(parse_tree__parse_dcg_goal__SubGoalTerm_718, parse_tree__parse_dcg_goal__ContextPieces_15, &parse_tree__parse_dcg_goal__MaybeGoal0_706, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98);
                  }
                  if (((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeGoal0_706)) == (MR_mktag((MR_Integer) 0))))
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = parse_tree__parse_dcg_goal__MaybeGoal0_706;
                  else
                    {
                      MR_Word parse_tree__parse_dcg_goal__Goal0_698 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeGoal0_706, (MR_Integer) 0)));
                      MR_Word parse_tree__parse_dcg_goal__Goal_699;

                      {
                        parse_tree__parse_dcg_goal__Goal_699 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_699, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_699, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_699, 2) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_699, 3) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal0_698));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal_699));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__parse_dcg_goal__V_707_707;
                  MR_Word parse_tree__parse_dcg_goal__Spec_709;

                  {
                    parse_tree__parse_dcg_goal__Spec_709 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(parse_tree__parse_dcg_goal__ContextPieces_15, parse_tree__parse_dcg_goal__Context_14, parse_tree__parse_dcg_goal__Functor_12);
                  }
                  {
                    parse_tree__parse_dcg_goal__V_707_707 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_707_707, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Spec_709));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_707_707, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_707_707));
                  }
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96 = parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94 = parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__parse_dcg_goal__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 14:
          {
            /* case "promise_semipure" */
            {
              MR_Word parse_tree__parse_dcg_goal__SubGoalTerm_751;
              MR_Word parse_tree__parse_dcg_goal__V_729_729;

              parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  parse_tree__parse_dcg_goal__SubGoalTerm_751 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 0)));
                  parse_tree__parse_dcg_goal__V_729_729 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 1)));
                  parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_729_729 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  MR_Word parse_tree__parse_dcg_goal__MaybeGoal0_739;

                  {
                    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(parse_tree__parse_dcg_goal__SubGoalTerm_751, parse_tree__parse_dcg_goal__ContextPieces_15, &parse_tree__parse_dcg_goal__MaybeGoal0_739, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98);
                  }
                  if (((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeGoal0_739)) == (MR_mktag((MR_Integer) 0))))
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = parse_tree__parse_dcg_goal__MaybeGoal0_739;
                  else
                    {
                      MR_Word parse_tree__parse_dcg_goal__Goal0_731 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeGoal0_739, (MR_Integer) 0)));
                      MR_Word parse_tree__parse_dcg_goal__Goal_732;

                      {
                        parse_tree__parse_dcg_goal__Goal_732 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_732, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_732, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_732, 2) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_732, 3) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal0_731));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal_732));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__parse_dcg_goal__V_740_740;
                  MR_Word parse_tree__parse_dcg_goal__Spec_742;

                  {
                    parse_tree__parse_dcg_goal__Spec_742 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(parse_tree__parse_dcg_goal__ContextPieces_15, parse_tree__parse_dcg_goal__Context_14, parse_tree__parse_dcg_goal__Functor_12);
                  }
                  {
                    parse_tree__parse_dcg_goal__V_740_740 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_740_740, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Spec_742));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_740_740, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_740_740));
                  }
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96 = parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94 = parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__parse_dcg_goal__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 15:
          {
            /* case "semipure" */
            {
              MR_Word parse_tree__parse_dcg_goal__SubGoalTerm_767;
              MR_Word parse_tree__parse_dcg_goal__V_762_762;

              parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  parse_tree__parse_dcg_goal__SubGoalTerm_767 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 0)));
                  parse_tree__parse_dcg_goal__V_762_762 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 1)));
                  parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_762_762 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  MR_Word parse_tree__parse_dcg_goal__MaybeGoal0_763;

                  {
                    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(parse_tree__parse_dcg_goal__SubGoalTerm_767, parse_tree__parse_dcg_goal__ContextPieces_15, &parse_tree__parse_dcg_goal__MaybeGoal0_763, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98);
                  }
                  {
                    parse_tree__parse_goal__apply_purity_marker_to_maybe_goal_4_p_0(parse_tree__parse_dcg_goal__SubGoalTerm_767, (MR_Integer) 1, parse_tree__parse_dcg_goal__MaybeGoal0_763, parse_tree__parse_dcg_goal__MaybeGoal_16);
                  }
                }
              else
                {
                  MR_Word parse_tree__parse_dcg_goal__Spec_764;
                  MR_Word parse_tree__parse_dcg_goal__V_765_765;

                  {
                    parse_tree__parse_dcg_goal__Spec_764 = parse_tree__parse_goal__should_have_one_goal_prefix_3_f_0(parse_tree__parse_dcg_goal__ContextPieces_15, parse_tree__parse_dcg_goal__Context_14, parse_tree__parse_dcg_goal__Functor_12);
                  }
                  {
                    parse_tree__parse_dcg_goal__V_765_765 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_765_765, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Spec_764));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_765_765, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_765_765));
                  }
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96 = parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94 = parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__parse_dcg_goal__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 16:
          {
            /* case "some" */
            {
              MR_Word parse_tree__parse_dcg_goal__QVarsTerm_903;
              MR_Word parse_tree__parse_dcg_goal__SubGoalTerm_934;
              MR_Word parse_tree__parse_dcg_goal__V_780_780;
              MR_Word parse_tree__parse_dcg_goal__V_781_781;

              parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  parse_tree__parse_dcg_goal__QVarsTerm_903 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 0)));
                  parse_tree__parse_dcg_goal__V_780_780 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 1)));
                  parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__V_780_780)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      parse_tree__parse_dcg_goal__SubGoalTerm_934 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_780_780, (MR_Integer) 0)));
                      parse_tree__parse_dcg_goal__V_781_781 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_780_780, (MR_Integer) 1)));
                      parse_tree__parse_dcg_goal__succeeded = (parse_tree__parse_dcg_goal__V_781_781 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                }
              if (parse_tree__parse_dcg_goal__succeeded)
                {
                  MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_659_888 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                  MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_660_889;
                  MR_Word parse_tree__parse_dcg_goal__GenericVarSet_863;
                  MR_Word parse_tree__parse_dcg_goal__VarsContextPieces_864;
                  MR_Word parse_tree__parse_dcg_goal__MaybeVars_865;
                  MR_Word parse_tree__parse_dcg_goal__V_875_875;
                  MR_Word parse_tree__parse_dcg_goal__MaybeSubGoal_886;
                  MR_Word parse_tree__parse_dcg_goal__Vars0_835;
                  MR_Word parse_tree__parse_dcg_goal__StateVars0_836;
                  MR_Word parse_tree__parse_dcg_goal__SubGoal_853;
                  MR_Word parse_tree__parse_dcg_goal__V_782_782;

                  {
                    mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_dcg_goal__TypeCtorInfo_659_888, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, &parse_tree__parse_dcg_goal__GenericVarSet_863);
                  }
                  parse_tree__parse_dcg_goal__TypeCtorInfo_660_889 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                  {
                    parse_tree__parse_dcg_goal__V_875_875 = mercury__cord__from_list_1_f_0(parse_tree__parse_dcg_goal__TypeCtorInfo_660_889, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[57]));
                  }
                  {
                    parse_tree__parse_dcg_goal__VarsContextPieces_864 = mercury__cord__f_43_43_2_f_0(parse_tree__parse_dcg_goal__TypeCtorInfo_660_889, parse_tree__parse_dcg_goal__ContextPieces_15, parse_tree__parse_dcg_goal__V_875_875);
                  }
                  {
                    parse_tree__parse_vars__parse_vars_state_vars_4_p_0(parse_tree__parse_dcg_goal__TypeCtorInfo_659_888, parse_tree__parse_dcg_goal__QVarsTerm_903, parse_tree__parse_dcg_goal__GenericVarSet_863, parse_tree__parse_dcg_goal__VarsContextPieces_864, &parse_tree__parse_dcg_goal__MaybeVars_865);
                  }
                  {
                    parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(parse_tree__parse_dcg_goal__SubGoalTerm_934, parse_tree__parse_dcg_goal__ContextPieces_15, &parse_tree__parse_dcg_goal__MaybeSubGoal_886, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98);
                  }
                  parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeVars_865)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      parse_tree__parse_dcg_goal__V_782_782 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeVars_865, (MR_Integer) 0)));
                      parse_tree__parse_dcg_goal__Vars0_835 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_782_782, (MR_Integer) 0)));
                      parse_tree__parse_dcg_goal__StateVars0_836 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_782_782, (MR_Integer) 1)));
                      parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeSubGoal_886)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__parse_dcg_goal__succeeded)
                        parse_tree__parse_dcg_goal__SubGoal_853 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeSubGoal_886, (MR_Integer) 0)));
                    }
                  if (parse_tree__parse_dcg_goal__succeeded)
                    {
                      MR_Word parse_tree__parse_dcg_goal__TypeInfo_665_825 = (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[2];
                      MR_Word parse_tree__parse_dcg_goal__TypeInfo_666_826 = (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[3];
                      MR_Word parse_tree__parse_dcg_goal__StateVars_811;
                      MR_Word parse_tree__parse_dcg_goal__Vars_812;
                      MR_Word parse_tree__parse_dcg_goal__Goal1_813;
                      MR_Word parse_tree__parse_dcg_goal__Goal_822;

                      {
                        mercury__list__map_3_p_0(parse_tree__parse_dcg_goal__TypeInfo_665_825, parse_tree__parse_dcg_goal__TypeInfo_666_826, (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_3[5], parse_tree__parse_dcg_goal__StateVars0_836, &parse_tree__parse_dcg_goal__StateVars_811);
                      }
                      {
                        mercury__list__map_3_p_0(parse_tree__parse_dcg_goal__TypeInfo_665_825, parse_tree__parse_dcg_goal__TypeInfo_666_826, (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_3[6], parse_tree__parse_dcg_goal__Vars0_835, &parse_tree__parse_dcg_goal__Vars_812);
                      }
                      if ((parse_tree__parse_dcg_goal__StateVars_811 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        parse_tree__parse_dcg_goal__Goal1_813 = parse_tree__parse_dcg_goal__SubGoal_853;
                      else
                        {
                          {
                            parse_tree__parse_dcg_goal__Goal1_813 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal1_813, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal1_813, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 1 << (MR_Integer) 1)))));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal1_813, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal1_813, 3) = ((MR_Box) (parse_tree__parse_dcg_goal__StateVars_811));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal1_813, 4) = ((MR_Box) (parse_tree__parse_dcg_goal__SubGoal_853));
                          }
                        }
                      if ((parse_tree__parse_dcg_goal__Vars_812 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        parse_tree__parse_dcg_goal__Goal_822 = parse_tree__parse_dcg_goal__Goal1_813;
                      else
                        {
                          {
                            parse_tree__parse_dcg_goal__Goal_822 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_822, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_822, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_822, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_822, 3) = ((MR_Box) (parse_tree__parse_dcg_goal__Vars_812));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_dcg_goal__Goal_822, 4) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal1_813));
                          }
                        }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal_822));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__parse_dcg_goal__V_829_829;
                      MR_Word parse_tree__parse_dcg_goal__V_830_830;
                      MR_Word parse_tree__parse_dcg_goal__Specs_831;

                      {
                        parse_tree__parse_dcg_goal__V_829_829 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[4], parse_tree__parse_dcg_goal__MaybeVars_865);
                      }
                      {
                        parse_tree__parse_dcg_goal__V_830_830 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, parse_tree__parse_dcg_goal__MaybeSubGoal_886);
                      }
                      {
                        parse_tree__parse_dcg_goal__Specs_831 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_dcg_goal__V_829_829, parse_tree__parse_dcg_goal__V_830_830);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Specs_831));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__parse_dcg_goal__V_900_900;
                  MR_Word parse_tree__parse_dcg_goal__Spec_902;

                  {
                    parse_tree__parse_dcg_goal__Spec_902 = parse_tree__parse_goal__should_have_one_x_one_goal_prefix_4_f_0(parse_tree__parse_dcg_goal__ContextPieces_15, parse_tree__parse_dcg_goal__Context_14, (MR_String) "a list of variables", parse_tree__parse_dcg_goal__Functor_12);
                  }
                  {
                    parse_tree__parse_dcg_goal__V_900_900 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_900_900, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Spec_902));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_900_900, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_900_900));
                  }
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96 = parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94 = parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__parse_dcg_goal__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 17:
          {
            /* case "{}" */
            if ((parse_tree__parse_dcg_goal__Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word parse_tree__parse_dcg_goal__V_230_230;
                MR_Word parse_tree__parse_dcg_goal__V_231_231;
                MR_Word parse_tree__parse_dcg_goal__V_236_236;
                MR_Word parse_tree__parse_dcg_goal__Spec_590;

                {
                  parse_tree__parse_dcg_goal__V_231_231 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_231_231, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_14));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_231_231, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_dcg_goal_scalar_common_1[67])));
                }
                {
                  parse_tree__parse_dcg_goal__V_230_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_230_230, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_231_231));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_230_230, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_dcg_goal__Spec_590 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Spec_590, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Spec_590, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__Spec_590, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__V_230_230));
                }
                {
                  parse_tree__parse_dcg_goal__V_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_236_236, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Spec_590));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_236_236, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_dcg_goal__MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_236_236));
                }
                *parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94 = parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93;
              }
            else
              {
                MR_Word parse_tree__parse_dcg_goal__HeadGoal_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 0)));
                MR_Word parse_tree__parse_dcg_goal__TailGoals_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_13, (MR_Integer) 1)));
                MR_Word parse_tree__parse_dcg_goal__V_218_218;
                MR_Word parse_tree__parse_dcg_goal__SubGoal_592;

                {
                  parse_tree__parse_dcg_goal__V_218_218 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_218_218, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__HeadGoal_78));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_218_218, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__TailGoals_79));
                }
                {
                  parse_tree__parse_util__one_or_more_to_conjunction_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_dcg_goal__Context_14, parse_tree__parse_dcg_goal__V_218_218, &parse_tree__parse_dcg_goal__SubGoal_592);
                }
                {
                  parse_tree__parse_goal__parse_goal_5_p_0(parse_tree__parse_dcg_goal__SubGoal_592, parse_tree__parse_dcg_goal__ContextPieces_15, parse_tree__parse_dcg_goal__MaybeGoal_16, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_93, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_94);
                }
              }
            *parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_96 = parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_95;
            *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_98 = parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_97;
            parse_tree__parse_dcg_goal__succeeded = MR_TRUE;
          }
          break;
      }
    }
    return parse_tree__parse_dcg_goal__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__make_dcg_call_10_p_0(
  MR_Word parse_tree__parse_dcg_goal__SymName_11,
  MR_Word parse_tree__parse_dcg_goal__Args0_12,
  MR_Word parse_tree__parse_dcg_goal__Context_13,
  MR_Word * parse_tree__parse_dcg_goal__Goal_14,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_21,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_22,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_23,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_24,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_25,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_26)
{
  {
    MR_bool parse_tree__parse_dcg_goal__succeeded;
    MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_20_51;
    MR_Word parse_tree__parse_dcg_goal__Args_20;
    MR_Word parse_tree__parse_dcg_goal__V_30_30;
    MR_Word parse_tree__parse_dcg_goal__V_31_31;
    MR_Word parse_tree__parse_dcg_goal__V_32_32;
    MR_Word parse_tree__parse_dcg_goal__V_33_33;
    MR_Integer parse_tree__parse_dcg_goal__N_44;
    MR_String parse_tree__parse_dcg_goal__StringN_45;
    MR_String parse_tree__parse_dcg_goal__VarName_46;
    MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_18_49;

    {
      mercury__counter__allocate_3_p_0(&parse_tree__parse_dcg_goal__N_44, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_23, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_24);
    }
    {
      mercury__string__int_to_string_2_p_0(parse_tree__parse_dcg_goal__N_44, &parse_tree__parse_dcg_goal__StringN_45);
    }
    {
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__parse_dcg_goal__StringN_45, &parse_tree__parse_dcg_goal__VarName_46);
    }
    parse_tree__parse_dcg_goal__TypeCtorInfo_20_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__new_var_3_p_0(parse_tree__parse_dcg_goal__TypeCtorInfo_20_51, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_26, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_21, &parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_18_49);
    }
    {
      mercury__varset__name_var_4_p_0(parse_tree__parse_dcg_goal__TypeCtorInfo_20_51, *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_26, parse_tree__parse_dcg_goal__VarName_46, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_18_49, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_22);
    }
    {
      parse_tree__parse_dcg_goal__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_31_31, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_25));
      MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_31_31, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_13));
    }
    {
      parse_tree__parse_dcg_goal__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_33_33, 0) = ((MR_Box) (*parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_26));
      MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_33_33, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_13));
    }
    {
      parse_tree__parse_dcg_goal__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_32_32, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_33_33));
      MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_dcg_goal__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_30_30, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_31_31));
      MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_30_30, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__V_32_32));
    }
    {
      parse_tree__parse_dcg_goal__Args_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[1], parse_tree__parse_dcg_goal__Args0_12, parse_tree__parse_dcg_goal__V_30_30);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__parse_dcg_goal__Goal_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__SymName_11));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__Args_20));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 0));
    }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0_1(
  MR_Box parse_tree__parse_dcg_goal__closure_arg,
  MR_Box parse_tree__parse_dcg_goal__wrapper_arg_1,
  MR_Box * parse_tree__parse_dcg_goal__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_dcg_goal__closure = parse_tree__parse_dcg_goal__closure_arg;
    MR_Word parse_tree__parse_dcg_goal__conv0_HeadVar__2_48;

    {
      parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_goal__119__1_2_p_0(((MR_Word) parse_tree__parse_dcg_goal__wrapper_arg_1), &parse_tree__parse_dcg_goal__conv0_HeadVar__2_48);
    }
    *parse_tree__parse_dcg_goal__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_dcg_goal__conv0_HeadVar__2_48));
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(
  MR_Word parse_tree__parse_dcg_goal__Term_10,
  MR_Word parse_tree__parse_dcg_goal__ContextPieces_11,
  MR_Word * parse_tree__parse_dcg_goal__MaybeGoal_12,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_25,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_26,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_27,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_28,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_29,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_30)
{
  {
    MR_bool parse_tree__parse_dcg_goal__succeeded;
    MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_45_45 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_46_46;
    MR_Word parse_tree__parse_dcg_goal__Context_16;
    MR_Word parse_tree__parse_dcg_goal__ProgTerm_17;
    MR_Word parse_tree__parse_dcg_goal__SymName_18;
    MR_Word parse_tree__parse_dcg_goal__Args0_19;

    {
      parse_tree__parse_dcg_goal__Context_16 = mercury__term__get_term_context_1_f_0(parse_tree__parse_dcg_goal__TypeCtorInfo_45_45, parse_tree__parse_dcg_goal__Term_10);
    }
    parse_tree__parse_dcg_goal__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__term__coerce_2_p_0(parse_tree__parse_dcg_goal__TypeCtorInfo_45_45, parse_tree__parse_dcg_goal__TypeCtorInfo_46_46, parse_tree__parse_dcg_goal__Term_10, &parse_tree__parse_dcg_goal__ProgTerm_17);
    }
    {
      parse_tree__parse_dcg_goal__succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__parse_dcg_goal__TypeCtorInfo_46_46, parse_tree__parse_dcg_goal__ProgTerm_17, &parse_tree__parse_dcg_goal__SymName_18, &parse_tree__parse_dcg_goal__Args0_19);
    }
    if (parse_tree__parse_dcg_goal__succeeded)
      {
        MR_Word parse_tree__parse_dcg_goal__MaybeGoalPrime_22;
        MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_32_32;
        MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_33_33;
        MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_34_34;
        MR_Word parse_tree__parse_dcg_goal__TypeInfo_51_51;
        MR_Word parse_tree__parse_dcg_goal__TypeInfo_52_52;
        MR_String parse_tree__parse_dcg_goal__Functor_20;
        MR_Word parse_tree__parse_dcg_goal__Args1_21;
        MR_Word parse_tree__parse_dcg_goal__V_31_31;

        parse_tree__parse_dcg_goal__succeeded = ((MR_tag((MR_Word) parse_tree__parse_dcg_goal__SymName_18)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_dcg_goal__succeeded)
          {
            parse_tree__parse_dcg_goal__Functor_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__SymName_18, (MR_Integer) 0)));
            parse_tree__parse_dcg_goal__V_31_31 = (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_3[1];
            parse_tree__parse_dcg_goal__TypeInfo_51_51 = (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[1];
            parse_tree__parse_dcg_goal__TypeInfo_52_52 = (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[0];
            {
              mercury__list__map_3_p_0(parse_tree__parse_dcg_goal__TypeInfo_51_51, parse_tree__parse_dcg_goal__TypeInfo_52_52, parse_tree__parse_dcg_goal__V_31_31, parse_tree__parse_dcg_goal__Args0_19, &parse_tree__parse_dcg_goal__Args1_21);
            }
            {
              parse_tree__parse_dcg_goal__succeeded = parse_tree__parse_dcg_goal__parse_non_call_dcg_goal_11_p_0(parse_tree__parse_dcg_goal__Functor_20, parse_tree__parse_dcg_goal__Args1_21, parse_tree__parse_dcg_goal__Context_16, parse_tree__parse_dcg_goal__ContextPieces_11, &parse_tree__parse_dcg_goal__MaybeGoalPrime_22, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_25, &parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_32_32, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_27, &parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_33_33, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_29, &parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_34_34);
            }
          }
        if (parse_tree__parse_dcg_goal__succeeded)
          {
            *parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_30 = parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_34_34;
            *parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_28 = parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_33_33;
            *parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_26 = parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_32_32;
            *parse_tree__parse_dcg_goal__MaybeGoal_12 = parse_tree__parse_dcg_goal__MaybeGoalPrime_22;
          }
        else
          {
            MR_Word parse_tree__parse_dcg_goal__Goal_23;

            {
              parse_tree__parse_dcg_goal__make_dcg_call_10_p_0(parse_tree__parse_dcg_goal__SymName_18, parse_tree__parse_dcg_goal__Args0_19, parse_tree__parse_dcg_goal__Context_16, &parse_tree__parse_dcg_goal__Goal_23, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_25, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_26, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_27, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_28, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_29, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_30);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_dcg_goal__MaybeGoal_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal_23));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_dcg_goal__Args_24;
        MR_Word parse_tree__parse_dcg_goal__Goal_44;

        {
          parse_tree__parse_dcg_goal__Args_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_24, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__ProgTerm_17));
          MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__Args_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_dcg_goal__make_dcg_call_10_p_0((MR_Word) &parse_tree__parse_dcg_goal_scalar_common_4[0], parse_tree__parse_dcg_goal__Args_24, parse_tree__parse_dcg_goal__Context_16, &parse_tree__parse_dcg_goal__Goal_44, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_25, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_26, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_0_27, parse_tree__parse_dcg_goal__STATE_VARIABLE_Counter_28, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_0_29, parse_tree__parse_dcg_goal__STATE_VARIABLE_DCGVar_30);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_dcg_goal__MaybeGoal_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Goal_44));
        }
      }
  }
}

void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_pred_goal_7_p_0(
  MR_Word parse_tree__parse_dcg_goal__GoalTerm_8,
  MR_Word parse_tree__parse_dcg_goal__ContextPieces_9,
  MR_Word * parse_tree__parse_dcg_goal__MaybeGoal_10,
  MR_Word * parse_tree__parse_dcg_goal__DCGVar0_11,
  MR_Word * parse_tree__parse_dcg_goal__DCGVar_12,
  MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_16,
  MR_Word * parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_17)
{
  {
    MR_bool parse_tree__parse_dcg_goal__succeeded;
    MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_20_36;
    MR_Word parse_tree__parse_dcg_goal__Counter0_14;
    MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_18_18;
    MR_Word parse_tree__parse_dcg_goal__V_19_19;
    MR_Integer parse_tree__parse_dcg_goal__N_29;
    MR_String parse_tree__parse_dcg_goal__StringN_30;
    MR_String parse_tree__parse_dcg_goal__VarName_31;
    MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_18_34;
    MR_Word parse_tree__parse_dcg_goal___Counter_15;

    {
      parse_tree__parse_dcg_goal__V_19_19 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
    {
      mercury__counter__allocate_3_p_0(&parse_tree__parse_dcg_goal__N_29, parse_tree__parse_dcg_goal__V_19_19, &parse_tree__parse_dcg_goal__Counter0_14);
    }
    {
      mercury__string__int_to_string_2_p_0(parse_tree__parse_dcg_goal__N_29, &parse_tree__parse_dcg_goal__StringN_30);
    }
    {
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__parse_dcg_goal__StringN_30, &parse_tree__parse_dcg_goal__VarName_31);
    }
    parse_tree__parse_dcg_goal__TypeCtorInfo_20_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__new_var_3_p_0(parse_tree__parse_dcg_goal__TypeCtorInfo_20_36, parse_tree__parse_dcg_goal__DCGVar0_11, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_0_16, &parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_18_34);
    }
    {
      mercury__varset__name_var_4_p_0(parse_tree__parse_dcg_goal__TypeCtorInfo_20_36, *parse_tree__parse_dcg_goal__DCGVar0_11, parse_tree__parse_dcg_goal__VarName_31, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_18_34, &parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_18_18);
    }
    {
      parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(parse_tree__parse_dcg_goal__GoalTerm_8, parse_tree__parse_dcg_goal__ContextPieces_9, parse_tree__parse_dcg_goal__MaybeGoal_10, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_18_18, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_17, parse_tree__parse_dcg_goal__Counter0_14, &parse_tree__parse_dcg_goal___Counter_15, *parse_tree__parse_dcg_goal__DCGVar0_11, parse_tree__parse_dcg_goal__DCGVar_12);
    }
  }
}

static void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_clause_7_p_0_1(
  MR_Box parse_tree__parse_dcg_goal__closure_arg,
  MR_Box parse_tree__parse_dcg_goal__wrapper_arg_1,
  MR_Box * parse_tree__parse_dcg_goal__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_dcg_goal__closure = parse_tree__parse_dcg_goal__closure_arg;
    MR_Word parse_tree__parse_dcg_goal__conv0_HeadVar__2_52;

    {
      parse_tree__parse_dcg_goal__IntroducedFrom__pred__parse_dcg_clause__80__1_2_p_0(((MR_Word) parse_tree__parse_dcg_goal__wrapper_arg_1), &parse_tree__parse_dcg_goal__conv0_HeadVar__2_52);
    }
    *parse_tree__parse_dcg_goal__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_dcg_goal__conv0_HeadVar__2_52));
  }
}

void MR_CALL 
parse_tree__parse_dcg_goal__parse_dcg_clause_7_p_0(
  MR_Word parse_tree__parse_dcg_goal__ModuleName_8,
  MR_Word parse_tree__parse_dcg_goal__VarSet0_9,
  MR_Word parse_tree__parse_dcg_goal__DCG_Head_10,
  MR_Word parse_tree__parse_dcg_goal__DCG_Body_11,
  MR_Word parse_tree__parse_dcg_goal__Context_12,
  MR_Integer parse_tree__parse_dcg_goal__SeqNum_13,
  MR_Word * parse_tree__parse_dcg_goal__MaybeIOM_14)
{
  {
    MR_bool parse_tree__parse_dcg_goal__succeeded;
    MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_48_48 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_50_50;
    MR_Word parse_tree__parse_dcg_goal__TypeCtorInfo_20_73;
    MR_Word parse_tree__parse_dcg_goal__ProgVarSet0_15;
    MR_Word parse_tree__parse_dcg_goal__ProgVarSet1_16;
    MR_Word parse_tree__parse_dcg_goal__Counter0_17;
    MR_Word parse_tree__parse_dcg_goal__DCGVar0_18;
    MR_Word parse_tree__parse_dcg_goal__BodyContextPieces_19;
    MR_Word parse_tree__parse_dcg_goal__MaybeBodyGoal_20;
    MR_Word parse_tree__parse_dcg_goal__ProgVarSet_21;
    MR_Word parse_tree__parse_dcg_goal__DCGVar_23;
    MR_Word parse_tree__parse_dcg_goal__HeadContextPieces_24;
    MR_Word parse_tree__parse_dcg_goal__MaybeFunctor_25;
    MR_Word parse_tree__parse_dcg_goal__V_34_34;
    MR_Integer parse_tree__parse_dcg_goal__N_66;
    MR_String parse_tree__parse_dcg_goal__StringN_67;
    MR_String parse_tree__parse_dcg_goal__VarName_68;
    MR_Word parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_18_71;
    MR_Word parse_tree__parse_dcg_goal___Counter_22;

    {
      mercury__varset__coerce_2_p_0(parse_tree__parse_dcg_goal__TypeCtorInfo_48_48, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_dcg_goal__VarSet0_9, &parse_tree__parse_dcg_goal__ProgVarSet0_15);
    }
    {
      parse_tree__parse_dcg_goal__V_34_34 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
    {
      mercury__counter__allocate_3_p_0(&parse_tree__parse_dcg_goal__N_66, parse_tree__parse_dcg_goal__V_34_34, &parse_tree__parse_dcg_goal__Counter0_17);
    }
    {
      mercury__string__int_to_string_2_p_0(parse_tree__parse_dcg_goal__N_66, &parse_tree__parse_dcg_goal__StringN_67);
    }
    {
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__parse_dcg_goal__StringN_67, &parse_tree__parse_dcg_goal__VarName_68);
    }
    parse_tree__parse_dcg_goal__TypeCtorInfo_20_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__new_var_3_p_0(parse_tree__parse_dcg_goal__TypeCtorInfo_20_73, &parse_tree__parse_dcg_goal__DCGVar0_18, parse_tree__parse_dcg_goal__ProgVarSet0_15, &parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_18_71);
    }
    {
      mercury__varset__name_var_4_p_0(parse_tree__parse_dcg_goal__TypeCtorInfo_20_73, parse_tree__parse_dcg_goal__DCGVar0_18, parse_tree__parse_dcg_goal__VarName_68, parse_tree__parse_dcg_goal__STATE_VARIABLE_VarSet_18_71, &parse_tree__parse_dcg_goal__ProgVarSet1_16);
    }
    parse_tree__parse_dcg_goal__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      parse_tree__parse_dcg_goal__BodyContextPieces_19 = mercury__cord__init_0_f_0(parse_tree__parse_dcg_goal__TypeCtorInfo_50_50);
    }
    {
      parse_tree__parse_dcg_goal__parse_dcg_goal_9_p_0(parse_tree__parse_dcg_goal__DCG_Body_11, parse_tree__parse_dcg_goal__BodyContextPieces_19, &parse_tree__parse_dcg_goal__MaybeBodyGoal_20, parse_tree__parse_dcg_goal__ProgVarSet1_16, &parse_tree__parse_dcg_goal__ProgVarSet_21, parse_tree__parse_dcg_goal__Counter0_17, &parse_tree__parse_dcg_goal___Counter_22, parse_tree__parse_dcg_goal__DCGVar0_18, &parse_tree__parse_dcg_goal__DCGVar_23);
    }
    {
      parse_tree__parse_dcg_goal__HeadContextPieces_24 = mercury__cord__singleton_1_f_0(parse_tree__parse_dcg_goal__TypeCtorInfo_50_50, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_dcg_goal_scalar_common_1[62]))));
    }
    {
      parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__parse_dcg_goal__TypeCtorInfo_48_48, parse_tree__parse_dcg_goal__ModuleName_8, parse_tree__parse_dcg_goal__DCG_Head_10, parse_tree__parse_dcg_goal__VarSet0_9, parse_tree__parse_dcg_goal__HeadContextPieces_24, &parse_tree__parse_dcg_goal__MaybeFunctor_25);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_dcg_goal__MaybeFunctor_25)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_dcg_goal__FunctorSpecs_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__MaybeFunctor_25, (MR_Integer) 0)));
        MR_Word parse_tree__parse_dcg_goal__Specs_33;
        MR_Word parse_tree__parse_dcg_goal__V_38_38;

        {
          parse_tree__parse_dcg_goal__V_38_38 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, parse_tree__parse_dcg_goal__MaybeBodyGoal_20);
        }
        {
          parse_tree__parse_dcg_goal__Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_dcg_goal__FunctorSpecs_32, parse_tree__parse_dcg_goal__V_38_38);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_dcg_goal__MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Specs_33));
        }
      }
    else
      {
        MR_Word parse_tree__parse_dcg_goal__TypeInfo_56_56 = (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[1];
        MR_Word parse_tree__parse_dcg_goal__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeFunctor_25, (MR_Integer) 0)));
        MR_Word parse_tree__parse_dcg_goal__Args0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__MaybeFunctor_25, (MR_Integer) 1)));
        MR_Word parse_tree__parse_dcg_goal__Args1_28;
        MR_Word parse_tree__parse_dcg_goal__Args_29;
        MR_Word parse_tree__parse_dcg_goal__ItemClause_30;
        MR_Word parse_tree__parse_dcg_goal__Item_31;
        MR_Word parse_tree__parse_dcg_goal__V_40_40;
        MR_Word parse_tree__parse_dcg_goal__V_41_41;
        MR_Word parse_tree__parse_dcg_goal__V_42_42;
        MR_Word parse_tree__parse_dcg_goal__V_43_43;
        MR_Word parse_tree__parse_dcg_goal__V_47_47;

        {
          mercury__list__map_3_p_0((MR_Word) &parse_tree__parse_dcg_goal_scalar_common_1[0], parse_tree__parse_dcg_goal__TypeInfo_56_56, (MR_Word) &parse_tree__parse_dcg_goal_scalar_common_3[0], parse_tree__parse_dcg_goal__Args0_27, &parse_tree__parse_dcg_goal__Args1_28);
        }
        {
          parse_tree__parse_dcg_goal__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_41_41, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__DCGVar0_18));
          MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_41_41, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_12));
        }
        {
          parse_tree__parse_dcg_goal__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_43_43, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__DCGVar_23));
          MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_43_43, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_12));
        }
        {
          parse_tree__parse_dcg_goal__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_42_42, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_43_43));
          MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_dcg_goal__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_40_40, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_41_41));
          MR_hl_field(MR_mktag(1), parse_tree__parse_dcg_goal__V_40_40, 1) = ((MR_Box) (parse_tree__parse_dcg_goal__V_42_42));
        }
        {
          parse_tree__parse_dcg_goal__Args_29 = mercury__list__f_43_43_2_f_0(parse_tree__parse_dcg_goal__TypeInfo_56_56, parse_tree__parse_dcg_goal__Args1_28, parse_tree__parse_dcg_goal__V_40_40);
        }
        {
          parse_tree__parse_dcg_goal__ItemClause_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__ItemClause_30, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Name_26));
          MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__ItemClause_30, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__ItemClause_30, 2) = ((MR_Box) (parse_tree__parse_dcg_goal__Args_29));
          MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__ItemClause_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__ItemClause_30, 4) = ((MR_Box) (parse_tree__parse_dcg_goal__ProgVarSet_21));
          MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__ItemClause_30, 5) = ((MR_Box) (parse_tree__parse_dcg_goal__MaybeBodyGoal_20));
          MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__ItemClause_30, 6) = ((MR_Box) (parse_tree__parse_dcg_goal__Context_12));
          MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__ItemClause_30, 7) = ((MR_Box) (parse_tree__parse_dcg_goal__SeqNum_13));
        }
        parse_tree__parse_dcg_goal__Item_31 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__parse_dcg_goal__ItemClause_30);
        {
          parse_tree__parse_dcg_goal__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_dcg_goal__V_47_47, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__Item_31));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_dcg_goal__MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_dcg_goal__V_47_47));
        }
      }
  }
}

void mercury__parse_tree__parse_dcg_goal__init(void)
{
}

void mercury__parse_tree__parse_dcg_goal__init_type_tables(void)
{
}

void mercury__parse_tree__parse_dcg_goal__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.parse_dcg_goal. */
