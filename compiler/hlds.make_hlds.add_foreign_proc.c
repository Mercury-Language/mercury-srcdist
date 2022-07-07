/*
** Automatically generated from `add_foreign_proc.m'
** by the Mercury compiler,
** version rotd-2022-07-07
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


// :- module hlds.make_hlds.add_foreign_proc.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_foreign_proc__init
ENDINIT
*/

#include "hlds.make_hlds.add_foreign_proc.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.add_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_ctgc.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.make_hlds_types.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_foreign_proc__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_ordinal_ordered_overridden_by_old_foreign_proc_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_name_ordered_overridden_by_old_foreign_proc_0[2];

static const MR_Integer hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_overridden_by_old_foreign_proc_0[2];

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__601__1_2_p_0(
  MR_Word LaterOverridden_32,
  MR_Word HeadVar__2_70);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_pragma_foreign_proc__369__1_2_p_0(
  MR_Word LambdaHeadVar__1_109,
  MR_Word * LambdaHeadVar__2_110);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_add_pragma_foreign_proc_19_p_0(
  MR_Word PredOrFunc_20,
  MR_Word PredModuleName_21,
  MR_String PredName_22,
  MR_Word PredId_23,
  MR_Integer ProcId_24,
  MR_Word VarSet_25,
  MR_Word PragmaVars_26,
  MR_Word OrigArgTypes_27,
  MR_Word Purity_28,
  MR_Word Attributes0_29,
  MR_Word Markers_30,
  MR_Word Context_31,
  MR_Word PragmaImpl0_32,
  MR_Word STATE_VARIABLE_ClausesInfo_0_42,
  MR_Word * STATE_VARIABLE_ClausesInfo_43,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0(
  MR_Word PredOrFunc_21,
  MR_Word PredModuleName_22,
  MR_String PredName_23,
  MR_Word PredId_24,
  MR_Integer ProcId_25,
  MR_Word AllProcIds_26,
  MR_Word PVarSet_27,
  MR_Word PragmaVars_28,
  MR_Word OrigArgTypes_29,
  MR_Word Purity_30,
  MR_Word Attributes0_31,
  MR_Word Markers_32,
  MR_Word Context_33,
  MR_Word PragmaImpl_34,
  MR_Word STATE_VARIABLE_ClausesInfo_0_101,
  MR_Word * STATE_VARIABLE_ClausesInfo_102,
  MR_Word STATE_VARIABLE_ModuleInfo_0_103,
  MR_Word * STATE_VARIABLE_ModuleInfo_104,
  MR_Word STATE_VARIABLE_Specs_0_105,
  MR_Word * STATE_VARIABLE_Specs_106);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0(
  MR_Word Globals_16,
  MR_Word PredOrFunc_17,
  MR_Word PredModuleName_18,
  MR_String PredName_19,
  MR_Word PredFormArity_20,
  MR_Word NewContext_21,
  MR_Word Target_22,
  MR_Word NewLang_23,
  MR_Word AllProcIds_24,
  MR_Integer NewClauseProcId_25,
  MR_Word * Overridden_26,
  MR_Word Clauses0_27,
  MR_Word * Clauses_28,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__maybe_rename_user_annotated_sharing_information_6_p_0(
  MR_Word Globals_7,
  MR_Word ActualHeadVars_8,
  MR_Word FormalHeadVars_9,
  MR_Word FormalTypes_10,
  MR_Word STATE_VARIABLE_Attributes_0_14,
  MR_Word * STATE_VARIABLE_Attributes_15);

static MR_Word MR_CALL 
hlds__make_hlds__add_foreign_proc__is_applicable_for_current_backend_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_procs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_1[40][2];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_3[1][9];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_4[1][1];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_5[3][5];




static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_1[40][2] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: ambiguous predicate name"))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pragma foreign_proc"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for imported"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for undeclared mode of"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: foreign_proc for builtin."))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[9])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: foreign clause for"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has purity"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but that"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has been declared"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[9])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: variable"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "occurs multiple times in the argument list."))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[9])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: variables"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "occur multiple times in the argument list."))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[9])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for this mode of"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The first one was here."))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[9])))
  },
  /* row  39 */
  {
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_4[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[3])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_5[2])),
    ((MR_Box) (hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_3[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_4[1][1] = {
  /* row   0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[38])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_5[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_overridden_by_old_foreign_proc_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_overridden_by_old_foreign_proc_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_foreign_proc__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_foreign_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0)
  }
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_0 = {
  (MR_String) "overridden_by_old_foreign_proc",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_1 = {
  (MR_String) "not_overridden_by_old_foreign_proc",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_ordinal_ordered_overridden_by_old_foreign_proc_0[2] = {
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_0,
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_name_ordered_overridden_by_old_foreign_proc_0[2] = {
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_1,
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_0
};

static const MR_Integer hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_overridden_by_old_foreign_proc_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_overridden_by_old_foreign_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_foreign_proc",
  (MR_String) "overridden_by_old_foreign_proc",
  { hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_name_ordered_overridden_by_old_foreign_proc_0 },
  { hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_ordinal_ordered_overridden_by_old_foreign_proc_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_overridden_by_old_foreign_proc_0,

};

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__601__1_2_p_0(
  MR_Word LaterOverridden_32,
  MR_Word HeadVar__2_70)
{
  MR_bool succeeded = (LaterOverridden_32 == HeadVar__2_70);

  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_pragma_foreign_proc__369__1_2_p_0(
  MR_Word LambdaHeadVar__1_109,
  MR_Word * LambdaHeadVar__2_110)
{
  MR_bool succeeded;
  MR_Integer Occurrences_62;

  *LambdaHeadVar__2_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_109, (MR_Integer) 0))));
  Occurrences_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_109, (MR_Integer) 1))));
  succeeded = (Occurrences_62 > (MR_Integer) 1);
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__prog_data_foreign__foreign_arg_name_mode_box_project_maybe_name_mode_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_6_p_0(
  MR_Word PredStatus_7,
  MR_Word PragmaFPInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_63,
  MR_Word * STATE_VARIABLE_ModuleInfo_64,
  MR_Word STATE_VARIABLE_Specs_0_65,
  MR_Word * STATE_VARIABLE_Specs_66)
{
  MR_bool succeeded;
  MR_Word FPInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaFPInfo_8, (MR_Integer) 0))));
  MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaFPInfo_8, (MR_Integer) 1))));
  MR_Word SeqNum_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaFPInfo_8, (MR_Integer) 2))));
  MR_Word Attributes0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_11, (MR_Integer) 0))));
  MR_Word PredSymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_11, (MR_Integer) 1))));
  MR_Word PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPInfo_11, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word PragmaVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_11, (MR_Integer) 3))));
  MR_Word ProgVarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_11, (MR_Integer) 4))));
  MR_Word PragmaImpl_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_11, (MR_Integer) 6))));
  MR_Word PredModuleName_21;
  MR_String PredName_22;
  MR_Word PredFormArity_24;
  MR_Word PFSymNameArity_25;
  MR_Word Globals_26;
  MR_Word VeryVerbose_27;
  MR_Word PredTable0_31;
  MR_Word PredIds_32;
  MR_Word PredId_33;
  MR_Word ClausesInfo0_39;
  MR_Word ItemNumbers0_40;
  MR_Word ItemNumbers_41;
  MR_Word ClausesInfo1_42;
  MR_Word PredInfo0_43;
  MR_Word MaybeThreadSafe_44;
  MR_Word ThreadSafe_45;
  MR_Word Attributes_46;
  MR_Word CurrentBackend_47;
  MR_Word BackendForeignLangs_48;
  MR_Word PragmaForeignLanguage_49;
  MR_Word ExtraAttrs_50;
  MR_Word STATE_VARIABLE_ModuleInfo_81_81;
  MR_Word STATE_VARIABLE_Specs_82_82;
  MR_Word STATE_VARIABLE_PredInfo_111_111;
  MR_Word STATE_VARIABLE_PredInfo_114_114;
  MR_Word STATE_VARIABLE_ModuleInfo_118_118;
  MR_Word Var_112;
  MR_Word Var_188;
  MR_Word Var_189;
  MR_Word Var_190;
  MR_Word Var_191;
  MR_Word Var_192;
  MR_Word Var_193;
  MR_Word Var_194;
  MR_Unsigned packed_word_2;
  MR_Word Var_121;

  if (((MR_tag((MR_Word) PredSymName_15)) == (MR_Integer) 1))
  {
    PredModuleName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredSymName_15, (MR_Integer) 0))));
    PredName_22 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredSymName_15, (MR_Integer) 1))));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_pragma_foreign_proc\'/6", (MR_String) "unexpected PredSymName");
      return;
    }
  PredFormArity_24 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), PragmaVars_17);
  {
    PFSymNameArity_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PFSymNameArity_25, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_16));
    MR_hl_field(MR_mktag(0), PFSymNameArity_25, 1) = ((MR_Box) (PredSymName_15));
    MR_hl_field(MR_mktag(0), PFSymNameArity_25, 2) = ((MR_Box) (PredFormArity_24));
  }
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_63, &Globals_26);
  libs__globals__lookup_bool_option_3_p_0(Globals_26, (MR_Integer) 72, &VeryVerbose_27);
  switch (VeryVerbose_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String IdStr_29;
        MR_Word ProgressStream_30;

        IdStr_29 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_1_f_0(PFSymNameArity_25);
        hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_0_63, &ProgressStream_30);
        mercury__io__write_string_4_p_0(ProgressStream_30, (MR_String) "% Processing \140:- pragma foreign_proc\' for ");
        mercury__io__write_string_4_p_0(ProgressStream_30, IdStr_29);
        mercury__io__write_string_4_p_0(ProgressStream_30, (MR_String) "...\n");
      }
      break;
  }
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_63, &PredTable0_31);
  hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(PredTable0_31, (MR_Integer) 0, PredOrFunc_16, PredModuleName_21, PredName_22, PredFormArity_24, &PredIds_32);
  if ((PredIds_32 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_79;

    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (PredSymName_15));
    }
    hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0(PredOrFunc_16, PredModuleName_21, PredName_22, PredFormArity_24, PredStatus_7, (MR_Integer) 0, Context_12, Var_79, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[7])), &PredId_33, STATE_VARIABLE_ModuleInfo_0_63, &STATE_VARIABLE_ModuleInfo_81_81, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_82_82);
  }
  else
  {
    MR_Word Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_32, (MR_Integer) 1))));
    MR_Word Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_32, (MR_Integer) 0))));

    if ((Var_206 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      PredId_33 = Var_207;
      STATE_VARIABLE_ModuleInfo_81_81 = STATE_VARIABLE_ModuleInfo_0_63;
      STATE_VARIABLE_Specs_82_82 = STATE_VARIABLE_Specs_0_65;
    }
    else
    {
      MR_Word AmbiPieces_36;
      MR_Word AmbiSpec_37;
      MR_Word Var_93;
      MR_Word Var_94;

      PredId_33 = Var_207;
      {
        Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (PFSymNameArity_25));
      }
      {
        Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
        MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[15])));
      }
      {
        AmbiPieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), AmbiPieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[8])));
        MR_hl_field(MR_mktag(1), AmbiPieces_36, 1) = ((MR_Box) (Var_93));
      }
      {
        AmbiSpec_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), AmbiSpec_37, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_pragma_foreign_proc\'/6"));
        MR_hl_field(MR_mktag(1), AmbiSpec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), AmbiSpec_37, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), AmbiSpec_37, 3) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(1), AmbiSpec_37, 4) = ((MR_Box) (AmbiPieces_36));
      }
      {
        STATE_VARIABLE_Specs_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_82_82, 0) = ((MR_Box) (AmbiSpec_37));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_82_82, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_65));
      }
      STATE_VARIABLE_ModuleInfo_81_81 = STATE_VARIABLE_ModuleInfo_0_63;
    }
  }
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_81_81, PredId_33, &STATE_VARIABLE_PredInfo_111_111);
  Var_112 = (MR_Word) (PredStatus_7);
  succeeded = (Var_112 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    hlds__hlds_pred__pred_info_set_status_3_p_0((MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), STATE_VARIABLE_PredInfo_111_111, &STATE_VARIABLE_PredInfo_114_114);
  else
    STATE_VARIABLE_PredInfo_114_114 = STATE_VARIABLE_PredInfo_111_111;
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_114_114, &ClausesInfo0_39);
  ItemNumbers0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_39, (MR_Integer) 7))));
  hlds__hlds_clauses__add_clause_item_number_5_p_0(SeqNum_13, Context_12, (MR_Integer) 1, ItemNumbers0_40, &ItemNumbers_41);
  Var_188 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_39, (MR_Integer) 0))));
  Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_39, (MR_Integer) 1))));
  Var_190 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_39, (MR_Integer) 2))));
  Var_191 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_39, (MR_Integer) 3))));
  Var_192 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_39, (MR_Integer) 4))));
  Var_193 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_39, (MR_Integer) 5))));
  Var_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_39, (MR_Integer) 6))));
  packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClausesInfo0_39, (MR_Integer) 8)));
  {
    ClausesInfo1_42 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ClausesInfo1_42, 0) = ((MR_Box) (Var_188));
    MR_hl_field(MR_mktag(0), ClausesInfo1_42, 1) = ((MR_Box) (Var_189));
    MR_hl_field(MR_mktag(0), ClausesInfo1_42, 2) = ((MR_Box) (Var_190));
    MR_hl_field(MR_mktag(0), ClausesInfo1_42, 3) = ((MR_Box) (Var_191));
    MR_hl_field(MR_mktag(0), ClausesInfo1_42, 4) = ((MR_Box) (Var_192));
    MR_hl_field(MR_mktag(0), ClausesInfo1_42, 5) = ((MR_Box) (Var_193));
    MR_hl_field(MR_mktag(0), ClausesInfo1_42, 6) = ((MR_Box) (Var_194));
    MR_hl_field(MR_mktag(0), ClausesInfo1_42, 7) = ((MR_Box) (ItemNumbers_41));
    MR_hl_field(MR_mktag(0), ClausesInfo1_42, 8) = (MR_Box) (packed_word_2);
  }
  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo1_42, STATE_VARIABLE_PredInfo_114_114, &PredInfo0_43);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_33, PredInfo0_43, STATE_VARIABLE_ModuleInfo_81_81, &STATE_VARIABLE_ModuleInfo_118_118);
  libs__globals__get_maybe_thread_safe_2_p_0(Globals_26, &MaybeThreadSafe_44);
  ThreadSafe_45 = parse_tree__prog_data_foreign__get_thread_safe_1_f_0(Attributes0_14);
  switch (ThreadSafe_45) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      switch (MaybeThreadSafe_44) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 0, Attributes0_14, &Attributes_46);
          break;
        case (MR_Integer) 1:
          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, Attributes0_14, &Attributes_46);
          break;
      }
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      Attributes_46 = Attributes0_14;
      break;
  }
  CurrentBackend_47 = libs__globals__lookup_current_backend_1_f_0(Globals_26);
  libs__globals__get_backend_foreign_languages_2_p_0(Globals_26, &BackendForeignLangs_48);
  PragmaForeignLanguage_49 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_46);
  ExtraAttrs_50 = parse_tree__prog_data_foreign__get_extra_attributes_1_f_0(Attributes_46);
  Var_121 = hlds__make_hlds__add_foreign_proc__is_applicable_for_current_backend_2_f_0(CurrentBackend_47, ExtraAttrs_50);
  succeeded = (Var_121 == (MR_Integer) 0);
  if (succeeded)
  {
    *STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_82_82;
    *STATE_VARIABLE_ModuleInfo_64 = STATE_VARIABLE_ModuleInfo_118_118;
  }
  else
  {
    succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_43);
    if (succeeded)
    {
      MR_Word Pieces_51;
      MR_Word Spec_52;
      MR_Word Var_124;
      MR_Word Var_127;
      MR_Word Var_130;
      MR_Word Var_131;

      {
        Var_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_131, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), Var_131, 1) = ((MR_Box) (PFSymNameArity_25));
      }
      {
        Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Var_131));
        MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[11])));
      }
      {
        Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[17])));
        MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (Var_130));
      }
      {
        Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[6])));
        MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_127));
      }
      {
        Pieces_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[16])));
        MR_hl_field(MR_mktag(1), Pieces_51, 1) = ((MR_Box) (Var_124));
      }
      {
        Spec_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_52, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_pragma_foreign_proc\'/6"));
        MR_hl_field(MR_mktag(1), Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_52, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), Spec_52, 3) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(1), Spec_52, 4) = ((MR_Box) (Pieces_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_66 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_52));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_82_82));
      }
      *STATE_VARIABLE_ModuleInfo_64 = STATE_VARIABLE_ModuleInfo_118_118;
    }
    else
    {
      succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (PragmaForeignLanguage_49)), BackendForeignLangs_48);
      succeeded = !(succeeded);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_PredInfo_143_143;

        hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Integer) 2, PredInfo0_43, &STATE_VARIABLE_PredInfo_143_143);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_33, STATE_VARIABLE_PredInfo_143_143, STATE_VARIABLE_ModuleInfo_118_118, STATE_VARIABLE_ModuleInfo_64);
        *STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_82_82;
      }
      else
      {
        MR_Word Procs_53;
        MR_Word ExistingProcs_54;
        MR_Word Modes_55;
        MR_Integer ProcId_56;

        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_43, &Procs_53);
        mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_53, &ExistingProcs_54);
        parse_tree__prog_data_foreign__pragma_get_modes_2_p_0(PragmaVars_17, &Modes_55);
        succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_118_118, ExistingProcs_54, Modes_55, &ProcId_56);
        if (succeeded)
        {
          MR_Word ArgTypes_57;
          MR_Word Purity_58;
          MR_Word Markers_59;
          MR_Word ClausesInfo_60;
          MR_Word ArgInfos_61;
          MR_Word ArgNameModes_62;
          MR_Word STATE_VARIABLE_ModuleInfo_145_145;
          MR_Word STATE_VARIABLE_Specs_146_146;
          MR_Word STATE_VARIABLE_PredInfo_147_147;
          MR_Word STATE_VARIABLE_PredInfo_143_176;

          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_43, &ArgTypes_57);
          hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo0_43, &Purity_58);
          hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_43, &Markers_59);
          hlds__make_hlds__add_foreign_proc__clauses_info_add_pragma_foreign_proc_19_p_0(PredOrFunc_16, PredModuleName_21, PredName_22, PredId_33, ProcId_56, ProgVarSet_18, PragmaVars_17, ArgTypes_57, Purity_58, Attributes_46, Markers_59, Context_12, PragmaImpl_20, ClausesInfo1_42, &ClausesInfo_60, STATE_VARIABLE_ModuleInfo_118_118, &STATE_VARIABLE_ModuleInfo_145_145, STATE_VARIABLE_Specs_82_82, &STATE_VARIABLE_Specs_146_146);
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_60, PredInfo0_43, &STATE_VARIABLE_PredInfo_147_147);
          hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Integer) 2, STATE_VARIABLE_PredInfo_147_147, &STATE_VARIABLE_PredInfo_143_176);
          hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_33, STATE_VARIABLE_PredInfo_143_176, STATE_VARIABLE_ModuleInfo_145_145, STATE_VARIABLE_ModuleInfo_64);
          parse_tree__prog_data_foreign__pragma_get_var_infos_2_p_0(PragmaVars_17, &ArgInfos_61);
          ArgNameModes_62 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_2[2]), ArgInfos_61);
          hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0(*STATE_VARIABLE_ModuleInfo_64, PragmaImpl_20, PragmaForeignLanguage_49, ArgNameModes_62, Context_12, PFSymNameArity_25, PredId_33, ProcId_56, STATE_VARIABLE_Specs_146_146, STATE_VARIABLE_Specs_66);
        }
        else
        {
          MR_Word Var_155;
          MR_Word Var_158;
          MR_Word Var_161;
          MR_Word Var_164;
          MR_Word Var_165;
          MR_Word Pieces_177;
          MR_Word Spec_178;

          {
            Var_165 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_165, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Var_165, 1) = ((MR_Box) (PFSymNameArity_25));
          }
          {
            Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (Var_165));
            MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[11])));
          }
          {
            Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[18])));
            MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) (Var_164));
          }
          {
            Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[4])));
            MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (Var_161));
          }
          {
            Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[6])));
            MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) (Var_158));
          }
          {
            Pieces_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_177, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[16])));
            MR_hl_field(MR_mktag(1), Pieces_177, 1) = ((MR_Box) (Var_155));
          }
          {
            Spec_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_178, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_pragma_foreign_proc\'/6"));
            MR_hl_field(MR_mktag(1), Spec_178, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_178, 2) = ((MR_Box) ((MR_Unsigned) 40U));
            MR_hl_field(MR_mktag(1), Spec_178, 3) = ((MR_Box) (Context_12));
            MR_hl_field(MR_mktag(1), Spec_178, 4) = ((MR_Box) (Pieces_177));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_66 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_178));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_82_82));
          }
          *STATE_VARIABLE_ModuleInfo_64 = STATE_VARIABLE_ModuleInfo_118_118;
        }
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_add_pragma_foreign_proc_19_p_0(
  MR_Word PredOrFunc_20,
  MR_Word PredModuleName_21,
  MR_String PredName_22,
  MR_Word PredId_23,
  MR_Integer ProcId_24,
  MR_Word VarSet_25,
  MR_Word PragmaVars_26,
  MR_Word OrigArgTypes_27,
  MR_Word Purity_28,
  MR_Word Attributes0_29,
  MR_Word Markers_30,
  MR_Word Context_31,
  MR_Word PragmaImpl0_32,
  MR_Word STATE_VARIABLE_ClausesInfo_0_42,
  MR_Word * STATE_VARIABLE_ClausesInfo_43,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47)
{
  MR_bool succeeded;
  MR_Word PredInfo_36;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_44, PredId_23, &PredInfo_36);
  succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_36);
  if (succeeded)
  {
    MR_Word Globals_37;
    MR_Word AllowDefnOfBuiltin_38;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_44, &Globals_37);
    libs__globals__lookup_bool_option_3_p_0(Globals_37, (MR_Integer) 319, &AllowDefnOfBuiltin_38);
    switch (AllowDefnOfBuiltin_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Spec_40;

          {
            Spec_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_40, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.clauses_info_add_pragma_foreign_proc\'/19"));
            MR_hl_field(MR_mktag(1), Spec_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_40, 2) = ((MR_Box) ((MR_Unsigned) 40U));
            MR_hl_field(MR_mktag(1), Spec_40, 3) = ((MR_Box) (Context_31));
            MR_hl_field(MR_mktag(1), Spec_40, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[20])));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_47 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_40));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_46));
          }
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_0_46;
        break;
    }
    *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
    *STATE_VARIABLE_ClausesInfo_43 = STATE_VARIABLE_ClausesInfo_0_42;
  }
  else
  {
    MR_Word AllProcIds_41;

    AllProcIds_41 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_36);
    hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0(PredOrFunc_20, PredModuleName_21, PredName_22, PredId_23, ProcId_24, AllProcIds_41, VarSet_25, PragmaVars_26, OrigArgTypes_27, Purity_28, Attributes0_29, Markers_30, Context_31, PragmaImpl0_32, STATE_VARIABLE_ClausesInfo_0_42, STATE_VARIABLE_ClausesInfo_43, STATE_VARIABLE_ModuleInfo_0_44, STATE_VARIABLE_ModuleInfo_45, STATE_VARIABLE_Specs_0_46, STATE_VARIABLE_Specs_47);
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_110;

  succeeded = hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_pragma_foreign_proc__369__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_110);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_110));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0(
  MR_Word PredOrFunc_21,
  MR_Word PredModuleName_22,
  MR_String PredName_23,
  MR_Word PredId_24,
  MR_Integer ProcId_25,
  MR_Word AllProcIds_26,
  MR_Word PVarSet_27,
  MR_Word PragmaVars_28,
  MR_Word OrigArgTypes_29,
  MR_Word Purity_30,
  MR_Word Attributes0_31,
  MR_Word Markers_32,
  MR_Word Context_33,
  MR_Word PragmaImpl_34,
  MR_Word STATE_VARIABLE_ClausesInfo_0_101,
  MR_Word * STATE_VARIABLE_ClausesInfo_102,
  MR_Word STATE_VARIABLE_ModuleInfo_0_103,
  MR_Word * STATE_VARIABLE_ModuleInfo_104,
  MR_Word STATE_VARIABLE_Specs_0_105,
  MR_Word * STATE_VARIABLE_Specs_106)
{
  MR_bool succeeded;
  MR_Word VarSet0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_101, (MR_Integer) 0))));
  MR_Word ExplicitVarTypes_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_101, (MR_Integer) 1))));
  MR_Word VarTable_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_101, (MR_Integer) 2))));
  MR_Word RttiVarMaps_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_101, (MR_Integer) 3))));
  MR_Word TVarNameMap_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_101, (MR_Integer) 4))));
  MR_Word HeadVars_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_101, (MR_Integer) 5))));
  MR_Word ClausesRep0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_101, (MR_Integer) 6))));
  MR_Word ItemNumbers_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_101, (MR_Integer) 7))));
  MR_Word HadSyntaxError_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_101, (MR_Integer) 8))) & (MR_Integer) 1);
  MR_Word Clauses0_48;
  MR_Word Globals_49;
  MR_Word Target_50;
  MR_Word NewLang_51;
  MR_Word PredFormArity_52;
  MR_Word Overridden_53;
  MR_Word Clauses1_54;
  MR_Word ArgVars_55;
  MR_Word ArgInfos_56;
  MR_Word ArgVarBag0_57;
  MR_Word ArgVarBag_58;
  MR_Word ArgVarBagAssocList_59;
  MR_Word MultiplyOccurringArgVars_63;
  MR_Word STATE_VARIABLE_Specs_107_107;

  hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_44, &Clauses0_48);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_103, &Globals_49);
  libs__globals__get_target_2_p_0(Globals_49, &Target_50);
  NewLang_51 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes0_31);
  PredFormArity_52 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), OrigArgTypes_29);
  hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0(Globals_49, PredOrFunc_21, PredModuleName_22, PredName_23, PredFormArity_52, Context_33, Target_50, NewLang_51, AllProcIds_26, ProcId_25, &Overridden_53, Clauses0_48, &Clauses1_54, STATE_VARIABLE_Specs_0_105, &STATE_VARIABLE_Specs_107_107);
  parse_tree__prog_data_foreign__pragma_get_vars_and_var_infos_3_p_0(PragmaVars_28, &ArgVars_55, &ArgInfos_56);
  mercury__bag__init_1_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[3]), &ArgVarBag0_57);
  mercury__bag__insert_list_3_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[3]), ArgVars_55, ArgVarBag0_57, &ArgVarBag_58);
  mercury__bag__to_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[3]), ArgVarBag_58, &ArgVarBagAssocList_59);
  mercury__list__filter_map_3_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_2[0]), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_2[1]), ArgVarBagAssocList_59, &MultiplyOccurringArgVars_63);
  if ((MultiplyOccurringArgVars_63 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_32, (MR_Integer) 15);
    if (!(succeeded))
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_32, (MR_Integer) 16);
    if (succeeded)
      *STATE_VARIABLE_Specs_106 = STATE_VARIABLE_Specs_107_107;
    else
    {
      MR_Word ForeignAttributePurity_78;

      ForeignAttributePurity_78 = parse_tree__prog_data_foreign__get_purity_1_f_0(Attributes0_31);
      succeeded = (ForeignAttributePurity_78 == Purity_30);
      if (succeeded)
        *STATE_VARIABLE_Specs_106 = STATE_VARIABLE_Specs_107_107;
      else
      {
        MR_String ForeignAttributePurityStr_79;
        MR_String PurityStr_80;
        MR_Word Pieces_81;
        MR_Word Var_159;
        MR_Word Var_160;
        MR_Word Var_161;
        MR_Word Var_164;
        MR_Word Var_165;
        MR_Word Var_166;
        MR_Word Var_169;
        MR_Word Var_170;
        MR_Word Var_171;
        MR_Word Var_174;
        MR_Word Var_175;
        MR_Word UserArity_195;
        MR_Word PredSymName_196;
        MR_Word PFSymNameArity_197;
        MR_Word Spec_198;

        {
          PredSymName_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PredSymName_196, 0) = ((MR_Box) (PredModuleName_22));
          MR_hl_field(MR_mktag(1), PredSymName_196, 1) = ((MR_Box) (PredName_23));
        }
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_21, &UserArity_195, PredFormArity_52);
        {
          PFSymNameArity_197 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PFSymNameArity_197, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
          MR_hl_field(MR_mktag(0), PFSymNameArity_197, 1) = ((MR_Box) (PredSymName_196));
          MR_hl_field(MR_mktag(0), PFSymNameArity_197, 2) = ((MR_Box) (UserArity_195));
        }
        parse_tree__prog_out__purity_name_2_p_0(ForeignAttributePurity_78, &ForeignAttributePurityStr_79);
        parse_tree__prog_out__purity_name_2_p_0(Purity_30, &PurityStr_80);
        {
          Var_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_160, 0) = ((MR_Box) ((MR_Unsigned) 15U));
          MR_hl_field(MR_mktag(3), Var_160, 1) = ((MR_Box) (PFSymNameArity_197));
        }
        {
          Var_165 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_165, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_165, 1) = ((MR_Box) (ForeignAttributePurityStr_79));
        }
        {
          Var_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_170, 0) = ((MR_Box) ((MR_Unsigned) 27U));
          MR_hl_field(MR_mktag(3), Var_170, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
        }
        {
          Var_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_175, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_175, 1) = ((MR_Box) (PurityStr_80));
        }
        {
          Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_174, 0) = ((MR_Box) (Var_175));
          MR_hl_field(MR_mktag(1), Var_174, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[11])));
        }
        {
          Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[24])));
          MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) (Var_174));
        }
        {
          Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (Var_170));
          MR_hl_field(MR_mktag(1), Var_169, 1) = ((MR_Box) (Var_171));
        }
        {
          Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[23])));
          MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) (Var_169));
        }
        {
          Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (Var_165));
          MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) (Var_166));
        }
        {
          Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[22])));
          MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) (Var_164));
        }
        {
          Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (Var_160));
          MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (Var_161));
        }
        {
          Pieces_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[21])));
          MR_hl_field(MR_mktag(1), Pieces_81, 1) = ((MR_Box) (Var_159));
        }
        {
          Spec_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_198, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.clauses_info_do_add_pragma_foreign_proc\'/20"));
          MR_hl_field(MR_mktag(1), Spec_198, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_198, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(1), Spec_198, 3) = ((MR_Box) (Context_33));
          MR_hl_field(MR_mktag(1), Spec_198, 4) = ((MR_Box) (Pieces_81));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_106 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_198));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_107_107));
        }
      }
    }
    switch (Overridden_53) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word GoalInfo_82;
          MR_Word HeadVarList_83;
          MR_Word ForeignArgs_84;
          MR_Word Attributes_85;
          MR_Word GoalExpr_88;
          MR_Word HldsGoal0_89;
          MR_Word EmptyExplicitVarTypes_90;
          MR_Word EmptyRttiVarmaps_91;
          MR_Word HldsGoal_93;
          MR_Word VarSet_94;
          MR_Word Clause_97;
          MR_Word Clauses_98;
          MR_Word ClausesRep_99;
          MR_Word Var_187;
          MR_Word Var_188;
          MR_Word Var_190;
          MR_Word _Warnings_92;
          MR_Word Var_95;
          MR_Word Var_96;

          hlds__hlds_goal__goal_info_init_context_purity_3_p_0(Context_33, Purity_30, &GoalInfo_82);
          HeadVarList_83 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[3]), HeadVars_43);
          hlds__hlds_goal__make_foreign_args_4_p_0(HeadVarList_83, ArgInfos_56, OrigArgTypes_29, &ForeignArgs_84);
          hlds__make_hlds__add_foreign_proc__maybe_rename_user_annotated_sharing_information_6_p_0(Globals_49, ArgVars_55, HeadVarList_83, OrigArgTypes_29, Attributes0_31, &Attributes_85);
          {
            GoalExpr_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), GoalExpr_88, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), GoalExpr_88, 1) = ((MR_Box) (Attributes_85));
            MR_hl_field(MR_mktag(3), GoalExpr_88, 2) = ((MR_Box) (PredId_24));
            MR_hl_field(MR_mktag(3), GoalExpr_88, 3) = ((MR_Box) (ProcId_25));
            MR_hl_field(MR_mktag(3), GoalExpr_88, 4) = ((MR_Box) (ForeignArgs_84));
            MR_hl_field(MR_mktag(3), GoalExpr_88, 5) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), GoalExpr_88, 6) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), GoalExpr_88, 7) = ((MR_Box) (PragmaImpl_34));
          }
          {
            HldsGoal0_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HldsGoal0_89, 0) = ((MR_Box) (GoalExpr_88));
            MR_hl_field(MR_mktag(0), HldsGoal0_89, 1) = ((MR_Box) (GoalInfo_82));
          }
          parse_tree__vartypes__init_vartypes_1_p_0(&EmptyExplicitVarTypes_90);
          hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&EmptyRttiVarmaps_91);
          hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, HeadVarList_83, &_Warnings_92, HldsGoal0_89, &HldsGoal_93, VarSet0_38, &VarSet_94, EmptyExplicitVarTypes_90, &Var_95, EmptyRttiVarmaps_91, &Var_96);
          {
            Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) (ProcId_25));
            MR_hl_field(MR_mktag(1), Var_188, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_187, 0) = ((MR_Box) (Var_188));
          }
          {
            Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_190, 0) = (MR_Box) ((MR_Unsigned) (NewLang_51));
          }
          {
            Clause_97 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Clause_97, 0) = ((MR_Box) (Var_187));
            MR_hl_field(MR_mktag(0), Clause_97, 1) = ((MR_Box) (HldsGoal_93));
            MR_hl_field(MR_mktag(0), Clause_97, 2) = ((MR_Box) (Var_190));
            MR_hl_field(MR_mktag(0), Clause_97, 3) = ((MR_Box) (Context_33));
            MR_hl_field(MR_mktag(0), Clause_97, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Clauses_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Clauses_98, 0) = ((MR_Box) (Clause_97));
            MR_hl_field(MR_mktag(1), Clauses_98, 1) = ((MR_Box) (Clauses1_54));
          }
          hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_98, &ClausesRep_99);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_ClausesInfo_102 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarSet_94));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExplicitVarTypes_39));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTable_40));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RttiVarMaps_41));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TVarNameMap_42));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (HeadVars_43));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ClausesRep_99));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ItemNumbers_45));
            MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (HadSyntaxError_47)));
          }
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_ClausesInfo_102 = STATE_VARIABLE_ClausesInfo_0_101;
        break;
    }
  }
  else
  {
    MR_Word UserArity_66;
    MR_Word PredSymName_67;
    MR_Word PFSymNameArity_68;
    MR_Word Pieces1_69;
    MR_Word Pieces2_72;
    MR_Word Spec_77;
    MR_Word Var_114;
    MR_Word Var_117;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_153;
    MR_Word Var_205;
    MR_Word Var_206;

    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_21, &UserArity_66, PredFormArity_52);
    {
      PredSymName_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PredSymName_67, 0) = ((MR_Box) (PredModuleName_22));
      MR_hl_field(MR_mktag(1), PredSymName_67, 1) = ((MR_Box) (PredName_23));
    }
    {
      PFSymNameArity_68 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PFSymNameArity_68, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
      MR_hl_field(MR_mktag(0), PFSymNameArity_68, 1) = ((MR_Box) (PredSymName_67));
      MR_hl_field(MR_mktag(0), PFSymNameArity_68, 2) = ((MR_Box) (UserArity_66));
    }
    {
      Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (PFSymNameArity_68));
    }
    {
      Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Var_121));
      MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[28])));
    }
    {
      Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[26])));
      MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_120));
    }
    {
      Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[6])));
      MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_117));
    }
    {
      Pieces1_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces1_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[25])));
      MR_hl_field(MR_mktag(1), Pieces1_69, 1) = ((MR_Box) (Var_114));
    }
    Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MultiplyOccurringArgVars_63, (MR_Integer) 0))));
    Var_205 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MultiplyOccurringArgVars_63, (MR_Integer) 1))));
    if ((Var_205 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String BadVarStr_71;
      MR_Word Var_131;
      MR_Word Var_132;

      BadVarStr_71 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PVarSet_27, Var_206);
      {
        Var_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_132, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_132, 1) = ((MR_Box) (BadVarStr_71));
      }
      {
        Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (Var_132));
        MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[31])));
      }
      {
        Pieces2_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces2_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[29])));
        MR_hl_field(MR_mktag(1), Pieces2_72, 1) = ((MR_Box) (Var_131));
      }
    }
    else
    {
      MR_String BadVarsStr_76;
      MR_Word Var_142;
      MR_Word Var_143;

      BadVarsStr_76 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PVarSet_27, MultiplyOccurringArgVars_63);
      {
        Var_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_143, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_143, 1) = ((MR_Box) (BadVarsStr_76));
      }
      {
        Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (Var_143));
        MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[34])));
      }
      {
        Pieces2_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces2_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[32])));
        MR_hl_field(MR_mktag(1), Pieces2_72, 1) = ((MR_Box) (Var_142));
      }
    }
    Var_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_69, Pieces2_72);
    {
      Spec_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_77, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.clauses_info_do_add_pragma_foreign_proc\'/20"));
      MR_hl_field(MR_mktag(1), Spec_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_77, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(1), Spec_77, 3) = ((MR_Box) (Context_33));
      MR_hl_field(MR_mktag(1), Spec_77, 4) = ((MR_Box) (Var_153));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_106 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_77));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_107_107));
    }
    *STATE_VARIABLE_ClausesInfo_102 = STATE_VARIABLE_ClausesInfo_0_101;
  }
  *STATE_VARIABLE_ModuleInfo_104 = STATE_VARIABLE_ModuleInfo_0_103;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__601__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0(
  MR_Word Globals_16,
  MR_Word PredOrFunc_17,
  MR_Word PredModuleName_18,
  MR_String PredName_19,
  MR_Word PredFormArity_20,
  MR_Word NewContext_21,
  MR_Word Target_22,
  MR_Word NewLang_23,
  MR_Word AllProcIds_24,
  MR_Integer NewClauseProcId_25,
  MR_Word * Overridden_26,
  MR_Word Clauses0_27,
  MR_Word * Clauses_28,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57)
{
  MR_bool succeeded;

  if ((Clauses0_27 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Clauses_28 = (MR_Word) ((MR_Unsigned) 0U);
    *Overridden_26 = (MR_Integer) 1;
    *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_0_56;
  }
  else
  {
    MR_Word FirstClause0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses0_27, (MR_Integer) 0))));
    MR_Word LaterClauses0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses0_27, (MR_Integer) 1))));
    MR_Word LaterOverridden_32;
    MR_Word LaterClauses_33;
    MR_Word ApplProcIds0_34;
    MR_Word Body_35;
    MR_Word FirstClauseLang_36;
    MR_Word FirstClauseContext_37;
    MR_Word StateVarWarnings_38;
    MR_Word STATE_VARIABLE_Specs_58_58;

    hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0(Globals_16, PredOrFunc_17, PredModuleName_18, PredName_19, PredFormArity_20, NewContext_21, Target_22, NewLang_23, AllProcIds_24, NewClauseProcId_25, &LaterOverridden_32, LaterClauses0_31, &LaterClauses_33, STATE_VARIABLE_Specs_0_56, &STATE_VARIABLE_Specs_58_58);
    ApplProcIds0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstClause0_30, (MR_Integer) 0))));
    Body_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstClause0_30, (MR_Integer) 1))));
    FirstClauseLang_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstClause0_30, (MR_Integer) 2))));
    FirstClauseContext_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstClause0_30, (MR_Integer) 3))));
    StateVarWarnings_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstClause0_30, (MR_Integer) 4))));
    if ((FirstClauseLang_36 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ProcIds0_39;
      MR_Word ProcIds_40;

      switch (MR_tag((MR_Word) ApplProcIds0_34)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ApplProcIds0_34)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ProcIds0_39 = AllProcIds_24;
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/15", (MR_String) "unify mode for user defined predicate");
                return;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          ProcIds0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ApplProcIds0_34, (MR_Integer) 0))));
          break;
      }
      succeeded = mercury__list__delete_first_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ProcIds0_39, ((MR_Box) (NewClauseProcId_25)), &ProcIds_40);
      if (succeeded)
        if ((ProcIds_40 == (MR_Word) ((MR_Unsigned) 0U)))
          *Clauses_28 = LaterClauses_33;
        else
        {
          MR_Word FirstClause_43;
          MR_Word Var_61;

          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (ProcIds_40));
          }
          {
            FirstClause_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FirstClause_43, 0) = ((MR_Box) (Var_61));
            MR_hl_field(MR_mktag(0), FirstClause_43, 1) = ((MR_Box) (Body_35));
            MR_hl_field(MR_mktag(0), FirstClause_43, 2) = ((MR_Box) (FirstClauseLang_36));
            MR_hl_field(MR_mktag(0), FirstClause_43, 3) = ((MR_Box) (FirstClauseContext_37));
            MR_hl_field(MR_mktag(0), FirstClause_43, 4) = ((MR_Box) (StateVarWarnings_38));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Clauses_28 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstClause_43));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterClauses_33));
          }
        }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Clauses_28 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstClause0_30));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterClauses_33));
        }
      *Overridden_26 = LaterOverridden_32;
      *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_58_58;
    }
    else
    {
      MR_Word OldLang_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), FirstClauseLang_36, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ProcIds0_120;
      MR_Word ProcIds_118;

      switch (MR_tag((MR_Word) ApplProcIds0_34)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ApplProcIds0_34)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/15", (MR_String) "all_modes");
                return;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/15", (MR_String) "unify modes");
                return;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          ProcIds0_120 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ApplProcIds0_34, (MR_Integer) 0))));
          break;
      }
      succeeded = mercury__list__delete_first_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ProcIds0_120, ((MR_Box) (NewClauseProcId_25)), &ProcIds_118);
      if (succeeded)
      {
        MR_Word PreferNewForeignLang_45;

        PreferNewForeignLang_45 = parse_tree__prog_foreign__prefer_foreign_language_4_f_0(Globals_16, Target_22, OldLang_44, NewLang_23);
        switch (PreferNewForeignLang_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Clauses_28 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstClause0_30));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterClauses_33));
              }
              *Overridden_26 = (MR_Integer) 0;
              succeeded = (OldLang_44 == NewLang_23);
              if (succeeded)
              {
                MR_Word PredSymName_48;
                MR_Word PFSymNameArity_49;
                MR_String OldLangStr_50;
                MR_Word PiecesA_51;
                MR_Word MsgA_53;
                MR_Word MsgB_54;
                MR_Word Spec_55;
                MR_Word Var_73;
                MR_Word Var_76;
                MR_Word Var_79;
                MR_Word Var_82;
                MR_Word Var_83;
                MR_Word Var_84;
                MR_Word Var_87;
                MR_Word Var_88;
                MR_Word Var_100;
                MR_Word Var_109;
                MR_Word Var_110;

                {
                  PredSymName_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), PredSymName_48, 0) = ((MR_Box) (PredModuleName_18));
                  MR_hl_field(MR_mktag(1), PredSymName_48, 1) = ((MR_Box) (PredName_19));
                }
                {
                  PFSymNameArity_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PFSymNameArity_49, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
                  MR_hl_field(MR_mktag(0), PFSymNameArity_49, 1) = ((MR_Box) (PredSymName_48));
                  MR_hl_field(MR_mktag(0), PFSymNameArity_49, 2) = ((MR_Box) (PredFormArity_20));
                }
                OldLangStr_50 = libs__globals__foreign_language_string_1_f_0(OldLang_44);
                {
                  Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                  MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (PFSymNameArity_49));
                }
                {
                  Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) (OldLangStr_50));
                }
                {
                  Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
                  MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[11])));
                }
                {
                  Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[14])));
                  MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_87));
                }
                {
                  Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
                  MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_84));
                }
                {
                  Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[36])));
                  MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_82));
                }
                {
                  Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[4])));
                  MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
                }
                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[6])));
                  MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_76));
                }
                {
                  PiecesA_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), PiecesA_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[35])));
                  MR_hl_field(MR_mktag(1), PiecesA_51, 1) = ((MR_Box) (Var_73));
                }
                {
                  MsgA_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), MsgA_53, 0) = ((MR_Box) (NewContext_21));
                  MR_hl_field(MR_mktag(0), MsgA_53, 1) = ((MR_Box) (PiecesA_51));
                }
                {
                  Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (FirstClauseContext_37));
                }
                {
                  MsgB_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), MsgB_54, 0) = ((MR_Box) (Var_100));
                  MR_hl_field(MR_mktag(3), MsgB_54, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), MsgB_54, 2) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), MsgB_54, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[39])));
                }
                {
                  Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (MsgB_54));
                  MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (MsgA_53));
                  MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_110));
                }
                {
                  Spec_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_55, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/15"));
                  MR_hl_field(MR_mktag(0), Spec_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Spec_55, 2) = ((MR_Box) ((MR_Unsigned) 40U));
                  MR_hl_field(MR_mktag(0), Spec_55, 3) = ((MR_Box) (Var_109));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_57 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_55));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_58_58));
                }
              }
              else
                *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_58_58;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_67;

              if ((ProcIds_118 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *Clauses_28 = LaterClauses_33;
                *Overridden_26 = LaterOverridden_32;
              }
              else
              {
                MR_Word Var_66;
                MR_Word FirstClause_113;

                {
                  Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (ProcIds_118));
                }
                {
                  FirstClause_113 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), FirstClause_113, 0) = ((MR_Box) (Var_66));
                  MR_hl_field(MR_mktag(0), FirstClause_113, 1) = ((MR_Box) (Body_35));
                  MR_hl_field(MR_mktag(0), FirstClause_113, 2) = ((MR_Box) (FirstClauseLang_36));
                  MR_hl_field(MR_mktag(0), FirstClause_113, 3) = ((MR_Box) (FirstClauseContext_37));
                  MR_hl_field(MR_mktag(0), FirstClause_113, 4) = ((MR_Box) (StateVarWarnings_38));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Clauses_28 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstClause_113));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterClauses_33));
                }
                *Overridden_26 = LaterOverridden_32;
              }
              {
                Var_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0_1));
                MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (LaterOverridden_32));
                MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              mercury__require__expect_3_p_0(Var_67, (MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/15", (MR_String) "inconsistent old foreign_procs");
              *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_58_58;
            }
            break;
        }
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Clauses_28 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstClause0_30));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterClauses_33));
        }
        *Overridden_26 = LaterOverridden_32;
        *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_58_58;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__maybe_rename_user_annotated_sharing_information_6_p_0(
  MR_Word Globals_7,
  MR_Word ActualHeadVars_8,
  MR_Word FormalHeadVars_9,
  MR_Word FormalTypes_10,
  MR_Word STATE_VARIABLE_Attributes_0_14,
  MR_Word * STATE_VARIABLE_Attributes_15)
{
  MR_Word SharingAnalysis_12;

  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 506, &SharingAnalysis_12);
  switch (SharingAnalysis_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Attributes_15 = STATE_VARIABLE_Attributes_0_14;
      break;
    case (MR_Integer) 1:
      {
        MR_Word FormalUserSharing_13;
        MR_Word Var_17;

        Var_17 = parse_tree__prog_data_foreign__get_user_annotated_sharing_1_f_0(STATE_VARIABLE_Attributes_0_14);
        parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0(ActualHeadVars_8, FormalHeadVars_9, FormalTypes_10, Var_17, &FormalUserSharing_13);
        parse_tree__prog_data_foreign__set_user_annotated_sharing_3_p_0(FormalUserSharing_13, STATE_VARIABLE_Attributes_0_14, STATE_VARIABLE_Attributes_15);
      }
      break;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_foreign_proc__is_applicable_for_current_backend_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Integer) 1;
    else
    {
      MR_Word Attr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Attrs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) Attr_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__2_2 = Attrs_7;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Backend_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Attr_6, (MR_Integer) 0))) & (MR_Integer) 1);

            succeeded = (Backend_9 == HeadVar__1_1);
            if (succeeded)
            {
              MR_Word next_value_of_HeadVar__2_2 = Attrs_7;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
            else
              HeadVar__3_3 = (MR_Integer) 0;
          }
          break;
      }
    }
    return HeadVar__3_3;
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_procs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_64;
  MR_Word conv0_STATE_VARIABLE_Specs_66;

  hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_64, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_66);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_64));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_66));
}

void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_procs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word ImsSubList_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ImsSubLists_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ItemMercuryStatus_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsSubList_12, (MR_Integer) 0))));
      MR_Word PragmaFPInfos_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsSubList_12, (MR_Integer) 1))));
      MR_Word PredStatus_18;
      MR_Word Var_23;
      MR_Word STATE_VARIABLE_ModuleInfo_24_24;
      MR_Word STATE_VARIABLE_Specs_25_25;
      MR_Box conv3_STATE_VARIABLE_ModuleInfo_24_24;
      MR_Box conv2_STATE_VARIABLE_Specs_25_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_16, &PredStatus_18);
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__add_pragma_foreign_procs_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (PredStatus_18));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[1]), Var_23, PragmaFPInfos_17, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv3_STATE_VARIABLE_ModuleInfo_24_24, ((MR_Box) (STATE_VARIABLE_Specs_0_4)), &conv2_STATE_VARIABLE_Specs_25_25);
      STATE_VARIABLE_ModuleInfo_24_24 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_24_24));
      STATE_VARIABLE_Specs_25_25 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_25_25));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImsSubLists_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_24_24;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__add_foreign_proc__init(void)
{
}

void mercury__hlds__make_hlds__add_foreign_proc__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_overridden_by_old_foreign_proc_0);
}

void mercury__hlds__make_hlds__add_foreign_proc__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_foreign_proc__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_foreign_proc.
