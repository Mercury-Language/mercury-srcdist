/*
** Automatically generated from `add_foreign_proc.m'
** by the Mercury compiler,
** version rotd-2017-08-02
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


/* :- module hlds.make_hlds.add_foreign_proc. */
/* :- implementation. */

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
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__711__1_2_p_0(
  MR_Word hlds__make_hlds__add_foreign_proc__LaterOverridden_31,
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2_232);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_pragma_foreign_proc__494__1_2_p_0(
  MR_Word hlds__make_hlds__add_foreign_proc__LambdaHeadVar__1_112,
  MR_Word * hlds__make_hlds__add_foreign_proc__LambdaHeadVar__2_113);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0(
  MR_Word * hlds__make_hlds__add_foreign_proc__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2_2,
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0(
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2_1,
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2_2);

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0_1(
  MR_Box hlds__make_hlds__add_foreign_proc__closure_arg,
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_add_pragma_foreign_proc_19_p_0(
  MR_Word hlds__make_hlds__add_foreign_proc__Purity_20,
  MR_Word hlds__make_hlds__add_foreign_proc__Attributes0_21,
  MR_Word hlds__make_hlds__add_foreign_proc__PredId_22,
  MR_Integer hlds__make_hlds__add_foreign_proc__ProcId_23,
  MR_Word hlds__make_hlds__add_foreign_proc__PVarSet_24,
  MR_Word hlds__make_hlds__add_foreign_proc__PVars_25,
  MR_Word hlds__make_hlds__add_foreign_proc__OrigArgTypes_26,
  MR_Word hlds__make_hlds__add_foreign_proc__PragmaImpl0_27,
  MR_Word hlds__make_hlds__add_foreign_proc__Context_28,
  MR_Word hlds__make_hlds__add_foreign_proc__PredOrFunc_29,
  MR_Word hlds__make_hlds__add_foreign_proc__PredName_30,
  MR_Integer hlds__make_hlds__add_foreign_proc__Arity_31,
  MR_Word hlds__make_hlds__add_foreign_proc__Markers_32,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_42,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_43,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_45,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_46,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_47);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0_1(
  MR_Box hlds__make_hlds__add_foreign_proc__closure_arg,
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_foreign_proc__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0(
  MR_Word hlds__make_hlds__add_foreign_proc__Purity_21,
  MR_Word hlds__make_hlds__add_foreign_proc__Attributes0_22,
  MR_Word hlds__make_hlds__add_foreign_proc__PredId_23,
  MR_Integer hlds__make_hlds__add_foreign_proc__ProcId_24,
  MR_Word hlds__make_hlds__add_foreign_proc__AllProcIds_25,
  MR_Word hlds__make_hlds__add_foreign_proc__PVarSet_26,
  MR_Word hlds__make_hlds__add_foreign_proc__PVars_27,
  MR_Word hlds__make_hlds__add_foreign_proc__OrigArgTypes_28,
  MR_Word hlds__make_hlds__add_foreign_proc__PragmaImpl0_29,
  MR_Word hlds__make_hlds__add_foreign_proc__Context_30,
  MR_Word hlds__make_hlds__add_foreign_proc__PredOrFunc_31,
  MR_Word hlds__make_hlds__add_foreign_proc__PredName_32,
  MR_Integer hlds__make_hlds__add_foreign_proc__Arity_33,
  MR_Word hlds__make_hlds__add_foreign_proc__Markers_34,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_103,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_104,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_105,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_106,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_107,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_108);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0_1(
  MR_Box hlds__make_hlds__add_foreign_proc__closure_arg);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0(
  MR_Word hlds__make_hlds__add_foreign_proc__PredName_15,
  MR_Integer hlds__make_hlds__add_foreign_proc__Arity_16,
  MR_Word hlds__make_hlds__add_foreign_proc__PredOrFunc_17,
  MR_Word hlds__make_hlds__add_foreign_proc__NewContext_18,
  MR_Word hlds__make_hlds__add_foreign_proc__Globals_19,
  MR_Word hlds__make_hlds__add_foreign_proc__Target_20,
  MR_Word hlds__make_hlds__add_foreign_proc__NewLang_21,
  MR_Word hlds__make_hlds__add_foreign_proc__AllProcIds_22,
  MR_Integer hlds__make_hlds__add_foreign_proc__NewClauseProcId_23,
  MR_Word hlds__make_hlds__add_foreign_proc__Clauses0_24,
  MR_Word * hlds__make_hlds__add_foreign_proc__Clauses_25,
  MR_Word * hlds__make_hlds__add_foreign_proc__Overridden_26,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_51,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_52);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__maybe_rename_user_annotated_sharing_information_6_p_0(
  MR_Word hlds__make_hlds__add_foreign_proc__Globals_7,
  MR_Word hlds__make_hlds__add_foreign_proc__ActualHeadVars_8,
  MR_Word hlds__make_hlds__add_foreign_proc__FormalHeadVars_9,
  MR_Word hlds__make_hlds__add_foreign_proc__FormalTypes_10,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Attributes_0_14,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Attributes_15);

static MR_Word MR_CALL 
hlds__make_hlds__add_foreign_proc__is_applicable_for_current_backend_2_f_0(
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2_2);

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0_1(
  MR_Box hlds__make_hlds__add_foreign_proc__closure_arg,
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_2_13_p_0(
  MR_Integer hlds__make_hlds__add_foreign_proc__Arity_14,
  MR_Word hlds__make_hlds__add_foreign_proc__PredTable_15,
  MR_Word hlds__make_hlds__add_foreign_proc__MaybeAttrs_16,
  MR_Word hlds__make_hlds__add_foreign_proc__Lang_17,
  MR_Word hlds__make_hlds__add_foreign_proc__Name_18,
  MR_Word hlds__make_hlds__add_foreign_proc__PredId_19,
  MR_Word hlds__make_hlds__add_foreign_proc__Modes_20,
  MR_String hlds__make_hlds__add_foreign_proc__ExportedName_21,
  MR_Word hlds__make_hlds__add_foreign_proc__Context_22,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_45,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_46,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_47,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_48);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0_10001(
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0_10001(
  MR_Box * hlds__make_hlds__add_foreign_proc__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_3);


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
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__711__1_2_p_0(
  MR_Word hlds__make_hlds__add_foreign_proc__LaterOverridden_31,
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2_232)
{
  {
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded = (hlds__make_hlds__add_foreign_proc__LaterOverridden_31 == hlds__make_hlds__add_foreign_proc__HeadVar__2_232);

    return hlds__make_hlds__add_foreign_proc__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_pragma_foreign_proc__494__1_2_p_0(
  MR_Word hlds__make_hlds__add_foreign_proc__LambdaHeadVar__1_112,
  MR_Word * hlds__make_hlds__add_foreign_proc__LambdaHeadVar__2_113)
{
  {
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;
    MR_Integer hlds__make_hlds__add_foreign_proc__Occurrences_64;

    *hlds__make_hlds__add_foreign_proc__LambdaHeadVar__2_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__LambdaHeadVar__1_112, (MR_Integer) 0)));
    hlds__make_hlds__add_foreign_proc__Occurrences_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__LambdaHeadVar__1_112, (MR_Integer) 1)));
    hlds__make_hlds__add_foreign_proc__succeeded = (hlds__make_hlds__add_foreign_proc__Occurrences_64 > (MR_Integer) 1);
    return hlds__make_hlds__add_foreign_proc__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0(
  MR_Word * hlds__make_hlds__add_foreign_proc__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2_2,
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__3_3)
{
  {
    MR_Integer hlds__make_hlds__add_foreign_proc__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_foreign_proc__HeadVar__2_2;
    MR_Integer hlds__make_hlds__add_foreign_proc__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_foreign_proc__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_foreign_proc__HeadVar__1_1, hlds__make_hlds__add_foreign_proc__Cast_HeadVar1_4, hlds__make_hlds__add_foreign_proc__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0(
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2_1,
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded = (hlds__make_hlds__add_foreign_proc__HeadVar__2_1 == hlds__make_hlds__add_foreign_proc__HeadVar__2_2);

    return hlds__make_hlds__add_foreign_proc__succeeded;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0_1(
  MR_Box hlds__make_hlds__add_foreign_proc__closure_arg,
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_2;
    MR_Box hlds__make_hlds__add_foreign_proc__closure = hlds__make_hlds__add_foreign_proc__closure_arg;
    MR_Word hlds__make_hlds__add_foreign_proc__conv1_HeadVar__2_2;

    hlds__make_hlds__add_foreign_proc__conv1_HeadVar__2_2 = parse_tree__prog_data_foreign__foreign_arg_name_mode_box_project_maybe_name_mode_1_f_0(((MR_Word) hlds__make_hlds__add_foreign_proc__wrapper_arg_1));
    hlds__make_hlds__add_foreign_proc__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_foreign_proc__conv1_HeadVar__2_2));
    return hlds__make_hlds__add_foreign_proc__wrapper_arg_2;
  }
}

void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(
  MR_Word hlds__make_hlds__add_foreign_proc__FPInfo_9,
  MR_Word hlds__make_hlds__add_foreign_proc__PredStatus_10,
  MR_Word hlds__make_hlds__add_foreign_proc__Context_11,
  MR_Word hlds__make_hlds__add_foreign_proc__MaybeItemNumber_12,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_67,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_68,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_69)
{
  {
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;
    MR_Word hlds__make_hlds__add_foreign_proc__TypeCtorInfo_233_233;
    MR_Word hlds__make_hlds__add_foreign_proc__TypeCtorInfo_234_234;
    MR_Word hlds__make_hlds__add_foreign_proc__Attributes0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FPInfo_9, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_foreign_proc__PredName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FPInfo_9, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_foreign_proc__PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FPInfo_9, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_foreign_proc__PVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FPInfo_9, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_foreign_proc__ProgVarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FPInfo_9, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_foreign_proc__PragmaImpl_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FPInfo_9, (MR_Integer) 6)));
    MR_Word hlds__make_hlds__add_foreign_proc__Globals_22;
    MR_Word hlds__make_hlds__add_foreign_proc__MaybeThreadSafe_23;
    MR_Word hlds__make_hlds__add_foreign_proc__ThreadSafe_24;
    MR_Word hlds__make_hlds__add_foreign_proc__Attributes_25;
    MR_Word hlds__make_hlds__add_foreign_proc__ModuleName_26;
    MR_Word hlds__make_hlds__add_foreign_proc__PragmaForeignLanguage_27;
    MR_Integer hlds__make_hlds__add_foreign_proc__Arity_28;
    MR_Word hlds__make_hlds__add_foreign_proc__VeryVerbose_29;
    MR_Word hlds__make_hlds__add_foreign_proc__BackendForeignLangs_31;
    MR_Word hlds__make_hlds__add_foreign_proc__PredTable0_32;
    MR_Word hlds__make_hlds__add_foreign_proc__PredIds_33;
    MR_Word hlds__make_hlds__add_foreign_proc__PredId_34;
    MR_Word hlds__make_hlds__add_foreign_proc__PredTable1_40;
    MR_Word hlds__make_hlds__add_foreign_proc__Preds0_41;
    MR_Word hlds__make_hlds__add_foreign_proc__ClausesInfo0_43;
    MR_Word hlds__make_hlds__add_foreign_proc__ItemNumbers0_44;
    MR_Word hlds__make_hlds__add_foreign_proc__ItemNumbers_45;
    MR_Word hlds__make_hlds__add_foreign_proc__ClausesInfo1_46;
    MR_Word hlds__make_hlds__add_foreign_proc__PredInfo0_47;
    MR_Word hlds__make_hlds__add_foreign_proc__CurrentBackend_48;
    MR_Word hlds__make_hlds__add_foreign_proc__ExtraAttrs_49;
    MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_108_108;
    MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112;
    MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_119_119;
    MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_122_122;
    MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_126_126;
    MR_Word hlds__make_hlds__add_foreign_proc___InstVarset_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FPInfo_9, (MR_Integer) 5)));
    MR_Box hlds__make_hlds__add_foreign_proc__conv0_STATE_VARIABLE_PredInfo_119_119;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_120;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_213;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_214;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_215;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_216;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_217;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_218;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_219;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_220;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_221;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_222;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_223;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_224;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_225;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_226;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_227;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_229;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_230;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_231;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_228;
    MR_Word hlds__make_hlds__add_foreign_proc__Var_127;

    hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_66, &hlds__make_hlds__add_foreign_proc__Globals_22);
    libs__globals__get_maybe_thread_safe_2_p_0(hlds__make_hlds__add_foreign_proc__Globals_22, &hlds__make_hlds__add_foreign_proc__MaybeThreadSafe_23);
    hlds__make_hlds__add_foreign_proc__ThreadSafe_24 = parse_tree__prog_data_foreign__get_thread_safe_1_f_0(hlds__make_hlds__add_foreign_proc__Attributes0_15);
    switch (hlds__make_hlds__add_foreign_proc__ThreadSafe_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        switch (hlds__make_hlds__add_foreign_proc__MaybeThreadSafe_23) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 0, hlds__make_hlds__add_foreign_proc__Attributes0_15, &hlds__make_hlds__add_foreign_proc__Attributes_25);
            }
            break;
          case (MR_Integer) 1:
            {
              parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_foreign_proc__Attributes0_15, &hlds__make_hlds__add_foreign_proc__Attributes_25);
            }
            break;
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        hlds__make_hlds__add_foreign_proc__Attributes_25 = hlds__make_hlds__add_foreign_proc__Attributes0_15;
        break;
    }
    hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_66, &hlds__make_hlds__add_foreign_proc__ModuleName_26);
    hlds__make_hlds__add_foreign_proc__PragmaForeignLanguage_27 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(hlds__make_hlds__add_foreign_proc__Attributes_25);
    mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0, hlds__make_hlds__add_foreign_proc__PVars_18, &hlds__make_hlds__add_foreign_proc__Arity_28);
    libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_foreign_proc__Globals_22, (MR_Integer) 57, &hlds__make_hlds__add_foreign_proc__VeryVerbose_29);
    switch (hlds__make_hlds__add_foreign_proc__VeryVerbose_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__add_foreign_proc__Var_76;

          mercury__io__write_string_3_p_0((MR_String) "% Processing \140:- pragma foreign_proc\' for ");
          {
            hlds__make_hlds__add_foreign_proc__Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_76, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredName_16));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_76, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Arity_28));
          }
          parse_tree__prog_out__write_simple_call_id_4_p_0(hlds__make_hlds__add_foreign_proc__PredOrFunc_17, hlds__make_hlds__add_foreign_proc__Var_76);
          mercury__io__write_string_3_p_0((MR_String) "...\n");
        }
        break;
    }
    libs__globals__get_backend_foreign_languages_2_p_0(hlds__make_hlds__add_foreign_proc__Globals_22, &hlds__make_hlds__add_foreign_proc__BackendForeignLangs_31);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_66, &hlds__make_hlds__add_foreign_proc__PredTable0_32);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_foreign_proc__PredTable0_32, (MR_Integer) 0, hlds__make_hlds__add_foreign_proc__PredOrFunc_17, hlds__make_hlds__add_foreign_proc__PredName_16, hlds__make_hlds__add_foreign_proc__Arity_28, &hlds__make_hlds__add_foreign_proc__PredIds_33);
    if ((hlds__make_hlds__add_foreign_proc__PredIds_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word hlds__make_hlds__add_foreign_proc__Var_110;

      {
        hlds__make_hlds__add_foreign_proc__Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_110, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredName_16));
      }
      hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_66, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_108_108, hlds__make_hlds__add_foreign_proc__ModuleName_26, hlds__make_hlds__add_foreign_proc__PredName_16, hlds__make_hlds__add_foreign_proc__Arity_28, hlds__make_hlds__add_foreign_proc__PredOrFunc_17, hlds__make_hlds__add_foreign_proc__PredStatus_10, (MR_Integer) 0, hlds__make_hlds__add_foreign_proc__Context_11, hlds__make_hlds__add_foreign_proc__Var_110, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[22]), &hlds__make_hlds__add_foreign_proc__PredId_34, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_68, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112);
    }
    else
    {
      MR_Word hlds__make_hlds__add_foreign_proc__Var_242 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__PredIds_33, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_foreign_proc__Var_243 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__PredIds_33, (MR_Integer) 0)));

      if ((hlds__make_hlds__add_foreign_proc__Var_242 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__make_hlds__add_foreign_proc__PredId_34 = hlds__make_hlds__add_foreign_proc__Var_243;
        hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_108_108 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_66;
        hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_68;
      }
      else
      {
        MR_Word hlds__make_hlds__add_foreign_proc__AmbiPieces_37;
        MR_Word hlds__make_hlds__add_foreign_proc__AmbiMsg_38;
        MR_Word hlds__make_hlds__add_foreign_proc__AmbiSpec_39;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_84;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_85;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_86;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_99;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_100;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_104;

        hlds__make_hlds__add_foreign_proc__PredId_34 = hlds__make_hlds__add_foreign_proc__Var_243;
        {
          hlds__make_hlds__add_foreign_proc__Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_86, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredOrFunc_17));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_86, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredName_16));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_86, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Arity_28));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_85, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_86));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_84, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_85));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[29])));
        }
        {
          hlds__make_hlds__add_foreign_proc__AmbiPieces_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__AmbiPieces_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[63])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__AmbiPieces_37, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_84));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_100, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__AmbiPieces_37));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_99, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_100));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_foreign_proc__AmbiMsg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__AmbiMsg_38, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Context_11));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__AmbiMsg_38, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_99));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_104, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__AmbiMsg_38));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_foreign_proc__AmbiSpec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__AmbiSpec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__AmbiSpec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__AmbiSpec_39, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_104));
        }
        {
          hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__AmbiSpec_39));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_68));
        }
        hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_108_108 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_66;
      }
    }
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_108_108, &hlds__make_hlds__add_foreign_proc__PredTable1_40);
    hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_foreign_proc__PredTable1_40, &hlds__make_hlds__add_foreign_proc__Preds0_41);
    hlds__make_hlds__add_foreign_proc__TypeCtorInfo_233_233 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    hlds__make_hlds__add_foreign_proc__TypeCtorInfo_234_234 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    mercury__map__lookup_3_p_0(hlds__make_hlds__add_foreign_proc__TypeCtorInfo_233_233, hlds__make_hlds__add_foreign_proc__TypeCtorInfo_234_234, hlds__make_hlds__add_foreign_proc__Preds0_41, ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredId_34)), &hlds__make_hlds__add_foreign_proc__conv0_STATE_VARIABLE_PredInfo_119_119);
    hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_119_119 = ((MR_Word) hlds__make_hlds__add_foreign_proc__conv0_STATE_VARIABLE_PredInfo_119_119);
    hlds__make_hlds__add_foreign_proc__Var_120 = (MR_Word) hlds__make_hlds__add_foreign_proc__PredStatus_10;
    hlds__make_hlds__add_foreign_proc__succeeded = (hlds__make_hlds__add_foreign_proc__Var_120 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (hlds__make_hlds__add_foreign_proc__succeeded)
      hlds__hlds_pred__pred_info_set_status_3_p_0(hlds__make_hlds__add_foreign_proc__PredStatus_10, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_119_119, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_122_122);
    else
      hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_122_122 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_119_119;
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_122_122, &hlds__make_hlds__add_foreign_proc__ClausesInfo0_43);
    hlds__make_hlds__add_foreign_proc__Var_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 0)));
    hlds__make_hlds__add_foreign_proc__Var_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 1)));
    hlds__make_hlds__add_foreign_proc__Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 2)));
    hlds__make_hlds__add_foreign_proc__Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 3)));
    hlds__make_hlds__add_foreign_proc__Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 4)));
    hlds__make_hlds__add_foreign_proc__Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 5)));
    hlds__make_hlds__add_foreign_proc__ItemNumbers0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 6)));
    hlds__make_hlds__add_foreign_proc__Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 7)));
    hlds__make_hlds__add_foreign_proc__Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 8)));
    hlds__make_hlds__add_foreign_proc__Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 9)));
    hlds__hlds_clauses__add_clause_item_number_5_p_0(hlds__make_hlds__add_foreign_proc__MaybeItemNumber_12, hlds__make_hlds__add_foreign_proc__Context_11, (MR_Integer) 1, hlds__make_hlds__add_foreign_proc__ItemNumbers0_44, &hlds__make_hlds__add_foreign_proc__ItemNumbers_45);
    hlds__make_hlds__add_foreign_proc__Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 0)));
    hlds__make_hlds__add_foreign_proc__Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 1)));
    hlds__make_hlds__add_foreign_proc__Var_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 2)));
    hlds__make_hlds__add_foreign_proc__Var_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 3)));
    hlds__make_hlds__add_foreign_proc__Var_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 4)));
    hlds__make_hlds__add_foreign_proc__Var_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 5)));
    hlds__make_hlds__add_foreign_proc__Var_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 6)));
    hlds__make_hlds__add_foreign_proc__Var_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 7)));
    hlds__make_hlds__add_foreign_proc__Var_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 8)));
    hlds__make_hlds__add_foreign_proc__Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 9)));
    {
      hlds__make_hlds__add_foreign_proc__ClausesInfo1_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_222));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_223));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_224));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, 3) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_225));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, 4) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_226));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, 5) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_227));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, 6) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ItemNumbers_45));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, 7) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_229));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, 8) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_230));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, 9) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_231));
    }
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_122_122, &hlds__make_hlds__add_foreign_proc__PredInfo0_47);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__make_hlds__add_foreign_proc__PredId_34, hlds__make_hlds__add_foreign_proc__PredInfo0_47, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_108_108, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_126_126);
    hlds__make_hlds__add_foreign_proc__CurrentBackend_48 = libs__globals__lookup_current_backend_1_f_0(hlds__make_hlds__add_foreign_proc__Globals_22);
    hlds__make_hlds__add_foreign_proc__ExtraAttrs_49 = parse_tree__prog_data_foreign__get_extra_attributes_1_f_0(hlds__make_hlds__add_foreign_proc__Attributes_25);
    hlds__make_hlds__add_foreign_proc__Var_127 = hlds__make_hlds__add_foreign_proc__is_applicable_for_current_backend_2_f_0(hlds__make_hlds__add_foreign_proc__CurrentBackend_48, hlds__make_hlds__add_foreign_proc__ExtraAttrs_49);
    hlds__make_hlds__add_foreign_proc__succeeded = (hlds__make_hlds__add_foreign_proc__Var_127 == (MR_Integer) 0);
    if (hlds__make_hlds__add_foreign_proc__succeeded)
    {
      *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_69 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112;
      *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_67 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_126_126;
    }
    else
    {
      hlds__make_hlds__add_foreign_proc__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__make_hlds__add_foreign_proc__PredInfo0_47);
      if (hlds__make_hlds__add_foreign_proc__succeeded)
      {
        MR_Word hlds__make_hlds__add_foreign_proc__Pieces_50;
        MR_Word hlds__make_hlds__add_foreign_proc__Msg_51;
        MR_Word hlds__make_hlds__add_foreign_proc__Spec_52;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_130;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_133;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_136;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_137;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_138;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_145;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_146;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_150;

        {
          hlds__make_hlds__add_foreign_proc__Var_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_138, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredOrFunc_17));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_138, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredName_16));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_138, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Arity_28));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_137, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_138));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_136, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_137));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[25])));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_133, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[64])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_133, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_136));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[59])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_130, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_133));
        }
        {
          hlds__make_hlds__add_foreign_proc__Pieces_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[41])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces_50, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_130));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_146, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Pieces_50));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_145, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_146));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_foreign_proc__Msg_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_51, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Context_11));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_51, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_145));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_150, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Msg_51));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_foreign_proc__Spec_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_52, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_150));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_69 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Spec_52));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112));
        }
        *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_67 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_126_126;
      }
      else
      {
        hlds__make_hlds__add_foreign_proc__succeeded = mercury__list__member_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (hlds__make_hlds__add_foreign_proc__PragmaForeignLanguage_27)), hlds__make_hlds__add_foreign_proc__BackendForeignLangs_31);
        hlds__make_hlds__add_foreign_proc__succeeded = !(hlds__make_hlds__add_foreign_proc__succeeded);
        if (hlds__make_hlds__add_foreign_proc__succeeded)
        {
          MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_154_193;

          hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), hlds__make_hlds__add_foreign_proc__PredInfo0_47, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_154_193);
          hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__make_hlds__add_foreign_proc__PredId_34, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_154_193, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_126_126, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_67);
          *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_69 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112;
        }
        else
        {
          MR_Word hlds__make_hlds__add_foreign_proc__Procs_53;
          MR_Word hlds__make_hlds__add_foreign_proc__ExistingProcs_54;
          MR_Word hlds__make_hlds__add_foreign_proc__Modes_55;
          MR_Word hlds__make_hlds__add_foreign_proc__SimpleCallId_56;
          MR_Integer hlds__make_hlds__add_foreign_proc__ProcId_57;

          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_foreign_proc__PredInfo0_47, &hlds__make_hlds__add_foreign_proc__Procs_53);
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__make_hlds__add_foreign_proc__Procs_53, &hlds__make_hlds__add_foreign_proc__ExistingProcs_54);
          parse_tree__prog_data_foreign__pragma_get_modes_2_p_0(hlds__make_hlds__add_foreign_proc__PVars_18, &hlds__make_hlds__add_foreign_proc__Modes_55);
          {
            hlds__make_hlds__add_foreign_proc__SimpleCallId_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__SimpleCallId_56, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredOrFunc_17));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__SimpleCallId_56, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredName_16));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__SimpleCallId_56, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Arity_28));
          }
          hlds__make_hlds__add_foreign_proc__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_foreign_proc__ExistingProcs_54, hlds__make_hlds__add_foreign_proc__Modes_55, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_126_126, &hlds__make_hlds__add_foreign_proc__ProcId_57);
          if (hlds__make_hlds__add_foreign_proc__succeeded)
          {
            MR_Word hlds__make_hlds__add_foreign_proc__ArgTypes_58;
            MR_Word hlds__make_hlds__add_foreign_proc__Purity_59;
            MR_Word hlds__make_hlds__add_foreign_proc__Markers_60;
            MR_Word hlds__make_hlds__add_foreign_proc__ClausesInfo_61;
            MR_Word hlds__make_hlds__add_foreign_proc__Preds_62;
            MR_Word hlds__make_hlds__add_foreign_proc__PredTable_63;
            MR_Word hlds__make_hlds__add_foreign_proc__ArgInfoBox_64;
            MR_Word hlds__make_hlds__add_foreign_proc__ArgInfo_65;
            MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_156_156;
            MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_157_157;
            MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_158_158;
            MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_154_194;

            hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__make_hlds__add_foreign_proc__PredInfo0_47, &hlds__make_hlds__add_foreign_proc__ArgTypes_58);
            hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__make_hlds__add_foreign_proc__PredInfo0_47, &hlds__make_hlds__add_foreign_proc__Purity_59);
            hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_foreign_proc__PredInfo0_47, &hlds__make_hlds__add_foreign_proc__Markers_60);
            hlds__make_hlds__add_foreign_proc__clauses_info_add_pragma_foreign_proc_19_p_0(hlds__make_hlds__add_foreign_proc__Purity_59, hlds__make_hlds__add_foreign_proc__Attributes_25, hlds__make_hlds__add_foreign_proc__PredId_34, hlds__make_hlds__add_foreign_proc__ProcId_57, hlds__make_hlds__add_foreign_proc__ProgVarSet_19, hlds__make_hlds__add_foreign_proc__PVars_18, hlds__make_hlds__add_foreign_proc__ArgTypes_58, hlds__make_hlds__add_foreign_proc__PragmaImpl_21, hlds__make_hlds__add_foreign_proc__Context_11, hlds__make_hlds__add_foreign_proc__PredOrFunc_17, hlds__make_hlds__add_foreign_proc__PredName_16, hlds__make_hlds__add_foreign_proc__Arity_28, hlds__make_hlds__add_foreign_proc__Markers_60, hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, &hlds__make_hlds__add_foreign_proc__ClausesInfo_61, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_126_126, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_156_156, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_157_157);
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_foreign_proc__ClausesInfo_61, hlds__make_hlds__add_foreign_proc__PredInfo0_47, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_158_158);
            hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_158_158, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_154_194);
            mercury__map__det_update_4_p_0(hlds__make_hlds__add_foreign_proc__TypeCtorInfo_233_233, hlds__make_hlds__add_foreign_proc__TypeCtorInfo_234_234, ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredId_34)), ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_154_194)), hlds__make_hlds__add_foreign_proc__Preds0_41, &hlds__make_hlds__add_foreign_proc__Preds_62);
            hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_foreign_proc__Preds_62, hlds__make_hlds__add_foreign_proc__PredTable1_40, &hlds__make_hlds__add_foreign_proc__PredTable_63);
            hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_foreign_proc__PredTable_63, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_156_156, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_67);
            parse_tree__prog_data_foreign__pragma_get_var_infos_2_p_0(hlds__make_hlds__add_foreign_proc__PVars_18, &hlds__make_hlds__add_foreign_proc__ArgInfoBox_64);
            hlds__make_hlds__add_foreign_proc__ArgInfo_65 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0, (MR_Word) &hlds__make_hlds__add_foreign_proc_scalar_common_1[1], (MR_Word) &hlds__make_hlds__add_foreign_proc_scalar_common_2[2], hlds__make_hlds__add_foreign_proc__ArgInfoBox_64);
            hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0(*hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_67, hlds__make_hlds__add_foreign_proc__PragmaImpl_21, hlds__make_hlds__add_foreign_proc__PragmaForeignLanguage_27, hlds__make_hlds__add_foreign_proc__ArgInfo_65, hlds__make_hlds__add_foreign_proc__Context_11, hlds__make_hlds__add_foreign_proc__SimpleCallId_56, hlds__make_hlds__add_foreign_proc__PredId_34, hlds__make_hlds__add_foreign_proc__ProcId_57, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_157_157, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_69);
          }
          else
          {
            MR_Word hlds__make_hlds__add_foreign_proc__Var_166;
            MR_Word hlds__make_hlds__add_foreign_proc__Var_169;
            MR_Word hlds__make_hlds__add_foreign_proc__Var_172;
            MR_Word hlds__make_hlds__add_foreign_proc__Var_175;
            MR_Word hlds__make_hlds__add_foreign_proc__Var_176;
            MR_Word hlds__make_hlds__add_foreign_proc__Var_183;
            MR_Word hlds__make_hlds__add_foreign_proc__Var_184;
            MR_Word hlds__make_hlds__add_foreign_proc__Var_188;
            MR_Word hlds__make_hlds__add_foreign_proc__Pieces_196;
            MR_Word hlds__make_hlds__add_foreign_proc__Msg_197;
            MR_Word hlds__make_hlds__add_foreign_proc__Spec_198;

            {
              hlds__make_hlds__add_foreign_proc__Var_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_176, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_176, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__SimpleCallId_56));
            }
            {
              hlds__make_hlds__add_foreign_proc__Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_175, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_176));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[25])));
            }
            {
              hlds__make_hlds__add_foreign_proc__Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[65])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_172, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_175));
            }
            {
              hlds__make_hlds__add_foreign_proc__Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_169, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[43])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_169, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_172));
            }
            {
              hlds__make_hlds__add_foreign_proc__Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_166, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[59])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_166, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_169));
            }
            {
              hlds__make_hlds__add_foreign_proc__Pieces_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces_196, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[41])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces_196, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_166));
            }
            {
              hlds__make_hlds__add_foreign_proc__Var_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_184, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Pieces_196));
            }
            {
              hlds__make_hlds__add_foreign_proc__Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_183, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_184));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_foreign_proc__Msg_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_197, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Context_11));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_197, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_183));
            }
            {
              hlds__make_hlds__add_foreign_proc__Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_188, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Msg_197));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_188, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_foreign_proc__Spec_198 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_198, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_198, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_198, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_188));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_69 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Spec_198));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112));
            }
            *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_67 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_126_126;
          }
        }
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_add_pragma_foreign_proc_19_p_0(
  MR_Word hlds__make_hlds__add_foreign_proc__Purity_20,
  MR_Word hlds__make_hlds__add_foreign_proc__Attributes0_21,
  MR_Word hlds__make_hlds__add_foreign_proc__PredId_22,
  MR_Integer hlds__make_hlds__add_foreign_proc__ProcId_23,
  MR_Word hlds__make_hlds__add_foreign_proc__PVarSet_24,
  MR_Word hlds__make_hlds__add_foreign_proc__PVars_25,
  MR_Word hlds__make_hlds__add_foreign_proc__OrigArgTypes_26,
  MR_Word hlds__make_hlds__add_foreign_proc__PragmaImpl0_27,
  MR_Word hlds__make_hlds__add_foreign_proc__Context_28,
  MR_Word hlds__make_hlds__add_foreign_proc__PredOrFunc_29,
  MR_Word hlds__make_hlds__add_foreign_proc__PredName_30,
  MR_Integer hlds__make_hlds__add_foreign_proc__Arity_31,
  MR_Word hlds__make_hlds__add_foreign_proc__Markers_32,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_42,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_43,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_45,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_46,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_47)
{
  {
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;
    MR_Word hlds__make_hlds__add_foreign_proc__PredInfo_36;

    hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_44, hlds__make_hlds__add_foreign_proc__PredId_22, &hlds__make_hlds__add_foreign_proc__PredInfo_36);
    hlds__make_hlds__add_foreign_proc__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(hlds__make_hlds__add_foreign_proc__PredInfo_36);
    if (hlds__make_hlds__add_foreign_proc__succeeded)
    {
      MR_Word hlds__make_hlds__add_foreign_proc__Globals_37;
      MR_Word hlds__make_hlds__add_foreign_proc__AllowDefnOfBuiltin_38;

      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_44, &hlds__make_hlds__add_foreign_proc__Globals_37);
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_foreign_proc__Globals_37, (MR_Integer) 283, &hlds__make_hlds__add_foreign_proc__AllowDefnOfBuiltin_38);
      switch (hlds__make_hlds__add_foreign_proc__AllowDefnOfBuiltin_38) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__make_hlds__add_foreign_proc__Msg_39;
            MR_Word hlds__make_hlds__add_foreign_proc__Spec_40;
            MR_Word hlds__make_hlds__add_foreign_proc__Var_60;

            {
              hlds__make_hlds__add_foreign_proc__Msg_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_39, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Context_28));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[32])));
            }
            {
              hlds__make_hlds__add_foreign_proc__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_60, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Msg_39));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_foreign_proc__Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_40, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_60));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_47 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Spec_40));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_46));
            }
          }
          break;
        case (MR_Integer) 1:
          *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_47 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_46;
          break;
      }
      *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_45 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_44;
      *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_43 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_42;
    }
    else
    {
      MR_Word hlds__make_hlds__add_foreign_proc__AllProcIds_41;

      hlds__make_hlds__add_foreign_proc__AllProcIds_41 = hlds__hlds_pred__pred_info_all_procids_1_f_0(hlds__make_hlds__add_foreign_proc__PredInfo_36);
      hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0(hlds__make_hlds__add_foreign_proc__Purity_20, hlds__make_hlds__add_foreign_proc__Attributes0_21, hlds__make_hlds__add_foreign_proc__PredId_22, hlds__make_hlds__add_foreign_proc__ProcId_23, hlds__make_hlds__add_foreign_proc__AllProcIds_41, hlds__make_hlds__add_foreign_proc__PVarSet_24, hlds__make_hlds__add_foreign_proc__PVars_25, hlds__make_hlds__add_foreign_proc__OrigArgTypes_26, hlds__make_hlds__add_foreign_proc__PragmaImpl0_27, hlds__make_hlds__add_foreign_proc__Context_28, hlds__make_hlds__add_foreign_proc__PredOrFunc_29, hlds__make_hlds__add_foreign_proc__PredName_30, hlds__make_hlds__add_foreign_proc__Arity_31, hlds__make_hlds__add_foreign_proc__Markers_32, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_42, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_43, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_44, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_45, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_46, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_47);
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0_1(
  MR_Box hlds__make_hlds__add_foreign_proc__closure_arg,
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_foreign_proc__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;
    MR_Box hlds__make_hlds__add_foreign_proc__closure = hlds__make_hlds__add_foreign_proc__closure_arg;
    MR_Word hlds__make_hlds__add_foreign_proc__conv0_LambdaHeadVar__2_113;

    hlds__make_hlds__add_foreign_proc__succeeded = hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_pragma_foreign_proc__494__1_2_p_0(((MR_Word) hlds__make_hlds__add_foreign_proc__wrapper_arg_1), &hlds__make_hlds__add_foreign_proc__conv0_LambdaHeadVar__2_113);
    if (hlds__make_hlds__add_foreign_proc__succeeded)
    {
      *hlds__make_hlds__add_foreign_proc__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_foreign_proc__conv0_LambdaHeadVar__2_113));
      hlds__make_hlds__add_foreign_proc__succeeded = MR_TRUE;
    }
    return hlds__make_hlds__add_foreign_proc__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0(
  MR_Word hlds__make_hlds__add_foreign_proc__Purity_21,
  MR_Word hlds__make_hlds__add_foreign_proc__Attributes0_22,
  MR_Word hlds__make_hlds__add_foreign_proc__PredId_23,
  MR_Integer hlds__make_hlds__add_foreign_proc__ProcId_24,
  MR_Word hlds__make_hlds__add_foreign_proc__AllProcIds_25,
  MR_Word hlds__make_hlds__add_foreign_proc__PVarSet_26,
  MR_Word hlds__make_hlds__add_foreign_proc__PVars_27,
  MR_Word hlds__make_hlds__add_foreign_proc__OrigArgTypes_28,
  MR_Word hlds__make_hlds__add_foreign_proc__PragmaImpl0_29,
  MR_Word hlds__make_hlds__add_foreign_proc__Context_30,
  MR_Word hlds__make_hlds__add_foreign_proc__PredOrFunc_31,
  MR_Word hlds__make_hlds__add_foreign_proc__PredName_32,
  MR_Integer hlds__make_hlds__add_foreign_proc__Arity_33,
  MR_Word hlds__make_hlds__add_foreign_proc__Markers_34,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_103,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_104,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_105,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_106,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_107,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_108)
{
  {
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;
    MR_Word hlds__make_hlds__add_foreign_proc__TypeInfo_221_221;
    MR_Word hlds__make_hlds__add_foreign_proc__VarSet0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_foreign_proc__ExplicitVarTypes_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_foreign_proc__TVarNameMap_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_foreign_proc__InferredVarTypes_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_foreign_proc__HeadVars_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_foreign_proc__ClausesRep0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__add_foreign_proc__ItemNumbers_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 6)));
    MR_Word hlds__make_hlds__add_foreign_proc__RttiVarMaps_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 7)));
    MR_Word hlds__make_hlds__add_foreign_proc__HadSyntaxError_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 9)));
    MR_Word hlds__make_hlds__add_foreign_proc__Clauses0_48;
    MR_Word hlds__make_hlds__add_foreign_proc__Globals_49;
    MR_Word hlds__make_hlds__add_foreign_proc__Target_50;
    MR_Word hlds__make_hlds__add_foreign_proc__NewLang_51;
    MR_Word hlds__make_hlds__add_foreign_proc__Clauses1_52;
    MR_Word hlds__make_hlds__add_foreign_proc__Overridden_53;
    MR_Word hlds__make_hlds__add_foreign_proc__BackendForeignLanguages_54;
    MR_Word hlds__make_hlds__add_foreign_proc__Args0_55;
    MR_Word hlds__make_hlds__add_foreign_proc__ArgInfo_56;
    MR_Word hlds__make_hlds__add_foreign_proc__Attributes1_57;
    MR_Word hlds__make_hlds__add_foreign_proc__PragmaImpl_58;
    MR_Word hlds__make_hlds__add_foreign_proc__ArgBag0_59;
    MR_Word hlds__make_hlds__add_foreign_proc__ArgBag_60;
    MR_Word hlds__make_hlds__add_foreign_proc__ArgBagAL0_61;
    MR_Word hlds__make_hlds__add_foreign_proc__MultiplyOccurringArgVars_65;
    MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_109_109;
    MR_Word hlds__make_hlds__add_foreign_proc___HasForeignClauses_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 8)));

    hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(hlds__make_hlds__add_foreign_proc__ClausesRep0_43, &hlds__make_hlds__add_foreign_proc__Clauses0_48);
    hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_105, &hlds__make_hlds__add_foreign_proc__Globals_49);
    libs__globals__get_target_2_p_0(hlds__make_hlds__add_foreign_proc__Globals_49, &hlds__make_hlds__add_foreign_proc__Target_50);
    hlds__make_hlds__add_foreign_proc__NewLang_51 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(hlds__make_hlds__add_foreign_proc__Attributes0_22);
    hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0(hlds__make_hlds__add_foreign_proc__PredName_32, hlds__make_hlds__add_foreign_proc__Arity_33, hlds__make_hlds__add_foreign_proc__PredOrFunc_31, hlds__make_hlds__add_foreign_proc__Context_30, hlds__make_hlds__add_foreign_proc__Globals_49, hlds__make_hlds__add_foreign_proc__Target_50, hlds__make_hlds__add_foreign_proc__NewLang_51, hlds__make_hlds__add_foreign_proc__AllProcIds_25, hlds__make_hlds__add_foreign_proc__ProcId_24, hlds__make_hlds__add_foreign_proc__Clauses0_48, &hlds__make_hlds__add_foreign_proc__Clauses1_52, &hlds__make_hlds__add_foreign_proc__Overridden_53, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_107, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_109_109);
    libs__globals__get_backend_foreign_languages_2_p_0(hlds__make_hlds__add_foreign_proc__Globals_49, &hlds__make_hlds__add_foreign_proc__BackendForeignLanguages_54);
    parse_tree__prog_data_foreign__pragma_get_vars_2_p_0(hlds__make_hlds__add_foreign_proc__PVars_27, &hlds__make_hlds__add_foreign_proc__Args0_55);
    parse_tree__prog_data_foreign__pragma_get_var_infos_2_p_0(hlds__make_hlds__add_foreign_proc__PVars_27, &hlds__make_hlds__add_foreign_proc__ArgInfo_56);
    backend_libs__foreign__extrude_pragma_implementation_11_p_0(hlds__make_hlds__add_foreign_proc__BackendForeignLanguages_54, hlds__make_hlds__add_foreign_proc__PVars_27, hlds__make_hlds__add_foreign_proc__PredName_32, hlds__make_hlds__add_foreign_proc__PredOrFunc_31, hlds__make_hlds__add_foreign_proc__Context_30, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_105, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_106, hlds__make_hlds__add_foreign_proc__Attributes0_22, &hlds__make_hlds__add_foreign_proc__Attributes1_57, hlds__make_hlds__add_foreign_proc__PragmaImpl0_29, &hlds__make_hlds__add_foreign_proc__PragmaImpl_58);
    hlds__make_hlds__add_foreign_proc__TypeInfo_221_221 = (MR_Word) &hlds__make_hlds__add_foreign_proc_scalar_common_1[2];
    mercury__bag__init_1_p_0(hlds__make_hlds__add_foreign_proc__TypeInfo_221_221, &hlds__make_hlds__add_foreign_proc__ArgBag0_59);
    mercury__bag__insert_list_3_p_0(hlds__make_hlds__add_foreign_proc__TypeInfo_221_221, hlds__make_hlds__add_foreign_proc__Args0_55, hlds__make_hlds__add_foreign_proc__ArgBag0_59, &hlds__make_hlds__add_foreign_proc__ArgBag_60);
    mercury__bag__to_assoc_list_2_p_0(hlds__make_hlds__add_foreign_proc__TypeInfo_221_221, hlds__make_hlds__add_foreign_proc__ArgBag_60, &hlds__make_hlds__add_foreign_proc__ArgBagAL0_61);
    mercury__list__filter_map_3_p_0((MR_Word) &hlds__make_hlds__add_foreign_proc_scalar_common_2[0], hlds__make_hlds__add_foreign_proc__TypeInfo_221_221, (MR_Word) &hlds__make_hlds__add_foreign_proc_scalar_common_2[1], hlds__make_hlds__add_foreign_proc__ArgBagAL0_61, &hlds__make_hlds__add_foreign_proc__MultiplyOccurringArgVars_65);
    if ((hlds__make_hlds__add_foreign_proc__MultiplyOccurringArgVars_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word hlds__make_hlds__add_foreign_proc__GoalInfo0_78;
      MR_Word hlds__make_hlds__add_foreign_proc__GoalInfo1_79;

      hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__add_foreign_proc__GoalInfo0_78);
      hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_hlds__add_foreign_proc__Context_30, hlds__make_hlds__add_foreign_proc__GoalInfo0_78, &hlds__make_hlds__add_foreign_proc__GoalInfo1_79);
      hlds__make_hlds__add_foreign_proc__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_foreign_proc__Markers_34, (MR_Integer) 16);
      if (!(hlds__make_hlds__add_foreign_proc__succeeded))
      {
        hlds__make_hlds__add_foreign_proc__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_foreign_proc__Markers_34, (MR_Integer) 17);
      }
      if (hlds__make_hlds__add_foreign_proc__succeeded)
        *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_108 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_109_109;
      else
      {
        MR_Word hlds__make_hlds__add_foreign_proc__ForeignAttributePurity_80;

        hlds__make_hlds__add_foreign_proc__ForeignAttributePurity_80 = parse_tree__prog_data_foreign__get_purity_1_f_0(hlds__make_hlds__add_foreign_proc__Attributes1_57);
        hlds__make_hlds__add_foreign_proc__succeeded = (hlds__make_hlds__add_foreign_proc__ForeignAttributePurity_80 == hlds__make_hlds__add_foreign_proc__Purity_21);
        if (hlds__make_hlds__add_foreign_proc__succeeded)
          *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_108 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_109_109;
        else
        {
          MR_String hlds__make_hlds__add_foreign_proc__ForeignAttributePurityStr_81;
          MR_String hlds__make_hlds__add_foreign_proc__PurityStr_82;
          MR_Word hlds__make_hlds__add_foreign_proc__Pieces_83;
          MR_Word hlds__make_hlds__add_foreign_proc__Var_119;
          MR_Word hlds__make_hlds__add_foreign_proc__Var_120;
          MR_Word hlds__make_hlds__add_foreign_proc__Var_121;
          MR_Word hlds__make_hlds__add_foreign_proc__Var_122;
          MR_Word hlds__make_hlds__add_foreign_proc__Var_123;
          MR_Word hlds__make_hlds__add_foreign_proc__Var_124;
          MR_Word hlds__make_hlds__add_foreign_proc__Var_127;
          MR_Word hlds__make_hlds__add_foreign_proc__Var_128;
          MR_Word hlds__make_hlds__add_foreign_proc__Var_129;
          MR_Word hlds__make_hlds__add_foreign_proc__Var_132;
          MR_Word hlds__make_hlds__add_foreign_proc__Var_134;
          MR_Word hlds__make_hlds__add_foreign_proc__Var_137;
          MR_Word hlds__make_hlds__add_foreign_proc__Var_138;
          MR_Word hlds__make_hlds__add_foreign_proc__Var_145;
          MR_Word hlds__make_hlds__add_foreign_proc__Var_146;
          MR_Word hlds__make_hlds__add_foreign_proc__Var_150;
          MR_Word hlds__make_hlds__add_foreign_proc__Msg_211;
          MR_Word hlds__make_hlds__add_foreign_proc__Spec_212;

          parse_tree__prog_out__purity_name_2_p_0(hlds__make_hlds__add_foreign_proc__ForeignAttributePurity_80, &hlds__make_hlds__add_foreign_proc__ForeignAttributePurityStr_81);
          parse_tree__prog_out__purity_name_2_p_0(hlds__make_hlds__add_foreign_proc__Purity_21, &hlds__make_hlds__add_foreign_proc__PurityStr_82);
          {
            hlds__make_hlds__add_foreign_proc__Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_120, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredOrFunc_31));
          }
          {
            hlds__make_hlds__add_foreign_proc__Var_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_123, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredName_32));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_123, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Arity_33));
          }
          {
            hlds__make_hlds__add_foreign_proc__Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_122, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_123));
          }
          {
            hlds__make_hlds__add_foreign_proc__Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_128, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ForeignAttributePurityStr_81));
          }
          {
            hlds__make_hlds__add_foreign_proc__Var_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_138, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PurityStr_82));
          }
          {
            hlds__make_hlds__add_foreign_proc__Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_137, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_138));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[25])));
          }
          {
            hlds__make_hlds__add_foreign_proc__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[57])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_134, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_137));
          }
          {
            hlds__make_hlds__add_foreign_proc__Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_132, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_120));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_132, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_134));
          }
          {
            hlds__make_hlds__add_foreign_proc__Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[56])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_129, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_132));
          }
          {
            hlds__make_hlds__add_foreign_proc__Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_127, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_128));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_127, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_129));
          }
          {
            hlds__make_hlds__add_foreign_proc__Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[55])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_124, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_127));
          }
          {
            hlds__make_hlds__add_foreign_proc__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_121, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_122));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_121, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_124));
          }
          {
            hlds__make_hlds__add_foreign_proc__Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_119, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_120));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_119, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_121));
          }
          {
            hlds__make_hlds__add_foreign_proc__Pieces_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[54])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces_83, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_119));
          }
          {
            hlds__make_hlds__add_foreign_proc__Var_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_146, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Pieces_83));
          }
          {
            hlds__make_hlds__add_foreign_proc__Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_145, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_146));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_foreign_proc__Msg_211 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_211, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Context_30));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_211, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_145));
          }
          {
            hlds__make_hlds__add_foreign_proc__Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_150, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Msg_211));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_foreign_proc__Spec_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_212, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_212, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_212, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_150));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_108 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Spec_212));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_109_109));
          }
        }
      }
      switch (hlds__make_hlds__add_foreign_proc__Overridden_53) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word hlds__make_hlds__add_foreign_proc__GoalInfo_84;
            MR_Word hlds__make_hlds__add_foreign_proc__HeadVarList_85;
            MR_Word hlds__make_hlds__add_foreign_proc__ForeignArgs_86;
            MR_Word hlds__make_hlds__add_foreign_proc__Attributes_87;
            MR_Word hlds__make_hlds__add_foreign_proc__GoalExpr_90;
            MR_Word hlds__make_hlds__add_foreign_proc__HldsGoal0_91;
            MR_Word hlds__make_hlds__add_foreign_proc__EmptyVarTypes_92;
            MR_Word hlds__make_hlds__add_foreign_proc__EmptyRttiVarmaps_93;
            MR_Word hlds__make_hlds__add_foreign_proc__HldsGoal_95;
            MR_Word hlds__make_hlds__add_foreign_proc__VarSet_96;
            MR_Word hlds__make_hlds__add_foreign_proc__Clause_99;
            MR_Word hlds__make_hlds__add_foreign_proc__Clauses_100;
            MR_Word hlds__make_hlds__add_foreign_proc__ClausesRep_101;
            MR_Word hlds__make_hlds__add_foreign_proc__Var_154;
            MR_Word hlds__make_hlds__add_foreign_proc__Var_155;
            MR_Word hlds__make_hlds__add_foreign_proc__Var_157;
            MR_Word hlds__make_hlds__add_foreign_proc___Warnings_94;
            MR_Word hlds__make_hlds__add_foreign_proc__Var_97;
            MR_Word hlds__make_hlds__add_foreign_proc__Var_98;

            hlds__hlds_goal__goal_info_set_purity_3_p_0(hlds__make_hlds__add_foreign_proc__Purity_21, hlds__make_hlds__add_foreign_proc__GoalInfo1_79, &hlds__make_hlds__add_foreign_proc__GoalInfo_84);
            hlds__make_hlds__add_foreign_proc__HeadVarList_85 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(hlds__make_hlds__add_foreign_proc__TypeInfo_221_221, hlds__make_hlds__add_foreign_proc__HeadVars_42);
            hlds__hlds_goal__make_foreign_args_4_p_0(hlds__make_hlds__add_foreign_proc__HeadVarList_85, hlds__make_hlds__add_foreign_proc__ArgInfo_56, hlds__make_hlds__add_foreign_proc__OrigArgTypes_28, &hlds__make_hlds__add_foreign_proc__ForeignArgs_86);
            hlds__make_hlds__add_foreign_proc__maybe_rename_user_annotated_sharing_information_6_p_0(hlds__make_hlds__add_foreign_proc__Globals_49, hlds__make_hlds__add_foreign_proc__Args0_55, hlds__make_hlds__add_foreign_proc__HeadVarList_85, hlds__make_hlds__add_foreign_proc__OrigArgTypes_28, hlds__make_hlds__add_foreign_proc__Attributes1_57, &hlds__make_hlds__add_foreign_proc__Attributes_87);
            {
              hlds__make_hlds__add_foreign_proc__GoalExpr_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__GoalExpr_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__GoalExpr_90, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Attributes_87));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__GoalExpr_90, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredId_23));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__GoalExpr_90, 3) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ProcId_24));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__GoalExpr_90, 4) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ForeignArgs_86));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__GoalExpr_90, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__GoalExpr_90, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__GoalExpr_90, 7) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PragmaImpl_58));
            }
            {
              hlds__make_hlds__add_foreign_proc__HldsGoal0_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__HldsGoal0_91, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__GoalExpr_90));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__HldsGoal0_91, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__GoalInfo_84));
            }
            hlds__vartypes__init_vartypes_1_p_0(&hlds__make_hlds__add_foreign_proc__EmptyVarTypes_92);
            hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__make_hlds__add_foreign_proc__EmptyRttiVarmaps_93);
            hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, hlds__make_hlds__add_foreign_proc__HeadVarList_85, &hlds__make_hlds__add_foreign_proc___Warnings_94, hlds__make_hlds__add_foreign_proc__HldsGoal0_91, &hlds__make_hlds__add_foreign_proc__HldsGoal_95, hlds__make_hlds__add_foreign_proc__VarSet0_38, &hlds__make_hlds__add_foreign_proc__VarSet_96, hlds__make_hlds__add_foreign_proc__EmptyVarTypes_92, &hlds__make_hlds__add_foreign_proc__Var_97, hlds__make_hlds__add_foreign_proc__EmptyRttiVarmaps_93, &hlds__make_hlds__add_foreign_proc__Var_98);
            {
              hlds__make_hlds__add_foreign_proc__Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_155, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ProcId_24));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_155, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_foreign_proc__Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_154, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_155));
            }
            {
              hlds__make_hlds__add_foreign_proc__Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_157, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__NewLang_51));
            }
            {
              hlds__make_hlds__add_foreign_proc__Clause_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Clause_99, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_154));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Clause_99, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__HldsGoal_95));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Clause_99, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_157));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Clause_99, 3) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Context_30));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Clause_99, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_foreign_proc__Clauses_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Clauses_100, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Clause_99));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Clauses_100, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Clauses1_52));
            }
            hlds__hlds_clauses__set_clause_list_2_p_0(hlds__make_hlds__add_foreign_proc__Clauses_100, &hlds__make_hlds__add_foreign_proc__ClausesRep_101);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
              *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_104 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__VarSet_96));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ExplicitVarTypes_39));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__TVarNameMap_40));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__InferredVarTypes_41));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__HeadVars_42));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ClausesRep_101));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ItemNumbers_44));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__RttiVarMaps_45));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__HadSyntaxError_47));
            }
          }
          break;
        case (MR_Integer) 0:
          *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_104 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_103;
          break;
      }
    }
    else
    {
      MR_Integer hlds__make_hlds__add_foreign_proc__OrigArity_68;
      MR_Word hlds__make_hlds__add_foreign_proc__SimpleCallId_69;
      MR_Word hlds__make_hlds__add_foreign_proc__Pieces1_70;
      MR_Word hlds__make_hlds__add_foreign_proc__Pieces2_72;
      MR_Word hlds__make_hlds__add_foreign_proc__Msg_76;
      MR_Word hlds__make_hlds__add_foreign_proc__Spec_77;
      MR_Word hlds__make_hlds__add_foreign_proc__Var_162;
      MR_Word hlds__make_hlds__add_foreign_proc__Var_165;
      MR_Word hlds__make_hlds__add_foreign_proc__Var_168;
      MR_Word hlds__make_hlds__add_foreign_proc__Var_169;
      MR_Word hlds__make_hlds__add_foreign_proc__Var_200;
      MR_Word hlds__make_hlds__add_foreign_proc__Var_201;
      MR_Word hlds__make_hlds__add_foreign_proc__Var_202;
      MR_Word hlds__make_hlds__add_foreign_proc__Var_206;
      MR_Word hlds__make_hlds__add_foreign_proc__Var_226;
      MR_Word hlds__make_hlds__add_foreign_proc__Var_227;

      parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__add_foreign_proc__PredOrFunc_31, &hlds__make_hlds__add_foreign_proc__OrigArity_68, hlds__make_hlds__add_foreign_proc__Arity_33);
      {
        hlds__make_hlds__add_foreign_proc__SimpleCallId_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__SimpleCallId_69, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredOrFunc_31));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__SimpleCallId_69, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredName_32));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__SimpleCallId_69, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__OrigArity_68));
      }
      {
        hlds__make_hlds__add_foreign_proc__Var_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_169, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__SimpleCallId_69));
      }
      {
        hlds__make_hlds__add_foreign_proc__Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_168, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_169));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[34])));
      }
      {
        hlds__make_hlds__add_foreign_proc__Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_165, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[60])));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_165, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_168));
      }
      {
        hlds__make_hlds__add_foreign_proc__Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_162, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[59])));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_162, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_165));
      }
      {
        hlds__make_hlds__add_foreign_proc__Pieces1_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces1_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[58])));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces1_70, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_162));
      }
      hlds__make_hlds__add_foreign_proc__Var_227 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__MultiplyOccurringArgVars_65, (MR_Integer) 0)));
      hlds__make_hlds__add_foreign_proc__Var_226 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__MultiplyOccurringArgVars_65, (MR_Integer) 1)));
      if ((hlds__make_hlds__add_foreign_proc__Var_226 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__make_hlds__add_foreign_proc__Var_191;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_192;
        MR_String hlds__make_hlds__add_foreign_proc__Var_193;

        hlds__make_hlds__add_foreign_proc__Var_193 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__add_foreign_proc__PVarSet_26, hlds__make_hlds__add_foreign_proc__Var_227);
        {
          hlds__make_hlds__add_foreign_proc__Var_192 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_192, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_192, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_193));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_191, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_192));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[36])));
        }
        {
          hlds__make_hlds__add_foreign_proc__Pieces2_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces2_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[61])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces2_72, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_191));
        }
      }
      else
      {
        MR_Word hlds__make_hlds__add_foreign_proc__Var_179;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_180;
        MR_String hlds__make_hlds__add_foreign_proc__Var_181;

        hlds__make_hlds__add_foreign_proc__Var_181 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__add_foreign_proc__PVarSet_26, hlds__make_hlds__add_foreign_proc__MultiplyOccurringArgVars_65);
        {
          hlds__make_hlds__add_foreign_proc__Var_180 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_180, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_180, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_181));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_179, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_180));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[38])));
        }
        {
          hlds__make_hlds__add_foreign_proc__Pieces2_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces2_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[62])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces2_72, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_179));
        }
      }
      hlds__make_hlds__add_foreign_proc__Var_202 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_foreign_proc__Pieces1_70, hlds__make_hlds__add_foreign_proc__Pieces2_72);
      {
        hlds__make_hlds__add_foreign_proc__Var_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_201, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_202));
      }
      {
        hlds__make_hlds__add_foreign_proc__Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_200, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_201));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_200, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        hlds__make_hlds__add_foreign_proc__Msg_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_76, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Context_30));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_76, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_200));
      }
      {
        hlds__make_hlds__add_foreign_proc__Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_206, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Msg_76));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        hlds__make_hlds__add_foreign_proc__Spec_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_77, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_206));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_108 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Spec_77));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_109_109));
      }
      *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_104 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_103;
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0_1(
  MR_Box hlds__make_hlds__add_foreign_proc__closure_arg)
{
  {
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;
    MR_Box hlds__make_hlds__add_foreign_proc__closure = hlds__make_hlds__add_foreign_proc__closure_arg;

    hlds__make_hlds__add_foreign_proc__succeeded = hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__711__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__closure, (MR_Integer) 4))));
    return hlds__make_hlds__add_foreign_proc__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0(
  MR_Word hlds__make_hlds__add_foreign_proc__PredName_15,
  MR_Integer hlds__make_hlds__add_foreign_proc__Arity_16,
  MR_Word hlds__make_hlds__add_foreign_proc__PredOrFunc_17,
  MR_Word hlds__make_hlds__add_foreign_proc__NewContext_18,
  MR_Word hlds__make_hlds__add_foreign_proc__Globals_19,
  MR_Word hlds__make_hlds__add_foreign_proc__Target_20,
  MR_Word hlds__make_hlds__add_foreign_proc__NewLang_21,
  MR_Word hlds__make_hlds__add_foreign_proc__AllProcIds_22,
  MR_Integer hlds__make_hlds__add_foreign_proc__NewClauseProcId_23,
  MR_Word hlds__make_hlds__add_foreign_proc__Clauses0_24,
  MR_Word * hlds__make_hlds__add_foreign_proc__Clauses_25,
  MR_Word * hlds__make_hlds__add_foreign_proc__Overridden_26,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_51,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_52)
{
  {
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;

    if ((hlds__make_hlds__add_foreign_proc__Clauses0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *hlds__make_hlds__add_foreign_proc__Clauses_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *hlds__make_hlds__add_foreign_proc__Overridden_26 = (MR_Integer) 1;
      *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_52 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_51;
    }
    else
    {
      MR_Word hlds__make_hlds__add_foreign_proc__FirstClause0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Clauses0_24, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__add_foreign_proc__LaterClauses0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Clauses0_24, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_foreign_proc__LaterClauses_30;
      MR_Word hlds__make_hlds__add_foreign_proc__LaterOverridden_31;
      MR_Word hlds__make_hlds__add_foreign_proc__ApplProcIds0_32;
      MR_Word hlds__make_hlds__add_foreign_proc__Body_33;
      MR_Word hlds__make_hlds__add_foreign_proc__ClauseLang_34;
      MR_Word hlds__make_hlds__add_foreign_proc__ClauseContext_35;
      MR_Word hlds__make_hlds__add_foreign_proc__StateVarWarnings_36;
      MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_53_53;

      hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0(hlds__make_hlds__add_foreign_proc__PredName_15, hlds__make_hlds__add_foreign_proc__Arity_16, hlds__make_hlds__add_foreign_proc__PredOrFunc_17, hlds__make_hlds__add_foreign_proc__NewContext_18, hlds__make_hlds__add_foreign_proc__Globals_19, hlds__make_hlds__add_foreign_proc__Target_20, hlds__make_hlds__add_foreign_proc__NewLang_21, hlds__make_hlds__add_foreign_proc__AllProcIds_22, hlds__make_hlds__add_foreign_proc__NewClauseProcId_23, hlds__make_hlds__add_foreign_proc__LaterClauses0_29, &hlds__make_hlds__add_foreign_proc__LaterClauses_30, &hlds__make_hlds__add_foreign_proc__LaterOverridden_31, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_51, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_53_53);
      hlds__make_hlds__add_foreign_proc__ApplProcIds0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause0_28, (MR_Integer) 0)));
      hlds__make_hlds__add_foreign_proc__Body_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause0_28, (MR_Integer) 1)));
      hlds__make_hlds__add_foreign_proc__ClauseLang_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause0_28, (MR_Integer) 2)));
      hlds__make_hlds__add_foreign_proc__ClauseContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause0_28, (MR_Integer) 3)));
      hlds__make_hlds__add_foreign_proc__StateVarWarnings_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause0_28, (MR_Integer) 4)));
      if ((hlds__make_hlds__add_foreign_proc__ApplProcIds0_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        if ((hlds__make_hlds__add_foreign_proc__ClauseLang_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word hlds__make_hlds__add_foreign_proc__ProcIds_38;

          hlds__make_hlds__add_foreign_proc__succeeded = mercury__list__delete_first_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_foreign_proc__AllProcIds_22, ((MR_Box) (hlds__make_hlds__add_foreign_proc__NewClauseProcId_23)), &hlds__make_hlds__add_foreign_proc__ProcIds_38);
          if (hlds__make_hlds__add_foreign_proc__succeeded)
            if ((hlds__make_hlds__add_foreign_proc__ProcIds_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *hlds__make_hlds__add_foreign_proc__Clauses_25 = hlds__make_hlds__add_foreign_proc__LaterClauses_30;
            else
            {
              MR_Word hlds__make_hlds__add_foreign_proc__FirstClause_41;
              MR_Word hlds__make_hlds__add_foreign_proc__Var_100;

              {
                hlds__make_hlds__add_foreign_proc__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_100, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ProcIds_38));
              }
              {
                hlds__make_hlds__add_foreign_proc__FirstClause_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_41, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_100));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_41, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Body_33));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_41, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ClauseLang_34));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_41, 3) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ClauseContext_35));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_41, 4) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__StateVarWarnings_36));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__make_hlds__add_foreign_proc__Clauses_25 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__FirstClause_41));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__LaterClauses_30));
              }
            }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_foreign_proc__Clauses_25 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__FirstClause0_28));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__LaterClauses_30));
            }
          *hlds__make_hlds__add_foreign_proc__Overridden_26 = hlds__make_hlds__add_foreign_proc__LaterOverridden_31;
          *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_52 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_53_53;
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
        MR_Word hlds__make_hlds__add_foreign_proc__Var_490 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__ApplProcIds0_32, (MR_Integer) 0)));

        if ((hlds__make_hlds__add_foreign_proc__ClauseLang_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word hlds__make_hlds__add_foreign_proc__ProcIds_423;

          hlds__make_hlds__add_foreign_proc__succeeded = mercury__list__delete_first_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_foreign_proc__Var_490, ((MR_Box) (hlds__make_hlds__add_foreign_proc__NewClauseProcId_23)), &hlds__make_hlds__add_foreign_proc__ProcIds_423);
          if (hlds__make_hlds__add_foreign_proc__succeeded)
            if ((hlds__make_hlds__add_foreign_proc__ProcIds_423 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *hlds__make_hlds__add_foreign_proc__Clauses_25 = hlds__make_hlds__add_foreign_proc__LaterClauses_30;
            else
            {
              MR_Word hlds__make_hlds__add_foreign_proc__FirstClause_417;
              MR_Word hlds__make_hlds__add_foreign_proc__Var_418;

              {
                hlds__make_hlds__add_foreign_proc__Var_418 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_418, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ProcIds_423));
              }
              {
                hlds__make_hlds__add_foreign_proc__FirstClause_417 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_417, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_418));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_417, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Body_33));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_417, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ClauseLang_34));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_417, 3) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ClauseContext_35));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_417, 4) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__StateVarWarnings_36));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__make_hlds__add_foreign_proc__Clauses_25 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__FirstClause_417));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__LaterClauses_30));
              }
            }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_foreign_proc__Clauses_25 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__FirstClause0_28));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__LaterClauses_30));
            }
          *hlds__make_hlds__add_foreign_proc__Overridden_26 = hlds__make_hlds__add_foreign_proc__LaterOverridden_31;
          *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_52 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_53_53;
        }
        else
        {
          MR_Word hlds__make_hlds__add_foreign_proc__OldLang_365 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__ClauseLang_34, (MR_Integer) 0)));
          MR_Word hlds__make_hlds__add_foreign_proc__ProcIds_362;

          hlds__make_hlds__add_foreign_proc__succeeded = mercury__list__delete_first_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_foreign_proc__Var_490, ((MR_Box) (hlds__make_hlds__add_foreign_proc__NewClauseProcId_23)), &hlds__make_hlds__add_foreign_proc__ProcIds_362);
          if (hlds__make_hlds__add_foreign_proc__succeeded)
          {
            MR_Word hlds__make_hlds__add_foreign_proc__PreferNewForeignLang_277;

            hlds__make_hlds__add_foreign_proc__PreferNewForeignLang_277 = parse_tree__prog_foreign__prefer_foreign_language_4_f_0(hlds__make_hlds__add_foreign_proc__Globals_19, hlds__make_hlds__add_foreign_proc__Target_20, hlds__make_hlds__add_foreign_proc__OldLang_365, hlds__make_hlds__add_foreign_proc__NewLang_21);
            switch (hlds__make_hlds__add_foreign_proc__PreferNewForeignLang_277) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *hlds__make_hlds__add_foreign_proc__Clauses_25 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__FirstClause0_28));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__LaterClauses_30));
                  }
                  *hlds__make_hlds__add_foreign_proc__Overridden_26 = (MR_Integer) 0;
                  hlds__make_hlds__add_foreign_proc__succeeded = (hlds__make_hlds__add_foreign_proc__OldLang_365 == hlds__make_hlds__add_foreign_proc__NewLang_21);
                  if (hlds__make_hlds__add_foreign_proc__succeeded)
                  {
                    MR_Word hlds__make_hlds__add_foreign_proc__PiecesA_115;
                    MR_Word hlds__make_hlds__add_foreign_proc__MsgA_117;
                    MR_Word hlds__make_hlds__add_foreign_proc__MsgB_118;
                    MR_Word hlds__make_hlds__add_foreign_proc__Spec_119;
                    MR_Word hlds__make_hlds__add_foreign_proc__Var_122;
                    MR_Word hlds__make_hlds__add_foreign_proc__Var_123;
                    MR_Word hlds__make_hlds__add_foreign_proc__Var_124;
                    MR_Word hlds__make_hlds__add_foreign_proc__Var_125;
                    MR_Word hlds__make_hlds__add_foreign_proc__Var_126;
                    MR_Word hlds__make_hlds__add_foreign_proc__Var_127;
                    MR_Word hlds__make_hlds__add_foreign_proc__Var_130;
                    MR_Word hlds__make_hlds__add_foreign_proc__Var_131;
                    MR_String hlds__make_hlds__add_foreign_proc__Var_132;
                    MR_Word hlds__make_hlds__add_foreign_proc__Var_134;
                    MR_Word hlds__make_hlds__add_foreign_proc__Var_135;
                    MR_Word hlds__make_hlds__add_foreign_proc__Var_137;
                    MR_Word hlds__make_hlds__add_foreign_proc__Var_145;
                    MR_Word hlds__make_hlds__add_foreign_proc__Var_146;

                    {
                      hlds__make_hlds__add_foreign_proc__Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_123, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredOrFunc_17));
                    }
                    {
                      hlds__make_hlds__add_foreign_proc__Var_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_126, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredName_15));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_126, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Arity_16));
                    }
                    {
                      hlds__make_hlds__add_foreign_proc__Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_125, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_126));
                    }
                    hlds__make_hlds__add_foreign_proc__Var_132 = libs__globals__foreign_language_string_1_f_0(hlds__make_hlds__add_foreign_proc__OldLang_365);
                    {
                      hlds__make_hlds__add_foreign_proc__Var_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_131, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_132));
                    }
                    {
                      hlds__make_hlds__add_foreign_proc__Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_130, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_131));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[25])));
                    }
                    {
                      hlds__make_hlds__add_foreign_proc__Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[52])));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_127, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_130));
                    }
                    {
                      hlds__make_hlds__add_foreign_proc__Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_124, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_125));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_124, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_127));
                    }
                    {
                      hlds__make_hlds__add_foreign_proc__Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_122, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_123));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_122, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_124));
                    }
                    {
                      hlds__make_hlds__add_foreign_proc__PiecesA_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__PiecesA_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[51])));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__PiecesA_115, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_122));
                    }
                    {
                      hlds__make_hlds__add_foreign_proc__Var_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_135, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PiecesA_115));
                    }
                    {
                      hlds__make_hlds__add_foreign_proc__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_134, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_135));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__make_hlds__add_foreign_proc__MsgA_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__MsgA_117, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__NewContext_18));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__MsgA_117, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_134));
                    }
                    {
                      hlds__make_hlds__add_foreign_proc__Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_137, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ClauseContext_35));
                    }
                    {
                      hlds__make_hlds__add_foreign_proc__MsgB_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__MsgB_118, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_137));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__MsgB_118, 1) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__MsgB_118, 2) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__MsgB_118, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[53])));
                    }
                    {
                      hlds__make_hlds__add_foreign_proc__Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_146, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__MsgB_118));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__make_hlds__add_foreign_proc__Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_145, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__MsgA_117));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_145, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_146));
                    }
                    {
                      hlds__make_hlds__add_foreign_proc__Spec_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_119, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_145));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_52 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Spec_119));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_53_53));
                    }
                  }
                  else
                    *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_52 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_53_53;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__make_hlds__add_foreign_proc__Var_229;

                  if ((hlds__make_hlds__add_foreign_proc__ProcIds_362 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    *hlds__make_hlds__add_foreign_proc__Clauses_25 = hlds__make_hlds__add_foreign_proc__LaterClauses_30;
                    *hlds__make_hlds__add_foreign_proc__Overridden_26 = hlds__make_hlds__add_foreign_proc__LaterOverridden_31;
                  }
                  else
                  {
                    MR_Word hlds__make_hlds__add_foreign_proc__Var_218;
                    MR_Word hlds__make_hlds__add_foreign_proc__FirstClause_219;

                    {
                      hlds__make_hlds__add_foreign_proc__Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_218, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ProcIds_362));
                    }
                    {
                      hlds__make_hlds__add_foreign_proc__FirstClause_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_219, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_218));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_219, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Body_33));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_219, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ClauseLang_34));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_219, 3) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ClauseContext_35));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_219, 4) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__StateVarWarnings_36));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__make_hlds__add_foreign_proc__Clauses_25 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__FirstClause_219));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__LaterClauses_30));
                    }
                    *hlds__make_hlds__add_foreign_proc__Overridden_26 = hlds__make_hlds__add_foreign_proc__LaterOverridden_31;
                  }
                  {
                    hlds__make_hlds__add_foreign_proc__Var_229 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_229, 0) = ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_5[0]));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_229, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0_1));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_229, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_229, 3) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__LaterOverridden_31));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_229, 4) = ((MR_Box) ((MR_Integer) 1));
                  }
                  mercury__require__expect_3_p_0(hlds__make_hlds__add_foreign_proc__Var_229, (MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/14", (MR_String) "inconsistent old foreign_procs");
                  *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_52 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_53_53;
                }
                break;
            }
          }
          else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_foreign_proc__Clauses_25 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__FirstClause0_28));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__LaterClauses_30));
            }
            *hlds__make_hlds__add_foreign_proc__Overridden_26 = hlds__make_hlds__add_foreign_proc__LaterOverridden_31;
            *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_52 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_53_53;
          }
        }
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__maybe_rename_user_annotated_sharing_information_6_p_0(
  MR_Word hlds__make_hlds__add_foreign_proc__Globals_7,
  MR_Word hlds__make_hlds__add_foreign_proc__ActualHeadVars_8,
  MR_Word hlds__make_hlds__add_foreign_proc__FormalHeadVars_9,
  MR_Word hlds__make_hlds__add_foreign_proc__FormalTypes_10,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Attributes_0_14,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Attributes_15)
{
  {
    MR_Word hlds__make_hlds__add_foreign_proc__SharingAnalysis_12;

    libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_foreign_proc__Globals_7, (MR_Integer) 415, &hlds__make_hlds__add_foreign_proc__SharingAnalysis_12);
    switch (hlds__make_hlds__add_foreign_proc__SharingAnalysis_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Attributes_15 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Attributes_0_14;
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__add_foreign_proc__FormalUserSharing_13;
          MR_Word hlds__make_hlds__add_foreign_proc__Var_17;

          hlds__make_hlds__add_foreign_proc__Var_17 = parse_tree__prog_data_foreign__get_user_annotated_sharing_1_f_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Attributes_0_14);
          parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0(hlds__make_hlds__add_foreign_proc__ActualHeadVars_8, hlds__make_hlds__add_foreign_proc__FormalHeadVars_9, hlds__make_hlds__add_foreign_proc__FormalTypes_10, hlds__make_hlds__add_foreign_proc__Var_17, &hlds__make_hlds__add_foreign_proc__FormalUserSharing_13);
          parse_tree__prog_data_foreign__set_user_annotated_sharing_3_p_0(hlds__make_hlds__add_foreign_proc__FormalUserSharing_13, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Attributes_0_14, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Attributes_15);
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_foreign_proc__is_applicable_for_current_backend_2_f_0(
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__make_hlds__add_foreign_proc__succeeded;
      MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__3_3;

      if ((hlds__make_hlds__add_foreign_proc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        hlds__make_hlds__add_foreign_proc__HeadVar__3_3 = (MR_Integer) 1;
      else
      {
        MR_Word hlds__make_hlds__add_foreign_proc__Attr_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_foreign_proc__Attrs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__HeadVar__2_2, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) hlds__make_hlds__add_foreign_proc__Attr_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              /* direct tailcall eliminated */
              {
                MR_Word hlds__make_hlds__add_foreign_proc__next_value_of_HeadVar__2_2 = hlds__make_hlds__add_foreign_proc__Attrs_7;

                hlds__make_hlds__add_foreign_proc__HeadVar__2_2 = hlds__make_hlds__add_foreign_proc__next_value_of_HeadVar__2_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__make_hlds__add_foreign_proc__Backend_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Attr_6, (MR_Integer) 0)));

              hlds__make_hlds__add_foreign_proc__succeeded = (hlds__make_hlds__add_foreign_proc__Backend_9 == hlds__make_hlds__add_foreign_proc__HeadVar__1_1);
              if (hlds__make_hlds__add_foreign_proc__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__make_hlds__add_foreign_proc__next_value_of_HeadVar__2_2 = hlds__make_hlds__add_foreign_proc__Attrs_7;

                  hlds__make_hlds__add_foreign_proc__HeadVar__2_2 = hlds__make_hlds__add_foreign_proc__next_value_of_HeadVar__2_2;
                }
                continue;
              }
              else
                hlds__make_hlds__add_foreign_proc__HeadVar__3_3 = (MR_Integer) 0;
            }
            break;
        }
      }
      return hlds__make_hlds__add_foreign_proc__HeadVar__3_3;
    }
    break;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0_1(
  MR_Box hlds__make_hlds__add_foreign_proc__closure_arg,
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_2;
    MR_Box hlds__make_hlds__add_foreign_proc__closure = hlds__make_hlds__add_foreign_proc__closure_arg;
    MR_Word hlds__make_hlds__add_foreign_proc__conv0_HeadVar__4_4;

    hlds__make_hlds__add_foreign_proc__conv0_HeadVar__4_4 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_foreign_proc__wrapper_arg_1));
    hlds__make_hlds__add_foreign_proc__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_foreign_proc__conv0_HeadVar__4_4));
    return hlds__make_hlds__add_foreign_proc__wrapper_arg_2;
  }
}

void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0(
  MR_Word hlds__make_hlds__add_foreign_proc__MaybeAttrs_8,
  MR_Word hlds__make_hlds__add_foreign_proc__FPEInfo_9,
  MR_Word hlds__make_hlds__add_foreign_proc__Context_10,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_36,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_37,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_38,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_39)
{
  {
    MR_Word hlds__make_hlds__add_foreign_proc__Lang_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FPEInfo_9, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_foreign_proc__PrednameModesPF_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FPEInfo_9, (MR_Integer) 1)));
    MR_String hlds__make_hlds__add_foreign_proc__ExportedName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FPEInfo_9, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_foreign_proc__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__PrednameModesPF_14, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_foreign_proc__Modes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__PrednameModesPF_14, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_foreign_proc__PredOrFunc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__PrednameModesPF_14, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_foreign_proc__PredTable_19;
    MR_Integer hlds__make_hlds__add_foreign_proc__Arity_20;
    MR_Word hlds__make_hlds__add_foreign_proc__PredIds_21;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_foreign_proc__PredTable_19);
    mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_foreign_proc__Modes_17, &hlds__make_hlds__add_foreign_proc__Arity_20);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_foreign_proc__PredTable_19, (MR_Integer) 1, hlds__make_hlds__add_foreign_proc__PredOrFunc_18, hlds__make_hlds__add_foreign_proc__Name_16, hlds__make_hlds__add_foreign_proc__Arity_20, &hlds__make_hlds__add_foreign_proc__PredIds_21);
    if ((hlds__make_hlds__add_foreign_proc__PredIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      if ((hlds__make_hlds__add_foreign_proc__MaybeAttrs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__make_hlds__make_hlds_error__report_undefined_pred_or_func_error_6_p_0(hlds__make_hlds__add_foreign_proc__Name_16, hlds__make_hlds__add_foreign_proc__Arity_20, hlds__make_hlds__add_foreign_proc__Context_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[6]), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_39);
      }
      else
      {
        MR_Word hlds__make_hlds__add_foreign_proc__CompilerAttrs_22 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_foreign_proc__MaybeAttrs_8), (MR_Integer) 1);
        MR_Word hlds__make_hlds__add_foreign_proc__AllowExport_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__CompilerAttrs_22, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_foreign_proc___IsMutable_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__CompilerAttrs_22, (MR_Integer) 1)));

        switch (hlds__make_hlds__add_foreign_proc__AllowExport_23) {
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
        *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_39 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_38;
      }
      *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_36;
    }
    else
    {
      MR_Word hlds__make_hlds__add_foreign_proc__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__PredIds_21, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_foreign_proc__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__PredIds_21, (MR_Integer) 0)));

      if ((hlds__make_hlds__add_foreign_proc__Var_106 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_2_13_p_0(hlds__make_hlds__add_foreign_proc__Arity_20, hlds__make_hlds__add_foreign_proc__PredTable_19, hlds__make_hlds__add_foreign_proc__MaybeAttrs_8, hlds__make_hlds__add_foreign_proc__Lang_13, hlds__make_hlds__add_foreign_proc__Name_16, hlds__make_hlds__add_foreign_proc__Var_107, hlds__make_hlds__add_foreign_proc__Modes_17, hlds__make_hlds__add_foreign_proc__ExportedName_15, hlds__make_hlds__add_foreign_proc__Context_10, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_37, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_39);
      else
      {
        MR_Word hlds__make_hlds__add_foreign_proc__StartPieces_29;
        MR_Word hlds__make_hlds__add_foreign_proc__PredIdPiecesList_30;
        MR_Word hlds__make_hlds__add_foreign_proc__PredIdPieces_31;
        MR_Word hlds__make_hlds__add_foreign_proc__MainPieces_32;
        MR_Word hlds__make_hlds__add_foreign_proc__Msg_34;
        MR_Word hlds__make_hlds__add_foreign_proc__Spec_35;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_44;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_45;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_64;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_76;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_77;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_84;

        {
          hlds__make_hlds__add_foreign_proc__Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__Var_45, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredOrFunc_18));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_44, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_45));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[16])));
        }
        {
          hlds__make_hlds__add_foreign_proc__StartPieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__StartPieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[46])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__StartPieces_29, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_44));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_64, 0) = ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_64, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_64, 3) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_36));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_64, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        hlds__make_hlds__add_foreign_proc__PredIdPiecesList_30 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__make_hlds__add_foreign_proc_scalar_common_1[0], hlds__make_hlds__add_foreign_proc__Var_64, hlds__make_hlds__add_foreign_proc__PredIds_21);
        hlds__make_hlds__add_foreign_proc__PredIdPieces_31 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_foreign_proc__PredIdPiecesList_30, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[48]));
        hlds__make_hlds__add_foreign_proc__MainPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_foreign_proc__StartPieces_29, hlds__make_hlds__add_foreign_proc__PredIdPieces_31);
        {
          hlds__make_hlds__add_foreign_proc__Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_77, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__MainPieces_32));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_76, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_77));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[50])));
        }
        {
          hlds__make_hlds__add_foreign_proc__Msg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_34, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Context_10));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_34, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_76));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_84, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Msg_34));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_foreign_proc__Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_35, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_84));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_39 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Spec_35));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_38));
        }
        *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_36;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_2_13_p_0(
  MR_Integer hlds__make_hlds__add_foreign_proc__Arity_14,
  MR_Word hlds__make_hlds__add_foreign_proc__PredTable_15,
  MR_Word hlds__make_hlds__add_foreign_proc__MaybeAttrs_16,
  MR_Word hlds__make_hlds__add_foreign_proc__Lang_17,
  MR_Word hlds__make_hlds__add_foreign_proc__Name_18,
  MR_Word hlds__make_hlds__add_foreign_proc__PredId_19,
  MR_Word hlds__make_hlds__add_foreign_proc__Modes_20,
  MR_String hlds__make_hlds__add_foreign_proc__ExportedName_21,
  MR_Word hlds__make_hlds__add_foreign_proc__Context_22,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_45,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_46,
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_47,
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_48)
{
  {
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;
    MR_Word hlds__make_hlds__add_foreign_proc__TypeCtorInfo_95_95;
    MR_Word hlds__make_hlds__add_foreign_proc__Preds_25;
    MR_Word hlds__make_hlds__add_foreign_proc__PredInfo_26;
    MR_Word hlds__make_hlds__add_foreign_proc__Procs_27;
    MR_Word hlds__make_hlds__add_foreign_proc__ExistingProcs_28;
    MR_Box hlds__make_hlds__add_foreign_proc__conv0_PredInfo_26;
    MR_Integer hlds__make_hlds__add_foreign_proc__ProcId_29;

    hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_foreign_proc__PredTable_15, &hlds__make_hlds__add_foreign_proc__Preds_25);
    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__make_hlds__add_foreign_proc__Preds_25, ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredId_19)), &hlds__make_hlds__add_foreign_proc__conv0_PredInfo_26);
    hlds__make_hlds__add_foreign_proc__PredInfo_26 = ((MR_Word) hlds__make_hlds__add_foreign_proc__conv0_PredInfo_26);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_foreign_proc__PredInfo_26, &hlds__make_hlds__add_foreign_proc__Procs_27);
    hlds__make_hlds__add_foreign_proc__TypeCtorInfo_95_95 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_foreign_proc__TypeCtorInfo_95_95, hlds__make_hlds__add_foreign_proc__Procs_27, &hlds__make_hlds__add_foreign_proc__ExistingProcs_28);
    hlds__make_hlds__add_foreign_proc__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_foreign_proc__ExistingProcs_28, hlds__make_hlds__add_foreign_proc__Modes_20, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__add_foreign_proc__ProcId_29);
    if (hlds__make_hlds__add_foreign_proc__succeeded)
    {
      MR_Word hlds__make_hlds__add_foreign_proc__ProcInfo0_30;
      MR_Word hlds__make_hlds__add_foreign_proc__MaybeDetism_31;
      MR_Box hlds__make_hlds__add_foreign_proc__conv1_ProcInfo0_30;
      MR_Word hlds__make_hlds__add_foreign_proc__Detism_32;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__make_hlds__add_foreign_proc__TypeCtorInfo_95_95, hlds__make_hlds__add_foreign_proc__Procs_27, hlds__make_hlds__add_foreign_proc__ProcId_29, &hlds__make_hlds__add_foreign_proc__conv1_ProcInfo0_30);
      hlds__make_hlds__add_foreign_proc__ProcInfo0_30 = ((MR_Word) hlds__make_hlds__add_foreign_proc__conv1_ProcInfo0_30);
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(hlds__make_hlds__add_foreign_proc__ProcInfo0_30, &hlds__make_hlds__add_foreign_proc__MaybeDetism_31);
      hlds__make_hlds__add_foreign_proc__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_foreign_proc__MaybeDetism_31)) == (MR_mktag((MR_Integer) 1)));
      if (hlds__make_hlds__add_foreign_proc__succeeded)
      {
        hlds__make_hlds__add_foreign_proc__Detism_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__MaybeDetism_31, (MR_Integer) 0)));
        switch (hlds__make_hlds__add_foreign_proc__Detism_32) {
          default:
            hlds__make_hlds__add_foreign_proc__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            hlds__make_hlds__add_foreign_proc__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            hlds__make_hlds__add_foreign_proc__succeeded = MR_TRUE;
            break;
        }
      }
      if (hlds__make_hlds__add_foreign_proc__succeeded)
      {
        MR_Word hlds__make_hlds__add_foreign_proc__Pieces_33;
        MR_Word hlds__make_hlds__add_foreign_proc__Msg_34;
        MR_Word hlds__make_hlds__add_foreign_proc__Spec_35;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_51;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_54;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_57;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_60;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_63;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_64;
        MR_String hlds__make_hlds__add_foreign_proc__Var_65;
        MR_String hlds__make_hlds__add_foreign_proc__Var_66;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_71;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_72;
        MR_Word hlds__make_hlds__add_foreign_proc__Var_76;

        hlds__make_hlds__add_foreign_proc__Var_66 = parse_tree__prog_out__determinism_to_string_1_f_0(hlds__make_hlds__add_foreign_proc__Detism_32);
        hlds__make_hlds__add_foreign_proc__Var_65 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_foreign_proc__Var_66, (MR_String) ".");
        {
          hlds__make_hlds__add_foreign_proc__Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_foreign_proc__Var_64, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_65));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_63, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_64));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[23])));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[45])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_60, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_63));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[44])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_57, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_60));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[43])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_54, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_57));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[42])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_51, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_54));
        }
        {
          hlds__make_hlds__add_foreign_proc__Pieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[41])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces_33, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_51));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Var_72, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Pieces_33));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_71, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_72));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_foreign_proc__Msg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_34, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Context_22));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_34, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_71));
        }
        {
          hlds__make_hlds__add_foreign_proc__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_76, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Msg_34));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_foreign_proc__Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_35, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Var_76));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_48 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Spec_35));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_47));
        }
        *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_46 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_45;
      }
      else
      {
        MR_Word hlds__make_hlds__add_foreign_proc__Globals_36;
        MR_Word hlds__make_hlds__add_foreign_proc__ForeignLanguages_37;
        MR_Word hlds__make_hlds__add_foreign_proc__ProcInfo_41;
        MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_79_79;

        hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__add_foreign_proc__Globals_36);
        libs__globals__get_backend_foreign_languages_2_p_0(hlds__make_hlds__add_foreign_proc__Globals_36, &hlds__make_hlds__add_foreign_proc__ForeignLanguages_37);
        hlds__make_hlds__add_foreign_proc__succeeded = mercury__list__member_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (hlds__make_hlds__add_foreign_proc__Lang_17)), hlds__make_hlds__add_foreign_proc__ForeignLanguages_37);
        if (hlds__make_hlds__add_foreign_proc__succeeded)
        {
          MR_Word hlds__make_hlds__add_foreign_proc__PragmaExportedProcs0_38;
          MR_Word hlds__make_hlds__add_foreign_proc__NewExportedProc_39;
          MR_Word hlds__make_hlds__add_foreign_proc__PragmaExportedProcs_40;

          hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__add_foreign_proc__PragmaExportedProcs0_38);
          {
            hlds__make_hlds__add_foreign_proc__NewExportedProc_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__NewExportedProc_39, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Lang_17));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__NewExportedProc_39, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredId_19));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__NewExportedProc_39, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ProcId_29));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__NewExportedProc_39, 3) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ExportedName_21));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__NewExportedProc_39, 4) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Context_22));
          }
          hlds__make_hlds__add_foreign_proc__PragmaExportedProcs_40 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, hlds__make_hlds__add_foreign_proc__PragmaExportedProcs0_38, ((MR_Box) (hlds__make_hlds__add_foreign_proc__NewExportedProc_39)));
          hlds__hlds_module__module_info_set_pragma_exported_procs_3_p_0(hlds__make_hlds__add_foreign_proc__PragmaExportedProcs_40, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_79_79);
        }
        else
          hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_79_79 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_45;
        hlds__hlds_pred__proc_info_set_has_any_foreign_exports_3_p_0((MR_Integer) 1, hlds__make_hlds__add_foreign_proc__ProcInfo0_30, &hlds__make_hlds__add_foreign_proc__ProcInfo_41);
        hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(hlds__make_hlds__add_foreign_proc__PredId_19, hlds__make_hlds__add_foreign_proc__ProcId_29, hlds__make_hlds__add_foreign_proc__PredInfo_26, hlds__make_hlds__add_foreign_proc__ProcInfo_41, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_79_79, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_46);
        *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_48 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_47;
      }
    }
    else
    {
      if ((hlds__make_hlds__add_foreign_proc__MaybeAttrs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__make_hlds__make_hlds_error__report_undefined_mode_error_6_p_0(hlds__make_hlds__add_foreign_proc__Name_18, hlds__make_hlds__add_foreign_proc__Arity_14, hlds__make_hlds__add_foreign_proc__Context_22, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[6]), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_47, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_48);
      }
      else
      {
        MR_Word hlds__make_hlds__add_foreign_proc__CompilerAttrs_42 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_foreign_proc__MaybeAttrs_16), (MR_Integer) 1);
        MR_Word hlds__make_hlds__add_foreign_proc__AllowExport_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__CompilerAttrs_42, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_foreign_proc___IsMutable_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__CompilerAttrs_42, (MR_Integer) 1)));

        switch (hlds__make_hlds__add_foreign_proc__AllowExport_43) {
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
        *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_48 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_47;
      }
      *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_46 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_45;
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0_10001(
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;

    hlds__make_hlds__add_foreign_proc__succeeded = hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0(((MR_Word) hlds__make_hlds__add_foreign_proc__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_foreign_proc__wrapper_arg_2));
    return hlds__make_hlds__add_foreign_proc__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0_10001(
  MR_Box * hlds__make_hlds__add_foreign_proc__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__add_foreign_proc__conv0_HeadVar__1_1;

    hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0(&hlds__make_hlds__add_foreign_proc__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_foreign_proc__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_foreign_proc__wrapper_arg_3));
    *hlds__make_hlds__add_foreign_proc__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_foreign_proc__conv0_HeadVar__1_1));
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

/* :- end_module hlds.make_hlds.add_foreign_proc. */
