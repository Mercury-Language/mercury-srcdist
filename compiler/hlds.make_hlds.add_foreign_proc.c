/*
** Automatically generated from `add_foreign_proc.m'
** by the Mercury compiler,
** version rotd-2017-12-31
** configured for x86_64-pc-linux-gnu.
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


// :- module hlds.make_hlds.add_foreign_proc.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_foreign_proc__init
ENDINIT
*/

#include "hlds.make_hlds.add_foreign_proc.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.foreign.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_error.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_foreign_proc__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_value_ordered_overridden_by_old_foreign_proc_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_name_ordered_overridden_by_old_foreign_proc_0[2];

static const MR_Integer hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_overridden_by_old_foreign_proc_0[2];

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__718__1_2_p_0(
  MR_Word LaterOverridden_31,
  MR_Word HeadVar__2_232);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_pragma_foreign_proc__501__1_2_p_0(
  MR_Word LambdaHeadVar__1_112,
  MR_Word * LambdaHeadVar__2_113);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_add_pragma_foreign_proc_19_p_0(
  MR_Word Purity_20,
  MR_Word Attributes0_21,
  MR_Word PredId_22,
  MR_Integer ProcId_23,
  MR_Word PVarSet_24,
  MR_Word PVars_25,
  MR_Word OrigArgTypes_26,
  MR_Word PragmaImpl0_27,
  MR_Word Context_28,
  MR_Word PredOrFunc_29,
  MR_Word PredName_30,
  MR_Integer Arity_31,
  MR_Word Markers_32,
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
  MR_Word Purity_21,
  MR_Word Attributes0_22,
  MR_Word PredId_23,
  MR_Integer ProcId_24,
  MR_Word AllProcIds_25,
  MR_Word PVarSet_26,
  MR_Word PVars_27,
  MR_Word OrigArgTypes_28,
  MR_Word PragmaImpl0_29,
  MR_Word Context_30,
  MR_Word PredOrFunc_31,
  MR_Word PredName_32,
  MR_Integer Arity_33,
  MR_Word Markers_34,
  MR_Word STATE_VARIABLE_ClausesInfo_0_103,
  MR_Word * STATE_VARIABLE_ClausesInfo_104,
  MR_Word STATE_VARIABLE_ModuleInfo_0_105,
  MR_Word * STATE_VARIABLE_ModuleInfo_106,
  MR_Word STATE_VARIABLE_Specs_0_107,
  MR_Word * STATE_VARIABLE_Specs_108);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0(
  MR_Word PredName_15,
  MR_Integer Arity_16,
  MR_Word PredOrFunc_17,
  MR_Word NewContext_18,
  MR_Word Globals_19,
  MR_Word Target_20,
  MR_Word NewLang_21,
  MR_Word AllProcIds_22,
  MR_Integer NewClauseProcId_23,
  MR_Word Clauses0_24,
  MR_Word * Clauses_25,
  MR_Word * Overridden_26,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52);

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

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_2_13_p_0(
  MR_Integer Arity_14,
  MR_Word PredTable_15,
  MR_Word MaybeAttrs_16,
  MR_Word Lang_17,
  MR_Word PredSymName_18,
  MR_Word PredId_19,
  MR_Word Modes_20,
  MR_String ExportedName_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_45,
  MR_Word * STATE_VARIABLE_ModuleInfo_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_1[66][2];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_3[2][1];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_4[1][7];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_5[3][5];




static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_1[66][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The possible matches are:"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "name in"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may be necessary."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "An explicit module qualifier"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[4])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "pragma foreign_proc"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: foreign_proc for builtin."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[23])))
  },
  /* row 32 */
  {
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[23])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "occurs multiple times in the argument list."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[23])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "occur multiple times in the argument list."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[23])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The first occurrence was here."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[23])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for a procedure that has"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a declared determinism of"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: ambiguous"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[20])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_foreign_proc_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: multiple clauses for"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in language"))
  },
  /* row 53 */
  {
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: foreign clause for"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has purity"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but that"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has been declared"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: variable"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: variables"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: ambiguous predicate name"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for imported"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for undeclared mode of"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_5[2])),
    ((MR_Box) (hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[31])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[40])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_overridden_by_old_foreign_proc_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_overridden_by_old_foreign_proc_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_foreign_proc__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_foreign_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0
  }
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_0 = {
  (MR_String) "overridden_by_old_foreign_proc",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_1 = {
  (MR_String) "not_overridden_by_old_foreign_proc",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_value_ordered_overridden_by_old_foreign_proc_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_foreign_proc",
  (MR_String) "overridden_by_old_foreign_proc",
  {     hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_name_ordered_overridden_by_old_foreign_proc_0 },
  {     hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_value_ordered_overridden_by_old_foreign_proc_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_overridden_by_old_foreign_proc_0
};

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__718__1_2_p_0(
  MR_Word LaterOverridden_31,
  MR_Word HeadVar__2_232)
{
  {
    MR_bool succeeded = (LaterOverridden_31 == HeadVar__2_232);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_pragma_foreign_proc__501__1_2_p_0(
  MR_Word LambdaHeadVar__1_112,
  MR_Word * LambdaHeadVar__2_113)
{
  {
    MR_bool succeeded;
    MR_Integer Occurrences_64;

    *LambdaHeadVar__2_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_112, (MR_Integer) 0)));
    Occurrences_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_112, (MR_Integer) 1)));
    succeeded = (Occurrences_64 > (MR_Integer) 1);
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = parse_tree__prog_data_foreign__foreign_arg_name_mode_box_project_maybe_name_mode_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(
  MR_Word FPInfo_9,
  MR_Word PredStatus_10,
  MR_Word Context_11,
  MR_Word MaybeItemNumber_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * STATE_VARIABLE_ModuleInfo_67,
  MR_Word STATE_VARIABLE_Specs_0_68,
  MR_Word * STATE_VARIABLE_Specs_69)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_233_233;
    MR_Word TypeCtorInfo_234_234;
    MR_Word Attributes0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), FPInfo_9, (MR_Integer) 0)));
    MR_Word PredName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), FPInfo_9, (MR_Integer) 1)));
    MR_Word PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), FPInfo_9, (MR_Integer) 2)));
    MR_Word PVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), FPInfo_9, (MR_Integer) 3)));
    MR_Word ProgVarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), FPInfo_9, (MR_Integer) 4)));
    MR_Word PragmaImpl_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), FPInfo_9, (MR_Integer) 6)));
    MR_Word Globals_22;
    MR_Word MaybeThreadSafe_23;
    MR_Word ThreadSafe_24;
    MR_Word Attributes_25;
    MR_Word ModuleName_26;
    MR_Word PragmaForeignLanguage_27;
    MR_Integer Arity_28;
    MR_Word VeryVerbose_29;
    MR_Word BackendForeignLangs_31;
    MR_Word PredTable0_32;
    MR_Word PredIds_33;
    MR_Word PredId_34;
    MR_Word PredTable1_40;
    MR_Word Preds0_41;
    MR_Word ClausesInfo0_43;
    MR_Word ItemNumbers0_44;
    MR_Word ItemNumbers_45;
    MR_Word ClausesInfo1_46;
    MR_Word PredInfo0_47;
    MR_Word CurrentBackend_48;
    MR_Word ExtraAttrs_49;
    MR_Word STATE_VARIABLE_ModuleInfo_108_108;
    MR_Word STATE_VARIABLE_Specs_112_112;
    MR_Word STATE_VARIABLE_PredInfo_119_119;
    MR_Word STATE_VARIABLE_PredInfo_122_122;
    MR_Word STATE_VARIABLE_ModuleInfo_126_126;
    MR_Word _InstVarset_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), FPInfo_9, (MR_Integer) 5)));
    MR_Box conv0_STATE_VARIABLE_PredInfo_119_119;
    MR_Word Var_120;
    MR_Word Var_213;
    MR_Word Var_214;
    MR_Word Var_215;
    MR_Word Var_216;
    MR_Word Var_217;
    MR_Word Var_218;
    MR_Word Var_219;
    MR_Word Var_220;
    MR_Word Var_221;
    MR_Word Var_222;
    MR_Word Var_223;
    MR_Word Var_224;
    MR_Word Var_225;
    MR_Word Var_226;
    MR_Word Var_227;
    MR_Word Var_229;
    MR_Word Var_230;
    MR_Word Var_231;
    MR_Word Var_228;
    MR_Word Var_127;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_66, &Globals_22);
    libs__globals__get_maybe_thread_safe_2_p_0(Globals_22, &MaybeThreadSafe_23);
    ThreadSafe_24 = parse_tree__prog_data_foreign__get_thread_safe_1_f_0(Attributes0_15);
    switch (ThreadSafe_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        switch (MaybeThreadSafe_23) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 0, Attributes0_15, &Attributes_25);
            }
            break;
          case (MR_Integer) 1:
            {
              parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, Attributes0_15, &Attributes_25);
            }
            break;
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        Attributes_25 = Attributes0_15;
        break;
    }
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_66, &ModuleName_26);
    PragmaForeignLanguage_27 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_25);
    mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0, PVars_18, &Arity_28);
    libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 59, &VeryVerbose_29);
    switch (VeryVerbose_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_76;

          mercury__io__write_string_3_p_0((MR_String) "% Processing \140:- pragma foreign_proc\' for ");
          {
            Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (PredName_16));
            MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (Arity_28));
          }
          parse_tree__prog_out__write_simple_call_id_4_p_0(PredOrFunc_17, Var_76);
          mercury__io__write_string_3_p_0((MR_String) "...\n");
        }
        break;
    }
    libs__globals__get_backend_foreign_languages_2_p_0(Globals_22, &BackendForeignLangs_31);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_66, &PredTable0_32);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable0_32, (MR_Integer) 0, PredOrFunc_17, PredName_16, Arity_28, &PredIds_33);
    if ((PredIds_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Var_110;

      {
        Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (PredName_16));
      }
      hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(STATE_VARIABLE_ModuleInfo_0_66, &STATE_VARIABLE_ModuleInfo_108_108, ModuleName_26, PredName_16, Arity_28, PredOrFunc_17, PredStatus_10, (MR_Integer) 0, Context_11, Var_110, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[22]), &PredId_34, STATE_VARIABLE_Specs_0_68, &STATE_VARIABLE_Specs_112_112);
    }
    else
    {
      MR_Word Var_242 = ((MR_Word) (MR_hl_field(MR_mktag(1), PredIds_33, (MR_Integer) 1)));
      MR_Word Var_243 = ((MR_Word) (MR_hl_field(MR_mktag(1), PredIds_33, (MR_Integer) 0)));

      if ((Var_242 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        PredId_34 = Var_243;
        STATE_VARIABLE_ModuleInfo_108_108 = STATE_VARIABLE_ModuleInfo_0_66;
        STATE_VARIABLE_Specs_112_112 = STATE_VARIABLE_Specs_0_68;
      }
      else
      {
        MR_Word AmbiPieces_37;
        MR_Word AmbiMsg_38;
        MR_Word AmbiSpec_39;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_104;

        PredId_34 = Var_243;
        {
          Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (PredOrFunc_17));
          MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (PredName_16));
          MR_hl_field(MR_mktag(0), Var_86, 2) = ((MR_Box) (Arity_28));
        }
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
          MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (Var_86));
        }
        {
          Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
          MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[29])));
        }
        {
          AmbiPieces_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AmbiPieces_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[63])));
          MR_hl_field(MR_mktag(1), AmbiPieces_37, 1) = ((MR_Box) (Var_84));
        }
        {
          Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (AmbiPieces_37));
        }
        {
          Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
          MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          AmbiMsg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), AmbiMsg_38, 0) = ((MR_Box) (Context_11));
          MR_hl_field(MR_mktag(0), AmbiMsg_38, 1) = ((MR_Box) (Var_99));
        }
        {
          Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (AmbiMsg_38));
          MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          AmbiSpec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), AmbiSpec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), AmbiSpec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), AmbiSpec_39, 2) = ((MR_Box) (Var_104));
        }
        {
          STATE_VARIABLE_Specs_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_112_112, 0) = ((MR_Box) (AmbiSpec_39));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_112_112, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_68));
        }
        STATE_VARIABLE_ModuleInfo_108_108 = STATE_VARIABLE_ModuleInfo_0_66;
      }
    }
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_108_108, &PredTable1_40);
    hlds__pred_table__predicate_table_get_preds_2_p_0(PredTable1_40, &Preds0_41);
    TypeCtorInfo_233_233 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    TypeCtorInfo_234_234 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    mercury__map__lookup_3_p_0(TypeCtorInfo_233_233, TypeCtorInfo_234_234, Preds0_41, ((MR_Box) (PredId_34)), &conv0_STATE_VARIABLE_PredInfo_119_119);
    STATE_VARIABLE_PredInfo_119_119 = ((MR_Word) conv0_STATE_VARIABLE_PredInfo_119_119);
    Var_120 = (MR_Word) PredStatus_10;
    succeeded = (Var_120 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      hlds__hlds_pred__pred_info_set_status_3_p_0(PredStatus_10, STATE_VARIABLE_PredInfo_119_119, &STATE_VARIABLE_PredInfo_122_122);
    else
      STATE_VARIABLE_PredInfo_122_122 = STATE_VARIABLE_PredInfo_119_119;
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_122_122, &ClausesInfo0_43);
    Var_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo0_43, (MR_Integer) 0)));
    Var_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo0_43, (MR_Integer) 1)));
    Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo0_43, (MR_Integer) 2)));
    Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo0_43, (MR_Integer) 3)));
    Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo0_43, (MR_Integer) 4)));
    Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo0_43, (MR_Integer) 5)));
    ItemNumbers0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo0_43, (MR_Integer) 6)));
    Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo0_43, (MR_Integer) 7)));
    Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo0_43, (MR_Integer) 8)));
    Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo0_43, (MR_Integer) 9)));
    hlds__hlds_clauses__add_clause_item_number_5_p_0(MaybeItemNumber_12, Context_11, (MR_Integer) 1, ItemNumbers0_44, &ItemNumbers_45);
    Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo0_43, (MR_Integer) 0)));
    Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo0_43, (MR_Integer) 1)));
    Var_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo0_43, (MR_Integer) 2)));
    Var_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo0_43, (MR_Integer) 3)));
    Var_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo0_43, (MR_Integer) 4)));
    Var_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo0_43, (MR_Integer) 5)));
    Var_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo0_43, (MR_Integer) 6)));
    Var_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo0_43, (MR_Integer) 7)));
    Var_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo0_43, (MR_Integer) 8)));
    Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClausesInfo0_43, (MR_Integer) 9)));
    {
      ClausesInfo1_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClausesInfo1_46, 0) = ((MR_Box) (Var_222));
      MR_hl_field(MR_mktag(0), ClausesInfo1_46, 1) = ((MR_Box) (Var_223));
      MR_hl_field(MR_mktag(0), ClausesInfo1_46, 2) = ((MR_Box) (Var_224));
      MR_hl_field(MR_mktag(0), ClausesInfo1_46, 3) = ((MR_Box) (Var_225));
      MR_hl_field(MR_mktag(0), ClausesInfo1_46, 4) = ((MR_Box) (Var_226));
      MR_hl_field(MR_mktag(0), ClausesInfo1_46, 5) = ((MR_Box) (Var_227));
      MR_hl_field(MR_mktag(0), ClausesInfo1_46, 6) = ((MR_Box) (ItemNumbers_45));
      MR_hl_field(MR_mktag(0), ClausesInfo1_46, 7) = ((MR_Box) (Var_229));
      MR_hl_field(MR_mktag(0), ClausesInfo1_46, 8) = ((MR_Box) (Var_230));
      MR_hl_field(MR_mktag(0), ClausesInfo1_46, 9) = ((MR_Box) (Var_231));
    }
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo1_46, STATE_VARIABLE_PredInfo_122_122, &PredInfo0_47);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_34, PredInfo0_47, STATE_VARIABLE_ModuleInfo_108_108, &STATE_VARIABLE_ModuleInfo_126_126);
    CurrentBackend_48 = libs__globals__lookup_current_backend_1_f_0(Globals_22);
    ExtraAttrs_49 = parse_tree__prog_data_foreign__get_extra_attributes_1_f_0(Attributes_25);
    Var_127 = hlds__make_hlds__add_foreign_proc__is_applicable_for_current_backend_2_f_0(CurrentBackend_48, ExtraAttrs_49);
    succeeded = (Var_127 == (MR_Integer) 0);
    if (succeeded)
    {
      *STATE_VARIABLE_Specs_69 = STATE_VARIABLE_Specs_112_112;
      *STATE_VARIABLE_ModuleInfo_67 = STATE_VARIABLE_ModuleInfo_126_126;
    }
    else
    {
      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_47);
      if (succeeded)
      {
        MR_Word Pieces_50;
        MR_Word Msg_51;
        MR_Word Spec_52;
        MR_Word Var_130;
        MR_Word Var_133;
        MR_Word Var_136;
        MR_Word Var_137;
        MR_Word Var_138;
        MR_Word Var_145;
        MR_Word Var_146;
        MR_Word Var_150;

        {
          Var_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_138, 0) = ((MR_Box) (PredOrFunc_17));
          MR_hl_field(MR_mktag(0), Var_138, 1) = ((MR_Box) (PredName_16));
          MR_hl_field(MR_mktag(0), Var_138, 2) = ((MR_Box) (Arity_28));
        }
        {
          Var_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
          MR_hl_field(MR_mktag(3), Var_137, 1) = ((MR_Box) (Var_138));
        }
        {
          Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Var_137));
          MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[25])));
        }
        {
          Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[64])));
          MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Var_136));
        }
        {
          Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[59])));
          MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_133));
        }
        {
          Pieces_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[41])));
          MR_hl_field(MR_mktag(1), Pieces_50, 1) = ((MR_Box) (Var_130));
        }
        {
          Var_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_146, 0) = ((MR_Box) (Pieces_50));
        }
        {
          Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (Var_146));
          MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Msg_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_51, 0) = ((MR_Box) (Context_11));
          MR_hl_field(MR_mktag(0), Msg_51, 1) = ((MR_Box) (Var_145));
        }
        {
          Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Msg_51));
          MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), Spec_52, 2) = ((MR_Box) (Var_150));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_69 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_52));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_112_112));
        }
        *STATE_VARIABLE_ModuleInfo_67 = STATE_VARIABLE_ModuleInfo_126_126;
      }
      else
      {
        succeeded = mercury__list__member_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (PragmaForeignLanguage_27)), BackendForeignLangs_31);
        succeeded = !(succeeded);
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_PredInfo_154_193;

          hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), PredInfo0_47, &STATE_VARIABLE_PredInfo_154_193);
          hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_34, STATE_VARIABLE_PredInfo_154_193, STATE_VARIABLE_ModuleInfo_126_126, STATE_VARIABLE_ModuleInfo_67);
          *STATE_VARIABLE_Specs_69 = STATE_VARIABLE_Specs_112_112;
        }
        else
        {
          MR_Word Procs_53;
          MR_Word ExistingProcs_54;
          MR_Word Modes_55;
          MR_Word SimpleCallId_56;
          MR_Integer ProcId_57;

          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_47, &Procs_53);
          mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, Procs_53, &ExistingProcs_54);
          parse_tree__prog_data_foreign__pragma_get_modes_2_p_0(PVars_18, &Modes_55);
          {
            SimpleCallId_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SimpleCallId_56, 0) = ((MR_Box) (PredOrFunc_17));
            MR_hl_field(MR_mktag(0), SimpleCallId_56, 1) = ((MR_Box) (PredName_16));
            MR_hl_field(MR_mktag(0), SimpleCallId_56, 2) = ((MR_Box) (Arity_28));
          }
          succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(ExistingProcs_54, Modes_55, STATE_VARIABLE_ModuleInfo_126_126, &ProcId_57);
          if (succeeded)
          {
            MR_Word ArgTypes_58;
            MR_Word Purity_59;
            MR_Word Markers_60;
            MR_Word ClausesInfo_61;
            MR_Word Preds_62;
            MR_Word PredTable_63;
            MR_Word ArgInfoBox_64;
            MR_Word ArgInfo_65;
            MR_Word STATE_VARIABLE_ModuleInfo_156_156;
            MR_Word STATE_VARIABLE_Specs_157_157;
            MR_Word STATE_VARIABLE_PredInfo_158_158;
            MR_Word STATE_VARIABLE_PredInfo_154_194;

            hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_47, &ArgTypes_58);
            hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo0_47, &Purity_59);
            hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_47, &Markers_60);
            hlds__make_hlds__add_foreign_proc__clauses_info_add_pragma_foreign_proc_19_p_0(Purity_59, Attributes_25, PredId_34, ProcId_57, ProgVarSet_19, PVars_18, ArgTypes_58, PragmaImpl_21, Context_11, PredOrFunc_17, PredName_16, Arity_28, Markers_60, ClausesInfo1_46, &ClausesInfo_61, STATE_VARIABLE_ModuleInfo_126_126, &STATE_VARIABLE_ModuleInfo_156_156, STATE_VARIABLE_Specs_112_112, &STATE_VARIABLE_Specs_157_157);
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_61, PredInfo0_47, &STATE_VARIABLE_PredInfo_158_158);
            hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), STATE_VARIABLE_PredInfo_158_158, &STATE_VARIABLE_PredInfo_154_194);
            mercury__map__det_update_4_p_0(TypeCtorInfo_233_233, TypeCtorInfo_234_234, ((MR_Box) (PredId_34)), ((MR_Box) (STATE_VARIABLE_PredInfo_154_194)), Preds0_41, &Preds_62);
            hlds__pred_table__predicate_table_set_preds_3_p_0(Preds_62, PredTable1_40, &PredTable_63);
            hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_63, STATE_VARIABLE_ModuleInfo_156_156, STATE_VARIABLE_ModuleInfo_67);
            parse_tree__prog_data_foreign__pragma_get_var_infos_2_p_0(PVars_18, &ArgInfoBox_64);
            ArgInfo_65 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0, (MR_Word) &hlds__make_hlds__add_foreign_proc_scalar_common_1[1], (MR_Word) &hlds__make_hlds__add_foreign_proc_scalar_common_2[2], ArgInfoBox_64);
            hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0(*STATE_VARIABLE_ModuleInfo_67, PragmaImpl_21, PragmaForeignLanguage_27, ArgInfo_65, Context_11, SimpleCallId_56, PredId_34, ProcId_57, STATE_VARIABLE_Specs_157_157, STATE_VARIABLE_Specs_69);
          }
          else
          {
            MR_Word Var_166;
            MR_Word Var_169;
            MR_Word Var_172;
            MR_Word Var_175;
            MR_Word Var_176;
            MR_Word Var_183;
            MR_Word Var_184;
            MR_Word Var_188;
            MR_Word Pieces_196;
            MR_Word Msg_197;
            MR_Word Spec_198;

            {
              Var_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_176, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
              MR_hl_field(MR_mktag(3), Var_176, 1) = ((MR_Box) (SimpleCallId_56));
            }
            {
              Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (Var_176));
              MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[25])));
            }
            {
              Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[65])));
              MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (Var_175));
            }
            {
              Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[43])));
              MR_hl_field(MR_mktag(1), Var_169, 1) = ((MR_Box) (Var_172));
            }
            {
              Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[59])));
              MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) (Var_169));
            }
            {
              Pieces_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_196, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[41])));
              MR_hl_field(MR_mktag(1), Pieces_196, 1) = ((MR_Box) (Var_166));
            }
            {
              Var_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_184, 0) = ((MR_Box) (Pieces_196));
            }
            {
              Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (Var_184));
              MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Msg_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Msg_197, 0) = ((MR_Box) (Context_11));
              MR_hl_field(MR_mktag(0), Msg_197, 1) = ((MR_Box) (Var_183));
            }
            {
              Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) (Msg_197));
              MR_hl_field(MR_mktag(1), Var_188, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Spec_198 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_198, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Spec_198, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), Spec_198, 2) = ((MR_Box) (Var_188));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_69 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_198));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_112_112));
            }
            *STATE_VARIABLE_ModuleInfo_67 = STATE_VARIABLE_ModuleInfo_126_126;
          }
        }
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_add_pragma_foreign_proc_19_p_0(
  MR_Word Purity_20,
  MR_Word Attributes0_21,
  MR_Word PredId_22,
  MR_Integer ProcId_23,
  MR_Word PVarSet_24,
  MR_Word PVars_25,
  MR_Word OrigArgTypes_26,
  MR_Word PragmaImpl0_27,
  MR_Word Context_28,
  MR_Word PredOrFunc_29,
  MR_Word PredName_30,
  MR_Integer Arity_31,
  MR_Word Markers_32,
  MR_Word STATE_VARIABLE_ClausesInfo_0_42,
  MR_Word * STATE_VARIABLE_ClausesInfo_43,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_36;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_44, PredId_22, &PredInfo_36);
    succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_36);
    if (succeeded)
    {
      MR_Word Globals_37;
      MR_Word AllowDefnOfBuiltin_38;

      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_44, &Globals_37);
      libs__globals__lookup_bool_option_3_p_0(Globals_37, (MR_Integer) 284, &AllowDefnOfBuiltin_38);
      switch (AllowDefnOfBuiltin_38) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Msg_39;
            MR_Word Spec_40;
            MR_Word Var_60;

            {
              Msg_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Msg_39, 0) = ((MR_Box) (Context_28));
              MR_hl_field(MR_mktag(0), Msg_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[32])));
            }
            {
              Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Msg_39));
              MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), Spec_40, 2) = ((MR_Box) (Var_60));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
      hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0(Purity_20, Attributes0_21, PredId_22, ProcId_23, AllProcIds_41, PVarSet_24, PVars_25, OrigArgTypes_26, PragmaImpl0_27, Context_28, PredOrFunc_29, PredName_30, Arity_31, Markers_32, STATE_VARIABLE_ClausesInfo_0_42, STATE_VARIABLE_ClausesInfo_43, STATE_VARIABLE_ModuleInfo_0_44, STATE_VARIABLE_ModuleInfo_45, STATE_VARIABLE_Specs_0_46, STATE_VARIABLE_Specs_47);
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_113;

    succeeded = hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_pragma_foreign_proc__501__1_2_p_0(((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_113);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_113));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0(
  MR_Word Purity_21,
  MR_Word Attributes0_22,
  MR_Word PredId_23,
  MR_Integer ProcId_24,
  MR_Word AllProcIds_25,
  MR_Word PVarSet_26,
  MR_Word PVars_27,
  MR_Word OrigArgTypes_28,
  MR_Word PragmaImpl0_29,
  MR_Word Context_30,
  MR_Word PredOrFunc_31,
  MR_Word PredName_32,
  MR_Integer Arity_33,
  MR_Word Markers_34,
  MR_Word STATE_VARIABLE_ClausesInfo_0_103,
  MR_Word * STATE_VARIABLE_ClausesInfo_104,
  MR_Word STATE_VARIABLE_ModuleInfo_0_105,
  MR_Word * STATE_VARIABLE_ModuleInfo_106,
  MR_Word STATE_VARIABLE_Specs_0_107,
  MR_Word * STATE_VARIABLE_Specs_108)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_221_221;
    MR_Word VarSet0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 0)));
    MR_Word ExplicitVarTypes_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 1)));
    MR_Word TVarNameMap_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 2)));
    MR_Word InferredVarTypes_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 3)));
    MR_Word HeadVars_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 4)));
    MR_Word ClausesRep0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 5)));
    MR_Word ItemNumbers_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 6)));
    MR_Word RttiVarMaps_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 7)));
    MR_Word HadSyntaxError_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 9)));
    MR_Word Clauses0_48;
    MR_Word Globals_49;
    MR_Word Target_50;
    MR_Word NewLang_51;
    MR_Word Clauses1_52;
    MR_Word Overridden_53;
    MR_Word BackendForeignLanguages_54;
    MR_Word Args0_55;
    MR_Word ArgInfo_56;
    MR_Word Attributes1_57;
    MR_Word PragmaImpl_58;
    MR_Word ArgBag0_59;
    MR_Word ArgBag_60;
    MR_Word ArgBagAL0_61;
    MR_Word MultiplyOccurringArgVars_65;
    MR_Word STATE_VARIABLE_Specs_109_109;
    MR_Word _HasForeignClauses_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 8)));

    hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_43, &Clauses0_48);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_105, &Globals_49);
    libs__globals__get_target_2_p_0(Globals_49, &Target_50);
    NewLang_51 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes0_22);
    hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0(PredName_32, Arity_33, PredOrFunc_31, Context_30, Globals_49, Target_50, NewLang_51, AllProcIds_25, ProcId_24, Clauses0_48, &Clauses1_52, &Overridden_53, STATE_VARIABLE_Specs_0_107, &STATE_VARIABLE_Specs_109_109);
    libs__globals__get_backend_foreign_languages_2_p_0(Globals_49, &BackendForeignLanguages_54);
    parse_tree__prog_data_foreign__pragma_get_vars_2_p_0(PVars_27, &Args0_55);
    parse_tree__prog_data_foreign__pragma_get_var_infos_2_p_0(PVars_27, &ArgInfo_56);
    backend_libs__foreign__extrude_pragma_implementation_11_p_0(BackendForeignLanguages_54, PVars_27, PredName_32, PredOrFunc_31, Context_30, STATE_VARIABLE_ModuleInfo_0_105, STATE_VARIABLE_ModuleInfo_106, Attributes0_22, &Attributes1_57, PragmaImpl0_29, &PragmaImpl_58);
    TypeInfo_221_221 = (MR_Word) &hlds__make_hlds__add_foreign_proc_scalar_common_1[2];
    mercury__bag__init_1_p_0(TypeInfo_221_221, &ArgBag0_59);
    mercury__bag__insert_list_3_p_0(TypeInfo_221_221, Args0_55, ArgBag0_59, &ArgBag_60);
    mercury__bag__to_assoc_list_2_p_0(TypeInfo_221_221, ArgBag_60, &ArgBagAL0_61);
    mercury__list__filter_map_3_p_0((MR_Word) &hlds__make_hlds__add_foreign_proc_scalar_common_2[0], TypeInfo_221_221, (MR_Word) &hlds__make_hlds__add_foreign_proc_scalar_common_2[1], ArgBagAL0_61, &MultiplyOccurringArgVars_65);
    if ((MultiplyOccurringArgVars_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word GoalInfo0_78;
      MR_Word GoalInfo1_79;

      hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_78);
      hlds__hlds_goal__goal_info_set_context_3_p_0(Context_30, GoalInfo0_78, &GoalInfo1_79);
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_34, (MR_Integer) 16);
      if (!(succeeded))
      {
        succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_34, (MR_Integer) 17);
      }
      if (succeeded)
        *STATE_VARIABLE_Specs_108 = STATE_VARIABLE_Specs_109_109;
      else
      {
        MR_Word ForeignAttributePurity_80;

        ForeignAttributePurity_80 = parse_tree__prog_data_foreign__get_purity_1_f_0(Attributes1_57);
        succeeded = (ForeignAttributePurity_80 == Purity_21);
        if (succeeded)
          *STATE_VARIABLE_Specs_108 = STATE_VARIABLE_Specs_109_109;
        else
        {
          MR_String ForeignAttributePurityStr_81;
          MR_String PurityStr_82;
          MR_Word Pieces_83;
          MR_Word Var_119;
          MR_Word Var_120;
          MR_Word Var_121;
          MR_Word Var_122;
          MR_Word Var_123;
          MR_Word Var_124;
          MR_Word Var_127;
          MR_Word Var_128;
          MR_Word Var_129;
          MR_Word Var_132;
          MR_Word Var_134;
          MR_Word Var_137;
          MR_Word Var_138;
          MR_Word Var_145;
          MR_Word Var_146;
          MR_Word Var_150;
          MR_Word Msg_211;
          MR_Word Spec_212;

          parse_tree__prog_out__purity_name_2_p_0(ForeignAttributePurity_80, &ForeignAttributePurityStr_81);
          parse_tree__prog_out__purity_name_2_p_0(Purity_21, &PurityStr_82);
          {
            Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
            MR_hl_field(MR_mktag(3), Var_120, 1) = ((MR_Box) (PredOrFunc_31));
          }
          {
            Var_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) (PredName_32));
            MR_hl_field(MR_mktag(0), Var_123, 1) = ((MR_Box) (Arity_33));
          }
          {
            Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (Var_123));
          }
          {
            Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (ForeignAttributePurityStr_81));
          }
          {
            Var_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_138, 1) = ((MR_Box) (PurityStr_82));
          }
          {
            Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (Var_138));
            MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[25])));
          }
          {
            Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[57])));
            MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_137));
          }
          {
            Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (Var_120));
            MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_134));
          }
          {
            Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[56])));
            MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_132));
          }
          {
            Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Var_128));
            MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (Var_129));
          }
          {
            Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[55])));
            MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_127));
          }
          {
            Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
            MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_124));
          }
          {
            Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (Var_120));
            MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_121));
          }
          {
            Pieces_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[54])));
            MR_hl_field(MR_mktag(1), Pieces_83, 1) = ((MR_Box) (Var_119));
          }
          {
            Var_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_146, 0) = ((MR_Box) (Pieces_83));
          }
          {
            Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (Var_146));
            MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Msg_211 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_211, 0) = ((MR_Box) (Context_30));
            MR_hl_field(MR_mktag(0), Msg_211, 1) = ((MR_Box) (Var_145));
          }
          {
            Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Msg_211));
            MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Spec_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_212, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Spec_212, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), Spec_212, 2) = ((MR_Box) (Var_150));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_108 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_212));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_109_109));
          }
        }
      }
      switch (Overridden_53) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word GoalInfo_84;
            MR_Word HeadVarList_85;
            MR_Word ForeignArgs_86;
            MR_Word Attributes_87;
            MR_Word GoalExpr_90;
            MR_Word HldsGoal0_91;
            MR_Word EmptyVarTypes_92;
            MR_Word EmptyRttiVarmaps_93;
            MR_Word HldsGoal_95;
            MR_Word VarSet_96;
            MR_Word Clause_99;
            MR_Word Clauses_100;
            MR_Word ClausesRep_101;
            MR_Word Var_154;
            MR_Word Var_155;
            MR_Word Var_157;
            MR_Word _Warnings_94;
            MR_Word Var_97;
            MR_Word Var_98;

            hlds__hlds_goal__goal_info_set_purity_3_p_0(Purity_21, GoalInfo1_79, &GoalInfo_84);
            HeadVarList_85 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(TypeInfo_221_221, HeadVars_42);
            hlds__hlds_goal__make_foreign_args_4_p_0(HeadVarList_85, ArgInfo_56, OrigArgTypes_28, &ForeignArgs_86);
            hlds__make_hlds__add_foreign_proc__maybe_rename_user_annotated_sharing_information_6_p_0(Globals_49, Args0_55, HeadVarList_85, OrigArgTypes_28, Attributes1_57, &Attributes_87);
            {
              GoalExpr_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), GoalExpr_90, 1) = ((MR_Box) (Attributes_87));
              MR_hl_field(MR_mktag(3), GoalExpr_90, 2) = ((MR_Box) (PredId_23));
              MR_hl_field(MR_mktag(3), GoalExpr_90, 3) = ((MR_Box) (ProcId_24));
              MR_hl_field(MR_mktag(3), GoalExpr_90, 4) = ((MR_Box) (ForeignArgs_86));
              MR_hl_field(MR_mktag(3), GoalExpr_90, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(3), GoalExpr_90, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(3), GoalExpr_90, 7) = ((MR_Box) (PragmaImpl_58));
            }
            {
              HldsGoal0_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), HldsGoal0_91, 0) = ((MR_Box) (GoalExpr_90));
              MR_hl_field(MR_mktag(0), HldsGoal0_91, 1) = ((MR_Box) (GoalInfo_84));
            }
            hlds__vartypes__init_vartypes_1_p_0(&EmptyVarTypes_92);
            hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&EmptyRttiVarmaps_93);
            hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, HeadVarList_85, &_Warnings_94, HldsGoal0_91, &HldsGoal_95, VarSet0_38, &VarSet_96, EmptyVarTypes_92, &Var_97, EmptyRttiVarmaps_93, &Var_98);
            {
              Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (ProcId_24));
              MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (Var_155));
            }
            {
              Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (NewLang_51));
            }
            {
              Clause_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Clause_99, 0) = ((MR_Box) (Var_154));
              MR_hl_field(MR_mktag(0), Clause_99, 1) = ((MR_Box) (HldsGoal_95));
              MR_hl_field(MR_mktag(0), Clause_99, 2) = ((MR_Box) (Var_157));
              MR_hl_field(MR_mktag(0), Clause_99, 3) = ((MR_Box) (Context_30));
              MR_hl_field(MR_mktag(0), Clause_99, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Clauses_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Clauses_100, 0) = ((MR_Box) (Clause_99));
              MR_hl_field(MR_mktag(1), Clauses_100, 1) = ((MR_Box) (Clauses1_52));
            }
            hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_100, &ClausesRep_101);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ClausesInfo_104 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarSet_96));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExplicitVarTypes_39));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TVarNameMap_40));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (InferredVarTypes_41));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (HeadVars_42));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ClausesRep_101));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ItemNumbers_44));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (RttiVarMaps_45));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (HadSyntaxError_47));
            }
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_ClausesInfo_104 = STATE_VARIABLE_ClausesInfo_0_103;
          break;
      }
    }
    else
    {
      MR_Integer OrigArity_68;
      MR_Word SimpleCallId_69;
      MR_Word Pieces1_70;
      MR_Word Pieces2_72;
      MR_Word Msg_76;
      MR_Word Spec_77;
      MR_Word Var_162;
      MR_Word Var_165;
      MR_Word Var_168;
      MR_Word Var_169;
      MR_Word Var_200;
      MR_Word Var_201;
      MR_Word Var_202;
      MR_Word Var_206;
      MR_Word Var_226;
      MR_Word Var_227;

      parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_31, &OrigArity_68, Arity_33);
      {
        SimpleCallId_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SimpleCallId_69, 0) = ((MR_Box) (PredOrFunc_31));
        MR_hl_field(MR_mktag(0), SimpleCallId_69, 1) = ((MR_Box) (PredName_32));
        MR_hl_field(MR_mktag(0), SimpleCallId_69, 2) = ((MR_Box) (OrigArity_68));
      }
      {
        Var_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
        MR_hl_field(MR_mktag(3), Var_169, 1) = ((MR_Box) (SimpleCallId_69));
      }
      {
        Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (Var_169));
        MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[34])));
      }
      {
        Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[60])));
        MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) (Var_168));
      }
      {
        Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[59])));
        MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) (Var_165));
      }
      {
        Pieces1_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces1_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[58])));
        MR_hl_field(MR_mktag(1), Pieces1_70, 1) = ((MR_Box) (Var_162));
      }
      Var_227 = ((MR_Word) (MR_hl_field(MR_mktag(1), MultiplyOccurringArgVars_65, (MR_Integer) 0)));
      Var_226 = ((MR_Word) (MR_hl_field(MR_mktag(1), MultiplyOccurringArgVars_65, (MR_Integer) 1)));
      if ((Var_226 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Var_191;
        MR_Word Var_192;
        MR_String Var_193;

        Var_193 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, PVarSet_26, Var_227);
        {
          Var_192 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_192, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_192, 1) = ((MR_Box) (Var_193));
        }
        {
          Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (Var_192));
          MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[36])));
        }
        {
          Pieces2_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces2_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[61])));
          MR_hl_field(MR_mktag(1), Pieces2_72, 1) = ((MR_Box) (Var_191));
        }
      }
      else
      {
        MR_Word Var_179;
        MR_Word Var_180;
        MR_String Var_181;

        Var_181 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, PVarSet_26, MultiplyOccurringArgVars_65);
        {
          Var_180 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_180, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_180, 1) = ((MR_Box) (Var_181));
        }
        {
          Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (Var_180));
          MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[38])));
        }
        {
          Pieces2_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces2_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[62])));
          MR_hl_field(MR_mktag(1), Pieces2_72, 1) = ((MR_Box) (Var_179));
        }
      }
      Var_202 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, Pieces1_70, Pieces2_72);
      {
        Var_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_201, 0) = ((MR_Box) (Var_202));
      }
      {
        Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) (Var_201));
        MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Msg_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_76, 0) = ((MR_Box) (Context_30));
        MR_hl_field(MR_mktag(0), Msg_76, 1) = ((MR_Box) (Var_200));
      }
      {
        Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) (Msg_76));
        MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), Spec_77, 2) = ((MR_Box) (Var_206));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_108 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_77));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_109_109));
      }
      *STATE_VARIABLE_ClausesInfo_104 = STATE_VARIABLE_ClausesInfo_0_103;
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__718__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0(
  MR_Word PredName_15,
  MR_Integer Arity_16,
  MR_Word PredOrFunc_17,
  MR_Word NewContext_18,
  MR_Word Globals_19,
  MR_Word Target_20,
  MR_Word NewLang_21,
  MR_Word AllProcIds_22,
  MR_Integer NewClauseProcId_23,
  MR_Word Clauses0_24,
  MR_Word * Clauses_25,
  MR_Word * Overridden_26,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52)
{
  {
    MR_bool succeeded;

    if ((Clauses0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Clauses_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Overridden_26 = (MR_Integer) 1;
      *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_0_51;
    }
    else
    {
      MR_Word FirstClause0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), Clauses0_24, (MR_Integer) 0)));
      MR_Word LaterClauses0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Clauses0_24, (MR_Integer) 1)));
      MR_Word LaterClauses_30;
      MR_Word LaterOverridden_31;
      MR_Word ApplProcIds0_32;
      MR_Word Body_33;
      MR_Word ClauseLang_34;
      MR_Word ClauseContext_35;
      MR_Word StateVarWarnings_36;
      MR_Word STATE_VARIABLE_Specs_53_53;

      hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0(PredName_15, Arity_16, PredOrFunc_17, NewContext_18, Globals_19, Target_20, NewLang_21, AllProcIds_22, NewClauseProcId_23, LaterClauses0_29, &LaterClauses_30, &LaterOverridden_31, STATE_VARIABLE_Specs_0_51, &STATE_VARIABLE_Specs_53_53);
      ApplProcIds0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstClause0_28, (MR_Integer) 0)));
      Body_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstClause0_28, (MR_Integer) 1)));
      ClauseLang_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstClause0_28, (MR_Integer) 2)));
      ClauseContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstClause0_28, (MR_Integer) 3)));
      StateVarWarnings_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstClause0_28, (MR_Integer) 4)));
      if ((ApplProcIds0_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        if ((ClauseLang_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word ProcIds_38;

          succeeded = mercury__list__delete_first_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, AllProcIds_22, ((MR_Box) (NewClauseProcId_23)), &ProcIds_38);
          if (succeeded)
            if ((ProcIds_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *Clauses_25 = LaterClauses_30;
            else
            {
              MR_Word FirstClause_41;
              MR_Word Var_100;

              {
                Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (ProcIds_38));
              }
              {
                FirstClause_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), FirstClause_41, 0) = ((MR_Box) (Var_100));
                MR_hl_field(MR_mktag(0), FirstClause_41, 1) = ((MR_Box) (Body_33));
                MR_hl_field(MR_mktag(0), FirstClause_41, 2) = ((MR_Box) (ClauseLang_34));
                MR_hl_field(MR_mktag(0), FirstClause_41, 3) = ((MR_Box) (ClauseContext_35));
                MR_hl_field(MR_mktag(0), FirstClause_41, 4) = ((MR_Box) (StateVarWarnings_36));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Clauses_25 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstClause_41));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterClauses_30));
              }
            }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Clauses_25 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstClause0_28));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterClauses_30));
            }
          *Overridden_26 = LaterOverridden_31;
          *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_53_53;
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/14", (MR_String) "all_modes");
            return;
          }
        }
      else
      {
        MR_Word Var_490 = ((MR_Word) (MR_hl_field(MR_mktag(1), ApplProcIds0_32, (MR_Integer) 0)));

        if ((ClauseLang_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word ProcIds_423;

          succeeded = mercury__list__delete_first_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, Var_490, ((MR_Box) (NewClauseProcId_23)), &ProcIds_423);
          if (succeeded)
            if ((ProcIds_423 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *Clauses_25 = LaterClauses_30;
            else
            {
              MR_Word FirstClause_417;
              MR_Word Var_418;

              {
                Var_418 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_418, 0) = ((MR_Box) (ProcIds_423));
              }
              {
                FirstClause_417 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), FirstClause_417, 0) = ((MR_Box) (Var_418));
                MR_hl_field(MR_mktag(0), FirstClause_417, 1) = ((MR_Box) (Body_33));
                MR_hl_field(MR_mktag(0), FirstClause_417, 2) = ((MR_Box) (ClauseLang_34));
                MR_hl_field(MR_mktag(0), FirstClause_417, 3) = ((MR_Box) (ClauseContext_35));
                MR_hl_field(MR_mktag(0), FirstClause_417, 4) = ((MR_Box) (StateVarWarnings_36));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Clauses_25 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstClause_417));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterClauses_30));
              }
            }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Clauses_25 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstClause0_28));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterClauses_30));
            }
          *Overridden_26 = LaterOverridden_31;
          *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_53_53;
        }
        else
        {
          MR_Word OldLang_365 = ((MR_Word) (MR_hl_field(MR_mktag(1), ClauseLang_34, (MR_Integer) 0)));
          MR_Word ProcIds_362;

          succeeded = mercury__list__delete_first_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, Var_490, ((MR_Box) (NewClauseProcId_23)), &ProcIds_362);
          if (succeeded)
          {
            MR_Word PreferNewForeignLang_277;

            PreferNewForeignLang_277 = parse_tree__prog_foreign__prefer_foreign_language_4_f_0(Globals_19, Target_20, OldLang_365, NewLang_21);
            switch (PreferNewForeignLang_277) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *Clauses_25 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstClause0_28));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterClauses_30));
                  }
                  *Overridden_26 = (MR_Integer) 0;
                  succeeded = (OldLang_365 == NewLang_21);
                  if (succeeded)
                  {
                    MR_Word PiecesA_115;
                    MR_Word MsgA_117;
                    MR_Word MsgB_118;
                    MR_Word Spec_119;
                    MR_Word Var_122;
                    MR_Word Var_123;
                    MR_Word Var_124;
                    MR_Word Var_125;
                    MR_Word Var_126;
                    MR_Word Var_127;
                    MR_Word Var_130;
                    MR_Word Var_131;
                    MR_String Var_132;
                    MR_Word Var_134;
                    MR_Word Var_135;
                    MR_Word Var_137;
                    MR_Word Var_145;
                    MR_Word Var_146;

                    {
                      Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                      MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) (PredOrFunc_17));
                    }
                    {
                      Var_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (PredName_15));
                      MR_hl_field(MR_mktag(0), Var_126, 1) = ((MR_Box) (Arity_16));
                    }
                    {
                      Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                      MR_hl_field(MR_mktag(3), Var_125, 1) = ((MR_Box) (Var_126));
                    }
                    Var_132 = libs__globals__foreign_language_string_1_f_0(OldLang_365);
                    {
                      Var_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), Var_131, 1) = ((MR_Box) (Var_132));
                    }
                    {
                      Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Var_131));
                      MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[25])));
                    }
                    {
                      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[52])));
                      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (Var_130));
                    }
                    {
                      Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (Var_125));
                      MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_127));
                    }
                    {
                      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var_123));
                      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_124));
                    }
                    {
                      PiecesA_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), PiecesA_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[51])));
                      MR_hl_field(MR_mktag(1), PiecesA_115, 1) = ((MR_Box) (Var_122));
                    }
                    {
                      Var_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_135, 0) = ((MR_Box) (PiecesA_115));
                    }
                    {
                      Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Var_135));
                      MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MsgA_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), MsgA_117, 0) = ((MR_Box) (NewContext_18));
                      MR_hl_field(MR_mktag(0), MsgA_117, 1) = ((MR_Box) (Var_134));
                    }
                    {
                      Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (ClauseContext_35));
                    }
                    {
                      MsgB_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), MsgB_118, 0) = ((MR_Box) (Var_137));
                      MR_hl_field(MR_mktag(1), MsgB_118, 1) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(1), MsgB_118, 2) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(1), MsgB_118, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[53])));
                    }
                    {
                      Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (MsgB_118));
                      MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (MsgA_117));
                      MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (Var_146));
                    }
                    {
                      Spec_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Spec_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), Spec_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                      MR_hl_field(MR_mktag(0), Spec_119, 2) = ((MR_Box) (Var_145));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_Specs_52 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_119));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_53_53));
                    }
                  }
                  else
                    *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_53_53;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_229;

                  if ((ProcIds_362 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    *Clauses_25 = LaterClauses_30;
                    *Overridden_26 = LaterOverridden_31;
                  }
                  else
                  {
                    MR_Word Var_218;
                    MR_Word FirstClause_219;

                    {
                      Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_218, 0) = ((MR_Box) (ProcIds_362));
                    }
                    {
                      FirstClause_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), FirstClause_219, 0) = ((MR_Box) (Var_218));
                      MR_hl_field(MR_mktag(0), FirstClause_219, 1) = ((MR_Box) (Body_33));
                      MR_hl_field(MR_mktag(0), FirstClause_219, 2) = ((MR_Box) (ClauseLang_34));
                      MR_hl_field(MR_mktag(0), FirstClause_219, 3) = ((MR_Box) (ClauseContext_35));
                      MR_hl_field(MR_mktag(0), FirstClause_219, 4) = ((MR_Box) (StateVarWarnings_36));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *Clauses_25 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstClause_219));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterClauses_30));
                    }
                    *Overridden_26 = LaterOverridden_31;
                  }
                  {
                    Var_229 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_229, 0) = ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_5[0]));
                    MR_hl_field(MR_mktag(0), Var_229, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_229, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_229, 3) = ((MR_Box) (LaterOverridden_31));
                    MR_hl_field(MR_mktag(0), Var_229, 4) = ((MR_Box) ((MR_Integer) 1));
                  }
                  mercury__require__expect_3_p_0(Var_229, (MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/14", (MR_String) "inconsistent old foreign_procs");
                  *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_53_53;
                }
                break;
            }
          }
          else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Clauses_25 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstClause0_28));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterClauses_30));
            }
            *Overridden_26 = LaterOverridden_31;
            *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_53_53;
          }
        }
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
  {
    MR_Word SharingAnalysis_12;

    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 417, &SharingAnalysis_12);
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
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_Integer) 1;
    else
    {
      MR_Word Attr_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Attrs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) Attr_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__2_2 = Attrs_7;

            // direct tailcall eliminated
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Backend_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Attr_6, (MR_Integer) 0)));

            succeeded = (Backend_9 == HeadVar__1_1);
            if (succeeded)
            {
              MR_Word next_value_of_HeadVar__2_2 = Attrs_7;

              // direct tailcall eliminated
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

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    conv0_HeadVar__4_4 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
    return wrapper_arg_2;
  }
}

void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0(
  MR_Word MaybeAttrs_8,
  MR_Word FPEInfo_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  {
    MR_Word Lang_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), FPEInfo_9, (MR_Integer) 0)));
    MR_Word PrednameModesPF_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), FPEInfo_9, (MR_Integer) 1)));
    MR_String ExportedName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), FPEInfo_9, (MR_Integer) 2)));
    MR_Word PredSymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), PrednameModesPF_14, (MR_Integer) 0)));
    MR_Word Modes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), PrednameModesPF_14, (MR_Integer) 1)));
    MR_Word PredOrFunc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), PrednameModesPF_14, (MR_Integer) 2)));
    MR_Word PredTable_19;
    MR_Integer Arity_20;
    MR_Word PredIds_21;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_40, &PredTable_19);
    mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, Modes_17, &Arity_20);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_19, (MR_Integer) 1, PredOrFunc_18, PredSymName_16, Arity_20, &PredIds_21);
    if ((PredIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      if ((MaybeAttrs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word AllArityPredIds_22;
        MR_Word Preds_23;
        MR_Word OtherArities_24;

        hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredTable_19, (MR_Integer) 1, PredOrFunc_18, PredSymName_16, &AllArityPredIds_22);
        hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_40, &Preds_23);
        hlds__hlds_error_util__find_pred_arities_other_than_4_p_0(Preds_23, AllArityPredIds_22, Arity_20, &OtherArities_24);
        hlds__make_hlds__make_hlds_error__report_undefined_pred_or_func_error_7_p_0(PredSymName_16, Arity_20, OtherArities_24, Context_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[6]), STATE_VARIABLE_Specs_0_42, STATE_VARIABLE_Specs_43);
      }
      else
      {
        MR_Word CompilerAttrs_26 = (MR_Word) MR_body(((MR_Word) MaybeAttrs_8), (MR_Integer) 1);
        MR_Word AllowExport_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), CompilerAttrs_26, (MR_Integer) 0)));
        MR_Word _IsMutable_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), CompilerAttrs_26, (MR_Integer) 1)));

        switch (AllowExport_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_pragma_foreign_proc_export\'/7", (MR_String) "bad introduced foreign_export pragma");
                return;
              }
            }
            break;
        }
        *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_0_42;
      }
      *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
    }
    else
    {
      MR_Word Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), PredIds_21, (MR_Integer) 1)));
      MR_Word Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), PredIds_21, (MR_Integer) 0)));

      if ((Var_110 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_2_13_p_0(Arity_20, PredTable_19, MaybeAttrs_8, Lang_13, PredSymName_16, Var_111, Modes_17, ExportedName_15, Context_10, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41, STATE_VARIABLE_Specs_0_42, STATE_VARIABLE_Specs_43);
      else
      {
        MR_Word StartPieces_33;
        MR_Word PredIdPiecesList_34;
        MR_Word PredIdPieces_35;
        MR_Word MainPieces_36;
        MR_Word Msg_38;
        MR_Word Spec_39;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_68;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_88;

        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
          MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (PredOrFunc_18));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[16])));
        }
        {
          StartPieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), StartPieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[46])));
          MR_hl_field(MR_mktag(1), StartPieces_33, 1) = ((MR_Box) (Var_48));
        }
        {
          Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0_1));
          MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_40));
          MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        PredIdPiecesList_34 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__make_hlds__add_foreign_proc_scalar_common_1[0], Var_68, PredIds_21);
        PredIdPieces_35 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(PredIdPiecesList_34, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[48]));
        MainPieces_36 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, StartPieces_33, PredIdPieces_35);
        {
          Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (MainPieces_36));
        }
        {
          Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
          MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[50])));
        }
        {
          Msg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_38, 0) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(0), Msg_38, 1) = ((MR_Box) (Var_80));
        }
        {
          Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Msg_38));
          MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), Spec_39, 2) = ((MR_Box) (Var_88));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_43 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_39));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
        }
        *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_2_13_p_0(
  MR_Integer Arity_14,
  MR_Word PredTable_15,
  MR_Word MaybeAttrs_16,
  MR_Word Lang_17,
  MR_Word PredSymName_18,
  MR_Word PredId_19,
  MR_Word Modes_20,
  MR_String ExportedName_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_45,
  MR_Word * STATE_VARIABLE_ModuleInfo_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_94_94;
    MR_Word TypeCtorInfo_95_95;
    MR_Word Preds_25;
    MR_Word PredInfo_26;
    MR_Word Procs_27;
    MR_Word ExistingProcs_28;
    MR_Box conv0_PredInfo_26;
    MR_Integer ProcId_29;

    hlds__pred_table__predicate_table_get_preds_2_p_0(PredTable_15, &Preds_25);
    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, Preds_25, ((MR_Box) (PredId_19)), &conv0_PredInfo_26);
    PredInfo_26 = ((MR_Word) conv0_PredInfo_26);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_26, &Procs_27);
    TypeCtorInfo_94_94 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
    TypeCtorInfo_95_95 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    mercury__map__to_assoc_list_2_p_0(TypeCtorInfo_94_94, TypeCtorInfo_95_95, Procs_27, &ExistingProcs_28);
    succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(ExistingProcs_28, Modes_20, STATE_VARIABLE_ModuleInfo_0_45, &ProcId_29);
    if (succeeded)
    {
      MR_Word ProcInfo0_30;
      MR_Word MaybeDetism_31;
      MR_Box conv1_ProcInfo0_30;
      MR_Word Detism_32;

      mercury__map__lookup_3_p_0(TypeCtorInfo_94_94, TypeCtorInfo_95_95, Procs_27, ((MR_Box) (ProcId_29)), &conv1_ProcInfo0_30);
      ProcInfo0_30 = ((MR_Word) conv1_ProcInfo0_30);
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_30, &MaybeDetism_31);
      succeeded = ((MR_tag((MR_Word) MaybeDetism_31)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Detism_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeDetism_31, (MR_Integer) 0)));
        switch (Detism_32) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            succeeded = MR_TRUE;
            break;
        }
      }
      if (succeeded)
      {
        MR_Word Pieces_33;
        MR_Word Msg_34;
        MR_Word Spec_35;
        MR_Word Var_51;
        MR_Word Var_54;
        MR_Word Var_57;
        MR_Word Var_60;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_String Var_65;
        MR_String Var_66;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_76;

        Var_66 = parse_tree__prog_out__determinism_to_string_1_f_0(Detism_32);
        Var_65 = mercury__string__f_43_43_2_f_0(Var_66, (MR_String) ".");
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_64, 0) = ((MR_Box) (Var_65));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
          MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[23])));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[45])));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
        }
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[44])));
          MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[43])));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[42])));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
        }
        {
          Pieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[41])));
          MR_hl_field(MR_mktag(1), Pieces_33, 1) = ((MR_Box) (Var_51));
        }
        {
          Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Pieces_33));
        }
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Msg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_34, 0) = ((MR_Box) (Context_22));
          MR_hl_field(MR_mktag(0), Msg_34, 1) = ((MR_Box) (Var_71));
        }
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Msg_34));
          MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), Spec_35, 2) = ((MR_Box) (Var_76));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_48 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_35));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_47));
        }
        *STATE_VARIABLE_ModuleInfo_46 = STATE_VARIABLE_ModuleInfo_0_45;
      }
      else
      {
        MR_Word Globals_36;
        MR_Word ForeignLanguages_37;
        MR_Word ProcInfo_41;
        MR_Word STATE_VARIABLE_ModuleInfo_79_79;

        hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_45, &Globals_36);
        libs__globals__get_backend_foreign_languages_2_p_0(Globals_36, &ForeignLanguages_37);
        succeeded = mercury__list__member_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (Lang_17)), ForeignLanguages_37);
        if (succeeded)
        {
          MR_Word PragmaExportedProcs0_38;
          MR_Word NewExportedProc_39;
          MR_Word PragmaExportedProcs_40;

          hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(STATE_VARIABLE_ModuleInfo_0_45, &PragmaExportedProcs0_38);
          {
            NewExportedProc_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), NewExportedProc_39, 0) = ((MR_Box) (Lang_17));
            MR_hl_field(MR_mktag(0), NewExportedProc_39, 1) = ((MR_Box) (PredId_19));
            MR_hl_field(MR_mktag(0), NewExportedProc_39, 2) = ((MR_Box) (ProcId_29));
            MR_hl_field(MR_mktag(0), NewExportedProc_39, 3) = ((MR_Box) (ExportedName_21));
            MR_hl_field(MR_mktag(0), NewExportedProc_39, 4) = ((MR_Box) (Context_22));
          }
          PragmaExportedProcs_40 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, PragmaExportedProcs0_38, ((MR_Box) (NewExportedProc_39)));
          hlds__hlds_module__module_info_set_pragma_exported_procs_3_p_0(PragmaExportedProcs_40, STATE_VARIABLE_ModuleInfo_0_45, &STATE_VARIABLE_ModuleInfo_79_79);
        }
        else
          STATE_VARIABLE_ModuleInfo_79_79 = STATE_VARIABLE_ModuleInfo_0_45;
        hlds__hlds_pred__proc_info_set_has_any_foreign_exports_3_p_0((MR_Integer) 1, ProcInfo0_30, &ProcInfo_41);
        hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_19, ProcId_29, PredInfo_26, ProcInfo_41, STATE_VARIABLE_ModuleInfo_79_79, STATE_VARIABLE_ModuleInfo_46);
        *STATE_VARIABLE_Specs_48 = STATE_VARIABLE_Specs_0_47;
      }
    }
    else
    {
      if ((MaybeAttrs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__make_hlds__make_hlds_error__report_undefined_mode_error_6_p_0(PredSymName_18, Arity_14, Context_22, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[6]), STATE_VARIABLE_Specs_0_47, STATE_VARIABLE_Specs_48);
      }
      else
      {
        MR_Word CompilerAttrs_42 = (MR_Word) MR_body(((MR_Word) MaybeAttrs_16), (MR_Integer) 1);
        MR_Word AllowExport_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), CompilerAttrs_42, (MR_Integer) 0)));
        MR_Word _IsMutable_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), CompilerAttrs_42, (MR_Integer) 1)));

        switch (AllowExport_43) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_pragma_foreign_proc_export_2\'/13", (MR_String) "bad introduced foreign_export pragma");
                return;
              }
            }
            break;
        }
        *STATE_VARIABLE_Specs_48 = STATE_VARIABLE_Specs_0_47;
      }
      *STATE_VARIABLE_ModuleInfo_46 = STATE_VARIABLE_ModuleInfo_0_45;
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
