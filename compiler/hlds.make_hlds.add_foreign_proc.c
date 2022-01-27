/*
** Automatically generated from `add_foreign_proc.m'
** by the Mercury compiler,
** version rotd-2021-10-21
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
#include "backend_libs.mih"
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
#include "backend_libs.foreign.mih"
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.equiv_type.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"




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
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__587__1_2_p_0(
  MR_Word LaterOverridden_31,
  MR_Word HeadVar__2_108);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_pragma_foreign_proc__362__1_2_p_0(
  MR_Word LambdaHeadVar__1_109,
  MR_Word * LambdaHeadVar__2_110);

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
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_6_p_0_1(
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
  MR_Word STATE_VARIABLE_ClausesInfo_0_100,
  MR_Word * STATE_VARIABLE_ClausesInfo_101,
  MR_Word STATE_VARIABLE_ModuleInfo_0_102,
  MR_Word * STATE_VARIABLE_ModuleInfo_103,
  MR_Word STATE_VARIABLE_Specs_0_104,
  MR_Word * STATE_VARIABLE_Specs_105);

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
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54);

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
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: ambiguous predicate name"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pragma foreign_proc"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for imported"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for undeclared mode of"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: foreign_proc for builtin."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[9])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: foreign clause for"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has purity"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but that"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has been declared"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[9])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: variable"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "occurs multiple times in the argument list."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[9])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: variables"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "occur multiple times in the argument list."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[9])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for this mode of"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The first one was here."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[9])))
  },
  /* row 39 */
  {
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_4[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[3])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_5[2])),
    ((MR_Box) (hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_3[1][9] = {
  /* row 0 */
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
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[38])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_overridden_by_old_foreign_proc_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_overridden_by_old_foreign_proc_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
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
  {     hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_name_ordered_overridden_by_old_foreign_proc_0 },
  {     hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_ordinal_ordered_overridden_by_old_foreign_proc_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_overridden_by_old_foreign_proc_0,

};

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__587__1_2_p_0(
  MR_Word LaterOverridden_31,
  MR_Word HeadVar__2_108)
{
  {
    MR_bool succeeded = (LaterOverridden_31 == HeadVar__2_108);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_pragma_foreign_proc__362__1_2_p_0(
  MR_Word LambdaHeadVar__1_109,
  MR_Word * LambdaHeadVar__2_110)
{
  {
    MR_bool succeeded;
    MR_Integer Occurrences_64;

    *LambdaHeadVar__2_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_109, (MR_Integer) 0))));
    Occurrences_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_109, (MR_Integer) 1))));
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
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = parse_tree__prog_data_foreign__foreign_arg_name_mode_box_project_maybe_name_mode_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_6_p_0(
  MR_Word PredStatus_7,
  MR_Word PragmaFPInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_65,
  MR_Word * STATE_VARIABLE_ModuleInfo_66,
  MR_Word STATE_VARIABLE_Specs_0_67,
  MR_Word * STATE_VARIABLE_Specs_68)
{
  {
    MR_bool succeeded;
    MR_Word FPInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaFPInfo_8, (MR_Integer) 0))));
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaFPInfo_8, (MR_Integer) 1))));
    MR_Word SeqNum_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaFPInfo_8, (MR_Integer) 2))));
    MR_Word Attributes0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_11, (MR_Integer) 0))));
    MR_Word PredName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_11, (MR_Integer) 1))));
    MR_Word PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPInfo_11, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word PVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_11, (MR_Integer) 3))));
    MR_Word ProgVarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_11, (MR_Integer) 4))));
    MR_Word PragmaImpl_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo_11, (MR_Integer) 6))));
    MR_Integer Arity_21;
    MR_Word PFSymNameArity_22;
    MR_Word Globals_23;
    MR_Word VeryVerbose_24;
    MR_Word PredTable0_28;
    MR_Word PredIds_29;
    MR_Word PredId_31;
    MR_Word PredTable1_36;
    MR_Word Preds0_37;
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
    MR_Word STATE_VARIABLE_ModuleInfo_103_103;
    MR_Word STATE_VARIABLE_Specs_104_104;
    MR_Word STATE_VARIABLE_PredInfo_111_111;
    MR_Word STATE_VARIABLE_PredInfo_114_114;
    MR_Word STATE_VARIABLE_ModuleInfo_118_118;
    MR_Box conv0_STATE_VARIABLE_PredInfo_111_111;
    MR_Word Var_112;
    MR_Word Var_196;
    MR_Word Var_197;
    MR_Word Var_198;
    MR_Word Var_199;
    MR_Word Var_200;
    MR_Word Var_201;
    MR_Word Var_203;
    MR_Unsigned packed_word_2;
    MR_Word Var_121;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), PVars_17, &Arity_21);
    {
      PFSymNameArity_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PFSymNameArity_22, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_16));
      MR_hl_field(MR_mktag(0), PFSymNameArity_22, 1) = ((MR_Box) (PredName_15));
      MR_hl_field(MR_mktag(0), PFSymNameArity_22, 2) = ((MR_Box) (Arity_21));
    }
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_65, &Globals_23);
    libs__globals__lookup_bool_option_3_p_0(Globals_23, (MR_Integer) 67, &VeryVerbose_24);
    switch (VeryVerbose_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String IdStr_26;
          MR_Word ProgressStream_27;

          IdStr_26 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_1_f_0(PFSymNameArity_22);
          hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_0_65, &ProgressStream_27);
          mercury__io__write_string_4_p_0(ProgressStream_27, (MR_String) "% Processing \140:- pragma foreign_proc\' for ");
          mercury__io__write_string_4_p_0(ProgressStream_27, IdStr_26);
          mercury__io__write_string_4_p_0(ProgressStream_27, (MR_String) "...\n");
        }
        break;
    }
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_65, &PredTable0_28);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable0_28, (MR_Integer) 0, PredOrFunc_16, PredName_15, Arity_21, &PredIds_29);
    if ((PredIds_29 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ModuleName_30;
      MR_Word Var_101;

      hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_65, &ModuleName_30);
      {
        Var_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_101, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), Var_101, 1) = ((MR_Box) (PredName_15));
      }
      hlds__add_pred__preds_add_implicit_report_error_14_p_0(ModuleName_30, PredOrFunc_16, PredName_15, Arity_21, PredStatus_7, (MR_Integer) 0, Context_12, Var_101, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[7])), &PredId_31, STATE_VARIABLE_ModuleInfo_0_65, &STATE_VARIABLE_ModuleInfo_103_103, STATE_VARIABLE_Specs_0_67, &STATE_VARIABLE_Specs_104_104);
    }
    else
    {
      MR_Word Var_216 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_29, (MR_Integer) 1))));
      MR_Word Var_217 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_29, (MR_Integer) 0))));

      if ((Var_216 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        PredId_31 = Var_217;
        STATE_VARIABLE_ModuleInfo_103_103 = STATE_VARIABLE_ModuleInfo_0_65;
        STATE_VARIABLE_Specs_104_104 = STATE_VARIABLE_Specs_0_67;
      }
      else
      {
        MR_Word AmbiPieces_34;
        MR_Word AmbiSpec_35;
        MR_Word Var_81;
        MR_Word Var_82;

        PredId_31 = Var_217;
        {
          Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (PFSymNameArity_22));
        }
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
          MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[15])));
        }
        {
          AmbiPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AmbiPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[8])));
          MR_hl_field(MR_mktag(1), AmbiPieces_34, 1) = ((MR_Box) (Var_81));
        }
        {
          AmbiSpec_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AmbiSpec_35, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_pragma_foreign_proc\'/6"));
          MR_hl_field(MR_mktag(1), AmbiSpec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), AmbiSpec_35, 2) = ((MR_Box) ((MR_Unsigned) 36U));
          MR_hl_field(MR_mktag(1), AmbiSpec_35, 3) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(1), AmbiSpec_35, 4) = ((MR_Box) (AmbiPieces_34));
        }
        {
          STATE_VARIABLE_Specs_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_104_104, 0) = ((MR_Box) (AmbiSpec_35));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_104_104, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_67));
        }
        STATE_VARIABLE_ModuleInfo_103_103 = STATE_VARIABLE_ModuleInfo_0_65;
      }
    }
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_103_103, &PredTable1_36);
    hlds__pred_table__predicate_table_get_preds_2_p_0(PredTable1_36, &Preds0_37);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds0_37, ((MR_Box) (PredId_31)), &conv0_STATE_VARIABLE_PredInfo_111_111);
    STATE_VARIABLE_PredInfo_111_111 = ((MR_Word) (conv0_STATE_VARIABLE_PredInfo_111_111));
    Var_112 = (MR_Word) (PredStatus_7);
    succeeded = (Var_112 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      hlds__hlds_pred__pred_info_set_status_3_p_0((MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), STATE_VARIABLE_PredInfo_111_111, &STATE_VARIABLE_PredInfo_114_114);
    else
      STATE_VARIABLE_PredInfo_114_114 = STATE_VARIABLE_PredInfo_111_111;
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_114_114, &ClausesInfo0_39);
    ItemNumbers0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_39, (MR_Integer) 6))));
    hlds__hlds_clauses__add_clause_item_number_5_p_0(SeqNum_13, Context_12, (MR_Integer) 1, ItemNumbers0_40, &ItemNumbers_41);
    Var_196 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_39, (MR_Integer) 0))));
    Var_197 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_39, (MR_Integer) 1))));
    Var_198 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_39, (MR_Integer) 2))));
    Var_199 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_39, (MR_Integer) 3))));
    Var_200 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_39, (MR_Integer) 4))));
    Var_201 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_39, (MR_Integer) 5))));
    Var_203 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_39, (MR_Integer) 7))));
    packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClausesInfo0_39, (MR_Integer) 8)));
    {
      ClausesInfo1_42 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClausesInfo1_42, 0) = ((MR_Box) (Var_196));
      MR_hl_field(MR_mktag(0), ClausesInfo1_42, 1) = ((MR_Box) (Var_197));
      MR_hl_field(MR_mktag(0), ClausesInfo1_42, 2) = ((MR_Box) (Var_198));
      MR_hl_field(MR_mktag(0), ClausesInfo1_42, 3) = ((MR_Box) (Var_199));
      MR_hl_field(MR_mktag(0), ClausesInfo1_42, 4) = ((MR_Box) (Var_200));
      MR_hl_field(MR_mktag(0), ClausesInfo1_42, 5) = ((MR_Box) (Var_201));
      MR_hl_field(MR_mktag(0), ClausesInfo1_42, 6) = ((MR_Box) (ItemNumbers_41));
      MR_hl_field(MR_mktag(0), ClausesInfo1_42, 7) = ((MR_Box) (Var_203));
      MR_hl_field(MR_mktag(0), ClausesInfo1_42, 8) = (MR_Box) (packed_word_2);
    }
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo1_42, STATE_VARIABLE_PredInfo_114_114, &PredInfo0_43);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_31, PredInfo0_43, STATE_VARIABLE_ModuleInfo_103_103, &STATE_VARIABLE_ModuleInfo_118_118);
    libs__globals__get_maybe_thread_safe_2_p_0(Globals_23, &MaybeThreadSafe_44);
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
    CurrentBackend_47 = libs__globals__lookup_current_backend_1_f_0(Globals_23);
    libs__globals__get_backend_foreign_languages_2_p_0(Globals_23, &BackendForeignLangs_48);
    PragmaForeignLanguage_49 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_46);
    ExtraAttrs_50 = parse_tree__prog_data_foreign__get_extra_attributes_1_f_0(Attributes_46);
    Var_121 = hlds__make_hlds__add_foreign_proc__is_applicable_for_current_backend_2_f_0(CurrentBackend_47, ExtraAttrs_50);
    succeeded = (Var_121 == (MR_Integer) 0);
    if (succeeded)
    {
      *STATE_VARIABLE_Specs_68 = STATE_VARIABLE_Specs_104_104;
      *STATE_VARIABLE_ModuleInfo_66 = STATE_VARIABLE_ModuleInfo_118_118;
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
          MR_hl_field(MR_mktag(3), Var_131, 1) = ((MR_Box) (PFSymNameArity_22));
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
          MR_hl_field(MR_mktag(1), Spec_52, 2) = ((MR_Box) ((MR_Unsigned) 36U));
          MR_hl_field(MR_mktag(1), Spec_52, 3) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(1), Spec_52, 4) = ((MR_Box) (Pieces_51));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_68 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_52));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_104_104));
        }
        *STATE_VARIABLE_ModuleInfo_66 = STATE_VARIABLE_ModuleInfo_118_118;
      }
      else
      {
        succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (PragmaForeignLanguage_49)), BackendForeignLangs_48);
        succeeded = !(succeeded);
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_PredInfo_143_143;

          hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Integer) 2, PredInfo0_43, &STATE_VARIABLE_PredInfo_143_143);
          hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_31, STATE_VARIABLE_PredInfo_143_143, STATE_VARIABLE_ModuleInfo_118_118, STATE_VARIABLE_ModuleInfo_66);
          *STATE_VARIABLE_Specs_68 = STATE_VARIABLE_Specs_104_104;
        }
        else
        {
          MR_Word Procs_53;
          MR_Word ExistingProcs_54;
          MR_Word Modes_55;
          MR_Integer ProcId_56;

          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_43, &Procs_53);
          mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_53, &ExistingProcs_54);
          parse_tree__prog_data_foreign__pragma_get_modes_2_p_0(PVars_17, &Modes_55);
          succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_118_118, ExistingProcs_54, Modes_55, &ProcId_56);
          if (succeeded)
          {
            MR_Word ArgTypes_57;
            MR_Word Purity_58;
            MR_Word Markers_59;
            MR_Word ClausesInfo_60;
            MR_Word Preds_61;
            MR_Word PredTable_62;
            MR_Word ArgInfoBox_63;
            MR_Word ArgInfo_64;
            MR_Word STATE_VARIABLE_ModuleInfo_145_145;
            MR_Word STATE_VARIABLE_Specs_146_146;
            MR_Word STATE_VARIABLE_PredInfo_147_147;
            MR_Word STATE_VARIABLE_PredInfo_143_176;

            hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_43, &ArgTypes_57);
            hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo0_43, &Purity_58);
            hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_43, &Markers_59);
            hlds__make_hlds__add_foreign_proc__clauses_info_add_pragma_foreign_proc_19_p_0(Purity_58, Attributes_46, PredId_31, ProcId_56, ProgVarSet_18, PVars_17, ArgTypes_57, PragmaImpl_20, Context_12, PredOrFunc_16, PredName_15, Arity_21, Markers_59, ClausesInfo1_42, &ClausesInfo_60, STATE_VARIABLE_ModuleInfo_118_118, &STATE_VARIABLE_ModuleInfo_145_145, STATE_VARIABLE_Specs_104_104, &STATE_VARIABLE_Specs_146_146);
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_60, PredInfo0_43, &STATE_VARIABLE_PredInfo_147_147);
            hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Integer) 2, STATE_VARIABLE_PredInfo_147_147, &STATE_VARIABLE_PredInfo_143_176);
            mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_31)), ((MR_Box) (STATE_VARIABLE_PredInfo_143_176)), Preds0_37, &Preds_61);
            hlds__pred_table__predicate_table_set_preds_3_p_0(Preds_61, PredTable1_36, &PredTable_62);
            hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_62, STATE_VARIABLE_ModuleInfo_145_145, STATE_VARIABLE_ModuleInfo_66);
            parse_tree__prog_data_foreign__pragma_get_var_infos_2_p_0(PVars_17, &ArgInfoBox_63);
            ArgInfo_64 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_2[2]), ArgInfoBox_63);
            hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0(*STATE_VARIABLE_ModuleInfo_66, PragmaImpl_20, PragmaForeignLanguage_49, ArgInfo_64, Context_12, PFSymNameArity_22, PredId_31, ProcId_56, STATE_VARIABLE_Specs_146_146, STATE_VARIABLE_Specs_68);
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
              MR_hl_field(MR_mktag(3), Var_165, 1) = ((MR_Box) (PFSymNameArity_22));
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
              MR_hl_field(MR_mktag(1), Spec_178, 2) = ((MR_Box) ((MR_Unsigned) 36U));
              MR_hl_field(MR_mktag(1), Spec_178, 3) = ((MR_Box) (Context_12));
              MR_hl_field(MR_mktag(1), Spec_178, 4) = ((MR_Box) (Pieces_177));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_68 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_178));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_104_104));
            }
            *STATE_VARIABLE_ModuleInfo_66 = STATE_VARIABLE_ModuleInfo_118_118;
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
      libs__globals__lookup_bool_option_3_p_0(Globals_37, (MR_Integer) 314, &AllowDefnOfBuiltin_38);
      switch (AllowDefnOfBuiltin_38) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Spec_40;

            {
              Spec_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_40, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.clauses_info_add_pragma_foreign_proc\'/19"));
              MR_hl_field(MR_mktag(1), Spec_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_40, 2) = ((MR_Box) ((MR_Unsigned) 36U));
              MR_hl_field(MR_mktag(1), Spec_40, 3) = ((MR_Box) (Context_28));
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
    MR_Word conv0_LambdaHeadVar__2_110;

    succeeded = hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_pragma_foreign_proc__362__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_110);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_110));
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
  MR_Word STATE_VARIABLE_ClausesInfo_0_100,
  MR_Word * STATE_VARIABLE_ClausesInfo_101,
  MR_Word STATE_VARIABLE_ModuleInfo_0_102,
  MR_Word * STATE_VARIABLE_ModuleInfo_103,
  MR_Word STATE_VARIABLE_Specs_0_104,
  MR_Word * STATE_VARIABLE_Specs_105)
{
  {
    MR_bool succeeded;
    MR_Word VarSet0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_100, (MR_Integer) 0))));
    MR_Word ExplicitVarTypes_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_100, (MR_Integer) 1))));
    MR_Word TVarNameMap_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_100, (MR_Integer) 2))));
    MR_Word InferredVarTypes_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_100, (MR_Integer) 3))));
    MR_Word HeadVars_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_100, (MR_Integer) 4))));
    MR_Word ClausesRep0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_100, (MR_Integer) 5))));
    MR_Word ItemNumbers_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_100, (MR_Integer) 6))));
    MR_Word RttiVarMaps_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_100, (MR_Integer) 7))));
    MR_Word HadSyntaxError_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ClausesInfo_0_100, (MR_Integer) 8))) & (MR_Integer) 1);
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
    MR_Word STATE_VARIABLE_Specs_106_106;

    hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_43, &Clauses0_48);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_102, &Globals_49);
    libs__globals__get_target_2_p_0(Globals_49, &Target_50);
    NewLang_51 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes0_22);
    hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0(PredName_32, Arity_33, PredOrFunc_31, Context_30, Globals_49, Target_50, NewLang_51, AllProcIds_25, ProcId_24, Clauses0_48, &Clauses1_52, &Overridden_53, STATE_VARIABLE_Specs_0_104, &STATE_VARIABLE_Specs_106_106);
    libs__globals__get_backend_foreign_languages_2_p_0(Globals_49, &BackendForeignLanguages_54);
    parse_tree__prog_data_foreign__pragma_get_vars_2_p_0(PVars_27, &Args0_55);
    parse_tree__prog_data_foreign__pragma_get_var_infos_2_p_0(PVars_27, &ArgInfo_56);
    backend_libs__foreign__extrude_pragma_implementation_11_p_0(BackendForeignLanguages_54, PVars_27, PredName_32, PredOrFunc_31, Context_30, STATE_VARIABLE_ModuleInfo_0_102, STATE_VARIABLE_ModuleInfo_103, Attributes0_22, &Attributes1_57, PragmaImpl0_29, &PragmaImpl_58);
    mercury__bag__init_1_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[3]), &ArgBag0_59);
    mercury__bag__insert_list_3_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[3]), Args0_55, ArgBag0_59, &ArgBag_60);
    mercury__bag__to_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[3]), ArgBag_60, &ArgBagAL0_61);
    mercury__list__filter_map_3_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_2[0]), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_2[1]), ArgBagAL0_61, &MultiplyOccurringArgVars_65);
    if ((MultiplyOccurringArgVars_65 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_34, (MR_Integer) 15);
      if (!(succeeded))
        succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_34, (MR_Integer) 16);
      if (succeeded)
        *STATE_VARIABLE_Specs_105 = STATE_VARIABLE_Specs_106_106;
      else
      {
        MR_Word ForeignAttributePurity_77;

        ForeignAttributePurity_77 = parse_tree__prog_data_foreign__get_purity_1_f_0(Attributes1_57);
        succeeded = (ForeignAttributePurity_77 == Purity_21);
        if (succeeded)
          *STATE_VARIABLE_Specs_105 = STATE_VARIABLE_Specs_106_106;
        else
        {
          MR_String ForeignAttributePurityStr_78;
          MR_String PurityStr_79;
          MR_Word Pieces_80;
          MR_Word Var_116;
          MR_Word Var_117;
          MR_Word Var_118;
          MR_Word Var_119;
          MR_Word Var_120;
          MR_Word Var_121;
          MR_Word Var_124;
          MR_Word Var_125;
          MR_Word Var_126;
          MR_Word Var_129;
          MR_Word Var_131;
          MR_Word Var_134;
          MR_Word Var_135;
          MR_Word Spec_200;

          parse_tree__prog_out__purity_name_2_p_0(ForeignAttributePurity_77, &ForeignAttributePurityStr_78);
          parse_tree__prog_out__purity_name_2_p_0(Purity_21, &PurityStr_79);
          {
            Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_117, 0) = ((MR_Box) ((MR_Unsigned) 27U));
            MR_hl_field(MR_mktag(3), Var_117, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_31));
          }
          {
            Var_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (PredName_32));
            MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (Arity_33));
          }
          {
            Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (Var_120));
          }
          {
            Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_125, 1) = ((MR_Box) (ForeignAttributePurityStr_78));
          }
          {
            Var_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_135, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_135, 1) = ((MR_Box) (PurityStr_79));
          }
          {
            Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Var_135));
            MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[11])));
          }
          {
            Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[24])));
            MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_134));
          }
          {
            Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_117));
            MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_131));
          }
          {
            Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[23])));
            MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_129));
          }
          {
            Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (Var_125));
            MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_126));
          }
          {
            Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[22])));
            MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_124));
          }
          {
            Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Var_119));
            MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_121));
          }
          {
            Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Var_117));
            MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_118));
          }
          {
            Pieces_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[21])));
            MR_hl_field(MR_mktag(1), Pieces_80, 1) = ((MR_Box) (Var_116));
          }
          {
            Spec_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_200, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.clauses_info_do_add_pragma_foreign_proc\'/20"));
            MR_hl_field(MR_mktag(1), Spec_200, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_200, 2) = ((MR_Box) ((MR_Unsigned) 36U));
            MR_hl_field(MR_mktag(1), Spec_200, 3) = ((MR_Box) (Context_30));
            MR_hl_field(MR_mktag(1), Spec_200, 4) = ((MR_Box) (Pieces_80));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_105 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_200));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_106_106));
          }
        }
      }
      switch (Overridden_53) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word GoalInfo_81;
            MR_Word HeadVarList_82;
            MR_Word ForeignArgs_83;
            MR_Word Attributes_84;
            MR_Word GoalExpr_87;
            MR_Word HldsGoal0_88;
            MR_Word EmptyVarTypes_89;
            MR_Word EmptyRttiVarmaps_90;
            MR_Word HldsGoal_92;
            MR_Word VarSet_93;
            MR_Word Clause_96;
            MR_Word Clauses_97;
            MR_Word ClausesRep_98;
            MR_Word Var_147;
            MR_Word Var_148;
            MR_Word Var_150;
            MR_Word _Warnings_91;
            MR_Word Var_94;
            MR_Word Var_95;

            hlds__hlds_goal__goal_info_init_context_purity_3_p_0(Context_30, Purity_21, &GoalInfo_81);
            HeadVarList_82 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[3]), HeadVars_42);
            hlds__hlds_goal__make_foreign_args_4_p_0(HeadVarList_82, ArgInfo_56, OrigArgTypes_28, &ForeignArgs_83);
            hlds__make_hlds__add_foreign_proc__maybe_rename_user_annotated_sharing_information_6_p_0(Globals_49, Args0_55, HeadVarList_82, OrigArgTypes_28, Attributes1_57, &Attributes_84);
            {
              GoalExpr_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_87, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), GoalExpr_87, 1) = ((MR_Box) (Attributes_84));
              MR_hl_field(MR_mktag(3), GoalExpr_87, 2) = ((MR_Box) (PredId_23));
              MR_hl_field(MR_mktag(3), GoalExpr_87, 3) = ((MR_Box) (ProcId_24));
              MR_hl_field(MR_mktag(3), GoalExpr_87, 4) = ((MR_Box) (ForeignArgs_83));
              MR_hl_field(MR_mktag(3), GoalExpr_87, 5) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), GoalExpr_87, 6) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), GoalExpr_87, 7) = ((MR_Box) (PragmaImpl_58));
            }
            {
              HldsGoal0_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), HldsGoal0_88, 0) = ((MR_Box) (GoalExpr_87));
              MR_hl_field(MR_mktag(0), HldsGoal0_88, 1) = ((MR_Box) (GoalInfo_81));
            }
            hlds__vartypes__init_vartypes_1_p_0(&EmptyVarTypes_89);
            hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&EmptyRttiVarmaps_90);
            hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, HeadVarList_82, &_Warnings_91, HldsGoal0_88, &HldsGoal_92, VarSet0_38, &VarSet_93, EmptyVarTypes_89, &Var_94, EmptyRttiVarmaps_90, &Var_95);
            {
              Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (ProcId_24));
              MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Var_148));
            }
            {
              Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_150, 0) = (MR_Box) ((MR_Unsigned) (NewLang_51));
            }
            {
              Clause_96 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Clause_96, 0) = ((MR_Box) (Var_147));
              MR_hl_field(MR_mktag(0), Clause_96, 1) = ((MR_Box) (HldsGoal_92));
              MR_hl_field(MR_mktag(0), Clause_96, 2) = ((MR_Box) (Var_150));
              MR_hl_field(MR_mktag(0), Clause_96, 3) = ((MR_Box) (Context_30));
              MR_hl_field(MR_mktag(0), Clause_96, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Clauses_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Clauses_97, 0) = ((MR_Box) (Clause_96));
              MR_hl_field(MR_mktag(1), Clauses_97, 1) = ((MR_Box) (Clauses1_52));
            }
            hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_97, &ClausesRep_98);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ClausesInfo_101 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarSet_93));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExplicitVarTypes_39));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TVarNameMap_40));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (InferredVarTypes_41));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (HeadVars_42));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ClausesRep_98));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ItemNumbers_44));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (RttiVarMaps_45));
              MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (HadSyntaxError_47)));
            }
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_ClausesInfo_101 = STATE_VARIABLE_ClausesInfo_0_100;
          break;
      }
    }
    else
    {
      MR_Integer OrigArity_68;
      MR_Word PFSymNameArity_69;
      MR_Word Pieces1_70;
      MR_Word Pieces2_72;
      MR_Word Spec_76;
      MR_Word Var_155;
      MR_Word Var_158;
      MR_Word Var_161;
      MR_Word Var_162;
      MR_Word Var_196;
      MR_Word Var_210;
      MR_Word Var_211;

      parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_31, &OrigArity_68, Arity_33);
      {
        PFSymNameArity_69 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PFSymNameArity_69, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_31));
        MR_hl_field(MR_mktag(0), PFSymNameArity_69, 1) = ((MR_Box) (PredName_32));
        MR_hl_field(MR_mktag(0), PFSymNameArity_69, 2) = ((MR_Box) (OrigArity_68));
      }
      {
        Var_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_162, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), Var_162, 1) = ((MR_Box) (PFSymNameArity_69));
      }
      {
        Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (Var_162));
        MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[28])));
      }
      {
        Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[26])));
        MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (Var_161));
      }
      {
        Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[6])));
        MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) (Var_158));
      }
      {
        Pieces1_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces1_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[25])));
        MR_hl_field(MR_mktag(1), Pieces1_70, 1) = ((MR_Box) (Var_155));
      }
      Var_211 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MultiplyOccurringArgVars_65, (MR_Integer) 0))));
      Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MultiplyOccurringArgVars_65, (MR_Integer) 1))));
      if ((Var_210 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_184;
        MR_Word Var_185;
        MR_String Var_186;

        Var_186 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PVarSet_26, Var_211);
        {
          Var_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_185, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_185, 1) = ((MR_Box) (Var_186));
        }
        {
          Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_184, 0) = ((MR_Box) (Var_185));
          MR_hl_field(MR_mktag(1), Var_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[31])));
        }
        {
          Pieces2_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces2_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[29])));
          MR_hl_field(MR_mktag(1), Pieces2_72, 1) = ((MR_Box) (Var_184));
        }
      }
      else
      {
        MR_Word Var_172;
        MR_Word Var_173;
        MR_String Var_174;

        Var_174 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PVarSet_26, MultiplyOccurringArgVars_65);
        {
          Var_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_173, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_173, 1) = ((MR_Box) (Var_174));
        }
        {
          Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (Var_173));
          MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[34])));
        }
        {
          Pieces2_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces2_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[32])));
          MR_hl_field(MR_mktag(1), Pieces2_72, 1) = ((MR_Box) (Var_172));
        }
      }
      Var_196 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_70, Pieces2_72);
      {
        Spec_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_76, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.clauses_info_do_add_pragma_foreign_proc\'/20"));
        MR_hl_field(MR_mktag(1), Spec_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_76, 2) = ((MR_Box) ((MR_Unsigned) 36U));
        MR_hl_field(MR_mktag(1), Spec_76, 3) = ((MR_Box) (Context_30));
        MR_hl_field(MR_mktag(1), Spec_76, 4) = ((MR_Box) (Var_196));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_105 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_76));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_106_106));
      }
      *STATE_VARIABLE_ClausesInfo_101 = STATE_VARIABLE_ClausesInfo_0_100;
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

    succeeded = hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__587__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54)
{
  {
    MR_bool succeeded;

    if ((Clauses0_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Clauses_25 = (MR_Word) ((MR_Unsigned) 0U);
      *Overridden_26 = (MR_Integer) 1;
      *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_0_53;
    }
    else
    {
      MR_Word FirstClause0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses0_24, (MR_Integer) 0))));
      MR_Word LaterClauses0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses0_24, (MR_Integer) 1))));
      MR_Word LaterClauses_30;
      MR_Word LaterOverridden_31;
      MR_Word ApplProcIds0_32;
      MR_Word Body_33;
      MR_Word FirstClauseLang_34;
      MR_Word FirstClauseContext_35;
      MR_Word StateVarWarnings_36;
      MR_Word STATE_VARIABLE_Specs_55_55;

      hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0(PredName_15, Arity_16, PredOrFunc_17, NewContext_18, Globals_19, Target_20, NewLang_21, AllProcIds_22, NewClauseProcId_23, LaterClauses0_29, &LaterClauses_30, &LaterOverridden_31, STATE_VARIABLE_Specs_0_53, &STATE_VARIABLE_Specs_55_55);
      ApplProcIds0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstClause0_28, (MR_Integer) 0))));
      Body_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstClause0_28, (MR_Integer) 1))));
      FirstClauseLang_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstClause0_28, (MR_Integer) 2))));
      FirstClauseContext_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstClause0_28, (MR_Integer) 3))));
      StateVarWarnings_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstClause0_28, (MR_Integer) 4))));
      if ((FirstClauseLang_34 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ProcIds0_37;
        MR_Word ProcIds_38;

        switch (MR_tag((MR_Word) ApplProcIds0_32)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ApplProcIds0_32)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ProcIds0_37 = AllProcIds_22;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/14", (MR_String) "unify mode for user defined predicate");
                  return;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            ProcIds0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ApplProcIds0_32, (MR_Integer) 0))));
            break;
        }
        succeeded = mercury__list__delete_first_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ProcIds0_37, ((MR_Box) (NewClauseProcId_23)), &ProcIds_38);
        if (succeeded)
          if ((ProcIds_38 == (MR_Word) ((MR_Unsigned) 0U)))
            *Clauses_25 = LaterClauses_30;
          else
          {
            MR_Word FirstClause_41;
            MR_Word Var_111;

            {
              Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (ProcIds_38));
            }
            {
              FirstClause_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FirstClause_41, 0) = ((MR_Box) (Var_111));
              MR_hl_field(MR_mktag(0), FirstClause_41, 1) = ((MR_Box) (Body_33));
              MR_hl_field(MR_mktag(0), FirstClause_41, 2) = ((MR_Box) (FirstClauseLang_34));
              MR_hl_field(MR_mktag(0), FirstClause_41, 3) = ((MR_Box) (FirstClauseContext_35));
              MR_hl_field(MR_mktag(0), FirstClause_41, 4) = ((MR_Box) (StateVarWarnings_36));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Clauses_25 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstClause_41));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterClauses_30));
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Clauses_25 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstClause0_28));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterClauses_30));
          }
        *Overridden_26 = LaterOverridden_31;
        *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_55_55;
      }
      else
      {
        MR_Word OldLang_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), FirstClauseLang_34, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word ProcIds0_119;
        MR_Word ProcIds_117;

        switch (MR_tag((MR_Word) ApplProcIds0_32)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ApplProcIds0_32)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/14", (MR_String) "all_modes");
                  return;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/14", (MR_String) "unify modes");
                  return;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            ProcIds0_119 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ApplProcIds0_32, (MR_Integer) 0))));
            break;
        }
        succeeded = mercury__list__delete_first_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ProcIds0_119, ((MR_Box) (NewClauseProcId_23)), &ProcIds_117);
        if (succeeded)
        {
          MR_Word PreferNewForeignLang_43;

          PreferNewForeignLang_43 = parse_tree__prog_foreign__prefer_foreign_language_4_f_0(Globals_19, Target_20, OldLang_42, NewLang_21);
          switch (PreferNewForeignLang_43) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Clauses_25 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstClause0_28));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterClauses_30));
                }
                *Overridden_26 = (MR_Integer) 0;
                succeeded = (OldLang_42 == NewLang_21);
                if (succeeded)
                {
                  MR_Word SNA_46;
                  MR_String OldLangStr_47;
                  MR_Word PiecesA_48;
                  MR_Word MsgA_50;
                  MR_Word MsgB_51;
                  MR_Word Spec_52;
                  MR_Word Var_62;
                  MR_Word Var_65;
                  MR_Word Var_68;
                  MR_Word Var_71;
                  MR_Word Var_72;
                  MR_Word Var_73;
                  MR_Word Var_74;
                  MR_Word Var_75;
                  MR_Word Var_78;
                  MR_Word Var_79;
                  MR_Word Var_91;
                  MR_Word Var_100;
                  MR_Word Var_101;

                  {
                    SNA_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), SNA_46, 0) = ((MR_Box) (PredName_15));
                    MR_hl_field(MR_mktag(0), SNA_46, 1) = ((MR_Box) (Arity_16));
                  }
                  OldLangStr_47 = libs__globals__foreign_language_string_1_f_0(OldLang_42);
                  {
                    Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 27U));
                    MR_hl_field(MR_mktag(3), Var_72, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
                  }
                  {
                    Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                    MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (SNA_46));
                  }
                  {
                    Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (OldLangStr_47));
                  }
                  {
                    Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
                    MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[11])));
                  }
                  {
                    Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[14])));
                    MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
                  }
                  {
                    Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
                    MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_75));
                  }
                  {
                    Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
                    MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_73));
                  }
                  {
                    Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[36])));
                    MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
                  }
                  {
                    Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[4])));
                    MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
                  }
                  {
                    Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[6])));
                    MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
                  }
                  {
                    PiecesA_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), PiecesA_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[35])));
                    MR_hl_field(MR_mktag(1), PiecesA_48, 1) = ((MR_Box) (Var_62));
                  }
                  {
                    MsgA_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MsgA_50, 0) = ((MR_Box) (NewContext_18));
                    MR_hl_field(MR_mktag(0), MsgA_50, 1) = ((MR_Box) (PiecesA_48));
                  }
                  {
                    Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (FirstClauseContext_35));
                  }
                  {
                    MsgB_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), MsgB_51, 0) = ((MR_Box) (Var_91));
                    MR_hl_field(MR_mktag(2), MsgB_51, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(2), MsgB_51, 2) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(2), MsgB_51, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[39])));
                  }
                  {
                    Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (MsgB_51));
                    MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (MsgA_50));
                    MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_101));
                  }
                  {
                    Spec_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_52, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/14"));
                    MR_hl_field(MR_mktag(0), Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_52, 2) = ((MR_Box) ((MR_Unsigned) 36U));
                    MR_hl_field(MR_mktag(0), Spec_52, 3) = ((MR_Box) (Var_100));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Specs_54 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_52));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_55_55));
                  }
                }
                else
                  *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_55_55;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_105;

                if ((ProcIds_117 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  *Clauses_25 = LaterClauses_30;
                  *Overridden_26 = LaterOverridden_31;
                }
                else
                {
                  MR_Word Var_104;
                  MR_Word FirstClause_112;

                  {
                    Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (ProcIds_117));
                  }
                  {
                    FirstClause_112 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), FirstClause_112, 0) = ((MR_Box) (Var_104));
                    MR_hl_field(MR_mktag(0), FirstClause_112, 1) = ((MR_Box) (Body_33));
                    MR_hl_field(MR_mktag(0), FirstClause_112, 2) = ((MR_Box) (FirstClauseLang_34));
                    MR_hl_field(MR_mktag(0), FirstClause_112, 3) = ((MR_Box) (FirstClauseContext_35));
                    MR_hl_field(MR_mktag(0), FirstClause_112, 4) = ((MR_Box) (StateVarWarnings_36));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Clauses_25 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstClause_112));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterClauses_30));
                  }
                  *Overridden_26 = LaterOverridden_31;
                }
                {
                  Var_105 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_5[0]));
                  MR_hl_field(MR_mktag(0), Var_105, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_105, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_105, 3) = ((MR_Box) (LaterOverridden_31));
                  MR_hl_field(MR_mktag(0), Var_105, 4) = ((MR_Box) ((MR_Integer) 1));
                }
                mercury__require__expect_3_p_0(Var_105, (MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/14", (MR_String) "inconsistent old foreign_procs");
                *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_55_55;
              }
              break;
          }
        }
        else
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Clauses_25 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstClause0_28));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterClauses_30));
          }
          *Overridden_26 = LaterOverridden_31;
          *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_55_55;
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

    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 502, &SharingAnalysis_12);
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ModuleInfo_66;
    MR_Word conv0_STATE_VARIABLE_Specs_68;

    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_66, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_68);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_66));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_68));
  }
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
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
