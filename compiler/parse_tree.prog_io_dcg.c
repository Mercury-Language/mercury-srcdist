/*
** Automatically generated from `prog_io_dcg.m'
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


/* :- module parse_tree.prog_io_dcg. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_dcg__init
ENDINIT
*/

#include "parse_tree.prog_io_dcg.mih"


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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_goal.mih"
#include "parse_tree.prog_io_iom.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_bool MR_CALL 
parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
  MR_Word parse_tree__prog_io_dcg__List0_4,
  MR_Word parse_tree__prog_io_dcg__Term_5,
  MR_Word * parse_tree__prog_io_dcg__List_6);

static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__635__1_2_p_0(
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_72,
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_73);

static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__634__1_2_p_0(
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_66,
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_67);

static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__279__2_2_p_0(
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_787,
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_788);

static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__278__2_2_p_0(
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_781,
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_782);

static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__279__1_2_p_0(
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_666,
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_667);

static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__278__1_2_p_0(
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_660,
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_661);

static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__596__1_2_p_0(
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_689,
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_690);

static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal__118__1_2_p_0(
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_47,
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_48);

static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_clause__79__1_2_p_0(
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_51,
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_52);

static void MR_CALL 
parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(
  MR_Word parse_tree__prog_io_dcg__AddedGoal_5,
  MR_Word parse_tree__prog_io_dcg__Context_6,
  MR_Word parse_tree__prog_io_dcg__Disjunct0_7,
  MR_Word * parse_tree__prog_io_dcg__Disjunct_8);

static void MR_CALL 
parse_tree__prog_io_dcg__new_dcg_var_5_p_0(
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_12,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_13,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_14,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_15,
  MR_Word * parse_tree__prog_io_dcg__DCGVar_8);

static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(
  MR_Word parse_tree__prog_io_dcg__CondGoalTerm_13,
  MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_14,
  MR_Word parse_tree__prog_io_dcg__ElseGoalTerm_15,
  MR_Word parse_tree__prog_io_dcg__Context_16,
  MR_Word parse_tree__prog_io_dcg__ContextPieces_17,
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_18,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_38,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_39,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_40,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_41,
  MR_Word parse_tree__prog_io_dcg__Var0_21,
  MR_Word * parse_tree__prog_io_dcg__Var_22);

static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(
  MR_Word parse_tree__prog_io_dcg__CondGoalTerm_13,
  MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_14,
  MR_Word parse_tree__prog_io_dcg__Context_15,
  MR_Word parse_tree__prog_io_dcg__ContextPieces_16,
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsCond_17,
  MR_Word * parse_tree__prog_io_dcg__MaybeThen_18,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
  MR_Word parse_tree__prog_io_dcg__Var0_21,
  MR_Word * parse_tree__prog_io_dcg__Var_22);

static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_2(
  MR_Box parse_tree__prog_io_dcg__closure_arg,
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_1(
  MR_Box parse_tree__prog_io_dcg__closure_arg,
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0(
  MR_Word parse_tree__prog_io_dcg__Term_10,
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsGoal_12,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_31,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_32,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_33,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_34,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_35,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_36);

static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_5(
  MR_Box parse_tree__prog_io_dcg__closure_arg,
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_4(
  MR_Box parse_tree__prog_io_dcg__closure_arg,
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_3(
  MR_Box parse_tree__prog_io_dcg__closure_arg,
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_2(
  MR_Box parse_tree__prog_io_dcg__closure_arg,
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_1(
  MR_Box parse_tree__prog_io_dcg__closure_arg,
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0(
  MR_String parse_tree__prog_io_dcg__Functor_12,
  MR_Word parse_tree__prog_io_dcg__Args_13,
  MR_Word parse_tree__prog_io_dcg__Context_14,
  MR_Word parse_tree__prog_io_dcg__ContextPieces_15,
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_16,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);

static void MR_CALL 
parse_tree__prog_io_dcg__make_dcg_call_10_p_0(
  MR_Word parse_tree__prog_io_dcg__SymName_11,
  MR_Word parse_tree__prog_io_dcg__Args0_12,
  MR_Word parse_tree__prog_io_dcg__Context_13,
  MR_Word * parse_tree__prog_io_dcg__Goal_14,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_21,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_22,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_23,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_24,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_25,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_26);

static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0_1(
  MR_Box parse_tree__prog_io_dcg__closure_arg,
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(
  MR_Word parse_tree__prog_io_dcg__Term_10,
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_12,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_25,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_26,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_27,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_28,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_29,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_30);

static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0_1(
  MR_Box parse_tree__prog_io_dcg__closure_arg,
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_1[69][2];

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_2[3][5];

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_3[9][3];

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_4[8][1];




static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_1[69][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_1[2]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_1[3]))
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "against a list of zero items,"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may only be used to match the input"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "operator"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "[]"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: in DCG clauses,"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "at the end of the list."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[6])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: there is no"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and must therefore be used with arity 2."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[6])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "against a list of one or more items,"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "[|]"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "all"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In first argument of"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[6])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "( if goal then goal else goal )"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should occur in expressions of the form"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[49])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the "))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[37])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "between the curly braces."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[6])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: there should be at least one goal"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In DCG clause head:"))
  },
  /* row 63 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_4[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 64 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_4[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 65 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_4[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 66 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_4[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 67 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_4[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 68 */
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

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_3[9][3] = {
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
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[0])),
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
    ((MR_Box) (parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_2[2])),
    ((MR_Box) (parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_dcg_scalar_common_4[8][1] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[20])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "[|]"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[25])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[35])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[53])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[61])))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_dcg__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static MR_bool MR_CALL 
parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
  MR_Word parse_tree__prog_io_dcg__List0_4,
  MR_Word parse_tree__prog_io_dcg__Term_5,
  MR_Word * parse_tree__prog_io_dcg__List_6)
{
  {
    MR_bool parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__List0_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_io_dcg__V_12_12;
    MR_String parse_tree__prog_io_dcg__V_13_13;
    MR_Word parse_tree__prog_io_dcg__V_14_14;
    MR_Word parse_tree__prog_io_dcg___Context_7;

    if (parse_tree__prog_io_dcg__succeeded)
      {
        parse_tree__prog_io_dcg__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 0)));
        parse_tree__prog_io_dcg__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 1)));
        parse_tree__prog_io_dcg___Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 2)));
        parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__prog_io_dcg__succeeded)
          {
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_12_12)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_dcg__succeeded)
              {
                parse_tree__prog_io_dcg__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_12_12, (MR_Integer) 0)));
                parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_13_13, (MR_String) "[]") == 0);
              }
          }
      }
    if (parse_tree__prog_io_dcg__succeeded)
      {
        *parse_tree__prog_io_dcg__List_6 = parse_tree__prog_io_dcg__Term_5;
        parse_tree__prog_io_dcg__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word parse_tree__prog_io_dcg__Head_8;
        MR_Word parse_tree__prog_io_dcg__Tail0_9;
        MR_Word parse_tree__prog_io_dcg__Context_10;
        MR_Word parse_tree__prog_io_dcg__Tail_11;
        MR_Word parse_tree__prog_io_dcg__V_15_15;
        MR_String parse_tree__prog_io_dcg__V_16_16;
        MR_Word parse_tree__prog_io_dcg__V_17_17;
        MR_Word parse_tree__prog_io_dcg__V_18_18;
        MR_Word parse_tree__prog_io_dcg__V_19_19;
        MR_Word parse_tree__prog_io_dcg__V_22_22;
        MR_Word parse_tree__prog_io_dcg__V_23_23;
        MR_Word parse_tree__prog_io_dcg__V_24_24;

        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__List0_4)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_dcg__succeeded)
          {
            parse_tree__prog_io_dcg__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 0)));
            parse_tree__prog_io_dcg__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 1)));
            parse_tree__prog_io_dcg__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__List0_4, (MR_Integer) 2)));
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_15_15)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_dcg__succeeded)
              {
                parse_tree__prog_io_dcg__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_15_15, (MR_Integer) 0)));
                parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_16_16, (MR_String) "[|]") == 0);
                if (parse_tree__prog_io_dcg__succeeded)
                  {
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_17_17)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_io_dcg__succeeded)
                      {
                        parse_tree__prog_io_dcg__Head_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_17_17, (MR_Integer) 0)));
                        parse_tree__prog_io_dcg__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_17_17, (MR_Integer) 1)));
                        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__prog_io_dcg__succeeded)
                          {
                            parse_tree__prog_io_dcg__Tail0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_18_18, (MR_Integer) 0)));
                            parse_tree__prog_io_dcg__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_18_18, (MR_Integer) 1)));
                            parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (parse_tree__prog_io_dcg__succeeded)
                              {
                                {
                                  parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_dcg__Tail0_9, parse_tree__prog_io_dcg__Term_5, &parse_tree__prog_io_dcg__Tail_11);
                                }
                                if (parse_tree__prog_io_dcg__succeeded)
                                  {
                                    parse_tree__prog_io_dcg__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                    {
                                      parse_tree__prog_io_dcg__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Tail_11));
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_24_24));
                                    }
                                    {
                                      parse_tree__prog_io_dcg__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Head_8));
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_22_22, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_23_23));
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                      *parse_tree__prog_io_dcg__List_6 = base;
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_15_15));
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_22_22));
                                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Context_10));
                                    }
                                    parse_tree__prog_io_dcg__succeeded = MR_TRUE;
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return parse_tree__prog_io_dcg__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__635__1_2_p_0(
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_72,
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_73)
{
  {
    MR_bool parse_tree__prog_io_dcg__succeeded;

    {
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_72, parse_tree__prog_io_dcg__HeadVar__2_73);
    }
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__634__1_2_p_0(
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_66,
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_67)
{
  {
    MR_bool parse_tree__prog_io_dcg__succeeded;

    {
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_66, parse_tree__prog_io_dcg__HeadVar__2_67);
    }
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__279__2_2_p_0(
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_787,
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_788)
{
  {
    MR_bool parse_tree__prog_io_dcg__succeeded;

    {
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_787, parse_tree__prog_io_dcg__HeadVar__2_788);
    }
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__278__2_2_p_0(
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_781,
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_782)
{
  {
    MR_bool parse_tree__prog_io_dcg__succeeded;

    {
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_781, parse_tree__prog_io_dcg__HeadVar__2_782);
    }
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__279__1_2_p_0(
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_666,
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_667)
{
  {
    MR_bool parse_tree__prog_io_dcg__succeeded;

    {
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_666, parse_tree__prog_io_dcg__HeadVar__2_667);
    }
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__278__1_2_p_0(
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_660,
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_661)
{
  {
    MR_bool parse_tree__prog_io_dcg__succeeded;

    {
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_660, parse_tree__prog_io_dcg__HeadVar__2_661);
    }
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__596__1_2_p_0(
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_689,
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_690)
{
  {
    MR_bool parse_tree__prog_io_dcg__succeeded;

    {
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_689, parse_tree__prog_io_dcg__HeadVar__2_690);
    }
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal__118__1_2_p_0(
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_47,
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_48)
{
  {
    MR_bool parse_tree__prog_io_dcg__succeeded;

    {
      mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_dcg__HeadVar__1_47, parse_tree__prog_io_dcg__HeadVar__2_48);
    }
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_clause__79__1_2_p_0(
  MR_Word parse_tree__prog_io_dcg__HeadVar__1_51,
  MR_Word * parse_tree__prog_io_dcg__HeadVar__2_52)
{
  {
    MR_bool parse_tree__prog_io_dcg__succeeded;

    {
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__HeadVar__1_51, parse_tree__prog_io_dcg__HeadVar__2_52);
    }
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(
  MR_Word parse_tree__prog_io_dcg__AddedGoal_5,
  MR_Word parse_tree__prog_io_dcg__Context_6,
  MR_Word parse_tree__prog_io_dcg__Disjunct0_7,
  MR_Word * parse_tree__prog_io_dcg__Disjunct_8)
{
  {
    MR_bool parse_tree__prog_io_dcg__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_dcg__Disjunct0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Disjunct0_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word parse_tree__prog_io_dcg__Disjunct0Context_9;
    MR_Word parse_tree__prog_io_dcg__SubDisjunctA0_10;
    MR_Word parse_tree__prog_io_dcg__SubDisjunctB0_11;

    if (parse_tree__prog_io_dcg__succeeded)
      {
        parse_tree__prog_io_dcg__Disjunct0Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Disjunct0_7, (MR_Integer) 1)));
        parse_tree__prog_io_dcg__SubDisjunctA0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Disjunct0_7, (MR_Integer) 2)));
        parse_tree__prog_io_dcg__SubDisjunctB0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Disjunct0_7, (MR_Integer) 3)));
        {
          MR_Word parse_tree__prog_io_dcg__SubDisjunctA_12;
          MR_Word parse_tree__prog_io_dcg__SubDisjunctB_13;

          {
            parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__AddedGoal_5, parse_tree__prog_io_dcg__Context_6, parse_tree__prog_io_dcg__SubDisjunctA0_10, &parse_tree__prog_io_dcg__SubDisjunctA_12);
          }
          {
            parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__AddedGoal_5, parse_tree__prog_io_dcg__Context_6, parse_tree__prog_io_dcg__SubDisjunctB0_11, &parse_tree__prog_io_dcg__SubDisjunctB_13);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_io_dcg__Disjunct_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Disjunct0Context_9));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubDisjunctA_12));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubDisjunctB_13));
          }
        }
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        *parse_tree__prog_io_dcg__Disjunct_8 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_6));
        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Disjunct0_7));
        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__AddedGoal_5));
      }
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__new_dcg_var_5_p_0(
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_12,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_13,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_14,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_15,
  MR_Word * parse_tree__prog_io_dcg__DCGVar_8)
{
  {
    MR_bool parse_tree__prog_io_dcg__succeeded;
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_20;
    MR_Integer parse_tree__prog_io_dcg__N_9;
    MR_String parse_tree__prog_io_dcg__StringN_10;
    MR_String parse_tree__prog_io_dcg__VarName_11;
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18;

    {
      mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_9, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_14, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_15);
    }
    {
      mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_9, &parse_tree__prog_io_dcg__StringN_10);
    }
    {
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_10, &parse_tree__prog_io_dcg__VarName_11);
    }
    parse_tree__prog_io_dcg__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_20, parse_tree__prog_io_dcg__DCGVar_8, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_12, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18);
    }
    {
      mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_20, *parse_tree__prog_io_dcg__DCGVar_8, parse_tree__prog_io_dcg__VarName_11, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_13);
    }
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(
  MR_Word parse_tree__prog_io_dcg__CondGoalTerm_13,
  MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_14,
  MR_Word parse_tree__prog_io_dcg__ElseGoalTerm_15,
  MR_Word parse_tree__prog_io_dcg__Context_16,
  MR_Word parse_tree__prog_io_dcg__ContextPieces_17,
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_18,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_38,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_39,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_40,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_41,
  MR_Word parse_tree__prog_io_dcg__Var0_21,
  MR_Word * parse_tree__prog_io_dcg__Var_22)
{
  {
    MR_bool parse_tree__prog_io_dcg__succeeded;
    MR_Word parse_tree__prog_io_dcg__MaybeVarsCond_23;
    MR_Word parse_tree__prog_io_dcg__MaybeThen1_24;
    MR_Word parse_tree__prog_io_dcg__VarThen_25;
    MR_Word parse_tree__prog_io_dcg__MaybeElse1_26;
    MR_Word parse_tree__prog_io_dcg__VarElse_27;
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_42_42;
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_43_43;
    MR_Word parse_tree__prog_io_dcg__Vars_28;
    MR_Word parse_tree__prog_io_dcg__StateVars_29;
    MR_Word parse_tree__prog_io_dcg__Cond_30;
    MR_Word parse_tree__prog_io_dcg__Then1_31;
    MR_Word parse_tree__prog_io_dcg__Else1_32;

    {
      parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(parse_tree__prog_io_dcg__CondGoalTerm_13, parse_tree__prog_io_dcg__ThenGoalTerm_14, parse_tree__prog_io_dcg__Context_16, parse_tree__prog_io_dcg__ContextPieces_17, &parse_tree__prog_io_dcg__MaybeVarsCond_23, &parse_tree__prog_io_dcg__MaybeThen1_24, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_38, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_42_42, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_40, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_43_43, parse_tree__prog_io_dcg__Var0_21, &parse_tree__prog_io_dcg__VarThen_25);
    }
    {
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ElseGoalTerm_15, parse_tree__prog_io_dcg__ContextPieces_17, &parse_tree__prog_io_dcg__MaybeElse1_26, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_42_42, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_39, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_43_43, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_41, parse_tree__prog_io_dcg__Var0_21, &parse_tree__prog_io_dcg__VarElse_27);
    }
    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeVarsCond_23)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__prog_io_dcg__succeeded)
      {
        parse_tree__prog_io_dcg__Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_23, (MR_Integer) 0)));
        parse_tree__prog_io_dcg__StateVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_23, (MR_Integer) 1)));
        parse_tree__prog_io_dcg__Cond_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCond_23, (MR_Integer) 2)));
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeThen1_24)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__prog_io_dcg__succeeded)
          {
            parse_tree__prog_io_dcg__Then1_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeThen1_24, (MR_Integer) 0)));
            parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeElse1_26)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_dcg__succeeded)
              parse_tree__prog_io_dcg__Else1_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeElse1_26, (MR_Integer) 0)));
          }
      }
    if (parse_tree__prog_io_dcg__succeeded)
      {
        MR_Word parse_tree__prog_io_dcg__Then_33;
        MR_Word parse_tree__prog_io_dcg__Else_34;
        MR_Word parse_tree__prog_io_dcg__Goal_36;
        MR_Word parse_tree__prog_io_dcg__TypeInfo_62_62;

        {
          parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3], ((MR_Box) (parse_tree__prog_io_dcg__VarThen_25)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
        }
        if (parse_tree__prog_io_dcg__succeeded)
          {
            parse_tree__prog_io_dcg__TypeInfo_62_62 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3];
            {
              parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_dcg__TypeInfo_62_62, ((MR_Box) (parse_tree__prog_io_dcg__VarElse_27)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
            }
          }
        if (parse_tree__prog_io_dcg__succeeded)
          {
            *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var0_21;
            parse_tree__prog_io_dcg__Then_33 = parse_tree__prog_io_dcg__Then1_31;
            parse_tree__prog_io_dcg__Else_34 = parse_tree__prog_io_dcg__Else1_32;
          }
        else
          {
            {
              parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3], ((MR_Box) (parse_tree__prog_io_dcg__VarThen_25)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
            }
            if (parse_tree__prog_io_dcg__succeeded)
              {
                MR_Word parse_tree__prog_io_dcg__Unify_35;
                MR_Word parse_tree__prog_io_dcg__V_46_46;
                MR_Word parse_tree__prog_io_dcg__V_47_47;

                *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__VarElse_27;
                {
                  parse_tree__prog_io_dcg__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_46_46, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__Var_22));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_46_46, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
                }
                {
                  parse_tree__prog_io_dcg__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarThen_25));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
                }
                {
                  parse_tree__prog_io_dcg__Unify_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_35, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_35, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_46_46));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_35, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_47_47));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_35, 3) = ((MR_Box) ((MR_Integer) 0));
                }
                {
                  parse_tree__prog_io_dcg__Then_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Then_33, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Then_33, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Then1_31));
                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Then_33, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Unify_35));
                }
                parse_tree__prog_io_dcg__Else_34 = parse_tree__prog_io_dcg__Else1_32;
              }
            else
              {
                {
                  parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3], ((MR_Box) (parse_tree__prog_io_dcg__VarElse_27)), ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)));
                }
                if (parse_tree__prog_io_dcg__succeeded)
                  {
                    MR_Word parse_tree__prog_io_dcg__V_49_49;
                    MR_Word parse_tree__prog_io_dcg__V_50_50;
                    MR_Word parse_tree__prog_io_dcg__Unify_56;

                    *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__VarThen_25;
                    parse_tree__prog_io_dcg__Then_33 = parse_tree__prog_io_dcg__Then1_31;
                    {
                      parse_tree__prog_io_dcg__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_49_49, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__Var_22));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_49_49, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
                    }
                    {
                      parse_tree__prog_io_dcg__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarElse_27));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
                    }
                    {
                      parse_tree__prog_io_dcg__Unify_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_56, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_56, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_49_49));
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_56, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_50_50));
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_56, 3) = ((MR_Box) ((MR_Integer) 0));
                    }
                    {
                      parse_tree__prog_io_dcg__Else_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Else_34, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Else_34, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Else1_32));
                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Else_34, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Unify_56));
                    }
                  }
                else
                  {
                    *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__VarElse_27;
                    {
                      parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_io_dcg__VarThen_25, parse_tree__prog_io_dcg__VarElse_27, parse_tree__prog_io_dcg__Then1_31, &parse_tree__prog_io_dcg__Then_33);
                    }
                    parse_tree__prog_io_dcg__Else_34 = parse_tree__prog_io_dcg__Else1_32;
                  }
              }
          }
        {
          parse_tree__prog_io_dcg__Goal_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_16));
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_28));
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 3) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_29));
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 4) = ((MR_Box) (parse_tree__prog_io_dcg__Cond_30));
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 5) = ((MR_Box) (parse_tree__prog_io_dcg__Then_33));
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_36, 6) = ((MR_Box) (parse_tree__prog_io_dcg__Else_34));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_io_dcg__MaybeGoal_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_36));
        }
      }
    else
      {
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
        MR_Word parse_tree__prog_io_dcg__TypeInfo_59_59 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[5];
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_60_60 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
        MR_Word parse_tree__prog_io_dcg__Specs_37;
        MR_Word parse_tree__prog_io_dcg__V_52_52;
        MR_Word parse_tree__prog_io_dcg__V_53_53;
        MR_Word parse_tree__prog_io_dcg__V_54_54;
        MR_Word parse_tree__prog_io_dcg__V_55_55;

        {
          parse_tree__prog_io_dcg__V_52_52 = parse_tree__maybe_error__get_any_errors3_1_f_0(parse_tree__prog_io_dcg__TypeInfo_59_59, parse_tree__prog_io_dcg__TypeInfo_59_59, parse_tree__prog_io_dcg__TypeCtorInfo_60_60, parse_tree__prog_io_dcg__MaybeVarsCond_23);
        }
        {
          parse_tree__prog_io_dcg__V_54_54 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_60_60, parse_tree__prog_io_dcg__MaybeThen1_24);
        }
        {
          parse_tree__prog_io_dcg__V_55_55 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_60_60, parse_tree__prog_io_dcg__MaybeElse1_26);
        }
        {
          parse_tree__prog_io_dcg__V_53_53 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_58_58, parse_tree__prog_io_dcg__V_54_54, parse_tree__prog_io_dcg__V_55_55);
        }
        {
          parse_tree__prog_io_dcg__Specs_37 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_58_58, parse_tree__prog_io_dcg__V_52_52, parse_tree__prog_io_dcg__V_53_53);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_io_dcg__MaybeGoal_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_37));
        }
        *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var0_21;
      }
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(
  MR_Word parse_tree__prog_io_dcg__CondGoalTerm_13,
  MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_14,
  MR_Word parse_tree__prog_io_dcg__Context_15,
  MR_Word parse_tree__prog_io_dcg__ContextPieces_16,
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsCond_17,
  MR_Word * parse_tree__prog_io_dcg__MaybeThen_18,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33,
  MR_Word parse_tree__prog_io_dcg__Var0_21,
  MR_Word * parse_tree__prog_io_dcg__Var_22)
{
  {
    MR_bool parse_tree__prog_io_dcg__succeeded;
    MR_Word parse_tree__prog_io_dcg__Var1_23;
    MR_Word parse_tree__prog_io_dcg__MaybeThen1_24;
    MR_Word parse_tree__prog_io_dcg__Var2_25;
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_34_34;
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_35_35;
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36;
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37;
    MR_Word parse_tree__prog_io_dcg__TypeInfo_44_44;

    {
      parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0(parse_tree__prog_io_dcg__CondGoalTerm_13, parse_tree__prog_io_dcg__ContextPieces_16, parse_tree__prog_io_dcg__MaybeVarsCond_17, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_30, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_34_34, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_32, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_35_35, parse_tree__prog_io_dcg__Var0_21, &parse_tree__prog_io_dcg__Var1_23);
    }
    {
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__ThenGoalTerm_14, parse_tree__prog_io_dcg__ContextPieces_16, &parse_tree__prog_io_dcg__MaybeThen1_24, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_34_34, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_35_35, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37, parse_tree__prog_io_dcg__Var1_23, &parse_tree__prog_io_dcg__Var2_25);
    }
    {
      parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3], ((MR_Box) (parse_tree__prog_io_dcg__Var0_21)), ((MR_Box) (parse_tree__prog_io_dcg__Var1_23)));
    }
    parse_tree__prog_io_dcg__succeeded = !(parse_tree__prog_io_dcg__succeeded);
    if (parse_tree__prog_io_dcg__succeeded)
      {
        parse_tree__prog_io_dcg__TypeInfo_44_44 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3];
        {
          parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_dcg__TypeInfo_44_44, ((MR_Box) (parse_tree__prog_io_dcg__Var1_23)), ((MR_Box) (parse_tree__prog_io_dcg__Var2_25)));
        }
      }
    if (parse_tree__prog_io_dcg__succeeded)
      if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeThen1_24)) == (MR_mktag((MR_Integer) 0))))
        {
          *parse_tree__prog_io_dcg__MaybeThen_18 = parse_tree__prog_io_dcg__MaybeThen1_24;
          *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var2_25;
          *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36;
          *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37;
        }
      else
        {
          MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_59;
          MR_Word parse_tree__prog_io_dcg__Then1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeThen1_24, (MR_Integer) 0)));
          MR_Word parse_tree__prog_io_dcg__Unify_27;
          MR_Word parse_tree__prog_io_dcg__Then_28;
          MR_Word parse_tree__prog_io_dcg__V_40_40;
          MR_Word parse_tree__prog_io_dcg__V_41_41;
          MR_Integer parse_tree__prog_io_dcg__N_52;
          MR_String parse_tree__prog_io_dcg__StringN_53;
          MR_String parse_tree__prog_io_dcg__VarName_54;
          MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_57;

          {
            mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_52, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33);
          }
          {
            mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_52, &parse_tree__prog_io_dcg__StringN_53);
          }
          {
            mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_53, &parse_tree__prog_io_dcg__VarName_54);
          }
          parse_tree__prog_io_dcg__TypeCtorInfo_20_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_59, parse_tree__prog_io_dcg__Var_22, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_57);
          }
          {
            mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_59, *parse_tree__prog_io_dcg__Var_22, parse_tree__prog_io_dcg__VarName_54, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_57, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31);
          }
          {
            parse_tree__prog_io_dcg__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__Var_22));
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
          }
          {
            parse_tree__prog_io_dcg__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Var2_25));
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
          }
          {
            parse_tree__prog_io_dcg__Unify_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_27, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_27, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_40_40));
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_27, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_41_41));
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_27, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            parse_tree__prog_io_dcg__Then_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Then_28, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_15));
            MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Then_28, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Then1_26));
            MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Then_28, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Unify_27));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_io_dcg__MaybeThen_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Then_28));
          }
        }
    else
      {
        *parse_tree__prog_io_dcg__MaybeThen_18 = parse_tree__prog_io_dcg__MaybeThen1_24;
        *parse_tree__prog_io_dcg__Var_22 = parse_tree__prog_io_dcg__Var2_25;
        *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_37_37;
        *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_31 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_36_36;
      }
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_2(
  MR_Box parse_tree__prog_io_dcg__closure_arg,
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
    MR_Word parse_tree__prog_io_dcg__conv1_HeadVar__2_73;

    {
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__635__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv1_HeadVar__2_73);
    }
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv1_HeadVar__2_73));
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0_1(
  MR_Box parse_tree__prog_io_dcg__closure_arg,
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_67;

    {
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_some_vars_dcg_goal__634__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_67);
    }
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_67));
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__parse_some_vars_dcg_goal_9_p_0(
  MR_Word parse_tree__prog_io_dcg__Term_10,
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
  MR_Word * parse_tree__prog_io_dcg__MaybeVarsGoal_12,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_31,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_32,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_33,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_34,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_35,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_36)
{
  {
    MR_bool parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Term_10)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_io_dcg__MaybeVars_22;
    MR_Word parse_tree__prog_io_dcg__GoalTerm_23;
    MR_Word parse_tree__prog_io_dcg__MaybeGoal_24;
    MR_Word parse_tree__prog_io_dcg__VarsTerm_16;
    MR_Word parse_tree__prog_io_dcg__SubGoalTerm_17;
    MR_Word parse_tree__prog_io_dcg__V_37_37;
    MR_String parse_tree__prog_io_dcg__V_38_38;
    MR_Word parse_tree__prog_io_dcg__V_39_39;
    MR_Word parse_tree__prog_io_dcg__V_40_40;
    MR_Word parse_tree__prog_io_dcg__V_41_41;
    MR_Word parse_tree__prog_io_dcg___Context_18;
    MR_Word parse_tree__prog_io_dcg__Vars0_25;
    MR_Word parse_tree__prog_io_dcg__StateVars0_26;
    MR_Word parse_tree__prog_io_dcg__Goal_27;

    if (parse_tree__prog_io_dcg__succeeded)
      {
        parse_tree__prog_io_dcg__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 0)));
        parse_tree__prog_io_dcg__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 1)));
        parse_tree__prog_io_dcg___Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Term_10, (MR_Integer) 2)));
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_37_37)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_dcg__succeeded)
          {
            parse_tree__prog_io_dcg__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_37_37, (MR_Integer) 0)));
            parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_38_38, (MR_String) "some") == 0);
            if (parse_tree__prog_io_dcg__succeeded)
              {
                parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_39_39)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_dcg__succeeded)
                  {
                    parse_tree__prog_io_dcg__VarsTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_39_39, (MR_Integer) 0)));
                    parse_tree__prog_io_dcg__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_39_39, (MR_Integer) 1)));
                    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_40_40)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_io_dcg__succeeded)
                      {
                        parse_tree__prog_io_dcg__SubGoalTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, (MR_Integer) 0)));
                        parse_tree__prog_io_dcg__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, (MR_Integer) 1)));
                        parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__prog_io_dcg__succeeded)
      {
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_64_64 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_65_65;
        MR_Word parse_tree__prog_io_dcg__GenericVarSet_19;
        MR_Word parse_tree__prog_io_dcg__VarsContextPieces_21;
        MR_Word parse_tree__prog_io_dcg__V_53_53;

        {
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__TypeCtorInfo_64_64, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_31, &parse_tree__prog_io_dcg__GenericVarSet_19);
        }
        parse_tree__prog_io_dcg__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          parse_tree__prog_io_dcg__V_53_53 = mercury__cord__from_list_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_65_65, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[57]));
        }
        {
          parse_tree__prog_io_dcg__VarsContextPieces_21 = mercury__cord__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_65_65, parse_tree__prog_io_dcg__ContextPieces_11, parse_tree__prog_io_dcg__V_53_53);
        }
        {
          parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_64_64, parse_tree__prog_io_dcg__VarsTerm_16, parse_tree__prog_io_dcg__GenericVarSet_19, parse_tree__prog_io_dcg__VarsContextPieces_21, &parse_tree__prog_io_dcg__MaybeVars_22);
        }
        parse_tree__prog_io_dcg__GoalTerm_23 = parse_tree__prog_io_dcg__SubGoalTerm_17;
      }
    else
      {
        parse_tree__prog_io_dcg__MaybeVars_22 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[68]);
        parse_tree__prog_io_dcg__GoalTerm_23 = parse_tree__prog_io_dcg__Term_10;
      }
    {
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__GoalTerm_23, parse_tree__prog_io_dcg__ContextPieces_11, &parse_tree__prog_io_dcg__MaybeGoal_24, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_31, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_32, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_33, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_34, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_35, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_36);
    }
    parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeVars_22)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__prog_io_dcg__succeeded)
      {
        parse_tree__prog_io_dcg__Vars0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVars_22, (MR_Integer) 0)));
        parse_tree__prog_io_dcg__StateVars0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVars_22, (MR_Integer) 1)));
        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal_24)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__prog_io_dcg__succeeded)
          parse_tree__prog_io_dcg__Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal_24, (MR_Integer) 0)));
      }
    if (parse_tree__prog_io_dcg__succeeded)
      {
        MR_Word parse_tree__prog_io_dcg__TypeInfo_70_70 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
        MR_Word parse_tree__prog_io_dcg__TypeInfo_71_71 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3];
        MR_Word parse_tree__prog_io_dcg__Vars_28;
        MR_Word parse_tree__prog_io_dcg__StateVars_29;

        {
          mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_70_70, parse_tree__prog_io_dcg__TypeInfo_71_71, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[7], parse_tree__prog_io_dcg__Vars0_25, &parse_tree__prog_io_dcg__Vars_28);
        }
        {
          mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_70_70, parse_tree__prog_io_dcg__TypeInfo_71_71, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[8], parse_tree__prog_io_dcg__StateVars0_26, &parse_tree__prog_io_dcg__StateVars_29);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_io_dcg__MaybeVarsGoal_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_29));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_27));
        }
      }
    else
      {
        MR_Word parse_tree__prog_io_dcg__TypeInfo_77_77 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[4];
        MR_Word parse_tree__prog_io_dcg__Specs_30;
        MR_Word parse_tree__prog_io_dcg__V_61_61;
        MR_Word parse_tree__prog_io_dcg__V_62_62;

        {
          parse_tree__prog_io_dcg__V_61_61 = parse_tree__maybe_error__get_any_errors2_1_f_0(parse_tree__prog_io_dcg__TypeInfo_77_77, parse_tree__prog_io_dcg__TypeInfo_77_77, parse_tree__prog_io_dcg__MaybeVars_22);
        }
        {
          parse_tree__prog_io_dcg__V_62_62 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, parse_tree__prog_io_dcg__MaybeGoal_24);
        }
        {
          parse_tree__prog_io_dcg__Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__V_61_61, parse_tree__prog_io_dcg__V_62_62);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_io_dcg__MaybeVarsGoal_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_30));
        }
      }
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_5(
  MR_Box parse_tree__prog_io_dcg__closure_arg,
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
    MR_Word parse_tree__prog_io_dcg__conv4_HeadVar__2_788;

    {
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__279__2_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv4_HeadVar__2_788);
    }
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv4_HeadVar__2_788));
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_4(
  MR_Box parse_tree__prog_io_dcg__closure_arg,
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
    MR_Word parse_tree__prog_io_dcg__conv3_HeadVar__2_782;

    {
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__278__2_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv3_HeadVar__2_782);
    }
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv3_HeadVar__2_782));
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_3(
  MR_Box parse_tree__prog_io_dcg__closure_arg,
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
    MR_Word parse_tree__prog_io_dcg__conv2_HeadVar__2_667;

    {
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__279__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv2_HeadVar__2_667);
    }
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv2_HeadVar__2_667));
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_2(
  MR_Box parse_tree__prog_io_dcg__closure_arg,
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
    MR_Word parse_tree__prog_io_dcg__conv1_HeadVar__2_661;

    {
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__278__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv1_HeadVar__2_661);
    }
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv1_HeadVar__2_661));
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0_1(
  MR_Box parse_tree__prog_io_dcg__closure_arg,
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_690;

    {
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_non_call_dcg_goal__596__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_690);
    }
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_690));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0(
  MR_String parse_tree__prog_io_dcg__Functor_12,
  MR_Word parse_tree__prog_io_dcg__Args_13,
  MR_Word parse_tree__prog_io_dcg__Context_14,
  MR_Word parse_tree__prog_io_dcg__ContextPieces_15,
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_16,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98)
{
  {
    MR_bool parse_tree__prog_io_dcg__succeeded;

    {
      MR_Integer parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 0)) {
        case (MR_Integer) 38:
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "&"))
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 44:
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) ","))
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 1;
          break;
        case (MR_Integer) 58:
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) ":="))
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 2;
          break;
        case (MR_Integer) 59:
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) ";"))
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 3;
          break;
        case (MR_Integer) 61:
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "="))
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 4;
          break;
        case (MR_Integer) 91:
          switch (MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 1)) {
            case (MR_Integer) 93:
              if (MR_offset_streq(2, parse_tree__prog_io_dcg__Functor_12, (MR_String) "[]"))
                parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 5;
              break;
            case (MR_Integer) 124:
              if (MR_offset_streq(2, parse_tree__prog_io_dcg__Functor_12, (MR_String) "[|]"))
                parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 6;
              break;
          }
          break;
        case (MR_Integer) 92:
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "\\+"))
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 97:
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "all"))
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 8;
          break;
        case (MR_Integer) 101:
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "else"))
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 9;
          break;
        case (MR_Integer) 105:
          switch (MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 1)) {
            case (MR_Integer) 102:
              if (MR_offset_streq(2, parse_tree__prog_io_dcg__Functor_12, (MR_String) "if"))
                parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 109:
              if (MR_offset_streq(2, parse_tree__prog_io_dcg__Functor_12, (MR_String) "impure"))
                parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 11;
              break;
          }
          break;
        case (MR_Integer) 110:
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "not"))
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 112:
          if (((((((((((((((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 1)) == (MR_Integer) 114)) && (((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 7)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 8)) {
              case (MR_Integer) 105:
                if (MR_offset_streq(9, parse_tree__prog_io_dcg__Functor_12, (MR_String) "promise_impure"))
                  parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 12;
                break;
              case (MR_Integer) 112:
                if (MR_offset_streq(9, parse_tree__prog_io_dcg__Functor_12, (MR_String) "promise_pure"))
                  parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 13;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(9, parse_tree__prog_io_dcg__Functor_12, (MR_String) "promise_semipure"))
                  parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 14;
                break;
            }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(parse_tree__prog_io_dcg__Functor_12, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, parse_tree__prog_io_dcg__Functor_12, (MR_String) "semipure"))
                parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 15;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, parse_tree__prog_io_dcg__Functor_12, (MR_String) "some"))
                parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 16;
              break;
          }
          break;
        case (MR_Integer) 123:
          if (MR_offset_streq(1, parse_tree__prog_io_dcg__Functor_12, (MR_String) "{}"))
            parse_tree__prog_io_dcg__case_num_0 = (MR_Integer) 17;
          break;
      }
      switch (parse_tree__prog_io_dcg__case_num_0) {
        default:
          parse_tree__prog_io_dcg__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            /* case "&" */
            {
              MR_Word parse_tree__prog_io_dcg__SubGoalTermA_497;
              MR_Word parse_tree__prog_io_dcg__SubGoalTermB_498;
              MR_Word parse_tree__prog_io_dcg__V_354_354;
              MR_Word parse_tree__prog_io_dcg__V_355_355;

              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  parse_tree__prog_io_dcg__SubGoalTermA_497 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
                  parse_tree__prog_io_dcg__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_354_354)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      parse_tree__prog_io_dcg__SubGoalTermB_498 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_354_354, (MR_Integer) 0)));
                      parse_tree__prog_io_dcg__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_354_354, (MR_Integer) 1)));
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_355_355 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                }
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_356_356;
                  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_357_357;
                  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_358_358;
                  MR_Word parse_tree__prog_io_dcg__MaybeSubGoalA_489;
                  MR_Word parse_tree__prog_io_dcg__MaybeSubGoalB_490;
                  MR_Word parse_tree__prog_io_dcg__SubGoalA_485;
                  MR_Word parse_tree__prog_io_dcg__SubGoalB_486;

                  {
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTermA_497, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoalA_489, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_356_356, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_357_357, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, &parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_358_358);
                  }
                  {
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTermB_498, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoalB_490, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_356_356, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_357_357, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_358_358, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoalA_489)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      parse_tree__prog_io_dcg__SubGoalA_485 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoalA_489, (MR_Integer) 0)));
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoalB_490)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__prog_io_dcg__succeeded)
                        parse_tree__prog_io_dcg__SubGoalB_486 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoalB_490, (MR_Integer) 0)));
                    }
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      MR_Word parse_tree__prog_io_dcg__Goal_481;

                      {
                        parse_tree__prog_io_dcg__Goal_481 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_481, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_481, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_481, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalA_485));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_481, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalB_486));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_481));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_676_676 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
                      MR_Word parse_tree__prog_io_dcg__V_362_362;
                      MR_Word parse_tree__prog_io_dcg__V_363_363;
                      MR_Word parse_tree__prog_io_dcg__Specs_482;

                      {
                        parse_tree__prog_io_dcg__V_362_362 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_676_676, parse_tree__prog_io_dcg__MaybeSubGoalA_489);
                      }
                      {
                        parse_tree__prog_io_dcg__V_363_363 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_676_676, parse_tree__prog_io_dcg__MaybeSubGoalB_490);
                      }
                      {
                        parse_tree__prog_io_dcg__Specs_482 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__V_362_362, parse_tree__prog_io_dcg__V_363_363);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_482));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__prog_io_dcg__V_364_364;
                  MR_Word parse_tree__prog_io_dcg__Spec_493;

                  {
                    parse_tree__prog_io_dcg__Spec_493 = parse_tree__prog_io_goal__should_have_two_goals_infix_3_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__Functor_12);
                  }
                  {
                    parse_tree__prog_io_dcg__V_364_364 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_364_364, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_493));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_364_364, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_364_364));
                  }
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            /* case "," */
            {
              MR_Word parse_tree__prog_io_dcg__SubGoalTermA_47;
              MR_Word parse_tree__prog_io_dcg__SubGoalTermB_48;
              MR_Word parse_tree__prog_io_dcg__V_366_366;
              MR_Word parse_tree__prog_io_dcg__V_367_367;

              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  parse_tree__prog_io_dcg__SubGoalTermA_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
                  parse_tree__prog_io_dcg__V_366_366 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_366_366)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      parse_tree__prog_io_dcg__SubGoalTermB_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_366_366, (MR_Integer) 0)));
                      parse_tree__prog_io_dcg__V_367_367 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_366_366, (MR_Integer) 1)));
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_367_367 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                }
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  MR_Word parse_tree__prog_io_dcg__MaybeSubGoalA_49;
                  MR_Word parse_tree__prog_io_dcg__MaybeSubGoalB_50;
                  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_368_368;
                  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_369_369;
                  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_370_370;
                  MR_Word parse_tree__prog_io_dcg__SubGoalA_51;
                  MR_Word parse_tree__prog_io_dcg__SubGoalB_52;

                  {
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTermA_47, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoalA_49, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_368_368, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_369_369, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, &parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_370_370);
                  }
                  {
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTermB_48, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoalB_50, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_368_368, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_369_369, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_370_370, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoalA_49)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      parse_tree__prog_io_dcg__SubGoalA_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoalA_49, (MR_Integer) 0)));
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoalB_50)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__prog_io_dcg__succeeded)
                        parse_tree__prog_io_dcg__SubGoalB_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoalB_50, (MR_Integer) 0)));
                    }
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      MR_Word parse_tree__prog_io_dcg__Goal_468;

                      {
                        parse_tree__prog_io_dcg__Goal_468 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Goal_468, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                        MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Goal_468, 1) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalA_51));
                        MR_hl_field(MR_mktag(2), parse_tree__prog_io_dcg__Goal_468, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalB_52));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_468));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_674_674 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
                      MR_Word parse_tree__prog_io_dcg__V_374_374;
                      MR_Word parse_tree__prog_io_dcg__V_375_375;
                      MR_Word parse_tree__prog_io_dcg__Specs_469;

                      {
                        parse_tree__prog_io_dcg__V_374_374 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_674_674, parse_tree__prog_io_dcg__MaybeSubGoalA_49);
                      }
                      {
                        parse_tree__prog_io_dcg__V_375_375 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_674_674, parse_tree__prog_io_dcg__MaybeSubGoalB_50);
                      }
                      {
                        parse_tree__prog_io_dcg__Specs_469 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__V_374_374, parse_tree__prog_io_dcg__V_375_375);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_469));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__prog_io_dcg__V_376_376;
                  MR_Word parse_tree__prog_io_dcg__Spec_474;

                  {
                    parse_tree__prog_io_dcg__Spec_474 = parse_tree__prog_io_goal__should_have_two_goals_infix_3_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__Functor_12);
                  }
                  {
                    parse_tree__prog_io_dcg__V_376_376 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_376_376, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_474));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_376_376, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_376_376));
                  }
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            /* case ":=" */
            {
              MR_Word parse_tree__prog_io_dcg__Arg0_650;
              MR_Word parse_tree__prog_io_dcg__V_99_99;

              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  parse_tree__prog_io_dcg__Arg0_650 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
                  parse_tree__prog_io_dcg__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_99_99 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  MR_Word parse_tree__prog_io_dcg__Goal_642;
                  MR_Word parse_tree__prog_io_dcg__OutVarTerm_644;
                  MR_Word parse_tree__prog_io_dcg__Arg_645;

                  {
                    parse_tree__prog_io_dcg__new_dcg_var_5_p_0(parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
                  {
                    mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__Arg0_650, &parse_tree__prog_io_dcg__Arg_645);
                  }
                  {
                    parse_tree__prog_io_dcg__OutVarTerm_644 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__OutVarTerm_644, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__OutVarTerm_644, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                  }
                  {
                    parse_tree__prog_io_dcg__Goal_642 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_642, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_642, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Arg_645));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_642, 2) = ((MR_Box) (parse_tree__prog_io_dcg__OutVarTerm_644));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_642, 3) = ((MR_Box) ((MR_Integer) 0));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_642));
                  }
                }
              else
                {
                  MR_Word parse_tree__prog_io_dcg__ProgArgs_92;
                  MR_Word parse_tree__prog_io_dcg__Goal_646;

                  {
                    mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[2], parse_tree__prog_io_dcg__Args_13, &parse_tree__prog_io_dcg__ProgArgs_92);
                  }
                  {
                    parse_tree__prog_io_dcg__make_dcg_call_10_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_4[1], parse_tree__prog_io_dcg__ProgArgs_92, parse_tree__prog_io_dcg__Context_14, &parse_tree__prog_io_dcg__Goal_646, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_646));
                  }
                }
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            /* case ";" */
            {
              MR_Word parse_tree__prog_io_dcg__SubGoalTermA_543;
              MR_Word parse_tree__prog_io_dcg__SubGoalTermB_544;
              MR_Word parse_tree__prog_io_dcg__V_328_328;
              MR_Word parse_tree__prog_io_dcg__V_329_329;

              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  parse_tree__prog_io_dcg__SubGoalTermA_543 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
                  parse_tree__prog_io_dcg__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_328_328)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      parse_tree__prog_io_dcg__SubGoalTermB_544 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_328_328, (MR_Integer) 0)));
                      parse_tree__prog_io_dcg__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_328_328, (MR_Integer) 1)));
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_329_329 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                }
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  MR_Word parse_tree__prog_io_dcg__CondGoalTerm_53;
                  MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_54;
                  MR_Word parse_tree__prog_io_dcg__V_330_330;
                  MR_String parse_tree__prog_io_dcg__V_331_331;
                  MR_Word parse_tree__prog_io_dcg__V_332_332;
                  MR_Word parse_tree__prog_io_dcg__V_333_333;
                  MR_Word parse_tree__prog_io_dcg__V_334_334;
                  MR_Word parse_tree__prog_io_dcg___Context_55;

                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__SubGoalTermA_543)) == (MR_mktag((MR_Integer) 0)));
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      parse_tree__prog_io_dcg__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SubGoalTermA_543, (MR_Integer) 0)));
                      parse_tree__prog_io_dcg__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SubGoalTermA_543, (MR_Integer) 1)));
                      parse_tree__prog_io_dcg___Context_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SubGoalTermA_543, (MR_Integer) 2)));
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_330_330)) == (MR_mktag((MR_Integer) 0)));
                      if (parse_tree__prog_io_dcg__succeeded)
                        {
                          parse_tree__prog_io_dcg__V_331_331 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_330_330, (MR_Integer) 0)));
                          parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_331_331, (MR_String) "->") == 0);
                          if (parse_tree__prog_io_dcg__succeeded)
                            {
                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_332_332)) == (MR_mktag((MR_Integer) 1)));
                              if (parse_tree__prog_io_dcg__succeeded)
                                {
                                  parse_tree__prog_io_dcg__CondGoalTerm_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_332_332, (MR_Integer) 0)));
                                  parse_tree__prog_io_dcg__V_333_333 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_332_332, (MR_Integer) 1)));
                                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_333_333)) == (MR_mktag((MR_Integer) 1)));
                                  if (parse_tree__prog_io_dcg__succeeded)
                                    {
                                      parse_tree__prog_io_dcg__ThenGoalTerm_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_333_333, (MR_Integer) 0)));
                                      parse_tree__prog_io_dcg__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_333_333, (MR_Integer) 1)));
                                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_334_334 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    }
                                }
                            }
                        }
                    }
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(parse_tree__prog_io_dcg__CondGoalTerm_53, parse_tree__prog_io_dcg__ThenGoalTerm_54, parse_tree__prog_io_dcg__SubGoalTermB_544, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__MaybeGoal_16, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                    }
                  else
                    {
                      MR_Word parse_tree__prog_io_dcg__MaybeSubGoalA0_57;
                      MR_Word parse_tree__prog_io_dcg__VarA_58;
                      MR_Word parse_tree__prog_io_dcg__MaybeSubGoalB0_59;
                      MR_Word parse_tree__prog_io_dcg__VarB_60;
                      MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_338_338;
                      MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_339_339;
                      MR_Word parse_tree__prog_io_dcg__SubGoalA0_61;
                      MR_Word parse_tree__prog_io_dcg__SubGoalB0_62;

                      {
                        parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTermA_543, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoalA0_57, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_338_338, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_339_339, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, &parse_tree__prog_io_dcg__VarA_58);
                      }
                      {
                        parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTermB_544, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoalB0_59, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_338_338, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_339_339, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, &parse_tree__prog_io_dcg__VarB_60);
                      }
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoalA0_57)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__prog_io_dcg__succeeded)
                        {
                          parse_tree__prog_io_dcg__SubGoalA0_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoalA0_57, (MR_Integer) 0)));
                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoalB0_59)) == (MR_mktag((MR_Integer) 1)));
                          if (parse_tree__prog_io_dcg__succeeded)
                            parse_tree__prog_io_dcg__SubGoalB0_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoalB0_59, (MR_Integer) 0)));
                        }
                      if (parse_tree__prog_io_dcg__succeeded)
                        {
                          MR_Word parse_tree__prog_io_dcg__Goal_523;
                          MR_Word parse_tree__prog_io_dcg__TypeInfo_988_988;

                          {
                            parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3], ((MR_Box) (parse_tree__prog_io_dcg__VarA_58)), ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97)));
                          }
                          if (parse_tree__prog_io_dcg__succeeded)
                            {
                              parse_tree__prog_io_dcg__TypeInfo_988_988 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3];
                              {
                                parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_dcg__TypeInfo_988_988, ((MR_Box) (parse_tree__prog_io_dcg__VarB_60)), ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97)));
                              }
                            }
                          if (parse_tree__prog_io_dcg__succeeded)
                            {
                              *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
                              {
                                parse_tree__prog_io_dcg__Goal_523 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalA0_61));
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalB0_62));
                              }
                            }
                          else
                            {
                              {
                                parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3], ((MR_Box) (parse_tree__prog_io_dcg__VarA_58)), ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97)));
                              }
                              if (parse_tree__prog_io_dcg__succeeded)
                                {
                                  MR_Word parse_tree__prog_io_dcg__Unify_64;
                                  MR_Word parse_tree__prog_io_dcg__V_342_342;
                                  MR_Word parse_tree__prog_io_dcg__V_343_343;
                                  MR_Word parse_tree__prog_io_dcg__SubGoalA_512;

                                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__VarB_60;
                                  {
                                    parse_tree__prog_io_dcg__V_342_342 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_342_342, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98));
                                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_342_342, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                                  }
                                  {
                                    parse_tree__prog_io_dcg__V_343_343 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_343_343, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarA_58));
                                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_343_343, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                                  }
                                  {
                                    parse_tree__prog_io_dcg__Unify_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_64, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_64, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_342_342));
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_64, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_343_343));
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_64, 3) = ((MR_Box) ((MR_Integer) 0));
                                  }
                                  {
                                    parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__Unify_64, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__SubGoalA0_61, &parse_tree__prog_io_dcg__SubGoalA_512);
                                  }
                                  {
                                    parse_tree__prog_io_dcg__Goal_523 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalA_512));
                                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalB0_62));
                                  }
                                }
                              else
                                {
                                  {
                                    parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3], ((MR_Box) (parse_tree__prog_io_dcg__VarB_60)), ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97)));
                                  }
                                  if (parse_tree__prog_io_dcg__succeeded)
                                    {
                                      MR_Word parse_tree__prog_io_dcg__V_345_345;
                                      MR_Word parse_tree__prog_io_dcg__V_346_346;
                                      MR_Word parse_tree__prog_io_dcg__SubGoalB_513;
                                      MR_Word parse_tree__prog_io_dcg__Unify_514;

                                      *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__VarA_58;
                                      {
                                        parse_tree__prog_io_dcg__V_345_345 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_345_345, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98));
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_345_345, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                                      }
                                      {
                                        parse_tree__prog_io_dcg__V_346_346 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_346_346, 0) = ((MR_Box) (parse_tree__prog_io_dcg__VarB_60));
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_346_346, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                                      }
                                      {
                                        parse_tree__prog_io_dcg__Unify_514 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_514, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_514, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_345_345));
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_514, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_346_346));
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Unify_514, 3) = ((MR_Box) ((MR_Integer) 0));
                                      }
                                      {
                                        parse_tree__prog_io_dcg__append_to_disjunct_4_p_0(parse_tree__prog_io_dcg__Unify_514, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__SubGoalB0_62, &parse_tree__prog_io_dcg__SubGoalB_513);
                                      }
                                      {
                                        parse_tree__prog_io_dcg__Goal_523 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalA0_61));
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalB_513));
                                      }
                                    }
                                  else
                                    {
                                      MR_Word parse_tree__prog_io_dcg__SubGoalA_515;

                                      *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__VarB_60;
                                      {
                                        parse_tree__prog_util__rename_in_goal_4_p_0(parse_tree__prog_io_dcg__VarA_58, parse_tree__prog_io_dcg__VarB_60, parse_tree__prog_io_dcg__SubGoalA0_61, &parse_tree__prog_io_dcg__SubGoalA_515);
                                      }
                                      {
                                        parse_tree__prog_io_dcg__Goal_523 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalA_515));
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_523, 3) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoalB0_62));
                                      }
                                    }
                                }
                            }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_523));
                          }
                        }
                      else
                        {
                          MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_678_678;
                          MR_Word parse_tree__prog_io_dcg__V_350_350;
                          MR_Word parse_tree__prog_io_dcg__V_351_351;
                          MR_Word parse_tree__prog_io_dcg__Specs_526;

                          *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__VarA_58;
                          parse_tree__prog_io_dcg__TypeCtorInfo_678_678 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
                          {
                            parse_tree__prog_io_dcg__V_350_350 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_678_678, parse_tree__prog_io_dcg__MaybeSubGoalA0_57);
                          }
                          {
                            parse_tree__prog_io_dcg__V_351_351 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_678_678, parse_tree__prog_io_dcg__MaybeSubGoalB0_59);
                          }
                          {
                            parse_tree__prog_io_dcg__Specs_526 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__V_350_350, parse_tree__prog_io_dcg__V_351_351);
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_526));
                          }
                        }
                    }
                }
              else
                {
                  MR_Word parse_tree__prog_io_dcg__V_352_352;
                  MR_Word parse_tree__prog_io_dcg__Spec_539;

                  {
                    parse_tree__prog_io_dcg__Spec_539 = parse_tree__prog_io_goal__should_have_two_goals_infix_3_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__Functor_12);
                  }
                  {
                    parse_tree__prog_io_dcg__V_352_352 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_352_352, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_539));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_352_352, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_352_352));
                  }
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            /* case "=" */
            {
              MR_Word parse_tree__prog_io_dcg__Arg0_88;
              MR_Word parse_tree__prog_io_dcg__V_109_109;

              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  parse_tree__prog_io_dcg__Arg0_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
                  parse_tree__prog_io_dcg__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_109_109 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  MR_Word parse_tree__prog_io_dcg__Arg_89;
                  MR_Word parse_tree__prog_io_dcg__DCGVarTerm_90;
                  MR_Word parse_tree__prog_io_dcg__Goal_636;

                  {
                    mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__Arg0_88, &parse_tree__prog_io_dcg__Arg_89);
                  }
                  {
                    parse_tree__prog_io_dcg__DCGVarTerm_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__DCGVarTerm_90, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__DCGVarTerm_90, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                  }
                  {
                    parse_tree__prog_io_dcg__Goal_636 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_636, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_636, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Arg_89));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_636, 2) = ((MR_Box) (parse_tree__prog_io_dcg__DCGVarTerm_90));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_636, 3) = ((MR_Box) ((MR_Integer) 0));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_636));
                  }
                }
              else
                {
                  MR_Word parse_tree__prog_io_dcg__V_111_111;
                  MR_Word parse_tree__prog_io_dcg__Spec_637;

                  {
                    parse_tree__prog_io_dcg__Spec_637 = parse_tree__prog_io_goal__should_have_two_terms_infix_3_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__Functor_12);
                  }
                  {
                    parse_tree__prog_io_dcg__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_111_111, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_637));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_111_111));
                  }
                }
              *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
              *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
              *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            /* case "[]" */
            if ((parse_tree__prog_io_dcg__Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word parse_tree__prog_io_dcg__V_215_215;
                MR_Word parse_tree__prog_io_dcg__V_216_216;
                MR_Word parse_tree__prog_io_dcg__Goal_598;

                {
                  parse_tree__prog_io_dcg__new_dcg_var_5_p_0(parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                }
                {
                  parse_tree__prog_io_dcg__V_215_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_215_215, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_215_215, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                }
                {
                  parse_tree__prog_io_dcg__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_216_216, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_216_216, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                }
                {
                  parse_tree__prog_io_dcg__Goal_598 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_598, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_598, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_215_215));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_598, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_216_216));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_598, 3) = ((MR_Box) ((MR_Integer) 0));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_598));
                }
              }
            else
              {
                MR_Word parse_tree__prog_io_dcg__V_204_204;
                MR_Word parse_tree__prog_io_dcg__V_205_205;
                MR_Word parse_tree__prog_io_dcg__V_210_210;
                MR_Word parse_tree__prog_io_dcg__Spec_601;

                {
                  parse_tree__prog_io_dcg__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_205_205, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_205_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[63])));
                }
                {
                  parse_tree__prog_io_dcg__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_204_204, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_205_205));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__prog_io_dcg__Spec_601 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_601, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_601, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_601, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_204_204));
                }
                {
                  parse_tree__prog_io_dcg__V_210_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_210_210, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_601));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_210_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_210_210));
                }
                *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
                *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
                *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
              }
            parse_tree__prog_io_dcg__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            /* case "[|]" */
            {
              MR_Word parse_tree__prog_io_dcg__V_113_113;
              MR_Word parse_tree__prog_io_dcg__V_114_114;
              MR_Word parse_tree__prog_io_dcg__X_82;
              MR_Word parse_tree__prog_io_dcg__Xs_83;

              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  parse_tree__prog_io_dcg__X_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
                  parse_tree__prog_io_dcg__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_113_113)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      parse_tree__prog_io_dcg__Xs_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_113_113, (MR_Integer) 0)));
                      parse_tree__prog_io_dcg__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_113_113, (MR_Integer) 1)));
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_114_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                }
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  MR_Word parse_tree__prog_io_dcg__ConsTerm0_84;
                  MR_Word parse_tree__prog_io_dcg__ConsTerm_85;
                  MR_Word parse_tree__prog_io_dcg__OutVarTerm_86;
                  MR_Word parse_tree__prog_io_dcg__Term_87;

                  {
                    parse_tree__prog_io_dcg__new_dcg_var_5_p_0(parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
                  {
                    parse_tree__prog_io_dcg__ConsTerm0_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ConsTerm0_84, 0) = ((MR_Box) (&parse_tree__prog_io_dcg_scalar_common_4[3]));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ConsTerm0_84, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Args_13));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ConsTerm0_84, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                  }
                  {
                    mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__ConsTerm0_84, &parse_tree__prog_io_dcg__ConsTerm_85);
                  }
                  {
                    parse_tree__prog_io_dcg__OutVarTerm_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__OutVarTerm_86, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__OutVarTerm_86, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                  }
                  {
                    parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_dcg__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_108_105_115_116_95_97_112_112_101_110_100_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_dcg__ConsTerm_85, parse_tree__prog_io_dcg__OutVarTerm_86, &parse_tree__prog_io_dcg__Term_87);
                  }
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      MR_Word parse_tree__prog_io_dcg__V_123_123;
                      MR_Word parse_tree__prog_io_dcg__Goal_613;

                      {
                        parse_tree__prog_io_dcg__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_123_123, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_123_123, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                      }
                      {
                        parse_tree__prog_io_dcg__Goal_613 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_613, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_613, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_123_123));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_613, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Term_87));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Goal_613, 3) = ((MR_Box) ((MR_Integer) 0));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_613));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__prog_io_dcg__V_138_138;
                      MR_Word parse_tree__prog_io_dcg__V_139_139;
                      MR_Word parse_tree__prog_io_dcg__V_144_144;
                      MR_Word parse_tree__prog_io_dcg__Spec_614;

                      {
                        parse_tree__prog_io_dcg__V_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_139_139, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[64])));
                      }
                      {
                        parse_tree__prog_io_dcg__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_138_138, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_139_139));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        parse_tree__prog_io_dcg__Spec_614 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_614, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_614, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_614, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_138_138));
                      }
                      {
                        parse_tree__prog_io_dcg__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_144_144, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_614));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_144_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_144_144));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__prog_io_dcg__V_171_171;
                  MR_Word parse_tree__prog_io_dcg__V_172_172;
                  MR_Word parse_tree__prog_io_dcg__V_177_177;
                  MR_Word parse_tree__prog_io_dcg__Spec_624;

                  {
                    parse_tree__prog_io_dcg__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_172_172, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_172_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[65])));
                  }
                  {
                    parse_tree__prog_io_dcg__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_171_171, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_172_172));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_171_171, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__prog_io_dcg__Spec_624 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_624, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_624, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_624, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_171_171));
                  }
                  {
                    parse_tree__prog_io_dcg__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_177_177, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_624));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_177_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_177_177));
                  }
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 7:
          {
            /* case "\+", "not" */
            {
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_442;
              MR_Word parse_tree__prog_io_dcg__V_415_415;

              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  parse_tree__prog_io_dcg__SubGoalTerm_442 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
                  parse_tree__prog_io_dcg__V_415_415 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_415_415 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  MR_Word parse_tree__prog_io_dcg__MaybeSubGoal_28;
                  MR_Word parse_tree__prog_io_dcg__V_29_29;

                  {
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_442, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoal_28, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, &parse_tree__prog_io_dcg__V_29_29);
                  }
                  if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoal_28)) == (MR_mktag((MR_Integer) 0))))
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = parse_tree__prog_io_dcg__MaybeSubGoal_28;
                  else
                    {
                      MR_Word parse_tree__prog_io_dcg__SubGoal_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoal_28, (MR_Integer) 0)));
                      MR_Word parse_tree__prog_io_dcg__V_418_418;

                      {
                        parse_tree__prog_io_dcg__V_418_418 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_418_418, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_418_418, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__V_418_418, 2) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_30));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_418_418));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__prog_io_dcg__V_419_419;
                  MR_Word parse_tree__prog_io_dcg__Spec_441;

                  {
                    parse_tree__prog_io_dcg__Spec_441 = parse_tree__prog_io_goal__should_have_one_goal_prefix_3_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__Functor_12);
                  }
                  {
                    parse_tree__prog_io_dcg__V_419_419 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_419_419, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_441));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_419_419, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_419_419));
                  }
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
                }
              *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 8:
          {
            /* case "all" */
            {
              MR_Word parse_tree__prog_io_dcg__QVarsTerm_34;
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_456;
              MR_Word parse_tree__prog_io_dcg__V_400_400;
              MR_Word parse_tree__prog_io_dcg__V_401_401;

              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  parse_tree__prog_io_dcg__QVarsTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
                  parse_tree__prog_io_dcg__V_400_400 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_400_400)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      parse_tree__prog_io_dcg__SubGoalTerm_456 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_400_400, (MR_Integer) 0)));
                      parse_tree__prog_io_dcg__V_401_401 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_400_400, (MR_Integer) 1)));
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_401_401 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                }
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_658_658 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                  MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_659_659;
                  MR_Word parse_tree__prog_io_dcg__GenericVarSet_35;
                  MR_Word parse_tree__prog_io_dcg__VarsContextPieces_36;
                  MR_Word parse_tree__prog_io_dcg__MaybeStateVarsAndVars_37;
                  MR_Word parse_tree__prog_io_dcg__V_402_402;
                  MR_Word parse_tree__prog_io_dcg__MaybeSubGoal_453;
                  MR_Word parse_tree__prog_io_dcg__Vars0_38;
                  MR_Word parse_tree__prog_io_dcg__StateVars0_39;
                  MR_Word parse_tree__prog_io_dcg__SubGoal_450;

                  {
                    mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__TypeCtorInfo_658_658, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, &parse_tree__prog_io_dcg__GenericVarSet_35);
                  }
                  parse_tree__prog_io_dcg__TypeCtorInfo_659_659 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                  {
                    parse_tree__prog_io_dcg__V_402_402 = mercury__cord__from_list_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_659_659, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[42]));
                  }
                  {
                    parse_tree__prog_io_dcg__VarsContextPieces_36 = mercury__cord__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_659_659, parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__V_402_402);
                  }
                  {
                    parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_658_658, parse_tree__prog_io_dcg__QVarsTerm_34, parse_tree__prog_io_dcg__GenericVarSet_35, parse_tree__prog_io_dcg__VarsContextPieces_36, &parse_tree__prog_io_dcg__MaybeStateVarsAndVars_37);
                  }
                  {
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_456, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoal_453, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeStateVarsAndVars_37)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      parse_tree__prog_io_dcg__Vars0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_37, (MR_Integer) 0)));
                      parse_tree__prog_io_dcg__StateVars0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_37, (MR_Integer) 1)));
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoal_453)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__prog_io_dcg__succeeded)
                        parse_tree__prog_io_dcg__SubGoal_450 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoal_453, (MR_Integer) 0)));
                    }
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      MR_Word parse_tree__prog_io_dcg__TypeInfo_664_664 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
                      MR_Word parse_tree__prog_io_dcg__TypeInfo_665_665 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3];
                      MR_Word parse_tree__prog_io_dcg__StateVars_40;
                      MR_Word parse_tree__prog_io_dcg__Vars_41;
                      MR_Word parse_tree__prog_io_dcg__Goal1_42;
                      MR_Word parse_tree__prog_io_dcg__Goal_446;

                      {
                        mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_664_664, parse_tree__prog_io_dcg__TypeInfo_665_665, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[3], parse_tree__prog_io_dcg__StateVars0_39, &parse_tree__prog_io_dcg__StateVars_40);
                      }
                      {
                        mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_664_664, parse_tree__prog_io_dcg__TypeInfo_665_665, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[4], parse_tree__prog_io_dcg__Vars0_38, &parse_tree__prog_io_dcg__Vars_41);
                      }
                      if ((parse_tree__prog_io_dcg__StateVars_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        parse_tree__prog_io_dcg__Goal1_42 = parse_tree__prog_io_dcg__SubGoal_450;
                      else
                        {
                          {
                            parse_tree__prog_io_dcg__Goal1_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_42, 1) = ((MR_Box) (((MR_Integer) 1 | (((MR_Integer) 1 << (MR_Integer) 1)))));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_42, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_42, 3) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_40));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_42, 4) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_450));
                          }
                        }
                      if ((parse_tree__prog_io_dcg__Vars_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        parse_tree__prog_io_dcg__Goal_446 = parse_tree__prog_io_dcg__Goal1_42;
                      else
                        {
                          {
                            parse_tree__prog_io_dcg__Goal_446 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_446, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_446, 1) = ((MR_Box) (((MR_Integer) 1 | (((MR_Integer) 0 << (MR_Integer) 1)))));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_446, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_446, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_41));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_446, 4) = ((MR_Box) (parse_tree__prog_io_dcg__Goal1_42));
                          }
                        }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_446));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__prog_io_dcg__TypeInfo_671_671 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[4];
                      MR_Word parse_tree__prog_io_dcg__V_410_410;
                      MR_Word parse_tree__prog_io_dcg__V_411_411;
                      MR_Word parse_tree__prog_io_dcg__Specs_447;

                      {
                        parse_tree__prog_io_dcg__V_410_410 = parse_tree__maybe_error__get_any_errors2_1_f_0(parse_tree__prog_io_dcg__TypeInfo_671_671, parse_tree__prog_io_dcg__TypeInfo_671_671, parse_tree__prog_io_dcg__MaybeStateVarsAndVars_37);
                      }
                      {
                        parse_tree__prog_io_dcg__V_411_411 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, parse_tree__prog_io_dcg__MaybeSubGoal_453);
                      }
                      {
                        parse_tree__prog_io_dcg__Specs_447 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__V_410_410, parse_tree__prog_io_dcg__V_411_411);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_447));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__prog_io_dcg__V_413_413;
                  MR_Word parse_tree__prog_io_dcg__Spec_455;

                  {
                    parse_tree__prog_io_dcg__Spec_455 = parse_tree__prog_io_goal__should_have_one_x_one_goal_prefix_4_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, (MR_String) "a list of variables", parse_tree__prog_io_dcg__Functor_12);
                  }
                  {
                    parse_tree__prog_io_dcg__V_413_413 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_413_413, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_455));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_413_413, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_413_413));
                  }
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 9:
          {
            /* case "else" */
            {
              MR_Word parse_tree__prog_io_dcg__ElseGoalTerm_66;
              MR_Word parse_tree__prog_io_dcg__CondContext_68;
              MR_Word parse_tree__prog_io_dcg__CondGoalTerm_556;
              MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_557;
              MR_Word parse_tree__prog_io_dcg__CondThenTerm_65;
              MR_Word parse_tree__prog_io_dcg__V_283_283;
              MR_Word parse_tree__prog_io_dcg__V_284_284;
              MR_Word parse_tree__prog_io_dcg__V_285_285;
              MR_String parse_tree__prog_io_dcg__V_286_286;
              MR_Word parse_tree__prog_io_dcg__V_287_287;
              MR_Word parse_tree__prog_io_dcg__V_288_288;
              MR_Word parse_tree__prog_io_dcg__V_289_289;
              MR_String parse_tree__prog_io_dcg__V_290_290;
              MR_Word parse_tree__prog_io_dcg__V_291_291;
              MR_Word parse_tree__prog_io_dcg__V_292_292;
              MR_Word parse_tree__prog_io_dcg__V_293_293;
              MR_Word parse_tree__prog_io_dcg__V_294_294;
              MR_Word parse_tree__prog_io_dcg__V_67_67;

              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  parse_tree__prog_io_dcg__CondThenTerm_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
                  parse_tree__prog_io_dcg__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_283_283)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      parse_tree__prog_io_dcg__ElseGoalTerm_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_283_283, (MR_Integer) 0)));
                      parse_tree__prog_io_dcg__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_283_283, (MR_Integer) 1)));
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_284_284 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (parse_tree__prog_io_dcg__succeeded)
                        {
                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__CondThenTerm_65)) == (MR_mktag((MR_Integer) 0)));
                          if (parse_tree__prog_io_dcg__succeeded)
                            {
                              parse_tree__prog_io_dcg__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__CondThenTerm_65, (MR_Integer) 0)));
                              parse_tree__prog_io_dcg__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__CondThenTerm_65, (MR_Integer) 1)));
                              parse_tree__prog_io_dcg__CondContext_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__CondThenTerm_65, (MR_Integer) 2)));
                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_285_285)) == (MR_mktag((MR_Integer) 0)));
                              if (parse_tree__prog_io_dcg__succeeded)
                                {
                                  parse_tree__prog_io_dcg__V_286_286 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_285_285, (MR_Integer) 0)));
                                  parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_286_286, (MR_String) "if") == 0);
                                  if (parse_tree__prog_io_dcg__succeeded)
                                    {
                                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_287_287)) == (MR_mktag((MR_Integer) 1)));
                                      if (parse_tree__prog_io_dcg__succeeded)
                                        {
                                          parse_tree__prog_io_dcg__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_287_287, (MR_Integer) 0)));
                                          parse_tree__prog_io_dcg__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_287_287, (MR_Integer) 1)));
                                          parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_294_294 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                          if (parse_tree__prog_io_dcg__succeeded)
                                            {
                                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_288_288)) == (MR_mktag((MR_Integer) 0)));
                                              if (parse_tree__prog_io_dcg__succeeded)
                                                {
                                                  parse_tree__prog_io_dcg__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_288_288, (MR_Integer) 0)));
                                                  parse_tree__prog_io_dcg__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_288_288, (MR_Integer) 1)));
                                                  parse_tree__prog_io_dcg__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_288_288, (MR_Integer) 2)));
                                                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_289_289)) == (MR_mktag((MR_Integer) 0)));
                                                  if (parse_tree__prog_io_dcg__succeeded)
                                                    {
                                                      parse_tree__prog_io_dcg__V_290_290 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_289_289, (MR_Integer) 0)));
                                                      parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_290_290, (MR_String) "then") == 0);
                                                      if (parse_tree__prog_io_dcg__succeeded)
                                                        {
                                                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_291_291)) == (MR_mktag((MR_Integer) 1)));
                                                          if (parse_tree__prog_io_dcg__succeeded)
                                                            {
                                                              parse_tree__prog_io_dcg__CondGoalTerm_556 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_291_291, (MR_Integer) 0)));
                                                              parse_tree__prog_io_dcg__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_291_291, (MR_Integer) 1)));
                                                              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_292_292)) == (MR_mktag((MR_Integer) 1)));
                                                              if (parse_tree__prog_io_dcg__succeeded)
                                                                {
                                                                  parse_tree__prog_io_dcg__ThenGoalTerm_557 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_292_292, (MR_Integer) 0)));
                                                                  parse_tree__prog_io_dcg__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_292_292, (MR_Integer) 1)));
                                                                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_293_293 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  parse_tree__prog_io_dcg__parse_dcg_if_then_else_12_p_0(parse_tree__prog_io_dcg__CondGoalTerm_556, parse_tree__prog_io_dcg__ThenGoalTerm_557, parse_tree__prog_io_dcg__ElseGoalTerm_66, parse_tree__prog_io_dcg__CondContext_68, parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__MaybeGoal_16, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                }
              else
                {
                  MR_Word parse_tree__prog_io_dcg__V_320_320;
                  MR_Word parse_tree__prog_io_dcg__V_321_321;
                  MR_Word parse_tree__prog_io_dcg__V_326_326;
                  MR_Word parse_tree__prog_io_dcg__Spec_554;

                  {
                    parse_tree__prog_io_dcg__V_321_321 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_321_321, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_321_321, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[66])));
                  }
                  {
                    parse_tree__prog_io_dcg__V_320_320 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_320_320, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_321_321));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_320_320, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__prog_io_dcg__Spec_554 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_554, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_554, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_554, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_320_320));
                  }
                  {
                    parse_tree__prog_io_dcg__V_326_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_326_326, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_554));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_326_326, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_326_326));
                  }
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 10:
          {
            /* case "if" */
            {
              MR_Word parse_tree__prog_io_dcg__CondGoalTerm_578;
              MR_Word parse_tree__prog_io_dcg__ThenGoalTerm_579;
              MR_Word parse_tree__prog_io_dcg__V_238_238;
              MR_Word parse_tree__prog_io_dcg__V_239_239;
              MR_String parse_tree__prog_io_dcg__V_240_240;
              MR_Word parse_tree__prog_io_dcg__V_241_241;
              MR_Word parse_tree__prog_io_dcg__V_242_242;
              MR_Word parse_tree__prog_io_dcg__V_243_243;
              MR_Word parse_tree__prog_io_dcg__V_244_244;
              MR_Word parse_tree__prog_io_dcg__V_70_70;

              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  parse_tree__prog_io_dcg__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
                  parse_tree__prog_io_dcg__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_244_244 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_238_238)) == (MR_mktag((MR_Integer) 0)));
                      if (parse_tree__prog_io_dcg__succeeded)
                        {
                          parse_tree__prog_io_dcg__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_238_238, (MR_Integer) 0)));
                          parse_tree__prog_io_dcg__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_238_238, (MR_Integer) 1)));
                          parse_tree__prog_io_dcg__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_238_238, (MR_Integer) 2)));
                          parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_239_239)) == (MR_mktag((MR_Integer) 0)));
                          if (parse_tree__prog_io_dcg__succeeded)
                            {
                              parse_tree__prog_io_dcg__V_240_240 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_239_239, (MR_Integer) 0)));
                              parse_tree__prog_io_dcg__succeeded = (strcmp(parse_tree__prog_io_dcg__V_240_240, (MR_String) "then") == 0);
                              if (parse_tree__prog_io_dcg__succeeded)
                                {
                                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_241_241)) == (MR_mktag((MR_Integer) 1)));
                                  if (parse_tree__prog_io_dcg__succeeded)
                                    {
                                      parse_tree__prog_io_dcg__CondGoalTerm_578 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_241_241, (MR_Integer) 0)));
                                      parse_tree__prog_io_dcg__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_241_241, (MR_Integer) 1)));
                                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_242_242)) == (MR_mktag((MR_Integer) 1)));
                                      if (parse_tree__prog_io_dcg__succeeded)
                                        {
                                          parse_tree__prog_io_dcg__ThenGoalTerm_579 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_242_242, (MR_Integer) 0)));
                                          parse_tree__prog_io_dcg__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_242_242, (MR_Integer) 1)));
                                          parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_243_243 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  MR_Word parse_tree__prog_io_dcg__MaybeVarsCondGoal_72;
                  MR_Word parse_tree__prog_io_dcg__MaybeThenGoal_73;
                  MR_Word parse_tree__prog_io_dcg__CondGoal_75;
                  MR_Word parse_tree__prog_io_dcg__ThenGoal_76;
                  MR_Word parse_tree__prog_io_dcg__StateVars_565;
                  MR_Word parse_tree__prog_io_dcg__Vars_566;

                  {
                    parse_tree__prog_io_dcg__parse_dcg_if_then_12_p_0(parse_tree__prog_io_dcg__CondGoalTerm_578, parse_tree__prog_io_dcg__ThenGoalTerm_579, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeVarsCondGoal_72, &parse_tree__prog_io_dcg__MaybeThenGoal_73, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeVarsCondGoal_72)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      parse_tree__prog_io_dcg__Vars_566 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCondGoal_72, (MR_Integer) 0)));
                      parse_tree__prog_io_dcg__StateVars_565 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCondGoal_72, (MR_Integer) 1)));
                      parse_tree__prog_io_dcg__CondGoal_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeVarsCondGoal_72, (MR_Integer) 2)));
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeThenGoal_73)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__prog_io_dcg__succeeded)
                        parse_tree__prog_io_dcg__ThenGoal_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeThenGoal_73, (MR_Integer) 0)));
                    }
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      MR_Word parse_tree__prog_io_dcg__ElseGoal_77;
                      MR_Word parse_tree__prog_io_dcg__Goal_561;

                      {
                        parse_tree__prog_io_dcg__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3], ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98)), ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97)));
                      }
                      if (parse_tree__prog_io_dcg__succeeded)
                        {
                          parse_tree__prog_io_dcg__ElseGoal_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__ElseGoal_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__ElseGoal_77, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                        }
                      else
                        {
                          MR_Word parse_tree__prog_io_dcg__V_248_248;
                          MR_Word parse_tree__prog_io_dcg__V_249_249;

                          {
                            parse_tree__prog_io_dcg__V_248_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_248_248, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98));
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_248_248, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                          }
                          {
                            parse_tree__prog_io_dcg__V_249_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_249_249, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97));
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_249_249, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                          }
                          {
                            parse_tree__prog_io_dcg__ElseGoal_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ElseGoal_77, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ElseGoal_77, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_248_248));
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ElseGoal_77, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_249_249));
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ElseGoal_77, 3) = ((MR_Box) ((MR_Integer) 0));
                          }
                        }
                      {
                        parse_tree__prog_io_dcg__Goal_561 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_561, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_561, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_561, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_566));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_561, 3) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_565));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_561, 4) = ((MR_Box) (parse_tree__prog_io_dcg__CondGoal_75));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_561, 5) = ((MR_Box) (parse_tree__prog_io_dcg__ThenGoal_76));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_561, 6) = ((MR_Box) (parse_tree__prog_io_dcg__ElseGoal_77));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_561));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__prog_io_dcg__TypeInfo_680_680 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[5];
                      MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_681_681 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
                      MR_Word parse_tree__prog_io_dcg__V_251_251;
                      MR_Word parse_tree__prog_io_dcg__V_252_252;
                      MR_Word parse_tree__prog_io_dcg__Specs_562;

                      {
                        parse_tree__prog_io_dcg__V_251_251 = parse_tree__maybe_error__get_any_errors3_1_f_0(parse_tree__prog_io_dcg__TypeInfo_680_680, parse_tree__prog_io_dcg__TypeInfo_680_680, parse_tree__prog_io_dcg__TypeCtorInfo_681_681, parse_tree__prog_io_dcg__MaybeVarsCondGoal_72);
                      }
                      {
                        parse_tree__prog_io_dcg__V_252_252 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_681_681, parse_tree__prog_io_dcg__MaybeThenGoal_73);
                      }
                      {
                        parse_tree__prog_io_dcg__Specs_562 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__V_251_251, parse_tree__prog_io_dcg__V_252_252);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_562));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__prog_io_dcg__V_275_275;
                  MR_Word parse_tree__prog_io_dcg__V_276_276;
                  MR_Word parse_tree__prog_io_dcg__V_281_281;
                  MR_Word parse_tree__prog_io_dcg__Spec_571;

                  {
                    parse_tree__prog_io_dcg__V_276_276 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_276_276, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_276_276, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[66])));
                  }
                  {
                    parse_tree__prog_io_dcg__V_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_275_275, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_276_276));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_275_275, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__prog_io_dcg__Spec_571 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_571, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_571, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_571, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_275_275));
                  }
                  {
                    parse_tree__prog_io_dcg__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_281_281, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_571));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_281_281, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_281_281));
                  }
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 11:
          {
            /* case "impure" */
            {
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_21;
              MR_Word parse_tree__prog_io_dcg__V_427_427;

              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  parse_tree__prog_io_dcg__SubGoalTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
                  parse_tree__prog_io_dcg__V_427_427 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_427_427 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  MR_Word parse_tree__prog_io_dcg__MaybeGoal0_22;

                  {
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_21, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeGoal0_22, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
                  {
                    parse_tree__prog_io_goal__apply_purity_marker_to_maybe_goal_4_p_0(parse_tree__prog_io_dcg__SubGoalTerm_21, (MR_Integer) 2, parse_tree__prog_io_dcg__MaybeGoal0_22, parse_tree__prog_io_dcg__MaybeGoal_16);
                  }
                }
              else
                {
                  MR_Word parse_tree__prog_io_dcg__Spec_23;
                  MR_Word parse_tree__prog_io_dcg__V_431_431;

                  {
                    parse_tree__prog_io_dcg__Spec_23 = parse_tree__prog_io_goal__should_have_one_goal_prefix_3_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__Functor_12);
                  }
                  {
                    parse_tree__prog_io_dcg__V_431_431 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_431_431, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_23));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_431_431, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_431_431));
                  }
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            /* case "promise_impure" */
            {
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_435;
              MR_Word parse_tree__prog_io_dcg__V_421_421;

              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  parse_tree__prog_io_dcg__SubGoalTerm_435 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
                  parse_tree__prog_io_dcg__V_421_421 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_421_421 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  MR_Word parse_tree__prog_io_dcg__MaybeGoal0_433;

                  {
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_435, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeGoal0_433, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
                  if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal0_433)) == (MR_mktag((MR_Integer) 0))))
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = parse_tree__prog_io_dcg__MaybeGoal0_433;
                  else
                    {
                      MR_Word parse_tree__prog_io_dcg__Goal0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal0_433, (MR_Integer) 0)));
                      MR_Word parse_tree__prog_io_dcg__Goal_26;

                      {
                        parse_tree__prog_io_dcg__Goal_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_26, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_26, 2) = ((MR_Box) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_26, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Goal0_25));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_26));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__prog_io_dcg__V_425_425;
                  MR_Word parse_tree__prog_io_dcg__Spec_434;

                  {
                    parse_tree__prog_io_dcg__Spec_434 = parse_tree__prog_io_goal__should_have_one_goal_prefix_3_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__Functor_12);
                  }
                  {
                    parse_tree__prog_io_dcg__V_425_425 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_425_425, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_434));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_425_425, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_425_425));
                  }
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 13:
          {
            /* case "promise_pure" */
            {
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_717;
              MR_Word parse_tree__prog_io_dcg__V_695_695;

              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  parse_tree__prog_io_dcg__SubGoalTerm_717 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
                  parse_tree__prog_io_dcg__V_695_695 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_695_695 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  MR_Word parse_tree__prog_io_dcg__MaybeGoal0_705;

                  {
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_717, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeGoal0_705, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
                  if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal0_705)) == (MR_mktag((MR_Integer) 0))))
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = parse_tree__prog_io_dcg__MaybeGoal0_705;
                  else
                    {
                      MR_Word parse_tree__prog_io_dcg__Goal0_697 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal0_705, (MR_Integer) 0)));
                      MR_Word parse_tree__prog_io_dcg__Goal_698;

                      {
                        parse_tree__prog_io_dcg__Goal_698 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_698, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_698, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_698, 2) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_698, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Goal0_697));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_698));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__prog_io_dcg__V_706_706;
                  MR_Word parse_tree__prog_io_dcg__Spec_708;

                  {
                    parse_tree__prog_io_dcg__Spec_708 = parse_tree__prog_io_goal__should_have_one_goal_prefix_3_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__Functor_12);
                  }
                  {
                    parse_tree__prog_io_dcg__V_706_706 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_706_706, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_708));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_706_706, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_706_706));
                  }
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 14:
          {
            /* case "promise_semipure" */
            {
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_750;
              MR_Word parse_tree__prog_io_dcg__V_728_728;

              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  parse_tree__prog_io_dcg__SubGoalTerm_750 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
                  parse_tree__prog_io_dcg__V_728_728 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_728_728 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  MR_Word parse_tree__prog_io_dcg__MaybeGoal0_738;

                  {
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_750, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeGoal0_738, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
                  if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeGoal0_738)) == (MR_mktag((MR_Integer) 0))))
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = parse_tree__prog_io_dcg__MaybeGoal0_738;
                  else
                    {
                      MR_Word parse_tree__prog_io_dcg__Goal0_730 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeGoal0_738, (MR_Integer) 0)));
                      MR_Word parse_tree__prog_io_dcg__Goal_731;

                      {
                        parse_tree__prog_io_dcg__Goal_731 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_731, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_731, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_731, 2) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_731, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Goal0_730));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_731));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__prog_io_dcg__V_739_739;
                  MR_Word parse_tree__prog_io_dcg__Spec_741;

                  {
                    parse_tree__prog_io_dcg__Spec_741 = parse_tree__prog_io_goal__should_have_one_goal_prefix_3_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__Functor_12);
                  }
                  {
                    parse_tree__prog_io_dcg__V_739_739 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_739_739, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_741));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_739_739, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_739_739));
                  }
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 15:
          {
            /* case "semipure" */
            {
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_766;
              MR_Word parse_tree__prog_io_dcg__V_761_761;

              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  parse_tree__prog_io_dcg__SubGoalTerm_766 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
                  parse_tree__prog_io_dcg__V_761_761 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
                  parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_761_761 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  MR_Word parse_tree__prog_io_dcg__MaybeGoal0_762;

                  {
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_766, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeGoal0_762, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
                  {
                    parse_tree__prog_io_goal__apply_purity_marker_to_maybe_goal_4_p_0(parse_tree__prog_io_dcg__SubGoalTerm_766, (MR_Integer) 1, parse_tree__prog_io_dcg__MaybeGoal0_762, parse_tree__prog_io_dcg__MaybeGoal_16);
                  }
                }
              else
                {
                  MR_Word parse_tree__prog_io_dcg__Spec_763;
                  MR_Word parse_tree__prog_io_dcg__V_764_764;

                  {
                    parse_tree__prog_io_dcg__Spec_763 = parse_tree__prog_io_goal__should_have_one_goal_prefix_3_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__Functor_12);
                  }
                  {
                    parse_tree__prog_io_dcg__V_764_764 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_764_764, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_763));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_764_764, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_764_764));
                  }
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 16:
          {
            /* case "some" */
            {
              MR_Word parse_tree__prog_io_dcg__QVarsTerm_899;
              MR_Word parse_tree__prog_io_dcg__SubGoalTerm_929;
              MR_Word parse_tree__prog_io_dcg__V_779_779;
              MR_Word parse_tree__prog_io_dcg__V_780_780;

              parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  parse_tree__prog_io_dcg__QVarsTerm_899 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
                  parse_tree__prog_io_dcg__V_779_779 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__V_779_779)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      parse_tree__prog_io_dcg__SubGoalTerm_929 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_779_779, (MR_Integer) 0)));
                      parse_tree__prog_io_dcg__V_780_780 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_779_779, (MR_Integer) 1)));
                      parse_tree__prog_io_dcg__succeeded = (parse_tree__prog_io_dcg__V_780_780 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                }
              if (parse_tree__prog_io_dcg__succeeded)
                {
                  MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_658_884 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                  MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_659_885;
                  MR_Word parse_tree__prog_io_dcg__GenericVarSet_860;
                  MR_Word parse_tree__prog_io_dcg__VarsContextPieces_861;
                  MR_Word parse_tree__prog_io_dcg__MaybeStateVarsAndVars_862;
                  MR_Word parse_tree__prog_io_dcg__V_872_872;
                  MR_Word parse_tree__prog_io_dcg__MaybeSubGoal_882;
                  MR_Word parse_tree__prog_io_dcg__Vars0_833;
                  MR_Word parse_tree__prog_io_dcg__StateVars0_834;
                  MR_Word parse_tree__prog_io_dcg__SubGoal_850;

                  {
                    mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__TypeCtorInfo_658_884, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, &parse_tree__prog_io_dcg__GenericVarSet_860);
                  }
                  parse_tree__prog_io_dcg__TypeCtorInfo_659_885 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                  {
                    parse_tree__prog_io_dcg__V_872_872 = mercury__cord__from_list_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_659_885, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[57]));
                  }
                  {
                    parse_tree__prog_io_dcg__VarsContextPieces_861 = mercury__cord__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_659_885, parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__V_872_872);
                  }
                  {
                    parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_658_884, parse_tree__prog_io_dcg__QVarsTerm_899, parse_tree__prog_io_dcg__GenericVarSet_860, parse_tree__prog_io_dcg__VarsContextPieces_861, &parse_tree__prog_io_dcg__MaybeStateVarsAndVars_862);
                  }
                  {
                    parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__SubGoalTerm_929, parse_tree__prog_io_dcg__ContextPieces_15, &parse_tree__prog_io_dcg__MaybeSubGoal_882, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98);
                  }
                  parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeStateVarsAndVars_862)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      parse_tree__prog_io_dcg__Vars0_833 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_862, (MR_Integer) 0)));
                      parse_tree__prog_io_dcg__StateVars0_834 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeStateVarsAndVars_862, (MR_Integer) 1)));
                      parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeSubGoal_882)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__prog_io_dcg__succeeded)
                        parse_tree__prog_io_dcg__SubGoal_850 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeSubGoal_882, (MR_Integer) 0)));
                    }
                  if (parse_tree__prog_io_dcg__succeeded)
                    {
                      MR_Word parse_tree__prog_io_dcg__TypeInfo_664_823 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[2];
                      MR_Word parse_tree__prog_io_dcg__TypeInfo_665_824 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[3];
                      MR_Word parse_tree__prog_io_dcg__StateVars_809;
                      MR_Word parse_tree__prog_io_dcg__Vars_810;
                      MR_Word parse_tree__prog_io_dcg__Goal1_811;
                      MR_Word parse_tree__prog_io_dcg__Goal_820;

                      {
                        mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_664_823, parse_tree__prog_io_dcg__TypeInfo_665_824, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[5], parse_tree__prog_io_dcg__StateVars0_834, &parse_tree__prog_io_dcg__StateVars_809);
                      }
                      {
                        mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_664_823, parse_tree__prog_io_dcg__TypeInfo_665_824, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[6], parse_tree__prog_io_dcg__Vars0_833, &parse_tree__prog_io_dcg__Vars_810);
                      }
                      if ((parse_tree__prog_io_dcg__StateVars_809 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        parse_tree__prog_io_dcg__Goal1_811 = parse_tree__prog_io_dcg__SubGoal_850;
                      else
                        {
                          {
                            parse_tree__prog_io_dcg__Goal1_811 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_811, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_811, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 1 << (MR_Integer) 1)))));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_811, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_811, 3) = ((MR_Box) (parse_tree__prog_io_dcg__StateVars_809));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal1_811, 4) = ((MR_Box) (parse_tree__prog_io_dcg__SubGoal_850));
                          }
                        }
                      if ((parse_tree__prog_io_dcg__Vars_810 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        parse_tree__prog_io_dcg__Goal_820 = parse_tree__prog_io_dcg__Goal1_811;
                      else
                        {
                          {
                            parse_tree__prog_io_dcg__Goal_820 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_820, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_820, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_820, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_820, 3) = ((MR_Box) (parse_tree__prog_io_dcg__Vars_810));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_dcg__Goal_820, 4) = ((MR_Box) (parse_tree__prog_io_dcg__Goal1_811));
                          }
                        }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_820));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__prog_io_dcg__TypeInfo_671_831 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[4];
                      MR_Word parse_tree__prog_io_dcg__V_827_827;
                      MR_Word parse_tree__prog_io_dcg__V_828_828;
                      MR_Word parse_tree__prog_io_dcg__Specs_829;

                      {
                        parse_tree__prog_io_dcg__V_827_827 = parse_tree__maybe_error__get_any_errors2_1_f_0(parse_tree__prog_io_dcg__TypeInfo_671_831, parse_tree__prog_io_dcg__TypeInfo_671_831, parse_tree__prog_io_dcg__MaybeStateVarsAndVars_862);
                      }
                      {
                        parse_tree__prog_io_dcg__V_828_828 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, parse_tree__prog_io_dcg__MaybeSubGoal_882);
                      }
                      {
                        parse_tree__prog_io_dcg__Specs_829 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__V_827_827, parse_tree__prog_io_dcg__V_828_828);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_829));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__prog_io_dcg__V_896_896;
                  MR_Word parse_tree__prog_io_dcg__Spec_898;

                  {
                    parse_tree__prog_io_dcg__Spec_898 = parse_tree__prog_io_goal__should_have_one_x_one_goal_prefix_4_f_0(parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__Context_14, (MR_String) "a list of variables", parse_tree__prog_io_dcg__Functor_12);
                  }
                  {
                    parse_tree__prog_io_dcg__V_896_896 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_896_896, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_898));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_896_896, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_896_896));
                  }
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
                  *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
                }
              parse_tree__prog_io_dcg__succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 17:
          {
            /* case "{}" */
            if ((parse_tree__prog_io_dcg__Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word parse_tree__prog_io_dcg__V_230_230;
                MR_Word parse_tree__prog_io_dcg__V_231_231;
                MR_Word parse_tree__prog_io_dcg__V_236_236;
                MR_Word parse_tree__prog_io_dcg__Spec_589;

                {
                  parse_tree__prog_io_dcg__V_231_231 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_231_231, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_14));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_231_231, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_dcg_scalar_common_1[67])));
                }
                {
                  parse_tree__prog_io_dcg__V_230_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_230_230, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_231_231));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_230_230, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__prog_io_dcg__Spec_589 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_589, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_589, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__Spec_589, 2) = ((MR_Box) (parse_tree__prog_io_dcg__V_230_230));
                }
                {
                  parse_tree__prog_io_dcg__V_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_236_236, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Spec_589));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_236_236, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__prog_io_dcg__MaybeGoal_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_236_236));
                }
                *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93;
              }
            else
              {
                MR_Word parse_tree__prog_io_dcg__HeadGoal_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 0)));
                MR_Word parse_tree__prog_io_dcg__TailGoals_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_13, (MR_Integer) 1)));
                MR_Word parse_tree__prog_io_dcg__V_218_218;
                MR_Word parse_tree__prog_io_dcg__SubGoal_591;

                {
                  parse_tree__prog_io_dcg__V_218_218 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_218_218, 0) = ((MR_Box) (parse_tree__prog_io_dcg__HeadGoal_78));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_218_218, 1) = ((MR_Box) (parse_tree__prog_io_dcg__TailGoals_79));
                }
                {
                  parse_tree__prog_io_util__one_or_more_to_conjunction_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_dcg__Context_14, parse_tree__prog_io_dcg__V_218_218, &parse_tree__prog_io_dcg__SubGoal_591);
                }
                {
                  parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io_dcg__SubGoal_591, parse_tree__prog_io_dcg__ContextPieces_15, parse_tree__prog_io_dcg__MaybeGoal_16, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_93, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_94);
                }
              }
            *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_96 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_95;
            *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_98 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_97;
            parse_tree__prog_io_dcg__succeeded = MR_TRUE;
          }
          break;
      }
    }
    return parse_tree__prog_io_dcg__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__make_dcg_call_10_p_0(
  MR_Word parse_tree__prog_io_dcg__SymName_11,
  MR_Word parse_tree__prog_io_dcg__Args0_12,
  MR_Word parse_tree__prog_io_dcg__Context_13,
  MR_Word * parse_tree__prog_io_dcg__Goal_14,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_21,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_22,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_23,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_24,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_25,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_26)
{
  {
    MR_bool parse_tree__prog_io_dcg__succeeded;
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_51;
    MR_Word parse_tree__prog_io_dcg__Args_20;
    MR_Word parse_tree__prog_io_dcg__V_30_30;
    MR_Word parse_tree__prog_io_dcg__V_31_31;
    MR_Word parse_tree__prog_io_dcg__V_32_32;
    MR_Word parse_tree__prog_io_dcg__V_33_33;
    MR_Integer parse_tree__prog_io_dcg__N_44;
    MR_String parse_tree__prog_io_dcg__StringN_45;
    MR_String parse_tree__prog_io_dcg__VarName_46;
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_49;

    {
      mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_44, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_23, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_24);
    }
    {
      mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_44, &parse_tree__prog_io_dcg__StringN_45);
    }
    {
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_45, &parse_tree__prog_io_dcg__VarName_46);
    }
    parse_tree__prog_io_dcg__TypeCtorInfo_20_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_51, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_26, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_21, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_49);
    }
    {
      mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_51, *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_26, parse_tree__prog_io_dcg__VarName_46, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_49, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_22);
    }
    {
      parse_tree__prog_io_dcg__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_25));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_13));
    }
    {
      parse_tree__prog_io_dcg__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_33_33, 0) = ((MR_Box) (*parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_26));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_13));
    }
    {
      parse_tree__prog_io_dcg__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_33_33));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_io_dcg__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_31_31));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_32_32));
    }
    {
      parse_tree__prog_io_dcg__Args_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[1], parse_tree__prog_io_dcg__Args0_12, parse_tree__prog_io_dcg__V_30_30);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_io_dcg__Goal_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Context_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_dcg__SymName_11));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Args_20));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 0));
    }
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0_1(
  MR_Box parse_tree__prog_io_dcg__closure_arg,
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_48;

    {
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_goal__118__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_48);
    }
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_48));
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(
  MR_Word parse_tree__prog_io_dcg__Term_10,
  MR_Word parse_tree__prog_io_dcg__ContextPieces_11,
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_12,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_25,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_26,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_27,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_28,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_29,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_30)
{
  {
    MR_bool parse_tree__prog_io_dcg__succeeded;
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_45_45 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_46_46;
    MR_Word parse_tree__prog_io_dcg__Context_16;
    MR_Word parse_tree__prog_io_dcg__ProgTerm_17;
    MR_Word parse_tree__prog_io_dcg__SymName_18;
    MR_Word parse_tree__prog_io_dcg__Args0_19;

    {
      parse_tree__prog_io_dcg__Context_16 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_45_45, parse_tree__prog_io_dcg__Term_10);
    }
    parse_tree__prog_io_dcg__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__term__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_45_45, parse_tree__prog_io_dcg__TypeCtorInfo_46_46, parse_tree__prog_io_dcg__Term_10, &parse_tree__prog_io_dcg__ProgTerm_17);
    }
    {
      parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_46_46, parse_tree__prog_io_dcg__ProgTerm_17, &parse_tree__prog_io_dcg__SymName_18, &parse_tree__prog_io_dcg__Args0_19);
    }
    if (parse_tree__prog_io_dcg__succeeded)
      {
        MR_Word parse_tree__prog_io_dcg__MaybeGoalPrime_22;
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_32_32;
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33_33;
        MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_34_34;
        MR_Word parse_tree__prog_io_dcg__TypeInfo_51_51;
        MR_Word parse_tree__prog_io_dcg__TypeInfo_52_52;
        MR_String parse_tree__prog_io_dcg__Functor_20;
        MR_Word parse_tree__prog_io_dcg__Args1_21;
        MR_Word parse_tree__prog_io_dcg__V_31_31;

        parse_tree__prog_io_dcg__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_dcg__SymName_18)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_dcg__succeeded)
          {
            parse_tree__prog_io_dcg__Functor_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__SymName_18, (MR_Integer) 0)));
            parse_tree__prog_io_dcg__V_31_31 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[1];
            parse_tree__prog_io_dcg__TypeInfo_51_51 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[1];
            parse_tree__prog_io_dcg__TypeInfo_52_52 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[0];
            {
              mercury__list__map_3_p_0(parse_tree__prog_io_dcg__TypeInfo_51_51, parse_tree__prog_io_dcg__TypeInfo_52_52, parse_tree__prog_io_dcg__V_31_31, parse_tree__prog_io_dcg__Args0_19, &parse_tree__prog_io_dcg__Args1_21);
            }
            {
              parse_tree__prog_io_dcg__succeeded = parse_tree__prog_io_dcg__parse_non_call_dcg_goal_11_p_0(parse_tree__prog_io_dcg__Functor_20, parse_tree__prog_io_dcg__Args1_21, parse_tree__prog_io_dcg__Context_16, parse_tree__prog_io_dcg__ContextPieces_11, &parse_tree__prog_io_dcg__MaybeGoalPrime_22, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_25, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_32_32, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_27, &parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33_33, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_29, &parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_34_34);
            }
          }
        if (parse_tree__prog_io_dcg__succeeded)
          {
            *parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_30 = parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_34_34;
            *parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_28 = parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_33_33;
            *parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_26 = parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_32_32;
            *parse_tree__prog_io_dcg__MaybeGoal_12 = parse_tree__prog_io_dcg__MaybeGoalPrime_22;
          }
        else
          {
            MR_Word parse_tree__prog_io_dcg__Goal_23;

            {
              parse_tree__prog_io_dcg__make_dcg_call_10_p_0(parse_tree__prog_io_dcg__SymName_18, parse_tree__prog_io_dcg__Args0_19, parse_tree__prog_io_dcg__Context_16, &parse_tree__prog_io_dcg__Goal_23, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_25, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_26, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_27, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_28, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_29, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_30);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_io_dcg__MaybeGoal_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_23));
            }
          }
      }
    else
      {
        MR_Word parse_tree__prog_io_dcg__Args_24;
        MR_Word parse_tree__prog_io_dcg__Goal_44;

        {
          parse_tree__prog_io_dcg__Args_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_24, 0) = ((MR_Box) (parse_tree__prog_io_dcg__ProgTerm_17));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__Args_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__prog_io_dcg__make_dcg_call_10_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_4[0], parse_tree__prog_io_dcg__Args_24, parse_tree__prog_io_dcg__Context_16, &parse_tree__prog_io_dcg__Goal_44, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_25, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_26, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_0_27, parse_tree__prog_io_dcg__STATE_VARIABLE_Counter_28, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_0_29, parse_tree__prog_io_dcg__STATE_VARIABLE_DCGVar_30);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_io_dcg__MaybeGoal_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Goal_44));
        }
      }
  }
}

void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_pred_goal_7_p_0(
  MR_Word parse_tree__prog_io_dcg__GoalTerm_8,
  MR_Word parse_tree__prog_io_dcg__ContextPieces_9,
  MR_Word * parse_tree__prog_io_dcg__MaybeGoal_10,
  MR_Word * parse_tree__prog_io_dcg__DCGVar0_11,
  MR_Word * parse_tree__prog_io_dcg__DCGVar_12,
  MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_16,
  MR_Word * parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_17)
{
  {
    MR_bool parse_tree__prog_io_dcg__succeeded;
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_36;
    MR_Word parse_tree__prog_io_dcg__Counter0_14;
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18;
    MR_Word parse_tree__prog_io_dcg__V_19_19;
    MR_Integer parse_tree__prog_io_dcg__N_29;
    MR_String parse_tree__prog_io_dcg__StringN_30;
    MR_String parse_tree__prog_io_dcg__VarName_31;
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_34;
    MR_Word parse_tree__prog_io_dcg___Counter_15;

    {
      parse_tree__prog_io_dcg__V_19_19 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
    {
      mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_29, parse_tree__prog_io_dcg__V_19_19, &parse_tree__prog_io_dcg__Counter0_14);
    }
    {
      mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_29, &parse_tree__prog_io_dcg__StringN_30);
    }
    {
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_30, &parse_tree__prog_io_dcg__VarName_31);
    }
    parse_tree__prog_io_dcg__TypeCtorInfo_20_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_36, parse_tree__prog_io_dcg__DCGVar0_11, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_0_16, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_34);
    }
    {
      mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_36, *parse_tree__prog_io_dcg__DCGVar0_11, parse_tree__prog_io_dcg__VarName_31, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_34, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18);
    }
    {
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__GoalTerm_8, parse_tree__prog_io_dcg__ContextPieces_9, parse_tree__prog_io_dcg__MaybeGoal_10, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_18, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_17, parse_tree__prog_io_dcg__Counter0_14, &parse_tree__prog_io_dcg___Counter_15, *parse_tree__prog_io_dcg__DCGVar0_11, parse_tree__prog_io_dcg__DCGVar_12);
    }
  }
}

static void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0_1(
  MR_Box parse_tree__prog_io_dcg__closure_arg,
  MR_Box parse_tree__prog_io_dcg__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_dcg__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_io_dcg__closure = parse_tree__prog_io_dcg__closure_arg;
    MR_Word parse_tree__prog_io_dcg__conv0_HeadVar__2_52;

    {
      parse_tree__prog_io_dcg__IntroducedFrom__pred__parse_dcg_clause__79__1_2_p_0(((MR_Word) parse_tree__prog_io_dcg__wrapper_arg_1), &parse_tree__prog_io_dcg__conv0_HeadVar__2_52);
    }
    *parse_tree__prog_io_dcg__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_dcg__conv0_HeadVar__2_52));
  }
}

void MR_CALL 
parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0(
  MR_Word parse_tree__prog_io_dcg__ModuleName_8,
  MR_Word parse_tree__prog_io_dcg__VarSet0_9,
  MR_Word parse_tree__prog_io_dcg__DCG_Head_10,
  MR_Word parse_tree__prog_io_dcg__DCG_Body_11,
  MR_Word parse_tree__prog_io_dcg__Context_12,
  MR_Integer parse_tree__prog_io_dcg__SeqNum_13,
  MR_Word * parse_tree__prog_io_dcg__MaybeIOM_14)
{
  {
    MR_bool parse_tree__prog_io_dcg__succeeded;
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_48_48 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_50_50;
    MR_Word parse_tree__prog_io_dcg__TypeCtorInfo_20_73;
    MR_Word parse_tree__prog_io_dcg__ProgVarSet0_15;
    MR_Word parse_tree__prog_io_dcg__ProgVarSet1_16;
    MR_Word parse_tree__prog_io_dcg__Counter0_17;
    MR_Word parse_tree__prog_io_dcg__DCGVar0_18;
    MR_Word parse_tree__prog_io_dcg__BodyContextPieces_19;
    MR_Word parse_tree__prog_io_dcg__MaybeBodyGoal_20;
    MR_Word parse_tree__prog_io_dcg__ProgVarSet_21;
    MR_Word parse_tree__prog_io_dcg__DCGVar_23;
    MR_Word parse_tree__prog_io_dcg__HeadContextPieces_24;
    MR_Word parse_tree__prog_io_dcg__MaybeFunctor_25;
    MR_Word parse_tree__prog_io_dcg__V_34_34;
    MR_Integer parse_tree__prog_io_dcg__N_66;
    MR_String parse_tree__prog_io_dcg__StringN_67;
    MR_String parse_tree__prog_io_dcg__VarName_68;
    MR_Word parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_71;
    MR_Word parse_tree__prog_io_dcg___Counter_22;

    {
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_48_48, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_dcg__VarSet0_9, &parse_tree__prog_io_dcg__ProgVarSet0_15);
    }
    {
      parse_tree__prog_io_dcg__V_34_34 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
    {
      mercury__counter__allocate_3_p_0(&parse_tree__prog_io_dcg__N_66, parse_tree__prog_io_dcg__V_34_34, &parse_tree__prog_io_dcg__Counter0_17);
    }
    {
      mercury__string__int_to_string_2_p_0(parse_tree__prog_io_dcg__N_66, &parse_tree__prog_io_dcg__StringN_67);
    }
    {
      mercury__string__append_3_p_2((MR_String) "DCG_", parse_tree__prog_io_dcg__StringN_67, &parse_tree__prog_io_dcg__VarName_68);
    }
    parse_tree__prog_io_dcg__TypeCtorInfo_20_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__new_var_3_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_73, &parse_tree__prog_io_dcg__DCGVar0_18, parse_tree__prog_io_dcg__ProgVarSet0_15, &parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_71);
    }
    {
      mercury__varset__name_var_4_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_20_73, parse_tree__prog_io_dcg__DCGVar0_18, parse_tree__prog_io_dcg__VarName_68, parse_tree__prog_io_dcg__STATE_VARIABLE_VarSet_18_71, &parse_tree__prog_io_dcg__ProgVarSet1_16);
    }
    parse_tree__prog_io_dcg__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      parse_tree__prog_io_dcg__BodyContextPieces_19 = mercury__cord__init_0_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_50_50);
    }
    {
      parse_tree__prog_io_dcg__parse_dcg_goal_9_p_0(parse_tree__prog_io_dcg__DCG_Body_11, parse_tree__prog_io_dcg__BodyContextPieces_19, &parse_tree__prog_io_dcg__MaybeBodyGoal_20, parse_tree__prog_io_dcg__ProgVarSet1_16, &parse_tree__prog_io_dcg__ProgVarSet_21, parse_tree__prog_io_dcg__Counter0_17, &parse_tree__prog_io_dcg___Counter_22, parse_tree__prog_io_dcg__DCGVar0_18, &parse_tree__prog_io_dcg__DCGVar_23);
    }
    {
      parse_tree__prog_io_dcg__HeadContextPieces_24 = mercury__cord__singleton_1_f_0(parse_tree__prog_io_dcg__TypeCtorInfo_50_50, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_dcg_scalar_common_1[62]))));
    }
    {
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_dcg__TypeCtorInfo_48_48, parse_tree__prog_io_dcg__ModuleName_8, parse_tree__prog_io_dcg__DCG_Head_10, parse_tree__prog_io_dcg__VarSet0_9, parse_tree__prog_io_dcg__HeadContextPieces_24, &parse_tree__prog_io_dcg__MaybeFunctor_25);
    }
    if (((MR_tag((MR_Word) parse_tree__prog_io_dcg__MaybeFunctor_25)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__prog_io_dcg__FunctorSpecs_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__MaybeFunctor_25, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_dcg__Specs_33;
        MR_Word parse_tree__prog_io_dcg__V_38_38;

        {
          parse_tree__prog_io_dcg__V_38_38 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, parse_tree__prog_io_dcg__MaybeBodyGoal_20);
        }
        {
          parse_tree__prog_io_dcg__Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_dcg__FunctorSpecs_32, parse_tree__prog_io_dcg__V_38_38);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_io_dcg__MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Specs_33));
        }
      }
    else
      {
        MR_Word parse_tree__prog_io_dcg__TypeInfo_56_56 = (MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[1];
        MR_Word parse_tree__prog_io_dcg__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeFunctor_25, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_dcg__Args0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__MaybeFunctor_25, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_dcg__Args1_28;
        MR_Word parse_tree__prog_io_dcg__Args_29;
        MR_Word parse_tree__prog_io_dcg__ItemClause_30;
        MR_Word parse_tree__prog_io_dcg__Item_31;
        MR_Word parse_tree__prog_io_dcg__V_40_40;
        MR_Word parse_tree__prog_io_dcg__V_41_41;
        MR_Word parse_tree__prog_io_dcg__V_42_42;
        MR_Word parse_tree__prog_io_dcg__V_43_43;
        MR_Word parse_tree__prog_io_dcg__V_47_47;

        {
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_dcg_scalar_common_1[0], parse_tree__prog_io_dcg__TypeInfo_56_56, (MR_Word) &parse_tree__prog_io_dcg_scalar_common_3[0], parse_tree__prog_io_dcg__Args0_27, &parse_tree__prog_io_dcg__Args1_28);
        }
        {
          parse_tree__prog_io_dcg__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_dcg__DCGVar0_18));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_12));
        }
        {
          parse_tree__prog_io_dcg__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_dcg__DCGVar_23));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_dcg__Context_12));
        }
        {
          parse_tree__prog_io_dcg__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_43_43));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__prog_io_dcg__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_41_41));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_dcg__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_dcg__V_42_42));
        }
        {
          parse_tree__prog_io_dcg__Args_29 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_dcg__TypeInfo_56_56, parse_tree__prog_io_dcg__Args1_28, parse_tree__prog_io_dcg__V_40_40);
        }
        {
          parse_tree__prog_io_dcg__ItemClause_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_30, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Name_26));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_30, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_30, 2) = ((MR_Box) (parse_tree__prog_io_dcg__Args_29));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_30, 4) = ((MR_Box) (parse_tree__prog_io_dcg__ProgVarSet_21));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_30, 5) = ((MR_Box) (parse_tree__prog_io_dcg__MaybeBodyGoal_20));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_30, 6) = ((MR_Box) (parse_tree__prog_io_dcg__Context_12));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__ItemClause_30, 7) = ((MR_Box) (parse_tree__prog_io_dcg__SeqNum_13));
        }
        parse_tree__prog_io_dcg__Item_31 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_dcg__ItemClause_30);
        {
          parse_tree__prog_io_dcg__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_dcg__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_dcg__Item_31));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_io_dcg__MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_dcg__V_47_47));
        }
      }
  }
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
